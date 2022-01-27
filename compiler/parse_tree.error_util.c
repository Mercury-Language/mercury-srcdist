/*
** Automatically generated from `error_util.m'
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 101 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 104 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 107 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 110 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 113 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 116 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 119 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 122 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 125 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 128 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 131 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 134 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 137 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 140 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 143 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 146 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 149 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 152 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 155 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 158 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 161 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 164 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 167 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 170 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 173 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 176 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 179 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 182 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 185 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 188 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 191 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 194 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 197 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 200 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 203 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 206 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2];

#line 209 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 212 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 215 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 218 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 221 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 224 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 227 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 230 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 233 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 236 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 239 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 242 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 245 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 248 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 251 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 254 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 257 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 260 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 263 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 266 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 269 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 272 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 275 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 278 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 281 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 284 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_9[1];

#line 287 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 290 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 293 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 296 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 299 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_13[1];

#line 302 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 305 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 308 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 311 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 314 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17;

#line 317 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_18;

#line 320 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_19;

#line 323 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[18];

#line 326 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 329 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 332 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 335 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[20];

#line 338 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[20];

#line 341 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 344 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 347 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 350 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 353 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 356 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 359 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 362 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 365 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 368 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 371 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 374 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 377 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 380 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 383 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 386 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 389 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 392 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 395 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 398 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 401 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 404 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 407 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 410 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 413 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 416 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 419 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 422 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 425 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 428 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 431 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 434 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1];

#line 437 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 440 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 443 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 446 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 449 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 452 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 455 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 458 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 461 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 464 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 467 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 470 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 473 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 476 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 479 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 482 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 485 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 488 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 491 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 494 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 497 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 500 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 503 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1];

#line 506 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 509 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1];

#line 512 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 515 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 518 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1];

#line 521 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19;

#line 524 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20;

#line 527 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1];

#line 530 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_21;

#line 533 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 536 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 539 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 542 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[17];

#line 545 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 548 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[22];

#line 551 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[22];

#line 554 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 557 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 560 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 563 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 566 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 569 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 572 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 575 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 578 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 581 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 584 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 587 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 590 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 593 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 596 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 599 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 602 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 605 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 608 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 611 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 614 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 617 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 620 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 623 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 626 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 629 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 632 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 635 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 638 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 641 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 644 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 647 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 650 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 653 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 656 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 659 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 662 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 665 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 668 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 671 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 674 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 677 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 680 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0;

#line 683 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1;

#line 686 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2];

#line 689 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2];

#line 692 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2];

#line 695 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 698 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 701 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 704 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 707 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 710 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 713 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 716 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 719 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 722 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 725 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 728 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 731 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 734 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 737 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 740 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 743 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 746 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 749 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 751 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 754 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 757 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 759 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 761 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 764 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 767 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 769 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 772 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 775 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 777 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 779 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 782 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 785 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 787 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 790 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 793 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 795 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 797 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 800 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 803 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 805 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 808 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 811 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 813 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 815 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 818 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 821 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 823 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 826 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 829 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 831 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 833 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 836 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 839 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 841 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 844 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 847 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 849 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 851 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 854 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 857 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 859 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 862 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 865 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 867 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 869 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 872 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 875 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 877 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 880 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 883 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 885 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 887 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 890 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 893 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 895 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 898 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 901 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 903 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 905 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 908 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 911 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 913 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 916 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 919 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 921 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 923 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 926 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 929 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 931 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 934 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 937 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 939 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 941 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 944 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 947 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 949 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 952 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 955 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 957 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 959 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 962 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 965 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 967 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 970 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 973 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 975 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 977 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 980 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 983 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 985 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 988 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 991 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 993 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 995 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 998 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 1001 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1003 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1006 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 1009 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1011 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1013 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1016 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 1019 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1021 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1024 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 1027 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1029 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1031 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1034 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1037 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1039 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1042 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1045 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1047 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1049 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1052 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1055 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1057 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1060 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1063 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1065 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1067 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1070 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 1073 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1075 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1078 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 1081 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1083 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1085 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1088 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1091 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1093 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1096 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1099 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1101 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1103 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 686 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__686__1_1_p_0(
#line 686 "error_util.m"
  MR_Word parse_tree__error_util__LambdaHeadVar__1_21);

#line 1454 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1454 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1454 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1561 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1561 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1561 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1436 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1436 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1436 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 935 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 935 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 935 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 939 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 939 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 939 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1071 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 1071 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1071 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1711 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1711 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1711 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 943 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 943 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 943 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1801 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1801 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1801 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1801 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1801 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1801 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1801 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1776 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1776 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1776 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1776 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1776 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1728 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1728 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1728 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1728 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1728 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1728 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1696 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1696 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1696 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1696 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1686 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1686 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1686 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1686 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1673 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1673 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1673 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1673 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1673 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1668 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1668 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1668 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1668 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1663 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1663 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1658 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1658 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1617 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1617 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1572 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1572 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1566 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1566 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1460 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1460 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1423 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1423 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1423 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1423 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1386 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1386 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1294 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1294 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1294 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1283 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1283 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1256 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1256 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1256 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1256 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 1228 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1228 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1228 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2);

#line 1162 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1162 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__Components_14);

#line 1150 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1150 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 1133 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1133 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1133 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2);

#line 977 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 977 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 977 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 977 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 977 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10);

#line 945 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 945 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 945 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7);

#line 893 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 893 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 893 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 893 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 893 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 893 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 893 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 893 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 893 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);

#line 840 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 840 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 840 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 840 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 805 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(
#line 805 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 805 "error_util.m"
  MR_Word parse_tree__error_util__Component_6,
#line 805 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18,
#line 805 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_ComponentCord_19);

#line 797 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1(
#line 797 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 797 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 797 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 797 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 783 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0(
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__Msg0_5,
#line 783 "error_util.m"
  MR_Word * parse_tree__error_util__Msg_6);

#line 762 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1(
#line 762 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 762 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 762 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2);

#line 756 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0(
#line 756 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 756 "error_util.m"
  MR_Word parse_tree__error_util__Spec0_5,
#line 756 "error_util.m"
  MR_Word * parse_tree__error_util__Spec_6);

#line 648 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 648 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 648 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 648 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 634 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 634 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 573 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 573 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 573 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 573 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 573 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 890 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_3(
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9);

#line 754 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 754 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 754 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 754 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 754 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 753 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 753 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 753 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 753 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2);

#line 686 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 686 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 686 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 632 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 632 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 632 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 632 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 632 "error_util.m"
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



#line 1952 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1960 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1968 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1976 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1982 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1988 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1994 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 2001 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 2008 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2015 "parse_tree.error_util.c"
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

#line 2032 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 2040 "parse_tree.error_util.c"
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

#line 2057 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2065 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2071 "parse_tree.error_util.c"
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

#line 2086 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2091 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 2100 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2105 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 2110 "parse_tree.error_util.c"
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

#line 2127 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 2135 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2141 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 2147 "parse_tree.error_util.c"
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

#line 2162 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2170 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2178 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 2186 "parse_tree.error_util.c"
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

#line 2201 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2206 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 2211 "parse_tree.error_util.c"
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

#line 2225 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2231 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2237 "parse_tree.error_util.c"
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

#line 2254 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2259 "parse_tree.error_util.c"
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

#line 2274 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2281 "parse_tree.error_util.c"
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

#line 2300 "parse_tree.error_util.c"
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

#line 2315 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_verbose_always_or_once_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2321 "parse_tree.error_util.c"
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

#line 2336 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2342 "parse_tree.error_util.c"
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

#line 2357 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2362 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2370 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2375 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2383 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2392 "parse_tree.error_util.c"
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

#line 2407 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2412 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2417 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2422 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2428 "parse_tree.error_util.c"
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

#line 2452 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2461 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2470 "parse_tree.error_util.c"
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

#line 2487 "parse_tree.error_util.c"
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

#line 2502 "parse_tree.error_util.c"
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

#line 2517 "parse_tree.error_util.c"
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

#line 2532 "parse_tree.error_util.c"
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

#line 2547 "parse_tree.error_util.c"
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

#line 2562 "parse_tree.error_util.c"
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

#line 2577 "parse_tree.error_util.c"
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

#line 2592 "parse_tree.error_util.c"
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

#line 2607 "parse_tree.error_util.c"
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

#line 2622 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_9[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2627 "parse_tree.error_util.c"
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

#line 2642 "parse_tree.error_util.c"
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

#line 2657 "parse_tree.error_util.c"
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

#line 2672 "parse_tree.error_util.c"
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

#line 2687 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2692 "parse_tree.error_util.c"
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

#line 2707 "parse_tree.error_util.c"
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

#line 2722 "parse_tree.error_util.c"
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

#line 2737 "parse_tree.error_util.c"
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

#line 2752 "parse_tree.error_util.c"
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

#line 2767 "parse_tree.error_util.c"
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

#line 2782 "parse_tree.error_util.c"
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

#line 2797 "parse_tree.error_util.c"
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

#line 2819 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9
};

#line 2824 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13
};

#line 2829 "parse_tree.error_util.c"
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

#line 2848 "parse_tree.error_util.c"
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

#line 2872 "parse_tree.error_util.c"
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

#line 2896 "parse_tree.error_util.c"
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

#line 2913 "parse_tree.error_util.c"
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

#line 2928 "parse_tree.error_util.c"
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

#line 2943 "parse_tree.error_util.c"
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

#line 2958 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2966 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2974 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2982 "parse_tree.error_util.c"
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

#line 2997 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 3004 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 3009 "parse_tree.error_util.c"
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

#line 3023 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 3031 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3039 "parse_tree.error_util.c"
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

#line 3056 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 3064 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 3071 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 3078 "parse_tree.error_util.c"
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

#line 3093 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 3098 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 3107 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 3112 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 3117 "parse_tree.error_util.c"
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

#line 3134 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3142 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3151 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3159 "parse_tree.error_util.c"
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

#line 3176 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3181 "parse_tree.error_util.c"
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

#line 3196 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3201 "parse_tree.error_util.c"
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

#line 3216 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3221 "parse_tree.error_util.c"
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

#line 3236 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3241 "parse_tree.error_util.c"
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

#line 3256 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3261 "parse_tree.error_util.c"
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

#line 3276 "parse_tree.error_util.c"
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

#line 3291 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3296 "parse_tree.error_util.c"
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

#line 3311 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3316 "parse_tree.error_util.c"
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

#line 3331 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3336 "parse_tree.error_util.c"
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

#line 3351 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3356 "parse_tree.error_util.c"
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

#line 3371 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3376 "parse_tree.error_util.c"
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

#line 3391 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3396 "parse_tree.error_util.c"
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

#line 3411 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 3416 "parse_tree.error_util.c"
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

#line 3431 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3436 "parse_tree.error_util.c"
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

#line 3451 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3456 "parse_tree.error_util.c"
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

#line 3471 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3476 "parse_tree.error_util.c"
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

#line 3491 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3496 "parse_tree.error_util.c"
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

#line 3511 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3516 "parse_tree.error_util.c"
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

#line 3531 "parse_tree.error_util.c"
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

#line 3546 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3551 "parse_tree.error_util.c"
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

#line 3566 "parse_tree.error_util.c"
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

#line 3581 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3586 "parse_tree.error_util.c"
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

#line 3601 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20
};

#line 3608 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3613 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3618 "parse_tree.error_util.c"
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

#line 3639 "parse_tree.error_util.c"
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

#line 3663 "parse_tree.error_util.c"
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

#line 3689 "parse_tree.error_util.c"
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

#line 3715 "parse_tree.error_util.c"
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

#line 3732 "parse_tree.error_util.c"
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

#line 3749 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3755 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3761 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3767 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3773 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3779 "parse_tree.error_util.c"
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

#line 3796 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3802 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3808 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3814 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3820 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3826 "parse_tree.error_util.c"
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

#line 3843 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3849 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3855 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3861 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3867 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3873 "parse_tree.error_util.c"
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

#line 3890 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3896 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3902 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3908 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3914 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3920 "parse_tree.error_util.c"
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

#line 3937 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3943 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3949 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3955 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3961 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3967 "parse_tree.error_util.c"
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

#line 3984 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3991 "parse_tree.error_util.c"
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

#line 4006 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 4011 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 4020 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 4025 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 4030 "parse_tree.error_util.c"
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

#line 4047 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4052 "parse_tree.error_util.c"
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

#line 4067 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4072 "parse_tree.error_util.c"
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

#line 4087 "parse_tree.error_util.c"
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

#line 4102 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 4107 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 4112 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 4117 "parse_tree.error_util.c"
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

#line 4136 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 4143 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 4150 "parse_tree.error_util.c"
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

#line 4167 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0 = {
  (MR_String) "verbose_always",
  (MR_Integer) 0
};

#line 4173 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1 = {
  (MR_String) "verbose_once",
  (MR_Integer) 1
};

#line 4179 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4185 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4191 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4197 "parse_tree.error_util.c"
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

#line 4214 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4219 "parse_tree.error_util.c"
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

#line 4234 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4239 "parse_tree.error_util.c"
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

#line 4254 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4259 "parse_tree.error_util.c"
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

#line 4274 "parse_tree.error_util.c"
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

#line 4289 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 4294 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 4299 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 4304 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4309 "parse_tree.error_util.c"
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

#line 4333 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4341 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 4349 "parse_tree.error_util.c"
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

#line 4366 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4371 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4380 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4391 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4399 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4402 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4404 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4406 "parse_tree.error_util.c"
{
#line 4408 "parse_tree.error_util.c"
  {
#line 4410 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4413 "parse_tree.error_util.c"
    {
#line 4415 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4418 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4420 "parse_tree.error_util.c"
  }
#line 4422 "parse_tree.error_util.c"
}

#line 4425 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4428 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4430 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4432 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4434 "parse_tree.error_util.c"
{
#line 4436 "parse_tree.error_util.c"
  {
#line 4438 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4441 "parse_tree.error_util.c"
    {
#line 4443 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4446 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4448 "parse_tree.error_util.c"
  }
#line 4450 "parse_tree.error_util.c"
}

#line 4453 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 4456 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4458 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4460 "parse_tree.error_util.c"
{
#line 4462 "parse_tree.error_util.c"
  {
#line 4464 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4467 "parse_tree.error_util.c"
    {
#line 4469 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____already_printed_verbose_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4472 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4474 "parse_tree.error_util.c"
  }
#line 4476 "parse_tree.error_util.c"
}

#line 4479 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 4482 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4484 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4486 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4488 "parse_tree.error_util.c"
{
#line 4490 "parse_tree.error_util.c"
  {
#line 4492 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4495 "parse_tree.error_util.c"
    {
#line 4497 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____already_printed_verbose_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4500 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4502 "parse_tree.error_util.c"
  }
#line 4504 "parse_tree.error_util.c"
}

#line 4507 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4510 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4512 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4514 "parse_tree.error_util.c"
{
#line 4516 "parse_tree.error_util.c"
  {
#line 4518 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4521 "parse_tree.error_util.c"
    {
#line 4523 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4526 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4528 "parse_tree.error_util.c"
  }
#line 4530 "parse_tree.error_util.c"
}

#line 4533 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4536 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4538 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4540 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4542 "parse_tree.error_util.c"
{
#line 4544 "parse_tree.error_util.c"
  {
#line 4546 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4549 "parse_tree.error_util.c"
    {
#line 4551 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4554 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4556 "parse_tree.error_util.c"
  }
#line 4558 "parse_tree.error_util.c"
}

#line 4561 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4564 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4566 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4568 "parse_tree.error_util.c"
{
#line 4570 "parse_tree.error_util.c"
  {
#line 4572 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4575 "parse_tree.error_util.c"
    {
#line 4577 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4580 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4582 "parse_tree.error_util.c"
  }
#line 4584 "parse_tree.error_util.c"
}

#line 4587 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4590 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4592 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4594 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4596 "parse_tree.error_util.c"
{
#line 4598 "parse_tree.error_util.c"
  {
#line 4600 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4603 "parse_tree.error_util.c"
    {
#line 4605 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4608 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4610 "parse_tree.error_util.c"
  }
#line 4612 "parse_tree.error_util.c"
}

#line 4615 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4618 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4620 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4622 "parse_tree.error_util.c"
{
#line 4624 "parse_tree.error_util.c"
  {
#line 4626 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4629 "parse_tree.error_util.c"
    {
#line 4631 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4634 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4636 "parse_tree.error_util.c"
  }
#line 4638 "parse_tree.error_util.c"
}

#line 4641 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4644 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4646 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4648 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4650 "parse_tree.error_util.c"
{
#line 4652 "parse_tree.error_util.c"
  {
#line 4654 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4657 "parse_tree.error_util.c"
    {
#line 4659 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4662 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4664 "parse_tree.error_util.c"
  }
#line 4666 "parse_tree.error_util.c"
}

#line 4669 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4672 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4674 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4676 "parse_tree.error_util.c"
{
#line 4678 "parse_tree.error_util.c"
  {
#line 4680 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4683 "parse_tree.error_util.c"
    {
#line 4685 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4688 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4690 "parse_tree.error_util.c"
  }
#line 4692 "parse_tree.error_util.c"
}

#line 4695 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4698 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4700 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4702 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4704 "parse_tree.error_util.c"
{
#line 4706 "parse_tree.error_util.c"
  {
#line 4708 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4711 "parse_tree.error_util.c"
    {
#line 4713 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4716 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4718 "parse_tree.error_util.c"
  }
#line 4720 "parse_tree.error_util.c"
}

#line 4723 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4726 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4728 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4730 "parse_tree.error_util.c"
{
#line 4732 "parse_tree.error_util.c"
  {
#line 4734 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4737 "parse_tree.error_util.c"
    {
#line 4739 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4742 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4744 "parse_tree.error_util.c"
  }
#line 4746 "parse_tree.error_util.c"
}

#line 4749 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4752 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4754 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4756 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4758 "parse_tree.error_util.c"
{
#line 4760 "parse_tree.error_util.c"
  {
#line 4762 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4765 "parse_tree.error_util.c"
    {
#line 4767 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4770 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4772 "parse_tree.error_util.c"
  }
#line 4774 "parse_tree.error_util.c"
}

#line 4777 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4780 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4782 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4784 "parse_tree.error_util.c"
{
#line 4786 "parse_tree.error_util.c"
  {
#line 4788 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4791 "parse_tree.error_util.c"
    {
#line 4793 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4796 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4798 "parse_tree.error_util.c"
  }
#line 4800 "parse_tree.error_util.c"
}

#line 4803 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4806 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4808 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4810 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4812 "parse_tree.error_util.c"
{
#line 4814 "parse_tree.error_util.c"
  {
#line 4816 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4819 "parse_tree.error_util.c"
    {
#line 4821 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4824 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4826 "parse_tree.error_util.c"
  }
#line 4828 "parse_tree.error_util.c"
}

#line 4831 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4834 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4836 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4838 "parse_tree.error_util.c"
{
#line 4840 "parse_tree.error_util.c"
  {
#line 4842 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4845 "parse_tree.error_util.c"
    {
#line 4847 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4850 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4852 "parse_tree.error_util.c"
  }
#line 4854 "parse_tree.error_util.c"
}

#line 4857 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4860 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4862 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4864 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4866 "parse_tree.error_util.c"
{
#line 4868 "parse_tree.error_util.c"
  {
#line 4870 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4873 "parse_tree.error_util.c"
    {
#line 4875 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4878 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4880 "parse_tree.error_util.c"
  }
#line 4882 "parse_tree.error_util.c"
}

#line 4885 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4888 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4890 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4892 "parse_tree.error_util.c"
{
#line 4894 "parse_tree.error_util.c"
  {
#line 4896 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4899 "parse_tree.error_util.c"
    {
#line 4901 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4904 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4906 "parse_tree.error_util.c"
  }
#line 4908 "parse_tree.error_util.c"
}

#line 4911 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4914 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4916 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4918 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4920 "parse_tree.error_util.c"
{
#line 4922 "parse_tree.error_util.c"
  {
#line 4924 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4927 "parse_tree.error_util.c"
    {
#line 4929 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4932 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4934 "parse_tree.error_util.c"
  }
#line 4936 "parse_tree.error_util.c"
}

#line 4939 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4942 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4944 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4946 "parse_tree.error_util.c"
{
#line 4948 "parse_tree.error_util.c"
  {
#line 4950 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4953 "parse_tree.error_util.c"
    {
#line 4955 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4958 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4960 "parse_tree.error_util.c"
  }
#line 4962 "parse_tree.error_util.c"
}

#line 4965 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4968 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4970 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4972 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4974 "parse_tree.error_util.c"
{
#line 4976 "parse_tree.error_util.c"
  {
#line 4978 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4981 "parse_tree.error_util.c"
    {
#line 4983 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4986 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4988 "parse_tree.error_util.c"
  }
#line 4990 "parse_tree.error_util.c"
}

#line 4993 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4996 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4998 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5000 "parse_tree.error_util.c"
{
#line 5002 "parse_tree.error_util.c"
  {
#line 5004 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5007 "parse_tree.error_util.c"
    {
#line 5009 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5012 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5014 "parse_tree.error_util.c"
  }
#line 5016 "parse_tree.error_util.c"
}

#line 5019 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 5022 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5024 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5026 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5028 "parse_tree.error_util.c"
{
#line 5030 "parse_tree.error_util.c"
  {
#line 5032 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5035 "parse_tree.error_util.c"
    {
#line 5037 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5040 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5042 "parse_tree.error_util.c"
  }
#line 5044 "parse_tree.error_util.c"
}

#line 5047 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 5050 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5052 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5054 "parse_tree.error_util.c"
{
#line 5056 "parse_tree.error_util.c"
  {
#line 5058 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5061 "parse_tree.error_util.c"
    {
#line 5063 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5066 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5068 "parse_tree.error_util.c"
  }
#line 5070 "parse_tree.error_util.c"
}

#line 5073 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 5076 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5078 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5080 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5082 "parse_tree.error_util.c"
{
#line 5084 "parse_tree.error_util.c"
  {
#line 5086 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5089 "parse_tree.error_util.c"
    {
#line 5091 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5094 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5096 "parse_tree.error_util.c"
  }
#line 5098 "parse_tree.error_util.c"
}

#line 5101 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 5104 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5106 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5108 "parse_tree.error_util.c"
{
#line 5110 "parse_tree.error_util.c"
  {
#line 5112 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5115 "parse_tree.error_util.c"
    {
#line 5117 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5120 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5122 "parse_tree.error_util.c"
  }
#line 5124 "parse_tree.error_util.c"
}

#line 5127 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 5130 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5132 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5134 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5136 "parse_tree.error_util.c"
{
#line 5138 "parse_tree.error_util.c"
  {
#line 5140 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5143 "parse_tree.error_util.c"
    {
#line 5145 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5148 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5150 "parse_tree.error_util.c"
  }
#line 5152 "parse_tree.error_util.c"
}

#line 5155 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 5158 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5160 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5162 "parse_tree.error_util.c"
{
#line 5164 "parse_tree.error_util.c"
  {
#line 5166 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5169 "parse_tree.error_util.c"
    {
#line 5171 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5174 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5176 "parse_tree.error_util.c"
  }
#line 5178 "parse_tree.error_util.c"
}

#line 5181 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 5184 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5186 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5188 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5190 "parse_tree.error_util.c"
{
#line 5192 "parse_tree.error_util.c"
  {
#line 5194 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5197 "parse_tree.error_util.c"
    {
#line 5199 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5202 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5204 "parse_tree.error_util.c"
  }
#line 5206 "parse_tree.error_util.c"
}

#line 5209 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 5212 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5214 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5216 "parse_tree.error_util.c"
{
#line 5218 "parse_tree.error_util.c"
  {
#line 5220 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5223 "parse_tree.error_util.c"
    {
#line 5225 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5228 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5230 "parse_tree.error_util.c"
  }
#line 5232 "parse_tree.error_util.c"
}

#line 5235 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 5238 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5240 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5242 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5244 "parse_tree.error_util.c"
{
#line 5246 "parse_tree.error_util.c"
  {
#line 5248 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5251 "parse_tree.error_util.c"
    {
#line 5253 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5256 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5258 "parse_tree.error_util.c"
  }
#line 5260 "parse_tree.error_util.c"
}

#line 5263 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 5266 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5268 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5270 "parse_tree.error_util.c"
{
#line 5272 "parse_tree.error_util.c"
  {
#line 5274 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5277 "parse_tree.error_util.c"
    {
#line 5279 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5282 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5284 "parse_tree.error_util.c"
  }
#line 5286 "parse_tree.error_util.c"
}

#line 5289 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 5292 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5294 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5296 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5298 "parse_tree.error_util.c"
{
#line 5300 "parse_tree.error_util.c"
  {
#line 5302 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5305 "parse_tree.error_util.c"
    {
#line 5307 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5310 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5312 "parse_tree.error_util.c"
  }
#line 5314 "parse_tree.error_util.c"
}

#line 5317 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 5320 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5322 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5324 "parse_tree.error_util.c"
{
#line 5326 "parse_tree.error_util.c"
  {
#line 5328 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5331 "parse_tree.error_util.c"
    {
#line 5333 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5336 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5338 "parse_tree.error_util.c"
  }
#line 5340 "parse_tree.error_util.c"
}

#line 5343 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 5346 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5348 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5350 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5352 "parse_tree.error_util.c"
{
#line 5354 "parse_tree.error_util.c"
  {
#line 5356 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5359 "parse_tree.error_util.c"
    {
#line 5361 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5364 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5366 "parse_tree.error_util.c"
  }
#line 5368 "parse_tree.error_util.c"
}

#line 5371 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 5374 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5376 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5378 "parse_tree.error_util.c"
{
#line 5380 "parse_tree.error_util.c"
  {
#line 5382 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5385 "parse_tree.error_util.c"
    {
#line 5387 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____verbose_always_or_once_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5390 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5392 "parse_tree.error_util.c"
  }
#line 5394 "parse_tree.error_util.c"
}

#line 5397 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 5400 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5402 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5404 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5406 "parse_tree.error_util.c"
{
#line 5408 "parse_tree.error_util.c"
  {
#line 5410 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5413 "parse_tree.error_util.c"
    {
#line 5415 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____verbose_always_or_once_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5418 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5420 "parse_tree.error_util.c"
  }
#line 5422 "parse_tree.error_util.c"
}

#line 5425 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 5428 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5430 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5432 "parse_tree.error_util.c"
{
#line 5434 "parse_tree.error_util.c"
  {
#line 5436 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5439 "parse_tree.error_util.c"
    {
#line 5441 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5444 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5446 "parse_tree.error_util.c"
  }
#line 5448 "parse_tree.error_util.c"
}

#line 5451 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 5454 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5456 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5458 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5460 "parse_tree.error_util.c"
{
#line 5462 "parse_tree.error_util.c"
  {
#line 5464 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5467 "parse_tree.error_util.c"
    {
#line 5469 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5472 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5474 "parse_tree.error_util.c"
  }
#line 5476 "parse_tree.error_util.c"
}

#line 686 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__686__1_1_p_0(
#line 686 "error_util.m"
  MR_Word parse_tree__error_util__LambdaHeadVar__1_21)
#line 686 "error_util.m"
{
#line 686 "error_util.m"
  {
#line 686 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 686 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 686 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 686 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__LambdaHeadVar__1_21, (MR_Integer) 1)));
#line 686 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__LambdaHeadVar__1_21, (MR_Integer) 0)));
#line 686 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__LambdaHeadVar__1_21, (MR_Integer) 2)));

#line 709 "error_util.m"
#line 709 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__Phase_31)) {
#line 709 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 709 "error_util.m"
      case (MR_Integer) 0:
#line 709 "error_util.m"
#line 709 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__Phase_31)) {
#line 709 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 709 "error_util.m"
          case (MR_Integer) 0:
#line 709 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 1:
#line 710 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 2:
#line 711 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 3:
#line 712 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 4:
#line 713 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 5:
#line 714 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 6:
#line 715 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 7:
#line 716 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 8:
#line 717 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 9:
#line 719 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 10:
#line 720 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 11:
#line 721 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 12:
#line 723 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 13:
#line 724 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 14:
#line 725 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 15:
#line 726 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 16:
#line 727 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
          case (MR_Integer) 17:
#line 728 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "error_util.m"
            break;
#line 709 "error_util.m"
        }
#line 709 "error_util.m"
        break;
#line 709 "error_util.m"
      case (MR_Integer) 1:
#line 718 "error_util.m"
        {
#line 718 "error_util.m"
          MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 718 "error_util.m"
          {
#line 718 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 718 "error_util.m"
          }
#line 718 "error_util.m"
        }
#line 709 "error_util.m"
        break;
#line 709 "error_util.m"
      case (MR_Integer) 2:
#line 722 "error_util.m"
        {
#line 722 "error_util.m"
          MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 722 "error_util.m"
          {
#line 722 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 722 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 722 "error_util.m"
          }
#line 722 "error_util.m"
        }
#line 709 "error_util.m"
        break;
#line 709 "error_util.m"
    }
#line 688 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 688 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 688 "error_util.m"
      {
#line 688 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 688 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 688 "error_util.m"
      }
#line 686 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 686 "error_util.m"
  }
#line 686 "error_util.m"
}

#line 1454 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1454 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1454 "error_util.m"
{
#line 1454 "error_util.m"
  {
#line 1454 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1454 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1454 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1454 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1454 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5708 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1454 "error_util.m"
    else
#line 1454 "error_util.m"
#line 1454 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1454 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "error_util.m"
        case (MR_Integer) 0:
#line 1454 "error_util.m"
#line 1454 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1454 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "error_util.m"
            case (MR_Integer) 0:
#line 1454 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1454 "error_util.m"
              break;
#line 1454 "error_util.m"
            case (MR_Integer) 1:
#line 5732 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1454 "error_util.m"
              break;
#line 1454 "error_util.m"
            case (MR_Integer) 2:
#line 5738 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1454 "error_util.m"
              break;
#line 1454 "error_util.m"
            case (MR_Integer) 3:
#line 5744 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1454 "error_util.m"
              break;
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
        case (MR_Integer) 1:
#line 1454 "error_util.m"
          {
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1454 "error_util.m"
#line 1454 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1454 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "error_util.m"
              case (MR_Integer) 0:
#line 5766 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 1:
#line 1454 "error_util.m"
                {
#line 1454 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1454 "error_util.m"
                  {
#line 1454 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
                  }
#line 1454 "error_util.m"
                }
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 2:
#line 5788 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 3:
#line 5794 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
            }
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
        case (MR_Integer) 2:
#line 1454 "error_util.m"
          {
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1454 "error_util.m"
#line 1454 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1454 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "error_util.m"
              case (MR_Integer) 0:
#line 5818 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 1:
#line 5824 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 2:
#line 1454 "error_util.m"
                {
#line 1454 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1454 "error_util.m"
                  {
#line 1454 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
                  }
#line 1454 "error_util.m"
                }
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 3:
#line 5846 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
            }
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
        case (MR_Integer) 3:
#line 1454 "error_util.m"
          {
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1454 "error_util.m"
#line 1454 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1454 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "error_util.m"
              case (MR_Integer) 0:
#line 5870 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 1:
#line 5876 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 2:
#line 5882 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
              case (MR_Integer) 3:
#line 1454 "error_util.m"
                {
#line 1454 "error_util.m"
                  MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1454 "error_util.m"
                  {
#line 1454 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
                  }
#line 1454 "error_util.m"
                }
#line 1454 "error_util.m"
                break;
#line 1454 "error_util.m"
            }
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
      }
#line 1454 "error_util.m"
  }
#line 1454 "error_util.m"
}

#line 1454 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1454 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1454 "error_util.m"
{
#line 1454 "error_util.m"
  {
#line 1454 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1454 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1454 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1454 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1454 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1454 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1454 "error_util.m"
    else
#line 1454 "error_util.m"
#line 1454 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1454 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "error_util.m"
        case (MR_Integer) 0:
#line 1454 "error_util.m"
          {
#line 1454 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1454 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1454 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
        case (MR_Integer) 1:
#line 1454 "error_util.m"
          {
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1454 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1454 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1454 "error_util.m"
              {
#line 1454 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5978 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1454 "error_util.m"
              }
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
        case (MR_Integer) 2:
#line 1454 "error_util.m"
          {
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1454 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1454 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1454 "error_util.m"
              {
#line 1454 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6003 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1454 "error_util.m"
              }
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
        case (MR_Integer) 3:
#line 1454 "error_util.m"
          {
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1454 "error_util.m"
            MR_String parse_tree__error_util__V_8_8;

#line 1454 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1454 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1454 "error_util.m"
              {
#line 1454 "error_util.m"
                parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6028 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1454 "error_util.m"
              }
#line 1454 "error_util.m"
          }
#line 1454 "error_util.m"
          break;
#line 1454 "error_util.m"
      }
#line 1454 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1454 "error_util.m"
  }
#line 1454 "error_util.m"
}

#line 167 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0(
#line 167 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 167 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 167 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 167 "error_util.m"
{
#line 167 "error_util.m"
  {
#line 167 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 167 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 167 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 167 "error_util.m"
    {
#line 167 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 167 "error_util.m"
  }
#line 167 "error_util.m"
}

#line 167 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0(
#line 167 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 167 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 167 "error_util.m"
{
#line 6084 "parse_tree.error_util.c"
  {
#line 6086 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6089 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6091 "parse_tree.error_util.c"
  }
#line 167 "error_util.m"
}

#line 1561 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1561 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1561 "error_util.m"
{
#line 1561 "error_util.m"
  {
#line 1561 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1561 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1561 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1561 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1561 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6120 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1561 "error_util.m"
    else
#line 1561 "error_util.m"
#line 1561 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1561 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1561 "error_util.m"
        case (MR_Integer) 0:
#line 1561 "error_util.m"
#line 1561 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1561 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1561 "error_util.m"
            case (MR_Integer) 0:
#line 1561 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1561 "error_util.m"
              break;
#line 1561 "error_util.m"
            case (MR_Integer) 1:
#line 6144 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1561 "error_util.m"
              break;
#line 1561 "error_util.m"
            case (MR_Integer) 2:
#line 6150 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1561 "error_util.m"
              break;
#line 1561 "error_util.m"
          }
#line 1561 "error_util.m"
          break;
#line 1561 "error_util.m"
        case (MR_Integer) 1:
#line 1561 "error_util.m"
          {
#line 1561 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1561 "error_util.m"
#line 1561 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1561 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1561 "error_util.m"
              case (MR_Integer) 0:
#line 6172 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1561 "error_util.m"
                break;
#line 1561 "error_util.m"
              case (MR_Integer) 1:
#line 1561 "error_util.m"
                {
#line 1561 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1561 "error_util.m"
                  {
#line 1561 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
                  }
#line 1561 "error_util.m"
                }
#line 1561 "error_util.m"
                break;
#line 1561 "error_util.m"
              case (MR_Integer) 2:
#line 6194 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1561 "error_util.m"
                break;
#line 1561 "error_util.m"
            }
#line 1561 "error_util.m"
          }
#line 1561 "error_util.m"
          break;
#line 1561 "error_util.m"
        case (MR_Integer) 2:
#line 1561 "error_util.m"
          {
#line 1561 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1561 "error_util.m"
#line 1561 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1561 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1561 "error_util.m"
              case (MR_Integer) 0:
#line 6218 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1561 "error_util.m"
                break;
#line 1561 "error_util.m"
              case (MR_Integer) 1:
#line 6224 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1561 "error_util.m"
                break;
#line 1561 "error_util.m"
              case (MR_Integer) 2:
#line 1561 "error_util.m"
                {
#line 1561 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1561 "error_util.m"
                  {
#line 1561 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
                  }
#line 1561 "error_util.m"
                }
#line 1561 "error_util.m"
                break;
#line 1561 "error_util.m"
            }
#line 1561 "error_util.m"
          }
#line 1561 "error_util.m"
          break;
#line 1561 "error_util.m"
      }
#line 1561 "error_util.m"
  }
#line 1561 "error_util.m"
}

#line 1561 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1561 "error_util.m"
{
#line 1561 "error_util.m"
  {
#line 1561 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1561 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1561 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1561 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1561 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1561 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1561 "error_util.m"
    else
#line 1561 "error_util.m"
#line 1561 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1561 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1561 "error_util.m"
        case (MR_Integer) 0:
#line 1561 "error_util.m"
          {
#line 1561 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1561 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1561 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1561 "error_util.m"
          }
#line 1561 "error_util.m"
          break;
#line 1561 "error_util.m"
        case (MR_Integer) 1:
#line 1561 "error_util.m"
          {
#line 1561 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1561 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1561 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1561 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1561 "error_util.m"
              {
#line 1561 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6320 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1561 "error_util.m"
              }
#line 1561 "error_util.m"
          }
#line 1561 "error_util.m"
          break;
#line 1561 "error_util.m"
        case (MR_Integer) 2:
#line 1561 "error_util.m"
          {
#line 1561 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1561 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1561 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1561 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1561 "error_util.m"
              {
#line 1561 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6345 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1561 "error_util.m"
              }
#line 1561 "error_util.m"
          }
#line 1561 "error_util.m"
          break;
#line 1561 "error_util.m"
      }
#line 1561 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1561 "error_util.m"
  }
#line 1561 "error_util.m"
}

#line 1436 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1436 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1436 "error_util.m"
{
#line 1436 "error_util.m"
  {
#line 1436 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1436 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1436 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1436 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1436 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6386 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1436 "error_util.m"
    else
#line 1436 "error_util.m"
      {
#line 1436 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1436 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1436 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1436 "error_util.m"
        {
#line 1436 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 6412 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1436 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1436 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1436 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1436 "error_util.m"
        else
#line 1436 "error_util.m"
          {
#line 1436 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1436 "error_util.m"
            {
#line 1436 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 6432 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1436 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1436 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1436 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1436 "error_util.m"
            else
#line 1436 "error_util.m"
              {
#line 1436 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
              }
#line 1436 "error_util.m"
          }
#line 1436 "error_util.m"
      }
#line 1436 "error_util.m"
  }
#line 1436 "error_util.m"
}

#line 1436 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1436 "error_util.m"
{
#line 1436 "error_util.m"
  {
#line 1436 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1436 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1436 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1436 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1436 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1436 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1436 "error_util.m"
    else
#line 1436 "error_util.m"
      {
#line 1436 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1436 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1436 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 6497 "parse_tree.error_util.c"
        {
#line 6499 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1436 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1436 "error_util.m"
          {
#line 6506 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1436 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6510 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1436 "error_util.m"
          }
#line 1436 "error_util.m"
      }
#line 1436 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1436 "error_util.m"
  }
#line 1436 "error_util.m"
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
#line 6562 "parse_tree.error_util.c"
  {
#line 6564 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6567 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6569 "parse_tree.error_util.c"
  }
#line 104 "error_util.m"
}

#line 151 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0(
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
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 151 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 151 "error_util.m"
    {
#line 151 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 151 "error_util.m"
  }
#line 151 "error_util.m"
}

#line 151 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0(
#line 151 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 151 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 151 "error_util.m"
{
#line 6613 "parse_tree.error_util.c"
  {
#line 6615 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6618 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6620 "parse_tree.error_util.c"
  }
#line 151 "error_util.m"
}

#line 935 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
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
    }
#line 935 "error_util.m"
  }
#line 935 "error_util.m"
}

#line 935 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 935 "error_util.m"
{
#line 6664 "parse_tree.error_util.c"
  {
#line 6666 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6669 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6671 "parse_tree.error_util.c"
  }
#line 935 "error_util.m"
}

#line 939 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
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
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 939 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 939 "error_util.m"
    {
#line 939 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 939 "error_util.m"
  }
#line 939 "error_util.m"
}

#line 939 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 939 "error_util.m"
{
#line 6715 "parse_tree.error_util.c"
  {
#line 6717 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6720 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6722 "parse_tree.error_util.c"
  }
#line 939 "error_util.m"
}

#line 1071 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 1071 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1071 "error_util.m"
{
#line 1071 "error_util.m"
  {
#line 1071 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1071 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1071 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1071 "error_util.m"
    {
#line 1071 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 1071 "error_util.m"
  }
#line 1071 "error_util.m"
}

#line 1071 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 1071 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1071 "error_util.m"
{
#line 6766 "parse_tree.error_util.c"
  {
#line 6768 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6771 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6773 "parse_tree.error_util.c"
  }
#line 1071 "error_util.m"
}

#line 388 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 388 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 388 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 388 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 388 "error_util.m"
{
#line 388 "error_util.m"
  {
#line 388 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 388 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 388 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 388 "error_util.m"
    {
#line 388 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
    }
#line 388 "error_util.m"
  }
#line 388 "error_util.m"
}

#line 388 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 388 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 388 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 388 "error_util.m"
{
#line 388 "error_util.m"
  {
#line 388 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 388 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 388 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 388 "error_util.m"
    {
#line 388 "error_util.m"
      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 388 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 388 "error_util.m"
  }
#line 388 "error_util.m"
}

#line 289 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 289 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 289 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 289 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 289 "error_util.m"
{
#line 289 "error_util.m"
  {
#line 289 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 289 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_45 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 289 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_46 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 289 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_45 == parse_tree__error_util__CastY_46);
#line 289 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6862 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 289 "error_util.m"
    else
#line 289 "error_util.m"
      {
#line 289 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 289 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 289 "error_util.m"
        {
#line 289 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 289 "error_util.m"
        {
#line 289 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 289 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 289 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6887 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 289 "error_util.m"
        else
#line 289 "error_util.m"
          {
#line 289 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 289 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6897 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 289 "error_util.m"
            else
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 289 "error_util.m"
#line 289 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 289 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
                  case (MR_Integer) 0:
#line 289 "error_util.m"
#line 289 "error_util.m"
                    switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 289 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
                      case (MR_Integer) 0:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 1:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 2:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                    }
#line 289 "error_util.m"
                    break;
#line 289 "error_util.m"
                  case (MR_Integer) 1:
#line 289 "error_util.m"
                    {
#line 289 "error_util.m"
                      MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 289 "error_util.m"
                      MR_Integer parse_tree__error_util__V_8_8;

#line 289 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 289 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 289 "error_util.m"
                          {
#line 289 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                          }
#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                    }
#line 289 "error_util.m"
                    break;
#line 289 "error_util.m"
                  case (MR_Integer) 2:
#line 289 "error_util.m"
                    {
#line 289 "error_util.m"
                      MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 289 "error_util.m"
                      MR_String parse_tree__error_util__V_10_10;

#line 289 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 289 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 289 "error_util.m"
                          {
#line 289 "error_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                          }
#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                    }
#line 289 "error_util.m"
                    break;
#line 289 "error_util.m"
                  case (MR_Integer) 3:
#line 289 "error_util.m"
#line 289 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 289 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
                      case (MR_Integer) 0:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_12_12;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 1:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_14_14;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 2:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_16_16;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 3:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_18_18;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 4:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_20_20;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 5:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_22_22;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 6:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_24_24;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 7:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_26_26;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 8:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_28_28;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 9:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_30_30;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                parse_tree__prog_data____Compare____cons_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 10:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_32_32;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 11:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_34_34;
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_66_66;
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_67_67;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              parse_tree__error_util__V_66_66 = (MR_Integer) parse_tree__error_util__V_33_33;
#line 289 "error_util.m"
                              parse_tree__error_util__V_67_67 = (MR_Integer) parse_tree__error_util__V_34_34;
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_66_66, parse_tree__error_util__V_67_67);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 12:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Word parse_tree__error_util__V_36_36;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 13:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_38_38;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 14:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_String parse_tree__error_util__V_40_40;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_39_39, parse_tree__error_util__V_40_40);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 15:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_42_42;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_41_41, parse_tree__error_util__V_42_42);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                      case (MR_Integer) 16:
#line 289 "error_util.m"
                        {
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "error_util.m"
                          MR_Integer parse_tree__error_util__V_44_44;

#line 289 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 289 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                            {
#line 289 "error_util.m"
                              parse_tree__error_util__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "error_util.m"
                              {
#line 289 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_43_43, parse_tree__error_util__V_44_44);
                              }
#line 289 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
                            }
#line 289 "error_util.m"
                        }
#line 289 "error_util.m"
                        break;
#line 289 "error_util.m"
                    }
#line 289 "error_util.m"
                    break;
#line 289 "error_util.m"
                }
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 289 "error_util.m"
                else
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 289 "error_util.m"
                    return;
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
          }
#line 289 "error_util.m"
      }
#line 289 "error_util.m"
  }
#line 289 "error_util.m"
}

#line 289 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 289 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 289 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 289 "error_util.m"
{
#line 289 "error_util.m"
  {
#line 289 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 289 "error_util.m"
#line 289 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 289 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
      case (MR_Integer) 0:
#line 289 "error_util.m"
#line 289 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 289 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
          case (MR_Integer) 0:
#line 7601 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 1:
#line 7607 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 2:
#line 7613 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 20;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
        }
#line 289 "error_util.m"
        break;
#line 289 "error_util.m"
      case (MR_Integer) 1:
#line 7623 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 289 "error_util.m"
        break;
#line 289 "error_util.m"
      case (MR_Integer) 2:
#line 7629 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 289 "error_util.m"
        break;
#line 289 "error_util.m"
      case (MR_Integer) 3:
#line 289 "error_util.m"
#line 289 "error_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 289 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
          case (MR_Integer) 0:
#line 7642 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 1:
#line 7648 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 2:
#line 7654 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 3:
#line 7660 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 4:
#line 7666 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 5:
#line 7672 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 6:
#line 7678 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 7:
#line 7684 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 8:
#line 7690 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 9:
#line 7696 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 10:
#line 7702 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 11:
#line 7708 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 12:
#line 7714 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 13:
#line 7720 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 14:
#line 7726 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 15:
#line 7732 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
          case (MR_Integer) 16:
#line 7738 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 21;
#line 289 "error_util.m"
            break;
#line 289 "error_util.m"
        }
#line 289 "error_util.m"
        break;
#line 289 "error_util.m"
    }
#line 289 "error_util.m"
  }
#line 289 "error_util.m"
}

#line 289 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 289 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 289 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 289 "error_util.m"
{
#line 289 "error_util.m"
  {
#line 289 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 289 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_47 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 289 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_48 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 289 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_47 == parse_tree__error_util__CastY_48);
#line 289 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 289 "error_util.m"
    else
#line 289 "error_util.m"
#line 289 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 289 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
        case (MR_Integer) 0:
#line 289 "error_util.m"
#line 289 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 289 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
            case (MR_Integer) 0:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 1:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 2:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_44 == parse_tree__error_util__CastX_43);
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
          }
#line 289 "error_util.m"
          break;
#line 289 "error_util.m"
        case (MR_Integer) 1:
#line 289 "error_util.m"
          {
#line 289 "error_util.m"
            MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 289 "error_util.m"
            MR_Integer parse_tree__error_util__V_4_4;

#line 289 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 289 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7857 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_4_4);
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
          }
#line 289 "error_util.m"
          break;
#line 289 "error_util.m"
        case (MR_Integer) 2:
#line 289 "error_util.m"
          {
#line 289 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 289 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 289 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 289 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7882 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
          }
#line 289 "error_util.m"
          break;
#line 289 "error_util.m"
        case (MR_Integer) 3:
#line 289 "error_util.m"
#line 289 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 289 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 289 "error_util.m"
            case (MR_Integer) 0:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_8_8;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7914 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 1:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_10_10;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7939 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 2:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_12_12;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7964 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_12_12);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 3:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_16_16;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7989 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 4:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_18_18;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8014 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 5:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_20_20;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8039 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 6:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_22_22;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8064 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22) == 0);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 7:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8089 "parse_tree.error_util.c"
                    {
#line 8091 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                    }
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 8:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8117 "parse_tree.error_util.c"
                    {
#line 8119 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                    }
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 9:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8145 "parse_tree.error_util.c"
                    {
#line 8147 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                    }
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 10:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8173 "parse_tree.error_util.c"
                    {
#line 8175 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                    }
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 11:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8201 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == parse_tree__error_util__V_32_32);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 12:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Word parse_tree__error_util__V_34_34;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8226 "parse_tree.error_util.c"
                    {
#line 8228 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                    }
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 13:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_36_36;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8254 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36) == 0);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 14:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_String parse_tree__error_util__V_38_38;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8279 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38) == 0);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 15:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_42_42;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8304 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_41_41 == parse_tree__error_util__V_42_42);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
            case (MR_Integer) 16:
#line 289 "error_util.m"
              {
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46;

#line 289 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 289 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 289 "error_util.m"
                  {
#line 289 "error_util.m"
                    parse_tree__error_util__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8329 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_45_45 == parse_tree__error_util__V_46_46);
#line 289 "error_util.m"
                  }
#line 289 "error_util.m"
              }
#line 289 "error_util.m"
              break;
#line 289 "error_util.m"
          }
#line 289 "error_util.m"
          break;
#line 289 "error_util.m"
      }
#line 289 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 289 "error_util.m"
  }
#line 289 "error_util.m"
}

#line 681 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 681 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 681 "error_util.m"
{
#line 681 "error_util.m"
  {
#line 681 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 681 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 681 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 681 "error_util.m"
    {
#line 681 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[11], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
    }
#line 681 "error_util.m"
  }
#line 681 "error_util.m"
}

#line 681 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 681 "error_util.m"
{
#line 681 "error_util.m"
  {
#line 681 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 681 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 681 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 681 "error_util.m"
    {
#line 681 "error_util.m"
      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[11], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 681 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 681 "error_util.m"
  }
#line 681 "error_util.m"
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
#line 8434 "parse_tree.error_util.c"
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
#line 8460 "parse_tree.error_util.c"
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
#line 8480 "parse_tree.error_util.c"
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

#line 8551 "parse_tree.error_util.c"
        {
#line 8553 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 67 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
          {
#line 8560 "parse_tree.error_util.c"
            {
#line 8562 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 67 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
              {
#line 8569 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[9];
#line 8571 "parse_tree.error_util.c"
                {
#line 8573 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_11_11, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_8_8)));
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
#line 8613 "parse_tree.error_util.c"
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
#line 8667 "parse_tree.error_util.c"
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
#line 8713 "parse_tree.error_util.c"
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
#line 8759 "parse_tree.error_util.c"
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
#line 8798 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                    break;
#line 74 "error_util.m"
                  case (MR_Integer) 1:
#line 8804 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                    break;
#line 74 "error_util.m"
                  case (MR_Integer) 2:
#line 8810 "parse_tree.error_util.c"
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
#line 8842 "parse_tree.error_util.c"
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
#line 8866 "parse_tree.error_util.c"
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
#line 8886 "parse_tree.error_util.c"
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
#line 9050 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 74 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                  {
#line 9056 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 74 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                      {
#line 9062 "parse_tree.error_util.c"
                        {
#line 9064 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                        }
#line 74 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                          {
#line 9071 "parse_tree.error_util.c"
                            parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[8];
#line 9073 "parse_tree.error_util.c"
                            {
#line 9075 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_19_19, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_16_16)));
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
#line 9123 "parse_tree.error_util.c"
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
#line 9148 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "error_util.m"
        else
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 9158 "parse_tree.error_util.c"
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
                      case (MR_Integer) 16:
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
                      case (MR_Integer) 17:
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
#line 9529 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 1:
#line 9535 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 2:
#line 9541 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 3:
#line 9547 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 4:
#line 9553 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 5:
#line 9559 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 6:
#line 9565 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 7:
#line 9571 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 8:
#line 9577 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 9:
#line 9583 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 10:
#line 9589 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 11:
#line 9595 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 12:
#line 9601 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 13:
#line 9607 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 14:
#line 9613 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 15:
#line 9619 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 16:
#line 9625 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 17:
#line 9631 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
        }
#line 108 "error_util.m"
        break;
#line 108 "error_util.m"
      case (MR_Integer) 1:
#line 9641 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 108 "error_util.m"
        break;
#line 108 "error_util.m"
      case (MR_Integer) 2:
#line 9647 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
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
    MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_43 == parse_tree__error_util__CastY_44);
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
                MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_18 == parse_tree__error_util__CastX_17);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
              break;
#line 108 "error_util.m"
            case (MR_Integer) 8:
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
                MR_Integer parse_tree__error_util__CastX_25 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_26 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_26 == parse_tree__error_util__CastX_25);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
              break;
#line 108 "error_util.m"
            case (MR_Integer) 11:
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
            case (MR_Integer) 16:
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
              break;
#line 108 "error_util.m"
            case (MR_Integer) 17:
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_41 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_42 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_42 == parse_tree__error_util__CastX_41);
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
            MR_Word parse_tree__error_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22;

#line 108 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9987 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_21_21 == parse_tree__error_util__V_22_22);
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
            MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "error_util.m"
            MR_Word parse_tree__error_util__V_30_30;

#line 108 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 10012 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == parse_tree__error_util__V_30_30);
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

#line 173 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
#line 173 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 173 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 173 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 173 "error_util.m"
{
#line 173 "error_util.m"
  {
#line 173 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 173 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_98 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 173 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_99 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 173 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_98 == parse_tree__error_util__CastY_99);
#line 173 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 173 "error_util.m"
    else
#line 173 "error_util.m"
#line 173 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 173 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
        case (MR_Integer) 0:
#line 173 "error_util.m"
          {
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 173 "error_util.m"
#line 173 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 173 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
              case (MR_Integer) 0:
#line 173 "error_util.m"
                {
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 173 "error_util.m"
                  {
#line 173 "error_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_121_121)), ((MR_Box) (parse_tree__error_util__V_5_5)));
                  }
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 1:
#line 173 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 2:
#line 173 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 3:
#line 173 "error_util.m"
#line 173 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 173 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
                  case (MR_Integer) 0:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 1:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
            }
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
        case (MR_Integer) 1:
#line 173 "error_util.m"
          {
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_124_124 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 173 "error_util.m"
#line 173 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 173 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
              case (MR_Integer) 0:
#line 173 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 1:
#line 173 "error_util.m"
                {
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_28_28;
#line 173 "error_util.m"
                  MR_Integer parse_tree__error_util__V_131_131 = (MR_Integer) parse_tree__error_util__V_124_124;
#line 173 "error_util.m"
                  MR_Integer parse_tree__error_util__V_132_132 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 173 "error_util.m"
                  {
#line 173 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_131_131, parse_tree__error_util__V_132_132);
                  }
#line 173 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 173 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 173 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 173 "error_util.m"
                  else
#line 173 "error_util.m"
                    {
#line 173 "error_util.m"
                      MR_Word parse_tree__error_util__V_29_29;
#line 173 "error_util.m"
                      MR_Integer parse_tree__error_util__V_133_133 = (MR_Integer) parse_tree__error_util__V_123_123;
#line 173 "error_util.m"
                      MR_Integer parse_tree__error_util__V_134_134 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 173 "error_util.m"
                      {
#line 173 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_29_29, parse_tree__error_util__V_133_133, parse_tree__error_util__V_134_134);
                      }
#line 173 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 173 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 173 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 173 "error_util.m"
                      else
#line 173 "error_util.m"
                        {
#line 173 "error_util.m"
                          {
#line 173 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_122_122)), ((MR_Box) (parse_tree__error_util__V_27_27)));
                          }
#line 173 "error_util.m"
                        }
#line 173 "error_util.m"
                    }
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 2:
#line 173 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 3:
#line 173 "error_util.m"
#line 173 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 173 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
                  case (MR_Integer) 0:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 1:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
            }
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
        case (MR_Integer) 2:
#line 173 "error_util.m"
          {
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 173 "error_util.m"
#line 173 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 173 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
              case (MR_Integer) 0:
#line 173 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 1:
#line 173 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 2:
#line 173 "error_util.m"
                {
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 173 "error_util.m"
                  MR_Word parse_tree__error_util__V_56_56;
#line 173 "error_util.m"
                  MR_Integer parse_tree__error_util__V_135_135 = (MR_Integer) parse_tree__error_util__V_130_130;
#line 173 "error_util.m"
                  MR_Integer parse_tree__error_util__V_136_136 = (MR_Integer) parse_tree__error_util__V_54_54;

#line 173 "error_util.m"
                  {
#line 173 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_56_56, parse_tree__error_util__V_135_135, parse_tree__error_util__V_136_136);
                  }
#line 173 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_56_56 == (MR_Integer) 0);
#line 173 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 173 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_56_56;
#line 173 "error_util.m"
                  else
#line 173 "error_util.m"
                    {
#line 173 "error_util.m"
                      {
#line 173 "error_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_129_129)), ((MR_Box) (parse_tree__error_util__V_55_55)));
                      }
#line 173 "error_util.m"
                    }
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
              case (MR_Integer) 3:
#line 173 "error_util.m"
#line 173 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 173 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
                  case (MR_Integer) 0:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 1:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
                break;
#line 173 "error_util.m"
            }
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
        case (MR_Integer) 3:
#line 173 "error_util.m"
#line 173 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 173 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
            case (MR_Integer) 0:
#line 173 "error_util.m"
              {
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 173 "error_util.m"
#line 173 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 173 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
                  case (MR_Integer) 0:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 1:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 2:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 3:
#line 173 "error_util.m"
#line 173 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 173 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
                      case (MR_Integer) 0:
#line 173 "error_util.m"
                        {
#line 173 "error_util.m"
                          MR_Word parse_tree__error_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 173 "error_util.m"
                          MR_Word parse_tree__error_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 173 "error_util.m"
                          MR_Word parse_tree__error_util__V_80_80;

#line 173 "error_util.m"
                          {
#line 173 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_80_80, ((MR_Box) (parse_tree__error_util__V_128_128)), ((MR_Box) (parse_tree__error_util__V_78_78)));
                          }
#line 173 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_80_80 == (MR_Integer) 0);
#line 173 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 173 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_80_80;
#line 173 "error_util.m"
                          else
#line 173 "error_util.m"
                            {
#line 173 "error_util.m"
                              {
#line 173 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_127_127)), ((MR_Box) (parse_tree__error_util__V_79_79)));
                              }
#line 173 "error_util.m"
                            }
#line 173 "error_util.m"
                        }
#line 173 "error_util.m"
                        break;
#line 173 "error_util.m"
                      case (MR_Integer) 1:
#line 173 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 173 "error_util.m"
                        break;
#line 173 "error_util.m"
                    }
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
              }
#line 173 "error_util.m"
              break;
#line 173 "error_util.m"
            case (MR_Integer) 1:
#line 173 "error_util.m"
              {
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "error_util.m"
                MR_Box parse_tree__error_util__V_125_125 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 173 "error_util.m"
#line 173 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 173 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
                  case (MR_Integer) 0:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 1:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 2:
#line 173 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                  case (MR_Integer) 3:
#line 173 "error_util.m"
#line 173 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 173 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
                      case (MR_Integer) 0:
#line 173 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 173 "error_util.m"
                        break;
#line 173 "error_util.m"
                      case (MR_Integer) 1:
#line 173 "error_util.m"
                        {
#line 173 "error_util.m"
                          MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 173 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_103_103;
#line 173 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_104_104;
#line 173 "error_util.m"
                          MR_Box parse_tree__error_util__V_97_97 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 173 "error_util.m"
                          {
#line 173 "error_util.m"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_126_126, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_103_103);
                          }
#line 173 "error_util.m"
                          {
#line 173 "error_util.m"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_101, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_104_104);
                          }
#line 173 "error_util.m"
                          {
#line 173 "error_util.m"
                            mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_103_103, parse_tree__error_util__TypeInfo_104_104, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_125_125, parse_tree__error_util__V_97_97);
                          }
#line 173 "error_util.m"
                        }
#line 173 "error_util.m"
                        break;
#line 173 "error_util.m"
                    }
#line 173 "error_util.m"
                    break;
#line 173 "error_util.m"
                }
#line 173 "error_util.m"
              }
#line 173 "error_util.m"
              break;
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
      }
#line 173 "error_util.m"
  }
#line 173 "error_util.m"
}

#line 173 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 173 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 173 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 173 "error_util.m"
{
#line 173 "error_util.m"
  {
#line 173 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 173 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_21 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 173 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_22 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 173 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_21 == parse_tree__error_util__CastY_22);
#line 173 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 173 "error_util.m"
    else
#line 173 "error_util.m"
#line 173 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 173 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
        case (MR_Integer) 0:
#line 173 "error_util.m"
          {
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_4_4;

#line 173 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 173 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
              {
#line 173 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 10606 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 173 "error_util.m"
                {
#line 173 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
                }
#line 173 "error_util.m"
              }
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
        case (MR_Integer) 1:
#line 173 "error_util.m"
          {
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;

#line 173 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 173 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
              {
#line 173 "error_util.m"
                parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 173 "error_util.m"
                parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 173 "error_util.m"
                parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 173 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                  {
#line 173 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 173 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                      {
#line 10662 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 173 "error_util.m"
                        {
#line 173 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                        }
#line 173 "error_util.m"
                      }
#line 173 "error_util.m"
                  }
#line 173 "error_util.m"
              }
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
        case (MR_Integer) 2:
#line 173 "error_util.m"
          {
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_32_32;
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;
#line 173 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14;

#line 173 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 173 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
              {
#line 173 "error_util.m"
                parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "error_util.m"
                parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_13_13);
#line 173 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                  {
#line 10710 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_32_32 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 173 "error_util.m"
                    {
#line 173 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_32_32, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                    }
#line 173 "error_util.m"
                  }
#line 173 "error_util.m"
              }
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
        case (MR_Integer) 3:
#line 173 "error_util.m"
#line 173 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 173 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 173 "error_util.m"
            case (MR_Integer) 0:
#line 173 "error_util.m"
              {
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_31_31;
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__V_17_17;
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__V_18_18;

#line 173 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 173 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                  {
#line 173 "error_util.m"
                    parse_tree__error_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "error_util.m"
                    parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 10759 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 173 "error_util.m"
                    {
#line 173 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_15_15)), ((MR_Box) (parse_tree__error_util__V_17_17)));
                    }
#line 173 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                      {
#line 10770 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_31_31 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 173 "error_util.m"
                        {
#line 173 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_31_31, ((MR_Box) (parse_tree__error_util__V_16_16)), ((MR_Box) (parse_tree__error_util__V_18_18)));
                        }
#line 173 "error_util.m"
                      }
#line 173 "error_util.m"
                  }
#line 173 "error_util.m"
              }
#line 173 "error_util.m"
              break;
#line 173 "error_util.m"
            case (MR_Integer) 1:
#line 173 "error_util.m"
              {
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_24;
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 173 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 173 "error_util.m"
                MR_Box parse_tree__error_util__V_19_19 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 173 "error_util.m"
                MR_Box parse_tree__error_util__V_20_20;
#line 173 "error_util.m"
                MR_Integer parse_tree__error_util__PolyConst1_25;

#line 173 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 173 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 173 "error_util.m"
                  {
#line 173 "error_util.m"
                    parse_tree__error_util__TypeClassInfo_for_print_anything_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "error_util.m"
                    parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 10814 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_25 = (MR_Integer) 1;
#line 173 "error_util.m"
                    {
#line 173 "error_util.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_23, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_26_26);
                    }
#line 173 "error_util.m"
                    {
#line 173 "error_util.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_24, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_27_27);
                    }
#line 173 "error_util.m"
                    {
#line 173 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, parse_tree__error_util__TypeInfo_27_27, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                    }
#line 173 "error_util.m"
                  }
#line 173 "error_util.m"
              }
#line 173 "error_util.m"
              break;
#line 173 "error_util.m"
          }
#line 173 "error_util.m"
          break;
#line 173 "error_util.m"
      }
#line 173 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 173 "error_util.m"
  }
#line 173 "error_util.m"
}

#line 155 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0(
#line 155 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 155 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 155 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 155 "error_util.m"
{
#line 155 "error_util.m"
  {
#line 155 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 155 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 155 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_33 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 155 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_32 == parse_tree__error_util__CastY_33);
#line 155 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 10874 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 155 "error_util.m"
    else
#line 155 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 155 "error_util.m"
      {
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 155 "error_util.m"
        MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 155 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 155 "error_util.m"
          {
#line 155 "error_util.m"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 155 "error_util.m"
            MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 155 "error_util.m"
            MR_Integer parse_tree__error_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 155 "error_util.m"
            MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 155 "error_util.m"
            MR_Word parse_tree__error_util__V_29_29;

#line 155 "error_util.m"
            {
#line 155 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
            }
#line 10911 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 155 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 155 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 155 "error_util.m"
            else
#line 155 "error_util.m"
              {
#line 155 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;
#line 155 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46 = (MR_Integer) parse_tree__error_util__V_42_42;
#line 155 "error_util.m"
                MR_Integer parse_tree__error_util__V_47_47 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 155 "error_util.m"
                {
#line 155 "error_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_30_30, parse_tree__error_util__V_46_46, parse_tree__error_util__V_47_47);
                }
#line 10935 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_30_30 == (MR_Integer) 0);
#line 155 "error_util.m"
                parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 155 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_30_30;
#line 155 "error_util.m"
                else
#line 155 "error_util.m"
                  {
#line 155 "error_util.m"
                    MR_Word parse_tree__error_util__V_31_31;

#line 155 "error_util.m"
                    {
#line 155 "error_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_31_31, parse_tree__error_util__V_41_41, parse_tree__error_util__V_27_27);
                    }
#line 10955 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == (MR_Integer) 0);
#line 155 "error_util.m"
                    parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 155 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_31_31;
#line 155 "error_util.m"
                    else
#line 155 "error_util.m"
                      {
#line 155 "error_util.m"
                        {
#line 155 "error_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
                        }
#line 155 "error_util.m"
                      }
#line 155 "error_util.m"
                  }
#line 155 "error_util.m"
              }
#line 155 "error_util.m"
          }
#line 155 "error_util.m"
        else
#line 10982 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 155 "error_util.m"
      }
#line 155 "error_util.m"
    else
#line 155 "error_util.m"
      {
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 155 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 10997 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 155 "error_util.m"
        else
#line 155 "error_util.m"
          {
#line 155 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 155 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 155 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 155 "error_util.m"
            {
#line 155 "error_util.m"
              mercury__term____Compare____context_0_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_45_45, parse_tree__error_util__V_6_6);
            }
#line 11015 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 155 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 155 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 155 "error_util.m"
            else
#line 155 "error_util.m"
              {
#line 155 "error_util.m"
                {
#line 155 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
                }
#line 155 "error_util.m"
              }
#line 155 "error_util.m"
          }
#line 155 "error_util.m"
      }
#line 155 "error_util.m"
  }
#line 155 "error_util.m"
}

#line 155 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0(
#line 155 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 155 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 155 "error_util.m"
{
#line 155 "error_util.m"
  {
#line 155 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 155 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 155 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 155 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_15 == parse_tree__error_util__CastY_16);
#line 155 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 155 "error_util.m"
    else
#line 155 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 155 "error_util.m"
      {
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_17_17;
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_18_18;
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_12_12;
#line 155 "error_util.m"
        MR_Integer parse_tree__error_util__V_13_13;
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_14_14;

#line 155 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 155 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
          {
#line 155 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 155 "error_util.m"
            parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "error_util.m"
            parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 155 "error_util.m"
            parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 11108 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 11110 "parse_tree.error_util.c"
            {
#line 11112 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
            }
#line 155 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
              {
#line 11119 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 155 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
                  {
#line 11125 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 155 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
                      {
#line 11131 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 11133 "parse_tree.error_util.c"
                        {
#line 11135 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_18_18, ((MR_Box) (parse_tree__error_util__V_10_10)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                        }
#line 155 "error_util.m"
                      }
#line 155 "error_util.m"
                  }
#line 155 "error_util.m"
              }
#line 155 "error_util.m"
          }
#line 155 "error_util.m"
      }
#line 155 "error_util.m"
    else
#line 155 "error_util.m"
      {
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_20_20;
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5;
#line 155 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 155 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 155 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
          {
#line 155 "error_util.m"
            parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 155 "error_util.m"
            parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 11173 "parse_tree.error_util.c"
            {
#line 11175 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
            }
#line 155 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 155 "error_util.m"
              {
#line 11182 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 11184 "parse_tree.error_util.c"
                {
#line 11186 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_20_20, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
                }
#line 155 "error_util.m"
              }
#line 155 "error_util.m"
          }
#line 155 "error_util.m"
      }
#line 155 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 155 "error_util.m"
  }
#line 155 "error_util.m"
}

#line 1711 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1711 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1711 "error_util.m"
{
#line 1711 "error_util.m"
  {
#line 1711 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1711 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1711 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1711 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1711 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 11226 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1711 "error_util.m"
    else
#line 1711 "error_util.m"
      {
#line 1711 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1711 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1711 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1711 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1711 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1711 "error_util.m"
        {
#line 1711 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 11248 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1711 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1711 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1711 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1711 "error_util.m"
        else
#line 1711 "error_util.m"
          {
#line 1711 "error_util.m"
            {
#line 1711 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
            }
#line 1711 "error_util.m"
          }
#line 1711 "error_util.m"
      }
#line 1711 "error_util.m"
  }
#line 1711 "error_util.m"
}

#line 1711 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1711 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1711 "error_util.m"
{
#line 1711 "error_util.m"
  {
#line 1711 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1711 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1711 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1711 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1711 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1711 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1711 "error_util.m"
    else
#line 1711 "error_util.m"
      {
#line 1711 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1711 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1711 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1711 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1711 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 11313 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1711 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1711 "error_util.m"
          {
#line 11319 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 11321 "parse_tree.error_util.c"
            {
#line 11323 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1711 "error_util.m"
          }
#line 1711 "error_util.m"
      }
#line 1711 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1711 "error_util.m"
  }
#line 1711 "error_util.m"
}

#line 943 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 943 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 943 "error_util.m"
{
#line 943 "error_util.m"
  {
#line 943 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 943 "error_util.m"
    {
#line 943 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
    }
#line 943 "error_util.m"
  }
#line 943 "error_util.m"
}

#line 943 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 943 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 943 "error_util.m"
{
#line 943 "error_util.m"
  {
#line 943 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 943 "error_util.m"
    {
#line 943 "error_util.m"
      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 943 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 943 "error_util.m"
  }
#line 943 "error_util.m"
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
#line 11436 "parse_tree.error_util.c"
  {
#line 11438 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 11441 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 11443 "parse_tree.error_util.c"
  }
#line 99 "error_util.m"
}

#line 204 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 204 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 204 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 204 "error_util.m"
{
#line 204 "error_util.m"
  {
#line 204 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 204 "error_util.m"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 204 "error_util.m"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 204 "error_util.m"
    {
#line 204 "error_util.m"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 204 "error_util.m"
  }
#line 204 "error_util.m"
}

#line 1801 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1801 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1801 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1801 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1801 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1801 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1801 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1801 "error_util.m"
{
#line 1804 "error_util.m"
  while (MR_TRUE)
#line 1804 "error_util.m"
    {
#line 1804 "error_util.m"
      /* tailcall optimized into a loop */
#line 1804 "error_util.m"
      {
#line 1804 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1804 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1804 "error_util.m"
          {
#line 1804 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1804 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1804 "error_util.m"
          }
#line 1804 "error_util.m"
        else
#line 1805 "error_util.m"
          {
#line 1805 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1805 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1805 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1805 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1805 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1806 "error_util.m"
            {
#line 1806 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1807 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1807 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1808 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1811 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1809 "error_util.m"
              {
#line 1809 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1809 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1809 "error_util.m"
                {
#line 1809 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1809 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1809 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1809 "error_util.m"
                }
#line 1809 "error_util.m"
                {
#line 1809 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1810 "error_util.m"
                /* direct tailcall eliminated */
#line 1810 "error_util.m"
                {
#line 1810 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1810 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1810 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1810 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1810 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1810 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1810 "error_util.m"
                }
#line 1810 "error_util.m"
                continue;
#line 1809 "error_util.m"
              }
#line 1811 "error_util.m"
            else
#line 1812 "error_util.m"
              {
#line 1812 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1813 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1812 "error_util.m"
              }
#line 1805 "error_util.m"
          }
#line 1804 "error_util.m"
      }
#line 1804 "error_util.m"
      break;
#line 1804 "error_util.m"
    }
#line 1801 "error_util.m"
}

#line 1776 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1776 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1776 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1776 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1776 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1776 "error_util.m"
{
#line 1781 "error_util.m"
  {
#line 1781 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1781 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1782 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1781 "error_util.m"
    else
#line 1784 "error_util.m"
      {
#line 1784 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1784 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1784 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1784 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1784 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1784 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1784 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1784 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1784 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1784 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1796 "error_util.m"
        {
#line 1796 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1797 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1797 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1798 "error_util.m"
        {
#line 1798 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1798 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1798 "error_util.m"
        }
#line 1798 "error_util.m"
        {
#line 1798 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1787 "error_util.m"
        {
#line 1787 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1787 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1787 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1787 "error_util.m"
        }
#line 1788 "error_util.m"
        {
#line 1788 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1789 "error_util.m"
        {
#line 1789 "error_util.m"
          MR_Word base;
#line 1789 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1789 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1789 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1789 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1789 "error_util.m"
        }
#line 1784 "error_util.m"
      }
#line 1781 "error_util.m"
  }
#line 1776 "error_util.m"
}

#line 1728 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1728 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1728 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1728 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1728 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1728 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1728 "error_util.m"
{
#line 1734 "error_util.m"
  {
#line 1734 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1734 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1735 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1734 "error_util.m"
    else
#line 1737 "error_util.m"
      {
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1737 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1737 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1737 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1737 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1737 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1742 "error_util.m"
#line 1742 "error_util.m"
        switch (parse_tree__error_util__TreatAsFirst_6) {
#line 1742 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1742 "error_util.m"
          case (MR_Integer) 1:
#line 1744 "error_util.m"
            parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1742 "error_util.m"
            break;
#line 1742 "error_util.m"
          case (MR_Integer) 0:
#line 1740 "error_util.m"
            {
#line 1741 "error_util.m"
              parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1740 "error_util.m"
            }
#line 1742 "error_util.m"
            break;
#line 1742 "error_util.m"
        }
#line 1746 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1748 "error_util.m"
        {
#line 1748 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1748 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1748 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1748 "error_util.m"
        }
#line 11807 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1749 "error_util.m"
        {
#line 1749 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1754 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1751 "error_util.m"
          {
#line 1752 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1753 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1751 "error_util.m"
          }
#line 1754 "error_util.m"
        else
#line 1755 "error_util.m"
          {
#line 1755 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1755 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1756 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1766 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1767 "error_util.m"
              {
#line 1767 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1768 "error_util.m"
                {
#line 1768 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1768 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1768 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1768 "error_util.m"
                }
#line 1768 "error_util.m"
                {
#line 1768 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1768 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1768 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1768 "error_util.m"
                }
#line 1767 "error_util.m"
              }
#line 1766 "error_util.m"
            else
#line 1758 "error_util.m"
              {
#line 1758 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1758 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1758 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1758 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1758 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1758 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1758 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1758 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1758 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1796 "error_util.m"
                {
#line 1796 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1797 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1797 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1798 "error_util.m"
                {
#line 1798 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1798 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1798 "error_util.m"
                }
#line 1798 "error_util.m"
                {
#line 1798 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1761 "error_util.m"
                {
#line 1761 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1761 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1761 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1761 "error_util.m"
                }
#line 1763 "error_util.m"
                {
#line 1763 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1765 "error_util.m"
                {
#line 1765 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1765 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1765 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1765 "error_util.m"
                }
#line 1758 "error_util.m"
              }
#line 1755 "error_util.m"
          }
#line 1771 "error_util.m"
        {
#line 1771 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1773 "error_util.m"
        {
#line 1773 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1773 "error_util.m"
        {
#line 1773 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1737 "error_util.m"
      }
#line 1734 "error_util.m"
  }
#line 1728 "error_util.m"
}

#line 1696 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1696 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1696 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1696 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1696 "error_util.m"
{
#line 1705 "error_util.m"
  while (MR_TRUE)
#line 1705 "error_util.m"
    {
#line 1705 "error_util.m"
      /* tailcall optimized into a loop */
#line 1705 "error_util.m"
      {
#line 1705 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1705 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1705 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1699 "error_util.m"
        {
#line 1699 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1705 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1702 "error_util.m"
          {
#line 1700 "error_util.m"
            {
#line 1700 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1702 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1701 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1702 "error_util.m"
            else
#line 1703 "error_util.m"
              {
#line 1703 "error_util.m"
                /* direct tailcall eliminated */
#line 1703 "error_util.m"
                {
#line 1703 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1703 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1703 "error_util.m"
                }
#line 1703 "error_util.m"
                continue;
#line 1703 "error_util.m"
              }
#line 1702 "error_util.m"
          }
#line 1705 "error_util.m"
        else
#line 1706 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1705 "error_util.m"
      }
#line 1705 "error_util.m"
      break;
#line 1705 "error_util.m"
    }
#line 1696 "error_util.m"
}

#line 1686 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1686 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1686 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1686 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1686 "error_util.m"
{
#line 1688 "error_util.m"
  while (MR_TRUE)
#line 1688 "error_util.m"
    {
#line 1688 "error_util.m"
      /* tailcall optimized into a loop */
#line 1688 "error_util.m"
      {
#line 1688 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1688 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1688 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1689 "error_util.m"
        {
#line 1689 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1688 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1688 "error_util.m"
          {
#line 1690 "error_util.m"
            {
#line 1690 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1692 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1691 "error_util.m"
              {
#line 1691 "error_util.m"
                /* direct tailcall eliminated */
#line 1691 "error_util.m"
                {
#line 1691 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1691 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1691 "error_util.m"
                }
#line 1691 "error_util.m"
                continue;
#line 1691 "error_util.m"
              }
#line 1692 "error_util.m"
            else
#line 1693 "error_util.m"
              {
#line 1693 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1693 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1693 "error_util.m"
              }
#line 1688 "error_util.m"
          }
#line 1688 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1688 "error_util.m"
      }
#line 1688 "error_util.m"
      break;
#line 1688 "error_util.m"
    }
#line 1686 "error_util.m"
}

#line 1673 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1673 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1673 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1673 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1673 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1673 "error_util.m"
{
#line 1682 "error_util.m"
  while (MR_TRUE)
#line 1682 "error_util.m"
    {
#line 1682 "error_util.m"
      /* tailcall optimized into a loop */
#line 1682 "error_util.m"
      {
#line 1682 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1682 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1677 "error_util.m"
        {
#line 1677 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1682 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1678 "error_util.m"
          {
#line 1678 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1678 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1678 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1678 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1678 "error_util.m"
            {
#line 1678 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1679 "error_util.m"
            {
#line 1679 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1680 "error_util.m"
            {
#line 1680 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1680 "error_util.m"
            }
#line 1680 "error_util.m"
            {
#line 1680 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1680 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1680 "error_util.m"
            }
#line 1680 "error_util.m"
            /* direct tailcall eliminated */
#line 1680 "error_util.m"
            {
#line 1680 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1680 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1680 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1680 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1680 "error_util.m"
            }
#line 1680 "error_util.m"
            continue;
#line 1678 "error_util.m"
          }
#line 1682 "error_util.m"
        else
#line 1683 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1682 "error_util.m"
      }
#line 1682 "error_util.m"
      break;
#line 1682 "error_util.m"
    }
#line 1673 "error_util.m"
}

#line 1668 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1668 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1668 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1668 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1668 "error_util.m"
{
#line 1670 "error_util.m"
  {
#line 1670 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1671 "error_util.m"
    {
#line 1671 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
    }
#line 1670 "error_util.m"
  }
#line 1668 "error_util.m"
}

#line 1663 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1663 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1663 "error_util.m"
{
#line 1665 "error_util.m"
  {
#line 1665 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1665 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1665 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1665 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1665 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1665 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1665 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1665 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1665 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1666 "error_util.m"
    {
#line 1666 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1828 "error_util.m"
    {
#line 1828 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1828 "error_util.m"
    {
#line 1828 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1666 "error_util.m"
    {
#line 1666 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1666 "error_util.m"
    {
#line 1666 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1666 "error_util.m"
    {
#line 1666 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1665 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1665 "error_util.m"
  }
#line 1663 "error_util.m"
}

#line 1658 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1658 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1658 "error_util.m"
{
#line 1660 "error_util.m"
  {
#line 1660 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1660 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1660 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1660 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1661 "error_util.m"
    {
#line 1661 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1828 "error_util.m"
    {
#line 1828 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1828 "error_util.m"
    {
#line 1828 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1660 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1660 "error_util.m"
  }
#line 1658 "error_util.m"
}

#line 1617 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1617 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1617 "error_util.m"
{
#line 1619 "error_util.m"
  {
#line 1619 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1619 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1619 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1619 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1619 "error_util.m"
    else
#line 1620 "error_util.m"
      {
#line 1620 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1620 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1620 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1621 "error_util.m"
        {
#line 1621 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1625 "error_util.m"
#line 1625 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Head_3)) {
#line 1625 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1625 "error_util.m"
          case (MR_Integer) 0:
#line 1639 "error_util.m"
            if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1638 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1639 "error_util.m"
            else
#line 1640 "error_util.m"
              {
#line 1640 "error_util.m"
                MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1640 "error_util.m"
                MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1640 "error_util.m"
                MR_String parse_tree__error_util__V_13_13;
#line 1654 "error_util.m"
                MR_Char parse_tree__error_util__First_17;
#line 1654 "error_util.m"
                MR_String parse_tree__error_util__Rest_18;

#line 1649 "error_util.m"
                {
#line 1649 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
                }
#line 1649 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1650 "error_util.m"
                  {
#line 1650 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                  }
#line 1654 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1652 "error_util.m"
                  {
#line 1652 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1652 "error_util.m"
                    {
#line 1652 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                    }
#line 1653 "error_util.m"
                    {
#line 1653 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                    }
#line 1652 "error_util.m"
                  }
#line 1654 "error_util.m"
                else
#line 1655 "error_util.m"
                  parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1641 "error_util.m"
                {
#line 1641 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1641 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1641 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1641 "error_util.m"
                }
#line 1640 "error_util.m"
              }
#line 1625 "error_util.m"
            break;
#line 1625 "error_util.m"
          case (MR_Integer) 1:
#line 1623 "error_util.m"
            {
#line 1623 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1624 "error_util.m"
              {
#line 1624 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1624 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1624 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1624 "error_util.m"
              }
#line 1623 "error_util.m"
            }
#line 1625 "error_util.m"
            break;
#line 1625 "error_util.m"
          case (MR_Integer) 2:
#line 1626 "error_util.m"
            {
#line 1626 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1630 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1632 "error_util.m"
                {
#line 1632 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1632 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1632 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1632 "error_util.m"
                }
#line 1630 "error_util.m"
              else
#line 1628 "error_util.m"
                {
#line 1628 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1628 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1628 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1629 "error_util.m"
                  {
#line 1629 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1629 "error_util.m"
                  {
#line 1629 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1629 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1629 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1629 "error_util.m"
                  }
#line 1628 "error_util.m"
                }
#line 1626 "error_util.m"
            }
#line 1625 "error_util.m"
            break;
#line 1625 "error_util.m"
        }
#line 1620 "error_util.m"
      }
#line 1619 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1619 "error_util.m"
  }
#line 1617 "error_util.m"
}

#line 1572 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1572 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1572 "error_util.m"
{
#line 1574 "error_util.m"
  while (MR_TRUE)
#line 1574 "error_util.m"
    {
#line 1574 "error_util.m"
      /* tailcall optimized into a loop */
#line 1574 "error_util.m"
      {
#line 1574 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1574 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1574 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1574 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1574 "error_util.m"
        else
#line 1575 "error_util.m"
          {
#line 1575 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1575 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1579 "error_util.m"
#line 1579 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Word_3)) {
#line 1579 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1579 "error_util.m"
              case (MR_Integer) 0:
#line 1580 "error_util.m"
                {
#line 1580 "error_util.m"
                  MR_Word parse_tree__error_util__V_32_32;

#line 1581 "error_util.m"
                  {
#line 1581 "error_util.m"
                    parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1581 "error_util.m"
                  {
#line 1581 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1581 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1581 "error_util.m"
                  }
#line 1580 "error_util.m"
                }
#line 1579 "error_util.m"
                break;
#line 1579 "error_util.m"
              case (MR_Integer) 1:
#line 1577 "error_util.m"
                {
#line 1577 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1577 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1577 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1578 "error_util.m"
                  {
#line 1578 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1578 "error_util.m"
                  }
#line 1578 "error_util.m"
                  {
#line 1578 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1578 "error_util.m"
                  {
#line 1578 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1578 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1578 "error_util.m"
                  }
#line 1577 "error_util.m"
                }
#line 1579 "error_util.m"
                break;
#line 1579 "error_util.m"
              case (MR_Integer) 2:
#line 1583 "error_util.m"
                {
#line 1583 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1583 "error_util.m"
                  MR_Word parse_tree__error_util__V_29_29;
#line 1583 "error_util.m"
                  MR_Word parse_tree__error_util__V_30_30;

#line 1584 "error_util.m"
                  {
#line 1584 "error_util.m"
                    parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "error_util.m"
                    MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1584 "error_util.m"
                  }
#line 1584 "error_util.m"
                  {
#line 1584 "error_util.m"
                    parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1584 "error_util.m"
                  {
#line 1584 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1584 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1584 "error_util.m"
                  }
#line 1583 "error_util.m"
                }
#line 1579 "error_util.m"
                break;
#line 1579 "error_util.m"
              case (MR_Integer) 3:
#line 1586 "error_util.m"
                {
#line 1586 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1590 "error_util.m"
                  if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1588 "error_util.m"
                    {
#line 1588 "error_util.m"
                      MR_Word parse_tree__error_util__V_27_27;

#line 1589 "error_util.m"
                      {
#line 1589 "error_util.m"
                        parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1589 "error_util.m"
                      }
#line 1589 "error_util.m"
                      {
#line 1589 "error_util.m"
                        parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1589 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1589 "error_util.m"
                      }
#line 1588 "error_util.m"
                    }
#line 1590 "error_util.m"
                  else
#line 1590 "error_util.m"
                    {
#line 1590 "error_util.m"
                      MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1590 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1590 "error_util.m"
#line 1590 "error_util.m"
                      switch (MR_tag((MR_Word) parse_tree__error_util__V_45_45)) {
#line 1590 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1590 "error_util.m"
                        case (MR_Integer) 0:
#line 1595 "error_util.m"
                          {
#line 1595 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1595 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1595 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1654 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1654 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1649 "error_util.m"
                            {
#line 1649 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1649 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1650 "error_util.m"
                              {
#line 1650 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1654 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1652 "error_util.m"
                              {
#line 1652 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1652 "error_util.m"
                                {
#line 1652 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1653 "error_util.m"
                                {
#line 1653 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1652 "error_util.m"
                              }
#line 1654 "error_util.m"
                            else
#line 1655 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1600 "error_util.m"
                            {
#line 1600 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1600 "error_util.m"
                            }
#line 1600 "error_util.m"
                            {
#line 1600 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1600 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1600 "error_util.m"
                            }
#line 1601 "error_util.m"
                            /* direct tailcall eliminated */
#line 1601 "error_util.m"
                            {
#line 1601 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1601 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1601 "error_util.m"
                            }
#line 1601 "error_util.m"
                            continue;
#line 1595 "error_util.m"
                          }
#line 1590 "error_util.m"
                          break;
#line 1590 "error_util.m"
                        case (MR_Integer) 1:
#line 1591 "error_util.m"
                          {
#line 1591 "error_util.m"
                            MR_Word parse_tree__error_util__V_24_24;
#line 1591 "error_util.m"
                            MR_String parse_tree__error_util__V_25_25;
#line 1591 "error_util.m"
                            MR_Word parse_tree__error_util__V_26_26;
#line 1591 "error_util.m"
                            MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1592 "error_util.m"
                            {
#line 1592 "error_util.m"
                              parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                            }
#line 1592 "error_util.m"
                            {
#line 1592 "error_util.m"
                              parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1592 "error_util.m"
                            }
#line 1593 "error_util.m"
                            {
#line 1593 "error_util.m"
                              parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1593 "error_util.m"
                            {
#line 1593 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1593 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1593 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1593 "error_util.m"
                            }
#line 1591 "error_util.m"
                          }
#line 1590 "error_util.m"
                          break;
#line 1590 "error_util.m"
                        case (MR_Integer) 2:
#line 1603 "error_util.m"
                          {
#line 1603 "error_util.m"
                            MR_Word parse_tree__error_util__V_17_17;
#line 1603 "error_util.m"
                            MR_String parse_tree__error_util__V_18_18;
#line 1603 "error_util.m"
                            MR_Word parse_tree__error_util__V_19_19;
#line 1603 "error_util.m"
                            MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1608 "error_util.m"
                            {
#line 1608 "error_util.m"
                              parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                            }
#line 1608 "error_util.m"
                            {
#line 1608 "error_util.m"
                              parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1608 "error_util.m"
                            }
#line 1609 "error_util.m"
                            {
#line 1609 "error_util.m"
                              parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1609 "error_util.m"
                            {
#line 1609 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1609 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1609 "error_util.m"
                            }
#line 1603 "error_util.m"
                          }
#line 1590 "error_util.m"
                          break;
#line 1590 "error_util.m"
                        case (MR_Integer) 3:
#line 1611 "error_util.m"
                          {
#line 1611 "error_util.m"
                            MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1611 "error_util.m"
                            MR_Word parse_tree__error_util__V_13_13;
#line 1611 "error_util.m"
                            MR_Word parse_tree__error_util__V_14_14;
#line 1611 "error_util.m"
                            MR_String parse_tree__error_util__V_15_15;

#line 1613 "error_util.m"
                            {
#line 1613 "error_util.m"
                              parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                            }
#line 1613 "error_util.m"
                            {
#line 1613 "error_util.m"
                              parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1613 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1613 "error_util.m"
                            }
#line 1613 "error_util.m"
                            {
#line 1613 "error_util.m"
                              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1613 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1613 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1613 "error_util.m"
                            }
#line 1612 "error_util.m"
                            /* direct tailcall eliminated */
#line 1612 "error_util.m"
                            {
#line 1612 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1612 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1612 "error_util.m"
                            }
#line 1612 "error_util.m"
                            continue;
#line 1611 "error_util.m"
                          }
#line 1590 "error_util.m"
                          break;
#line 1590 "error_util.m"
                      }
#line 1590 "error_util.m"
                    }
#line 1586 "error_util.m"
                }
#line 1579 "error_util.m"
                break;
#line 1579 "error_util.m"
            }
#line 1575 "error_util.m"
          }
#line 1574 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1574 "error_util.m"
      }
#line 1574 "error_util.m"
      break;
#line 1574 "error_util.m"
    }
#line 1572 "error_util.m"
}

#line 1566 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1566 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1566 "error_util.m"
{
#line 1568 "error_util.m"
  {
#line 1568 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1568 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1568 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1568 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1569 "error_util.m"
    {
#line 1569 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1569 "error_util.m"
    {
#line 1569 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1570 "error_util.m"
    {
#line 1570 "error_util.m"
      parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1568 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1568 "error_util.m"
  }
#line 1566 "error_util.m"
}

#line 1460 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1460 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1460 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1460 "error_util.m"
{
#line 1464 "error_util.m"
  while (MR_TRUE)
#line 1464 "error_util.m"
    {
#line 1464 "error_util.m"
      /* tailcall optimized into a loop */
#line 1464 "error_util.m"
      {
#line 1464 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1464 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1464 "error_util.m"
          {
#line 1464 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1464 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1465 "error_util.m"
            {
#line 1465 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1466 "error_util.m"
            {
#line 1466 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1466 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1466 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1466 "error_util.m"
            }
#line 1466 "error_util.m"
            {
#line 1466 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1464 "error_util.m"
          }
#line 1464 "error_util.m"
        else
#line 1468 "error_util.m"
          {
#line 1468 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1468 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1468 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1468 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1472 "error_util.m"
#line 1472 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_17)) {
#line 1472 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1472 "error_util.m"
              case (MR_Integer) 0:
#line 1472 "error_util.m"
#line 1472 "error_util.m"
                switch (MR_unmkbody(parse_tree__error_util__Component_17)) {
#line 1472 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1472 "error_util.m"
                  case (MR_Integer) 0:
#line 1488 "error_util.m"
                    {
#line 1492 "error_util.m"
#line 1492 "error_util.m"
                      switch (parse_tree__error_util__FirstInMsg_1) {
#line 1492 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1492 "error_util.m"
                        case (MR_Integer) 0:
#line 1491 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1492 "error_util.m"
                          break;
#line 1492 "error_util.m"
                        case (MR_Integer) 1:
#line 1493 "error_util.m"
                          {
#line 1494 "error_util.m"
                            {
#line 1494 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1494 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1494 "error_util.m"
                            }
#line 1493 "error_util.m"
                          }
#line 1492 "error_util.m"
                          break;
#line 1492 "error_util.m"
                      }
#line 1488 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1488 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 1:
#line 1538 "error_util.m"
                    {
#line 1538 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_38;
#line 1538 "error_util.m"
                      MR_Word parse_tree__error_util__V_52_52;

#line 1539 "error_util.m"
                      {
#line 1539 "error_util.m"
                        parse_tree__error_util__Strings_38 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1540 "error_util.m"
                      {
#line 1540 "error_util.m"
                        parse_tree__error_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 0) = ((MR_Box) (parse_tree__error_util__Strings_38));
#line 1540 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1540 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1540 "error_util.m"
                      }
#line 1540 "error_util.m"
                      {
#line 1540 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_52_52)));
                      }
#line 1541 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1538 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 2:
#line 1548 "error_util.m"
                    {
#line 1548 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45;
#line 1548 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_93;

#line 1549 "error_util.m"
                      {
#line 1549 "error_util.m"
                        parse_tree__error_util__Strings_93 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1550 "error_util.m"
                      {
#line 1550 "error_util.m"
                        parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (parse_tree__error_util__Strings_93));
#line 1550 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1550 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1550 "error_util.m"
                      }
#line 1550 "error_util.m"
                      {
#line 1550 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_45_45)));
                      }
#line 1551 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1548 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                }
#line 1472 "error_util.m"
                break;
#line 1472 "error_util.m"
              case (MR_Integer) 1:
#line 1555 "error_util.m"
                {
#line 1556 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1555 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1555 "error_util.m"
                }
#line 1472 "error_util.m"
                break;
#line 1472 "error_util.m"
              case (MR_Integer) 2:
#line 1476 "error_util.m"
                {
#line 1476 "error_util.m"
                  MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1476 "error_util.m"
                  MR_Word parse_tree__error_util__V_76_76;

#line 1477 "error_util.m"
                  {
#line 1477 "error_util.m"
                    parse_tree__error_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_76_76, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1477 "error_util.m"
                  }
#line 1477 "error_util.m"
                  {
#line 1477 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_76_76));
#line 1477 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1477 "error_util.m"
                  }
#line 1476 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1476 "error_util.m"
                }
#line 1472 "error_util.m"
                break;
#line 1472 "error_util.m"
              case (MR_Integer) 3:
#line 1472 "error_util.m"
#line 1472 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) {
#line 1472 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1472 "error_util.m"
                  case (MR_Integer) 0:
#line 1479 "error_util.m"
                    {
#line 1479 "error_util.m"
                      MR_Word parse_tree__error_util__V_74_74;
#line 1479 "error_util.m"
                      MR_String parse_tree__error_util__V_75_75;
#line 1479 "error_util.m"
                      MR_String parse_tree__error_util__Word_81 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1480 "error_util.m"
                      {
#line 1480 "error_util.m"
                        parse_tree__error_util__V_75_75 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_81);
                      }
#line 1480 "error_util.m"
                      {
#line 1480 "error_util.m"
                        parse_tree__error_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_74_74, 0) = ((MR_Box) (parse_tree__error_util__V_75_75));
#line 1480 "error_util.m"
                      }
#line 1480 "error_util.m"
                      {
#line 1480 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1480 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1480 "error_util.m"
                      }
#line 1479 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1479 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 1:
#line 1482 "error_util.m"
                    {
#line 1482 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1482 "error_util.m"
                      MR_Word parse_tree__error_util__V_72_72;
#line 1482 "error_util.m"
                      MR_String parse_tree__error_util__V_73_73;

#line 1483 "error_util.m"
                      {
#line 1483 "error_util.m"
                        parse_tree__error_util__V_73_73 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                      }
#line 1483 "error_util.m"
                      {
#line 1483 "error_util.m"
                        parse_tree__error_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_72_72, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1483 "error_util.m"
                      }
#line 1483 "error_util.m"
                      {
#line 1483 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_72_72));
#line 1483 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1483 "error_util.m"
                      }
#line 1482 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1482 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 2:
#line 1485 "error_util.m"
                    {
#line 1485 "error_util.m"
                      MR_Word parse_tree__error_util__V_70_70;
#line 1485 "error_util.m"
                      MR_String parse_tree__error_util__V_71_71;
#line 1485 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1486 "error_util.m"
                      {
#line 1486 "error_util.m"
                        parse_tree__error_util__V_71_71 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_82);
                      }
#line 1486 "error_util.m"
                      {
#line 1486 "error_util.m"
                        parse_tree__error_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_70_70, 0) = ((MR_Box) (parse_tree__error_util__V_71_71));
#line 1486 "error_util.m"
                      }
#line 1486 "error_util.m"
                      {
#line 1486 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1486 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1486 "error_util.m"
                      }
#line 1485 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1485 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 3:
#line 1497 "error_util.m"
                    {
#line 1497 "error_util.m"
                      MR_Word parse_tree__error_util__V_68_68;
#line 1497 "error_util.m"
                      MR_String parse_tree__error_util__Word_83 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1498 "error_util.m"
                      {
#line 1498 "error_util.m"
                        parse_tree__error_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "error_util.m"
                        MR_hl_field(MR_mktag(2), parse_tree__error_util__V_68_68, 0) = ((MR_Box) (parse_tree__error_util__Word_83));
#line 1498 "error_util.m"
                      }
#line 1498 "error_util.m"
                      {
#line 1498 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_68_68));
#line 1498 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1498 "error_util.m"
                      }
#line 1497 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1497 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 4:
#line 1500 "error_util.m"
                    {
#line 1500 "error_util.m"
                      MR_Word parse_tree__error_util__V_67_67;
#line 1500 "error_util.m"
                      MR_String parse_tree__error_util__Word_84 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1501 "error_util.m"
                      {
#line 1501 "error_util.m"
                        parse_tree__error_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "error_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__error_util__V_67_67, 0) = ((MR_Box) (parse_tree__error_util__Word_84));
#line 1501 "error_util.m"
                      }
#line 1501 "error_util.m"
                      {
#line 1501 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_67_67));
#line 1501 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1501 "error_util.m"
                      }
#line 1500 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1500 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 5:
#line 1470 "error_util.m"
                    {
#line 1470 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1471 "error_util.m"
                      {
#line 1471 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1470 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1470 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 6:
#line 1473 "error_util.m"
                    {
#line 1473 "error_util.m"
                      MR_String parse_tree__error_util__V_77_77;
#line 1473 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_80 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1474 "error_util.m"
                      {
#line 1474 "error_util.m"
                        parse_tree__error_util__V_77_77 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_80);
                      }
#line 1474 "error_util.m"
                      {
#line 1474 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_77_77, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1473 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1473 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 7:
#line 1503 "error_util.m"
                    {
#line 1503 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1503 "error_util.m"
                      MR_Word parse_tree__error_util__V_65_65;
#line 1503 "error_util.m"
                      MR_String parse_tree__error_util__V_66_66;

#line 1504 "error_util.m"
                      {
#line 1504 "error_util.m"
                        parse_tree__error_util__V_66_66 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                      }
#line 1504 "error_util.m"
                      {
#line 1504 "error_util.m"
                        parse_tree__error_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_65_65, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1504 "error_util.m"
                      }
#line 1504 "error_util.m"
                      {
#line 1504 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_65_65));
#line 1504 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1504 "error_util.m"
                      }
#line 1503 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1503 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 8:
#line 1506 "error_util.m"
                    {
#line 1506 "error_util.m"
                      MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1506 "error_util.m"
                      MR_Word parse_tree__error_util__V_64_64;
#line 1506 "error_util.m"
                      MR_String parse_tree__error_util__Word_85;

#line 1507 "error_util.m"
                      {
#line 1507 "error_util.m"
                        parse_tree__error_util__Word_85 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                      }
#line 1508 "error_util.m"
                      {
#line 1508 "error_util.m"
                        parse_tree__error_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_64_64, 0) = ((MR_Box) (parse_tree__error_util__Word_85));
#line 1508 "error_util.m"
                      }
#line 1508 "error_util.m"
                      {
#line 1508 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_64_64));
#line 1508 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1508 "error_util.m"
                      }
#line 1506 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1506 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 9:
#line 1510 "error_util.m"
                    {
#line 1510 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1510 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId_28;
#line 1510 "error_util.m"
                      MR_Word parse_tree__error_util__V_63_63;
#line 1510 "error_util.m"
                      MR_String parse_tree__error_util__Word_86;

#line 1511 "error_util.m"
                      {
#line 1511 "error_util.m"
                        parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_27, &parse_tree__error_util__ConsId_28);
                      }
#line 1512 "error_util.m"
                      {
#line 1512 "error_util.m"
                        parse_tree__error_util__Word_86 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_28);
                      }
#line 1513 "error_util.m"
                      {
#line 1513 "error_util.m"
                        parse_tree__error_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_63_63, 0) = ((MR_Box) (parse_tree__error_util__Word_86));
#line 1513 "error_util.m"
                      }
#line 1513 "error_util.m"
                      {
#line 1513 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_63_63));
#line 1513 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1513 "error_util.m"
                      }
#line 1510 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1510 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 10:
#line 1515 "error_util.m"
                    {
#line 1515 "error_util.m"
                      MR_Word parse_tree__error_util__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1515 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtor_30;
#line 1515 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtorName_31;
#line 1515 "error_util.m"
                      MR_Integer parse_tree__error_util__TypeCtorArity_32;
#line 1515 "error_util.m"
                      MR_Word parse_tree__error_util__NewWord_33;
#line 1515 "error_util.m"
                      MR_String parse_tree__error_util__V_62_62;
#line 1515 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_87;

#line 1516 "error_util.m"
                      {
#line 1516 "error_util.m"
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(parse_tree__error_util__Type_29, &parse_tree__error_util__TypeCtor_30);
                      }
#line 1517 "error_util.m"
                      parse_tree__error_util__TypeCtorName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 0)));
#line 1517 "error_util.m"
                      parse_tree__error_util__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 1)));
#line 1518 "error_util.m"
                      {
#line 1518 "error_util.m"
                        parse_tree__error_util__SymName_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_87, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_31));
#line 1518 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_87, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_32));
#line 1518 "error_util.m"
                      }
#line 1519 "error_util.m"
                      {
#line 1519 "error_util.m"
                        parse_tree__error_util__V_62_62 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_87);
                      }
#line 1519 "error_util.m"
                      {
#line 1519 "error_util.m"
                        parse_tree__error_util__NewWord_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_33, 0) = ((MR_Box) (parse_tree__error_util__V_62_62));
#line 1519 "error_util.m"
                      }
#line 1520 "error_util.m"
                      {
#line 1520 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_33));
#line 1520 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1520 "error_util.m"
                      }
#line 1515 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1515 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 11:
#line 1522 "error_util.m"
                    {
#line 1522 "error_util.m"
                      MR_Word parse_tree__error_util__PredOrFunc_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1522 "error_util.m"
                      MR_Word parse_tree__error_util__V_61_61;
#line 1522 "error_util.m"
                      MR_String parse_tree__error_util__Word_88;

#line 1825 "error_util.m"
#line 1825 "error_util.m"
                      switch (parse_tree__error_util__PredOrFunc_34) {
#line 1825 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1825 "error_util.m"
                        case (MR_Integer) 1:
#line 1826 "error_util.m"
                          parse_tree__error_util__Word_88 = (MR_String) "function";
#line 1825 "error_util.m"
                          break;
#line 1825 "error_util.m"
                        case (MR_Integer) 0:
#line 1825 "error_util.m"
                          parse_tree__error_util__Word_88 = (MR_String) "predicate";
#line 1825 "error_util.m"
                          break;
#line 1825 "error_util.m"
                      }
#line 1524 "error_util.m"
                      {
#line 1524 "error_util.m"
                        parse_tree__error_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_61_61, 0) = ((MR_Box) (parse_tree__error_util__Word_88));
#line 1524 "error_util.m"
                      }
#line 1524 "error_util.m"
                      {
#line 1524 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_61_61));
#line 1524 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1524 "error_util.m"
                      }
#line 1522 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1522 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 12:
#line 1526 "error_util.m"
                    {
#line 1526 "error_util.m"
                      MR_Word parse_tree__error_util__SimpleCallId_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1526 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_89;

#line 1527 "error_util.m"
                      {
#line 1527 "error_util.m"
                        parse_tree__error_util__WordsStr_89 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_35);
                      }
#line 1528 "error_util.m"
                      {
#line 1528 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_89, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1526 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1526 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 13:
#line 1530 "error_util.m"
                    {
#line 1530 "error_util.m"
                      MR_String parse_tree__error_util__DeclName_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1530 "error_util.m"
                      MR_String parse_tree__error_util__V_58_58;
#line 1530 "error_util.m"
                      MR_Word parse_tree__error_util__V_60_60;
#line 1530 "error_util.m"
                      MR_String parse_tree__error_util__Word_90;

#line 1531 "error_util.m"
                      {
#line 1531 "error_util.m"
                        parse_tree__error_util__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_36);
                      }
#line 1531 "error_util.m"
                      {
#line 1531 "error_util.m"
                        parse_tree__error_util__Word_90 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_58_58);
                      }
#line 1532 "error_util.m"
                      {
#line 1532 "error_util.m"
                        parse_tree__error_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_60_60, 0) = ((MR_Box) (parse_tree__error_util__Word_90));
#line 1532 "error_util.m"
                      }
#line 1532 "error_util.m"
                      {
#line 1532 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_60_60));
#line 1532 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1532 "error_util.m"
                      }
#line 1530 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1530 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 14:
#line 1534 "error_util.m"
                    {
#line 1534 "error_util.m"
                      MR_String parse_tree__error_util__PragmaName_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1534 "error_util.m"
                      MR_String parse_tree__error_util__V_55_55;
#line 1534 "error_util.m"
                      MR_Word parse_tree__error_util__V_57_57;
#line 1534 "error_util.m"
                      MR_String parse_tree__error_util__Word_91;

#line 1535 "error_util.m"
                      {
#line 1535 "error_util.m"
                        parse_tree__error_util__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_37);
                      }
#line 1535 "error_util.m"
                      {
#line 1535 "error_util.m"
                        parse_tree__error_util__Word_91 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_55_55);
                      }
#line 1536 "error_util.m"
                      {
#line 1536 "error_util.m"
                        parse_tree__error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_57_57, 0) = ((MR_Box) (parse_tree__error_util__Word_91));
#line 1536 "error_util.m"
                      }
#line 1536 "error_util.m"
                      {
#line 1536 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_57_57));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1536 "error_util.m"
                      }
#line 1534 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1534 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 15:
#line 1543 "error_util.m"
                    {
#line 1543 "error_util.m"
                      MR_Integer parse_tree__error_util__IndentDelta_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1543 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49;
#line 1543 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_92;

#line 1544 "error_util.m"
                      {
#line 1544 "error_util.m"
                        parse_tree__error_util__Strings_92 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1545 "error_util.m"
                      {
#line 1545 "error_util.m"
                        parse_tree__error_util__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1545 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 0) = ((MR_Box) (parse_tree__error_util__Strings_92));
#line 1545 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1545 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_39));
#line 1545 "error_util.m"
                      }
#line 1545 "error_util.m"
                      {
#line 1545 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_49_49)));
                      }
#line 1546 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1543 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                  case (MR_Integer) 16:
#line 1555 "error_util.m"
                    {
#line 1556 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1555 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1555 "error_util.m"
                    }
#line 1472 "error_util.m"
                    break;
#line 1472 "error_util.m"
                }
#line 1472 "error_util.m"
                break;
#line 1472 "error_util.m"
            }
#line 1558 "error_util.m"
            /* direct tailcall eliminated */
#line 1558 "error_util.m"
            {
#line 1558 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1558 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1558 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1558 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1558 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1558 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1558 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1558 "error_util.m"
            }
#line 1558 "error_util.m"
            continue;
#line 1468 "error_util.m"
          }
#line 1464 "error_util.m"
      }
#line 1464 "error_util.m"
      break;
#line 1464 "error_util.m"
    }
#line 1460 "error_util.m"
}

#line 1423 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1423 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1423 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1423 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1423 "error_util.m"
{
#line 1428 "error_util.m"
  {
#line 1428 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1428 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1428 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1427 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1428 "error_util.m"
    else
#line 1430 "error_util.m"
      {
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1428 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1428 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1428 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1428 "error_util.m"
          {
#line 1428 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1428 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1428 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1428 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1428 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1428 "error_util.m"
          }
#line 1430 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1429 "error_util.m"
          {
#line 1429 "error_util.m"
            parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1430 "error_util.m"
        else
#line 1431 "error_util.m"
          {
#line 1431 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1431 "error_util.m"
            {
#line 1431 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1431 "error_util.m"
            {
#line 1431 "error_util.m"
              parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1431 "error_util.m"
          }
#line 1430 "error_util.m"
      }
#line 1428 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1428 "error_util.m"
  }
#line 1423 "error_util.m"
}

#line 1386 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1386 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1386 "error_util.m"
{
#line 1391 "error_util.m"
  {
#line 1391 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1391 "error_util.m"
    MR_String parse_tree__error_util__Str_4;

#line 1391 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1390 "error_util.m"
      parse_tree__error_util__Str_4 = (MR_String) "first";
#line 1391 "error_util.m"
    else
#line 1393 "error_util.m"
      {
#line 1391 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1393 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1392 "error_util.m"
          parse_tree__error_util__Str_4 = (MR_String) "second";
#line 1393 "error_util.m"
        else
#line 1395 "error_util.m"
          {
#line 1393 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1395 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1394 "error_util.m"
              parse_tree__error_util__Str_4 = (MR_String) "third";
#line 1395 "error_util.m"
            else
#line 1397 "error_util.m"
              {
#line 1395 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 4);
#line 1397 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1396 "error_util.m"
                  parse_tree__error_util__Str_4 = (MR_String) "fourth";
#line 1397 "error_util.m"
                else
#line 1399 "error_util.m"
                  {
#line 1397 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 5);
#line 1399 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 1398 "error_util.m"
                      parse_tree__error_util__Str_4 = (MR_String) "fifth";
#line 1399 "error_util.m"
                    else
#line 1401 "error_util.m"
                      {
#line 1399 "error_util.m"
                        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 6);
#line 1401 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 1400 "error_util.m"
                          parse_tree__error_util__Str_4 = (MR_String) "sixth";
#line 1401 "error_util.m"
                        else
#line 1403 "error_util.m"
                          {
#line 1401 "error_util.m"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 7);
#line 1403 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1402 "error_util.m"
                              parse_tree__error_util__Str_4 = (MR_String) "seventh";
#line 1403 "error_util.m"
                            else
#line 1405 "error_util.m"
                              {
#line 1403 "error_util.m"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 8);
#line 1405 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 1404 "error_util.m"
                                  parse_tree__error_util__Str_4 = (MR_String) "eighth";
#line 1405 "error_util.m"
                                else
#line 1407 "error_util.m"
                                  {
#line 1405 "error_util.m"
                                    parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 9);
#line 1407 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 1406 "error_util.m"
                                      parse_tree__error_util__Str_4 = (MR_String) "ninth";
#line 1407 "error_util.m"
                                    else
#line 1409 "error_util.m"
                                      {
#line 1407 "error_util.m"
                                        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 10);
#line 1409 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 1408 "error_util.m"
                                          parse_tree__error_util__Str_4 = (MR_String) "tenth";
#line 1409 "error_util.m"
                                        else
#line 1412 "error_util.m"
                                          {
#line 1412 "error_util.m"
                                            MR_String parse_tree__error_util__NStr_5;
#line 1412 "error_util.m"
                                            MR_Integer parse_tree__error_util__LastDigit_6;

#line 1412 "error_util.m"
                                            {
#line 1412 "error_util.m"
                                              parse_tree__error_util__NStr_5 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                                            }
#line 1413 "error_util.m"
                                            {
#line 1413 "error_util.m"
                                              parse_tree__error_util__LastDigit_6 = mercury__int__mod_2_f_0(parse_tree__error_util__N_3, (MR_Integer) 10);
                                            }
#line 1414 "error_util.m"
                                            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 > (MR_Integer) 20);
#line 1414 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1414 "error_util.m"
                                              parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_6 == (MR_Integer) 2);
#line 1416 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1415 "error_util.m"
                                              {
#line 1415 "error_util.m"
                                                {
#line 1415 "error_util.m"
                                                  parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "nd");
                                                }
#line 1415 "error_util.m"
                                              }
#line 1416 "error_util.m"
                                            else
#line 1418 "error_util.m"
                                              {
#line 1416 "error_util.m"
                                                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 > (MR_Integer) 20);
#line 1416 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1416 "error_util.m"
                                                  parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_6 == (MR_Integer) 3);
#line 1418 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1417 "error_util.m"
                                                  {
#line 1417 "error_util.m"
                                                    {
#line 1417 "error_util.m"
                                                      parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "rd");
                                                    }
#line 1417 "error_util.m"
                                                  }
#line 1418 "error_util.m"
                                                else
#line 1419 "error_util.m"
                                                  {
#line 1419 "error_util.m"
                                                    {
#line 1419 "error_util.m"
                                                      parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "th");
                                                    }
#line 1419 "error_util.m"
                                                  }
#line 1418 "error_util.m"
                                              }
#line 1412 "error_util.m"
                                          }
#line 1409 "error_util.m"
                                      }
#line 1407 "error_util.m"
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
    return parse_tree__error_util__Str_4;
#line 1391 "error_util.m"
  }
#line 1386 "error_util.m"
}

#line 1294 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1294 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1294 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1294 "error_util.m"
{
#line 1297 "error_util.m"
  {
#line 1297 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1297 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1297 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1297 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1297 "error_util.m"
    else
#line 1298 "error_util.m"
      {
#line 1298 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1298 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1298 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1299 "error_util.m"
        {
#line 1299 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1303 "error_util.m"
#line 1303 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Component_6)) {
#line 1303 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1303 "error_util.m"
          case (MR_Integer) 0:
#line 1303 "error_util.m"
#line 1303 "error_util.m"
            switch (MR_unmkbody(parse_tree__error_util__Component_6)) {
#line 1303 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1303 "error_util.m"
              case (MR_Integer) 0:
#line 1323 "error_util.m"
#line 1323 "error_util.m"
                switch (parse_tree__error_util__FirstInMsg_1) {
#line 1323 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "error_util.m"
                  case (MR_Integer) 0:
#line 1322 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1323 "error_util.m"
                    break;
#line 1323 "error_util.m"
                  case (MR_Integer) 1:
#line 1654 "error_util.m"
                    {
#line 1654 "error_util.m"
                      MR_Char parse_tree__error_util__First_60;
#line 1654 "error_util.m"
                      MR_String parse_tree__error_util__Rest_61;

#line 1649 "error_util.m"
                      {
#line 1649 "error_util.m"
                        parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_60, &parse_tree__error_util__Rest_61);
                      }
#line 1649 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1650 "error_util.m"
                        {
#line 1650 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_60);
                        }
#line 1654 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1652 "error_util.m"
                        {
#line 1652 "error_util.m"
                          MR_Char parse_tree__error_util__LoweredFirst_62;

#line 1652 "error_util.m"
                          {
#line 1652 "error_util.m"
                            mercury__char__to_lower_2_p_0(parse_tree__error_util__First_60, &parse_tree__error_util__LoweredFirst_62);
                          }
#line 1653 "error_util.m"
                          {
#line 1653 "error_util.m"
                            mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_62, parse_tree__error_util__Rest_61);
                          }
#line 1652 "error_util.m"
                        }
#line 1654 "error_util.m"
                      else
#line 1655 "error_util.m"
                        parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1654 "error_util.m"
                    }
#line 1323 "error_util.m"
                    break;
#line 1323 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 1:
#line 1370 "error_util.m"
                {
#line 1371 "error_util.m"
                  {
#line 1371 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1370 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 2:
#line 1377 "error_util.m"
                {
#line 1378 "error_util.m"
                  {
#line 1378 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
                  }
#line 1377 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
            }
#line 1303 "error_util.m"
            break;
#line 1303 "error_util.m"
          case (MR_Integer) 1:
#line 1383 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1303 "error_util.m"
            break;
#line 1303 "error_util.m"
          case (MR_Integer) 2:
#line 1307 "error_util.m"
            {
#line 1307 "error_util.m"
              MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1308 "error_util.m"
              {
#line 1308 "error_util.m"
                parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
              }
#line 1307 "error_util.m"
            }
#line 1303 "error_util.m"
            break;
#line 1303 "error_util.m"
          case (MR_Integer) 3:
#line 1303 "error_util.m"
#line 1303 "error_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) {
#line 1303 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1303 "error_util.m"
              case (MR_Integer) 0:
#line 1310 "error_util.m"
                {
#line 1310 "error_util.m"
                  MR_String parse_tree__error_util__V_40_40;
#line 1310 "error_util.m"
                  MR_String parse_tree__error_util__Word_43 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1310 "error_util.m"
                  MR_String parse_tree__error_util__V_79_79;

#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__V_79_79 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_43, (MR_String) "\'");
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_79_79);
                  }
#line 1311 "error_util.m"
                  {
#line 1311 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_40_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1310 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 1:
#line 1313 "error_util.m"
                {
#line 1313 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1313 "error_util.m"
                  MR_String parse_tree__error_util__V_39_39;

#line 1314 "error_util.m"
                  {
#line 1314 "error_util.m"
                    parse_tree__error_util__V_39_39 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                  }
#line 1314 "error_util.m"
                  {
#line 1314 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_39_39, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1313 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 2:
#line 1316 "error_util.m"
                {
#line 1316 "error_util.m"
                  MR_String parse_tree__error_util__V_38_38;
#line 1316 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1389 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 1);
#line 1391 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 1390 "error_util.m"
                    parse_tree__error_util__V_38_38 = (MR_String) "first";
#line 1391 "error_util.m"
                  else
#line 1393 "error_util.m"
                    {
#line 1391 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 2);
#line 1393 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1392 "error_util.m"
                        parse_tree__error_util__V_38_38 = (MR_String) "second";
#line 1393 "error_util.m"
                      else
#line 1395 "error_util.m"
                        {
#line 1393 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 3);
#line 1395 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 1394 "error_util.m"
                            parse_tree__error_util__V_38_38 = (MR_String) "third";
#line 1395 "error_util.m"
                          else
#line 1397 "error_util.m"
                            {
#line 1395 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 4);
#line 1397 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 1396 "error_util.m"
                                parse_tree__error_util__V_38_38 = (MR_String) "fourth";
#line 1397 "error_util.m"
                              else
#line 1399 "error_util.m"
                                {
#line 1397 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 5);
#line 1399 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 1398 "error_util.m"
                                    parse_tree__error_util__V_38_38 = (MR_String) "fifth";
#line 1399 "error_util.m"
                                  else
#line 1401 "error_util.m"
                                    {
#line 1399 "error_util.m"
                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 6);
#line 1401 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 1400 "error_util.m"
                                        parse_tree__error_util__V_38_38 = (MR_String) "sixth";
#line 1401 "error_util.m"
                                      else
#line 1403 "error_util.m"
                                        {
#line 1401 "error_util.m"
                                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 7);
#line 1403 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 1402 "error_util.m"
                                            parse_tree__error_util__V_38_38 = (MR_String) "seventh";
#line 1403 "error_util.m"
                                          else
#line 1405 "error_util.m"
                                            {
#line 1403 "error_util.m"
                                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 8);
#line 1405 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 1404 "error_util.m"
                                                parse_tree__error_util__V_38_38 = (MR_String) "eighth";
#line 1405 "error_util.m"
                                              else
#line 1407 "error_util.m"
                                                {
#line 1405 "error_util.m"
                                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 9);
#line 1407 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 1406 "error_util.m"
                                                    parse_tree__error_util__V_38_38 = (MR_String) "ninth";
#line 1407 "error_util.m"
                                                  else
#line 1409 "error_util.m"
                                                    {
#line 1407 "error_util.m"
                                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 10);
#line 1409 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 1408 "error_util.m"
                                                        parse_tree__error_util__V_38_38 = (MR_String) "tenth";
#line 1409 "error_util.m"
                                                      else
#line 1412 "error_util.m"
                                                        {
#line 1412 "error_util.m"
                                                          MR_String parse_tree__error_util__NStr_65;
#line 1412 "error_util.m"
                                                          MR_Integer parse_tree__error_util__LastDigit_66;

#line 1412 "error_util.m"
                                                          {
#line 1412 "error_util.m"
                                                            parse_tree__error_util__NStr_65 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_44);
                                                          }
#line 1413 "error_util.m"
                                                          {
#line 1413 "error_util.m"
                                                            parse_tree__error_util__LastDigit_66 = mercury__int__mod_2_f_0(parse_tree__error_util__Int_44, (MR_Integer) 10);
                                                          }
#line 1414 "error_util.m"
                                                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 > (MR_Integer) 20);
#line 1414 "error_util.m"
                                                          if (parse_tree__error_util__succeeded)
#line 1414 "error_util.m"
                                                            parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_66 == (MR_Integer) 2);
#line 1416 "error_util.m"
                                                          if (parse_tree__error_util__succeeded)
#line 1415 "error_util.m"
                                                            {
#line 1415 "error_util.m"
                                                              {
#line 1415 "error_util.m"
                                                                parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "nd");
                                                              }
#line 1415 "error_util.m"
                                                            }
#line 1416 "error_util.m"
                                                          else
#line 1418 "error_util.m"
                                                            {
#line 1416 "error_util.m"
                                                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 > (MR_Integer) 20);
#line 1416 "error_util.m"
                                                              if (parse_tree__error_util__succeeded)
#line 1416 "error_util.m"
                                                                parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_66 == (MR_Integer) 3);
#line 1418 "error_util.m"
                                                              if (parse_tree__error_util__succeeded)
#line 1417 "error_util.m"
                                                                {
#line 1417 "error_util.m"
                                                                  {
#line 1417 "error_util.m"
                                                                    parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "rd");
                                                                  }
#line 1417 "error_util.m"
                                                                }
#line 1418 "error_util.m"
                                                              else
#line 1419 "error_util.m"
                                                                {
#line 1419 "error_util.m"
                                                                  {
#line 1419 "error_util.m"
                                                                    parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "th");
                                                                  }
#line 1419 "error_util.m"
                                                                }
#line 1418 "error_util.m"
                                                            }
#line 1412 "error_util.m"
                                                        }
#line 1409 "error_util.m"
                                                    }
#line 1407 "error_util.m"
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
#line 1317 "error_util.m"
                  {
#line 1317 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_38_38, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1316 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 3:
#line 1328 "error_util.m"
                {
#line 1328 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1329 "error_util.m"
                  {
#line 1329 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                  }
#line 1328 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 4:
#line 1331 "error_util.m"
                {
#line 1331 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1332 "error_util.m"
                  {
#line 1332 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1331 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 5:
#line 1301 "error_util.m"
                {
#line 1301 "error_util.m"
                  MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1302 "error_util.m"
                  {
#line 1302 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1301 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 6:
#line 1304 "error_util.m"
                {
#line 1304 "error_util.m"
                  MR_String parse_tree__error_util__V_41_41;
#line 1304 "error_util.m"
                  MR_String parse_tree__error_util__Words_42 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1305 "error_util.m"
                  {
#line 1305 "error_util.m"
                    parse_tree__error_util__V_41_41 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Words_42);
                  }
#line 1305 "error_util.m"
                  {
#line 1305 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_41_41, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1304 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 7:
#line 1334 "error_util.m"
                {
#line 1334 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__Word_45;
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__V_82_82;
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__V_85_85;

#line 1661 "error_util.m"
                  {
#line 1661 "error_util.m"
                    parse_tree__error_util__V_82_82 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__V_85_85 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_82_82, (MR_String) "\'");
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__Word_45 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_85_85);
                  }
#line 1336 "error_util.m"
                  {
#line 1336 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_45, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1334 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 8:
#line 1338 "error_util.m"
                {
#line 1338 "error_util.m"
                  MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1338 "error_util.m"
                  MR_String parse_tree__error_util__Word_46;
#line 1338 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1338 "error_util.m"
                  MR_Integer parse_tree__error_util__Arity_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1338 "error_util.m"
                  MR_String parse_tree__error_util__V_89_89;
#line 1338 "error_util.m"
                  MR_String parse_tree__error_util__V_90_90;
#line 1338 "error_util.m"
                  MR_String parse_tree__error_util__V_91_91;
#line 1338 "error_util.m"
                  MR_String parse_tree__error_util__V_93_93;
#line 1338 "error_util.m"
                  MR_String parse_tree__error_util__V_96_96;

#line 1666 "error_util.m"
                  {
#line 1666 "error_util.m"
                    parse_tree__error_util__V_90_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_87);
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__V_96_96 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_90_90, (MR_String) "\'");
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_96_96);
                  }
#line 1666 "error_util.m"
                  {
#line 1666 "error_util.m"
                    parse_tree__error_util__V_93_93 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_88);
                  }
#line 1666 "error_util.m"
                  {
#line 1666 "error_util.m"
                    parse_tree__error_util__V_91_91 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_93_93);
                  }
#line 1666 "error_util.m"
                  {
#line 1666 "error_util.m"
                    parse_tree__error_util__Word_46 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_89_89, parse_tree__error_util__V_91_91);
                  }
#line 1340 "error_util.m"
                  {
#line 1340 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_46, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1338 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 9:
#line 1342 "error_util.m"
                {
#line 1342 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1342 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId_18;
#line 1342 "error_util.m"
                  MR_String parse_tree__error_util__Word_47;

#line 1343 "error_util.m"
                  {
#line 1343 "error_util.m"
                    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_17, &parse_tree__error_util__ConsId_18);
                  }
#line 1344 "error_util.m"
                  {
#line 1344 "error_util.m"
                    parse_tree__error_util__Word_47 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_18);
                  }
#line 1345 "error_util.m"
                  {
#line 1345 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_47, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1342 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 10:
#line 1363 "error_util.m"
                {
#line 1363 "error_util.m"
                  MR_Word parse_tree__error_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1363 "error_util.m"
                  MR_Word parse_tree__error_util__TypeCtor_24;
#line 1363 "error_util.m"
                  MR_Word parse_tree__error_util__TypeCtorName_25;
#line 1363 "error_util.m"
                  MR_Integer parse_tree__error_util__TypeCtorArity_26;
#line 1363 "error_util.m"
                  MR_String parse_tree__error_util__Word_52;
#line 1363 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_53;

#line 1364 "error_util.m"
                  {
#line 1364 "error_util.m"
                    parse_tree__prog_type__type_to_ctor_det_2_p_0(parse_tree__error_util__Type_23, &parse_tree__error_util__TypeCtor_24);
                  }
#line 1365 "error_util.m"
                  parse_tree__error_util__TypeCtorName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 0)));
#line 1365 "error_util.m"
                  parse_tree__error_util__TypeCtorArity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 1)));
#line 1366 "error_util.m"
                  {
#line 1366 "error_util.m"
                    parse_tree__error_util__SymName_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "error_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_53, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_25));
#line 1366 "error_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_53, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_26));
#line 1366 "error_util.m"
                  }
#line 1367 "error_util.m"
                  {
#line 1367 "error_util.m"
                    parse_tree__error_util__Word_52 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_53);
                  }
#line 1368 "error_util.m"
                  {
#line 1368 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_52, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1363 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 11:
#line 1347 "error_util.m"
                {
#line 1347 "error_util.m"
                  MR_Word parse_tree__error_util__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1347 "error_util.m"
                  MR_String parse_tree__error_util__Word_48;

#line 1825 "error_util.m"
#line 1825 "error_util.m"
                  switch (parse_tree__error_util__PredOrFunc_19) {
#line 1825 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1825 "error_util.m"
                    case (MR_Integer) 1:
#line 1826 "error_util.m"
                      parse_tree__error_util__Word_48 = (MR_String) "function";
#line 1825 "error_util.m"
                      break;
#line 1825 "error_util.m"
                    case (MR_Integer) 0:
#line 1825 "error_util.m"
                      parse_tree__error_util__Word_48 = (MR_String) "predicate";
#line 1825 "error_util.m"
                      break;
#line 1825 "error_util.m"
                  }
#line 1349 "error_util.m"
                  {
#line 1349 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1347 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 12:
#line 1351 "error_util.m"
                {
#line 1351 "error_util.m"
                  MR_Word parse_tree__error_util__SimpleCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1351 "error_util.m"
                  MR_String parse_tree__error_util__Word_49;

#line 1352 "error_util.m"
                  {
#line 1352 "error_util.m"
                    parse_tree__error_util__Word_49 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_20);
                  }
#line 1353 "error_util.m"
                  {
#line 1353 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1351 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 13:
#line 1355 "error_util.m"
                {
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__Decl_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__V_36_36;
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__Word_50;
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__V_56_56;

#line 1356 "error_util.m"
                  {
#line 1356 "error_util.m"
                    parse_tree__error_util__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_21);
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_36_36, (MR_String) "\'");
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__Word_50 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_56_56);
                  }
#line 1357 "error_util.m"
                  {
#line 1357 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1355 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 14:
#line 1359 "error_util.m"
                {
#line 1359 "error_util.m"
                  MR_String parse_tree__error_util__PragmaName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1359 "error_util.m"
                  MR_String parse_tree__error_util__V_34_34;
#line 1359 "error_util.m"
                  MR_String parse_tree__error_util__Word_51;
#line 1359 "error_util.m"
                  MR_String parse_tree__error_util__V_75_75;

#line 1360 "error_util.m"
                  {
#line 1360 "error_util.m"
                    parse_tree__error_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_22);
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_34_34, (MR_String) "\'");
                  }
#line 1828 "error_util.m"
                  {
#line 1828 "error_util.m"
                    parse_tree__error_util__Word_51 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_75_75);
                  }
#line 1361 "error_util.m"
                  {
#line 1361 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_51, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1359 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 15:
#line 1373 "error_util.m"
                {
#line 1375 "error_util.m"
                  {
#line 1375 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1373 "error_util.m"
                }
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
              case (MR_Integer) 16:
#line 1383 "error_util.m"
                parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1303 "error_util.m"
                break;
#line 1303 "error_util.m"
            }
#line 1303 "error_util.m"
            break;
#line 1303 "error_util.m"
        }
#line 1298 "error_util.m"
      }
#line 1297 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1297 "error_util.m"
  }
#line 1294 "error_util.m"
}

#line 1283 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1283 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1283 "error_util.m"
{
#line 1285 "error_util.m"
  while (MR_TRUE)
#line 1285 "error_util.m"
    {
#line 1285 "error_util.m"
      /* tailcall optimized into a loop */
#line 1285 "error_util.m"
      {
#line 1285 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1285 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1285 "error_util.m"
          {
#line 1285 "error_util.m"
          }
#line 1285 "error_util.m"
        else
#line 1286 "error_util.m"
          {
#line 1286 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1286 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1287 "error_util.m"
            {
#line 1287 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1288 "error_util.m"
            {
#line 1288 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1289 "error_util.m"
            /* direct tailcall eliminated */
#line 1289 "error_util.m"
            {
#line 1289 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1289 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1289 "error_util.m"
            }
#line 1289 "error_util.m"
            continue;
#line 1286 "error_util.m"
          }
#line 1285 "error_util.m"
      }
#line 1285 "error_util.m"
      break;
#line 1285 "error_util.m"
    }
#line 1283 "error_util.m"
}

#line 1256 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1256 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1256 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1256 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1256 "error_util.m"
{
#line 1259 "error_util.m"
  while (MR_TRUE)
#line 1259 "error_util.m"
    {
#line 1259 "error_util.m"
      /* tailcall optimized into a loop */
#line 1259 "error_util.m"
      {
#line 1259 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1259 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1259 "error_util.m"
          {
#line 1259 "error_util.m"
          }
#line 1259 "error_util.m"
        else
#line 1260 "error_util.m"
          {
#line 1260 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1260 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1260 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1260 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1260 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1260 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1260 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1264 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1265 "error_util.m"
              {
#line 1265 "error_util.m"
              }
#line 1264 "error_util.m"
            else
#line 1262 "error_util.m"
              {
#line 1262 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1263 "error_util.m"
                {
#line 1263 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1262 "error_util.m"
              }
#line 1267 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1267 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1268 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1268 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1269 "error_util.m"
            {
#line 1269 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1270 "error_util.m"
            {
#line 1270 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1276 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1276 "error_util.m"
              {
#line 1277 "error_util.m"
                {
#line 1277 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1276 "error_util.m"
              }
#line 1276 "error_util.m"
            else
#line 1278 "error_util.m"
              {
#line 1278 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1278 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1279 "error_util.m"
                {
#line 1279 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1280 "error_util.m"
                {
#line 1280 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1281 "error_util.m"
                {
#line 1281 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1278 "error_util.m"
              }
#line 1272 "error_util.m"
            /* direct tailcall eliminated */
#line 1272 "error_util.m"
            {
#line 1272 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1272 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1272 "error_util.m"
            }
#line 1272 "error_util.m"
            continue;
#line 1260 "error_util.m"
          }
#line 1259 "error_util.m"
      }
#line 1259 "error_util.m"
      break;
#line 1259 "error_util.m"
    }
#line 1256 "error_util.m"
}

#line 1228 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1228 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1228 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2)
#line 1228 "error_util.m"
{
#line 1230 "error_util.m"
  while (MR_TRUE)
#line 1230 "error_util.m"
    {
#line 1230 "error_util.m"
      /* tailcall optimized into a loop */
#line 1230 "error_util.m"
      {
#line 1230 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1230 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1230 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1230 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 1230 "error_util.m"
        else
#line 1231 "error_util.m"
          {
#line 1231 "error_util.m"
            MR_Word parse_tree__error_util__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1231 "error_util.m"
            MR_Word parse_tree__error_util__Ranges_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1231 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 0)));
#line 1231 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMax_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 1)));

#line 1236 "error_util.m"
            if ((parse_tree__error_util__MaybeMin_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1235 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1236 "error_util.m"
            else
#line 1237 "error_util.m"
              {
#line 1237 "error_util.m"
                MR_Integer parse_tree__error_util__Min_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMin_9, (MR_Integer) 0)));

#line 1238 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Min_11 <= parse_tree__error_util__LineNumber_2);
#line 1237 "error_util.m"
              }
#line 1239 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1242 "error_util.m"
              {
#line 1242 "error_util.m"
                if ((parse_tree__error_util__MaybeMax_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1241 "error_util.m"
                  parse_tree__error_util__succeeded = MR_TRUE;
#line 1242 "error_util.m"
                else
#line 1243 "error_util.m"
                  {
#line 1243 "error_util.m"
                    MR_Integer parse_tree__error_util__Max_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_10, (MR_Integer) 0)));

#line 1244 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumber_2 <= parse_tree__error_util__Max_12);
#line 1243 "error_util.m"
                  }
#line 1242 "error_util.m"
              }
#line 1248 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1247 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1248 "error_util.m"
            else
#line 1249 "error_util.m"
              {
#line 1249 "error_util.m"
                /* direct tailcall eliminated */
#line 1249 "error_util.m"
                {
#line 1249 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Ranges_6;

#line 1249 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1249 "error_util.m"
                }
#line 1249 "error_util.m"
                continue;
#line 1249 "error_util.m"
              }
#line 1231 "error_util.m"
          }
#line 1230 "error_util.m"
        return parse_tree__error_util__HeadVar__3_3;
#line 1230 "error_util.m"
      }
#line 1230 "error_util.m"
      break;
#line 1230 "error_util.m"
    }
#line 1228 "error_util.m"
}

#line 1162 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1162 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1162 "error_util.m"
  MR_Word parse_tree__error_util__Components_14)
#line 1162 "error_util.m"
{
#line 1168 "error_util.m"
  {
#line 1168 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1168 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextLength_20;

#line 1204 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "error_util.m"
      {
#line 1206 "error_util.m"
        parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[4]);
#line 1205 "error_util.m"
      }
#line 1204 "error_util.m"
    else
#line 1177 "error_util.m"
      {
#line 1177 "error_util.m"
        MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_10, (MR_Integer) 0)));
#line 1177 "error_util.m"
        MR_String parse_tree__error_util__FileName_17;
#line 1177 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_18;

#line 1178 "error_util.m"
        {
#line 1178 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__FileName_17);
        }
#line 1179 "error_util.m"
        {
#line 1179 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__LineNumber_18);
        }
#line 1182 "error_util.m"
        {
#line 1182 "error_util.m"
          MR_Word parse_tree__error_util__LineNumberRanges_19;
#line 1182 "error_util.m"
          MR_Word parse_tree__error_util__V_37_37;
#line 1182 "error_util.m"
          MR_Box parse_tree__error_util__conv0_LineNumberRanges_19;

#line 1182 "error_util.m"
          {
#line 1182 "error_util.m"
            parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) (parse_tree__error_util__FileName_17)), &parse_tree__error_util__conv0_LineNumberRanges_19);
          }
#line 1182 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1182 "error_util.m"
            {
#line 1182 "error_util.m"
              parse_tree__error_util__LineNumberRanges_19 = ((MR_Word) parse_tree__error_util__conv0_LineNumberRanges_19);
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
                parse_tree__error_util__V_37_37 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_19, parse_tree__error_util__LineNumber_18);
              }
#line 1183 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 1182 "error_util.m"
            }
#line 1182 "error_util.m"
        }
#line 1184 "error_util.m"
        if (!(parse_tree__error_util__succeeded))
#line 1186 "error_util.m"
          {
#line 1186 "error_util.m"
            MR_Word parse_tree__error_util__V_36_36;
#line 1186 "error_util.m"
            MR_Word parse_tree__error_util__LineNumberRanges_48;
#line 1186 "error_util.m"
            MR_Box parse_tree__error_util__conv1_LineNumberRanges_48;

#line 1186 "error_util.m"
            {
#line 1186 "error_util.m"
              parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) ((MR_String) "")), &parse_tree__error_util__conv1_LineNumberRanges_48);
            }
#line 1186 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1186 "error_util.m"
              {
#line 1186 "error_util.m"
                parse_tree__error_util__LineNumberRanges_48 = ((MR_Word) parse_tree__error_util__conv1_LineNumberRanges_48);
#line 1186 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1186 "error_util.m"
              }
#line 1186 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1186 "error_util.m"
              {
#line 1187 "error_util.m"
                {
#line 1187 "error_util.m"
                  parse_tree__error_util__V_36_36 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_48, parse_tree__error_util__LineNumber_18);
                }
#line 1187 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 1186 "error_util.m"
              }
#line 1186 "error_util.m"
          }
#line 1192 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1190 "error_util.m"
          {
#line 1190 "error_util.m"
            {
#line 1190 "error_util.m"
              libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 1);
            }
#line 1191 "error_util.m"
            parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1190 "error_util.m"
          }
#line 1192 "error_util.m"
        else
#line 1193 "error_util.m"
          {
#line 1193 "error_util.m"
            MR_Integer parse_tree__error_util__FileNameLength_21;
#line 1193 "error_util.m"
            MR_String parse_tree__error_util__LineNumberStr_22;
#line 1193 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength0_23;
#line 1193 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength_24;
#line 1193 "error_util.m"
            MR_Integer parse_tree__error_util__V_41_41;
#line 1193 "error_util.m"
            MR_Integer parse_tree__error_util__V_42_42;
#line 1193 "error_util.m"
            MR_Integer parse_tree__error_util__V_43_43;

#line 1193 "error_util.m"
            {
#line 1193 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_17, &parse_tree__error_util__FileNameLength_21);
            }
#line 1194 "error_util.m"
            {
#line 1194 "error_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_18, &parse_tree__error_util__LineNumberStr_22);
            }
#line 1195 "error_util.m"
            {
#line 1195 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_22, &parse_tree__error_util__LineNumberStrLength0_23);
            }
#line 1196 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_23 < (MR_Integer) 3);
#line 1198 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1197 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = (MR_Integer) 3;
#line 1198 "error_util.m"
            else
#line 1199 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = parse_tree__error_util__LineNumberStrLength0_23;
#line 1202 "error_util.m"
            parse_tree__error_util__V_43_43 = (parse_tree__error_util__FileNameLength_21 + (MR_Integer) 1);
#line 1202 "error_util.m"
            parse_tree__error_util__V_42_42 = (parse_tree__error_util__V_43_43 + parse_tree__error_util__LineNumberStrLength_24);
#line 1202 "error_util.m"
            parse_tree__error_util__V_41_41 = (parse_tree__error_util__V_42_42 + (MR_Integer) 2);
#line 1202 "error_util.m"
            {
#line 1202 "error_util.m"
              parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, 0) = ((MR_Box) (parse_tree__error_util__V_41_41));
#line 1202 "error_util.m"
            }
#line 1193 "error_util.m"
          }
#line 1177 "error_util.m"
      }
#line 1211 "error_util.m"
    if ((parse_tree__error_util__MaybeContextLength_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "error_util.m"
      {
#line 1209 "error_util.m"
      }
#line 1211 "error_util.m"
    else
#line 1212 "error_util.m"
      {
#line 1212 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1212 "error_util.m"
        MR_Integer parse_tree__error_util__ContextLength_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, (MR_Integer) 0)));
#line 1212 "error_util.m"
        MR_Word parse_tree__error_util__Paragraphs_26;
#line 1212 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndent_27;
#line 1212 "error_util.m"
        MR_Word parse_tree__error_util__MaybeRemain_30;
#line 1212 "error_util.m"
        MR_Word parse_tree__error_util__Lines_31;
#line 1212 "error_util.m"
        MR_Word parse_tree__error_util__ParasCord_55;
#line 1212 "error_util.m"
        MR_Word parse_tree__error_util__V_58_58;

#line 1451 "error_util.m"
        {
#line 1451 "error_util.m"
          parse_tree__error_util__V_58_58 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_59);
        }
#line 1450 "error_util.m"
        {
#line 1450 "error_util.m"
          parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_58_58, &parse_tree__error_util__ParasCord_55);
        }
#line 1452 "error_util.m"
        {
#line 1452 "error_util.m"
          parse_tree__error_util__Paragraphs_26 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_59, parse_tree__error_util__ParasCord_55);
        }
#line 1214 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_9 == (MR_Integer) 0);
#line 1214 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1214 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 0;
#line 1214 "error_util.m"
        else
#line 1214 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 1;
#line 1219 "error_util.m"
        if ((parse_tree__error_util__MaybeMaxWidth_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "error_util.m"
          parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1219 "error_util.m"
        else
#line 1216 "error_util.m"
          {
#line 1216 "error_util.m"
            MR_Integer parse_tree__error_util__MaxWidth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_12, (MR_Integer) 0)));
#line 1216 "error_util.m"
            MR_Integer parse_tree__error_util__Remain_29;
#line 1216 "error_util.m"
            MR_Integer parse_tree__error_util__V_46_46 = (parse_tree__error_util__ContextLength_25 + parse_tree__error_util__FixedIndent_11);

#line 1217 "error_util.m"
            parse_tree__error_util__Remain_29 = (parse_tree__error_util__MaxWidth_28 - parse_tree__error_util__V_46_46);
#line 1218 "error_util.m"
            {
#line 1218 "error_util.m"
              parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_30, 0) = ((MR_Box) (parse_tree__error_util__Remain_29));
#line 1218 "error_util.m"
            }
#line 1216 "error_util.m"
          }
#line 1223 "error_util.m"
        {
#line 1223 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_9, parse_tree__error_util__FirstIndent_27, parse_tree__error_util__Paragraphs_26, parse_tree__error_util__MaybeRemain_30, &parse_tree__error_util__Lines_31);
        }
#line 1225 "error_util.m"
        {
#line 1225 "error_util.m"
          parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_31, parse_tree__error_util__MaybeContext_10, parse_tree__error_util__FixedIndent_11);
        }
#line 1212 "error_util.m"
      }
#line 1168 "error_util.m"
  }
#line 1162 "error_util.m"
}

#line 1150 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1150 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1150 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 1150 "error_util.m"
{
#line 1155 "error_util.m"
  {
#line 1155 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1155 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_14;
#line 1155 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_15;

#line 1156 "error_util.m"
    {
#line 1156 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_11, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_14);
    }
#line 1158 "error_util.m"
    {
#line 1158 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_11, &parse_tree__error_util__LimitErrorContextsMap_15);
    }
#line 1159 "error_util.m"
    {
#line 1159 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10, parse_tree__error_util__MaybeMaxWidth_14, parse_tree__error_util__LimitErrorContextsMap_15, parse_tree__error_util__Components_12);
    }
#line 1155 "error_util.m"
  }
#line 1150 "error_util.m"
}

#line 1133 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1133 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1133 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2)
#line 1133 "error_util.m"
{
#line 1136 "error_util.m"
  {
#line 1136 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1136 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "error_util.m"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1136 "error_util.m"
    else
#line 1137 "error_util.m"
      {
#line 1137 "error_util.m"
        MR_String parse_tree__error_util__Line_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "error_util.m"
        MR_Word parse_tree__error_util__Lines_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1137 "error_util.m"
        MR_Word parse_tree__error_util__TailPieces_6;
#line 1137 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7;
#line 1137 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1138 "error_util.m"
        {
#line 1138 "error_util.m"
          parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__Lines_4, &parse_tree__error_util__TailPieces_6);
        }
#line 1139 "error_util.m"
        {
#line 1139 "error_util.m"
          parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1139 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__Line_3));
#line 1139 "error_util.m"
        }
#line 1139 "error_util.m"
        {
#line 1139 "error_util.m"
          parse_tree__error_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1139 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 1) = ((MR_Box) (parse_tree__error_util__TailPieces_6));
#line 1139 "error_util.m"
        }
#line 1139 "error_util.m"
        {
#line 1139 "error_util.m"
          MR_Word base;
#line 1139 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "error_util.m"
          *parse_tree__error_util__HeadVar__2_2 = base;
#line 1139 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1139 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1139 "error_util.m"
        }
#line 1137 "error_util.m"
      }
#line 1136 "error_util.m"
  }
#line 1133 "error_util.m"
}

#line 977 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 977 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 977 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 977 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 977 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 977 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10)
#line 977 "error_util.m"
{
#line 984 "error_util.m"
  while (MR_TRUE)
#line 984 "error_util.m"
    {
#line 984 "error_util.m"
      /* tailcall optimized into a loop */
#line 984 "error_util.m"
      {
#line 984 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 984 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 984 "error_util.m"
          {
#line 985 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 984 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 984 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 984 "error_util.m"
          }
#line 984 "error_util.m"
        else
#line 987 "error_util.m"
          {
#line 987 "error_util.m"
            MR_Word parse_tree__error_util__Component_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 987 "error_util.m"
            MR_Word parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 987 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;
#line 987 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 987 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;

#line 994 "error_util.m"
#line 994 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_28)) {
#line 994 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 994 "error_util.m"
              case (MR_Integer) 0:
#line 989 "error_util.m"
                {
#line 989 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_28, (MR_Integer) 0)));

#line 990 "error_util.m"
                  {
#line 990 "error_util.m"
                    parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_37);
                  }
#line 992 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 993 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 989 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 989 "error_util.m"
                }
#line 994 "error_util.m"
                break;
#line 994 "error_util.m"
              case (MR_Integer) 1:
#line 995 "error_util.m"
                {
#line 995 "error_util.m"
                  MR_Word parse_tree__error_util__Option_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 995 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 995 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 995 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_41;

#line 996 "error_util.m"
                  {
#line 996 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_38, &parse_tree__error_util__OptionValue_41);
                  }
#line 997 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_41 == parse_tree__error_util__RequiredValue_39);
#line 1000 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 998 "error_util.m"
                    {
#line 998 "error_util.m"
                      parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__EmbeddedComponents_40, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_80_80, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                    }
#line 1000 "error_util.m"
                  else
#line 1001 "error_util.m"
                    {
#line 1001 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1001 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1001 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1001 "error_util.m"
                    }
#line 995 "error_util.m"
                }
#line 994 "error_util.m"
                break;
#line 994 "error_util.m"
              case (MR_Integer) 2:
#line 1004 "error_util.m"
                {
#line 1004 "error_util.m"
                  MR_Word parse_tree__error_util__AlwaysOrOnce_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 0)));
#line 1004 "error_util.m"
                  MR_Word parse_tree__error_util__VerboseErrors_43;
#line 1004 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 1)));

#line 1005 "error_util.m"
                  {
#line 1005 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_43);
                  }
#line 1028 "error_util.m"
#line 1028 "error_util.m"
                  switch (parse_tree__error_util__VerboseErrors_43) {
#line 1028 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1028 "error_util.m"
                    case (MR_Integer) 0:
#line 1029 "error_util.m"
                      {
#line 1030 "error_util.m"
                        {
#line 1030 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 1029 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1029 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1029 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1029 "error_util.m"
                      }
#line 1028 "error_util.m"
                      break;
#line 1028 "error_util.m"
                    case (MR_Integer) 1:
#line 1014 "error_util.m"
#line 1014 "error_util.m"
                      switch (parse_tree__error_util__AlwaysOrOnce_42) {
#line 1014 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1014 "error_util.m"
                        case (MR_Integer) 0:
#line 1009 "error_util.m"
                          {
#line 1010 "error_util.m"
                            {
#line 1010 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                            }
#line 1012 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1013 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1009 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1009 "error_util.m"
                          }
#line 1014 "error_util.m"
                          break;
#line 1014 "error_util.m"
                        case (MR_Integer) 1:
#line 1020 "error_util.m"
                          {
#line 1017 "error_util.m"
                            {
#line 1017 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, ((MR_Box) (parse_tree__error_util__ComponentPieces_86)));
                            }
#line 1020 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1019 "error_util.m"
                              {
#line 1019 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1019 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1019 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1019 "error_util.m"
                              }
#line 1020 "error_util.m"
                            else
#line 1022 "error_util.m"
                              {
#line 1021 "error_util.m"
                                {
#line 1021 "error_util.m"
                                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                                }
#line 1023 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1024 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1025 "error_util.m"
                                {
#line 1025 "error_util.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__ComponentPieces_86)), parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                                }
#line 1022 "error_util.m"
                              }
#line 1020 "error_util.m"
                          }
#line 1014 "error_util.m"
                          break;
#line 1014 "error_util.m"
                      }
#line 1028 "error_util.m"
                      break;
#line 1028 "error_util.m"
                  }
#line 1004 "error_util.m"
                }
#line 994 "error_util.m"
                break;
#line 994 "error_util.m"
              case (MR_Integer) 3:
#line 994 "error_util.m"
#line 994 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 0)))) {
#line 994 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 994 "error_util.m"
                  case (MR_Integer) 0:
#line 1033 "error_util.m"
                    {
#line 1033 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 1033 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2)));
#line 1033 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_87;

#line 1034 "error_util.m"
                      {
#line 1034 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_87);
                      }
#line 1039 "error_util.m"
#line 1039 "error_util.m"
                      switch (parse_tree__error_util__VerboseErrors_87) {
#line 1039 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "error_util.m"
                        case (MR_Integer) 0:
#line 1040 "error_util.m"
                          {
#line 1041 "error_util.m"
                            {
#line 1041 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__NonVerbosePieces_45);
                            }
#line 1043 "error_util.m"
                            {
#line 1043 "error_util.m"
                              libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                            }
#line 1040 "error_util.m"
                          }
#line 1039 "error_util.m"
                          break;
#line 1039 "error_util.m"
                        case (MR_Integer) 1:
#line 1037 "error_util.m"
                          {
#line 1037 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__VerbosePieces_44);
                          }
#line 1039 "error_util.m"
                          break;
#line 1039 "error_util.m"
                      }
#line 1045 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1046 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1033 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1033 "error_util.m"
                    }
#line 994 "error_util.m"
                    break;
#line 994 "error_util.m"
                  case (MR_Integer) 1:
#line 1048 "error_util.m"
                    {
#line 1048 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 1048 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_46 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2));
#line 204 "error_util.m"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 0)), (MR_Integer) 5)));
#line 204 "error_util.m"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79;

#line 204 "error_util.m"
                      {
#line 204 "error_util.m"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_90), parse_tree__error_util__Anything_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79);
                      }
#line 1050 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1051 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1048 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1048 "error_util.m"
                    }
#line 994 "error_util.m"
                    break;
#line 994 "error_util.m"
                }
#line 994 "error_util.m"
                break;
#line 994 "error_util.m"
            }
#line 1053 "error_util.m"
            /* direct tailcall eliminated */
#line 1053 "error_util.m"
            {
#line 1053 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_29;
#line 1053 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 1053 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;
#line 1053 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;

#line 1053 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9;
#line 1053 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 1053 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 1053 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1053 "error_util.m"
            }
#line 1053 "error_util.m"
            continue;
#line 987 "error_util.m"
          }
#line 984 "error_util.m"
      }
#line 984 "error_util.m"
      break;
#line 984 "error_util.m"
    }
#line 977 "error_util.m"
}

#line 945 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 945 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 945 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 945 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7)
#line 945 "error_util.m"
{
#line 951 "error_util.m"
  while (MR_TRUE)
#line 951 "error_util.m"
    {
#line 951 "error_util.m"
      /* tailcall optimized into a loop */
#line 951 "error_util.m"
      {
#line 951 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 951 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "error_util.m"
          {
#line 952 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6;
#line 951 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 951 "error_util.m"
          }
#line 951 "error_util.m"
        else
#line 954 "error_util.m"
          {
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__Msg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__Components_29;
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_30;
#line 954 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_32;
#line 954 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_33;
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_41_41;
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 954 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 16315 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_21)) == (MR_mktag((MR_Integer) 1))))
#line 16317 "parse_tree.error_util.c"
              {
#line 16319 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_31;

#line 961 "error_util.m"
                parse_tree__error_util__MaybeContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 0)));
#line 961 "error_util.m"
                parse_tree__error_util__TreatAsFirst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 961 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 2)));
#line 961 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 3)));
#line 967 "error_util.m"
#line 967 "error_util.m"
                switch (parse_tree__error_util__TreatAsFirst_31) {
#line 967 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 967 "error_util.m"
                  case (MR_Integer) 1:
#line 968 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 967 "error_util.m"
                    break;
#line 967 "error_util.m"
                  case (MR_Integer) 0:
#line 966 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = (MR_Integer) 0;
#line 967 "error_util.m"
                    break;
#line 967 "error_util.m"
                }
#line 16349 "parse_tree.error_util.c"
              }
#line 16351 "parse_tree.error_util.c"
            else
#line 16353 "parse_tree.error_util.c"
              {
#line 16355 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 0)));

#line 956 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 957 "error_util.m"
                {
#line 957 "error_util.m"
                  parse_tree__error_util__MaybeContext_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 957 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_30, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_28));
#line 957 "error_util.m"
                }
#line 959 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = (MR_Integer) 0;
#line 968 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 16372 "parse_tree.error_util.c"
              }
#line 971 "error_util.m"
            parse_tree__error_util__Indent_33 = (parse_tree__error_util__ExtraIndentLevel_32 * (MR_Integer) 2);
#line 972 "error_util.m"
            {
#line 972 "error_util.m"
              parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__Components_29, parse_tree__error_util__MaybeContext_30, parse_tree__error_util__Indent_33, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_41_41, &parse_tree__error_util__STATE_VARIABLE_First_43_43, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45);
            }
#line 974 "error_util.m"
            /* direct tailcall eliminated */
#line 974 "error_util.m"
            {
#line 974 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_22;
#line 974 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 974 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 974 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 974 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6;
#line 974 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 974 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 974 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 974 "error_util.m"
            }
#line 974 "error_util.m"
            continue;
#line 954 "error_util.m"
          }
#line 951 "error_util.m"
      }
#line 951 "error_util.m"
      break;
#line 951 "error_util.m"
    }
#line 945 "error_util.m"
}

#line 893 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 893 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 893 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 893 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 893 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 893 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 893 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 893 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 893 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28)
#line 893 "error_util.m"
{
#line 899 "error_util.m"
  {
#line 899 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 899 "error_util.m"
    MR_Word parse_tree__error_util__Severity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 0)));
#line 899 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 2)));
#line 899 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_20;
#line 899 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_21;
#line 900 "error_util.m"
    MR_Word parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 1)));

#line 901 "error_util.m"
    {
#line 901 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_9_p_0(parse_tree__error_util__Msgs_19, parse_tree__error_util__Globals_11, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_20, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 903 "error_util.m"
    {
#line 903 "error_util.m"
      parse_tree__error_util__MaybeActual_21 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_11, parse_tree__error_util__Severity_17);
    }
#line 914 "error_util.m"
#line 914 "error_util.m"
    switch (parse_tree__error_util__PrintedSome_20) {
#line 914 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 914 "error_util.m"
      case (MR_Integer) 1:
#line 905 "error_util.m"
        {
#line 905 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 905 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 905 "error_util.m"
        }
#line 914 "error_util.m"
        break;
#line 914 "error_util.m"
      case (MR_Integer) 0:
#line 929 "error_util.m"
        if ((parse_tree__error_util__MaybeActual_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "error_util.m"
          {
#line 931 "error_util.m"
            {
#line 931 "error_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/10", (MR_String) "MaybeActual is no");
#line 931 "error_util.m"
              return;
            }
#line 930 "error_util.m"
          }
#line 929 "error_util.m"
        else
#line 917 "error_util.m"
          {
#line 917 "error_util.m"
            MR_Word parse_tree__error_util__Actual_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_21, (MR_Integer) 0)));

#line 922 "error_util.m"
#line 922 "error_util.m"
            switch (parse_tree__error_util__Actual_22) {
#line 922 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 922 "error_util.m"
              case (MR_Integer) 0:
#line 919 "error_util.m"
                {
#line 920 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25 + (MR_Integer) 1);
#line 921 "error_util.m"
                  {
#line 921 "error_util.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
#line 919 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 919 "error_util.m"
                }
#line 922 "error_util.m"
                break;
#line 922 "error_util.m"
              case (MR_Integer) 2:
#line 927 "error_util.m"
                {
#line 927 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 927 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 927 "error_util.m"
                }
#line 922 "error_util.m"
                break;
#line 922 "error_util.m"
              case (MR_Integer) 1:
#line 923 "error_util.m"
                {
#line 924 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23 + (MR_Integer) 1);
#line 925 "error_util.m"
                  {
#line 925 "error_util.m"
                    libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_11);
                  }
#line 923 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 923 "error_util.m"
                }
#line 922 "error_util.m"
                break;
#line 922 "error_util.m"
            }
#line 917 "error_util.m"
          }
#line 914 "error_util.m"
        break;
#line 914 "error_util.m"
    }
#line 899 "error_util.m"
  }
#line 893 "error_util.m"
}

#line 840 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 840 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 840 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 840 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 840 "error_util.m"
{
#line 843 "error_util.m"
  {
#line 843 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 843 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 843 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 843 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 843 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 843 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 844 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 844 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 845 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 845 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 846 "error_util.m"
    {
#line 846 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 847 "error_util.m"
    {
#line 847 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 848 "error_util.m"
    {
#line 848 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 849 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 851 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 850 "error_util.m"
      {
#line 850 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
      }
#line 851 "error_util.m"
    else
#line 852 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 843 "error_util.m"
  }
#line 840 "error_util.m"
}

#line 805 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(
#line 805 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 805 "error_util.m"
  MR_Word parse_tree__error_util__Component_6,
#line 805 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18,
#line 805 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_ComponentCord_19)
#line 805 "error_util.m"
{
#line 811 "error_util.m"
  {
#line 811 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 811 "error_util.m"
#line 811 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__Component_6)) {
#line 811 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 811 "error_util.m"
      case (MR_Integer) 0:
#line 811 "error_util.m"
      case (MR_Integer) 2:
#line 836 "error_util.m"
        {
#line 837 "error_util.m"
          {
#line 837 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (parse_tree__error_util__Component_6)));
          }
#line 836 "error_util.m"
        }
#line 811 "error_util.m"
        break;
#line 811 "error_util.m"
      case (MR_Integer) 1:
#line 811 "error_util.m"
        {
#line 811 "error_util.m"
          MR_Word parse_tree__error_util__Option_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 811 "error_util.m"
          MR_Word parse_tree__error_util__RequiredValue_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 811 "error_util.m"
          MR_Word parse_tree__error_util__EmbeddedComponents_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 811 "error_util.m"
          MR_Word parse_tree__error_util__OptionValue_11;

#line 816 "error_util.m"
          {
#line 816 "error_util.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_5, parse_tree__error_util__Option_8, &parse_tree__error_util__OptionValue_11);
          }
#line 817 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_11 == parse_tree__error_util__RequiredValue_9);
#line 820 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 818 "error_util.m"
            {
#line 818 "error_util.m"
              MR_Word parse_tree__error_util__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0;
#line 818 "error_util.m"
              MR_Word parse_tree__error_util__V_22_22;

#line 819 "error_util.m"
              {
#line 819 "error_util.m"
                parse_tree__error_util__V_22_22 = mercury__cord__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_23_23, parse_tree__error_util__EmbeddedComponents_10);
              }
#line 819 "error_util.m"
              {
#line 819 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_23_23, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, parse_tree__error_util__V_22_22);
              }
#line 818 "error_util.m"
            }
#line 820 "error_util.m"
          else
#line 820 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18;
#line 811 "error_util.m"
        }
#line 811 "error_util.m"
        break;
#line 811 "error_util.m"
      case (MR_Integer) 3:
#line 836 "error_util.m"
        {
#line 837 "error_util.m"
          {
#line 837 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (parse_tree__error_util__Component_6)));
          }
#line 836 "error_util.m"
        }
#line 811 "error_util.m"
        break;
#line 811 "error_util.m"
    }
#line 811 "error_util.m"
  }
#line 805 "error_util.m"
}

#line 797 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1(
#line 797 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 797 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 797 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 797 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 797 "error_util.m"
{
#line 797 "error_util.m"
  {
#line 797 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 797 "error_util.m"
    MR_Word parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19;

#line 797 "error_util.m"
    {
#line 797 "error_util.m"
      parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19);
    }
#line 797 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19));
#line 797 "error_util.m"
  }
#line 797 "error_util.m"
}

#line 783 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0(
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__Msg0_5,
#line 783 "error_util.m"
  MR_Word * parse_tree__error_util__Msg_6)
#line 783 "error_util.m"
{
#line 786 "error_util.m"
  {
#line 786 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_21_21;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__Components0_8;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContext_9;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__TreatAsFirst_10;
#line 786 "error_util.m"
    MR_Integer parse_tree__error_util__ExtraIndent_11;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__ComponentCord_12;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__Components_13;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;
#line 786 "error_util.m"
    MR_Word parse_tree__error_util__V_17_17;
#line 797 "error_util.m"
    MR_Box parse_tree__error_util__conv1_ComponentCord_12;
#line 803 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;
#line 803 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;

#line 793 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__Msg0_5)) == (MR_mktag((MR_Integer) 1))))
#line 794 "error_util.m"
      {
#line 794 "error_util.m"
        parse_tree__error_util__MaybeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 0)));
#line 794 "error_util.m"
        parse_tree__error_util__TreatAsFirst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 1)));
#line 794 "error_util.m"
        parse_tree__error_util__ExtraIndent_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 2)));
#line 794 "error_util.m"
        parse_tree__error_util__Components0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 3)));
#line 794 "error_util.m"
      }
#line 793 "error_util.m"
    else
#line 789 "error_util.m"
      {
#line 789 "error_util.m"
        MR_Word parse_tree__error_util__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg0_5, (MR_Integer) 0)));

#line 789 "error_util.m"
        parse_tree__error_util__Components0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg0_5, (MR_Integer) 1)));
#line 790 "error_util.m"
        {
#line 790 "error_util.m"
          parse_tree__error_util__MaybeContext_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 790 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_9, 0) = ((MR_Box) (parse_tree__error_util__Context_7));
#line 790 "error_util.m"
        }
#line 791 "error_util.m"
        parse_tree__error_util__TreatAsFirst_10 = (MR_Integer) 1;
#line 792 "error_util.m"
        parse_tree__error_util__ExtraIndent_11 = (MR_Integer) 0;
#line 789 "error_util.m"
      }
#line 16849 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0;
#line 797 "error_util.m"
    {
#line 797 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 797 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_7[0]));
#line 797 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1));
#line 797 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 797 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 3) = ((MR_Box) (parse_tree__error_util__Globals_4));
#line 797 "error_util.m"
    }
#line 798 "error_util.m"
    {
#line 798 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__cord__init_0_f_0(parse_tree__error_util__TypeCtorInfo_21_21);
    }
#line 797 "error_util.m"
    {
#line 797 "error_util.m"
      mercury__list__foldl_4_p_0(parse_tree__error_util__TypeCtorInfo_21_21, (MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__V_16_16, parse_tree__error_util__Components0_8, ((MR_Box) (parse_tree__error_util__V_17_17)), &parse_tree__error_util__conv1_ComponentCord_12);
    }
#line 797 "error_util.m"
    parse_tree__error_util__ComponentCord_12 = ((MR_Word) parse_tree__error_util__conv1_ComponentCord_12);
#line 799 "error_util.m"
    {
#line 799 "error_util.m"
      parse_tree__error_util__Components_13 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_21_21, parse_tree__error_util__ComponentCord_12);
    }
#line 803 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_13)) == (MR_mktag((MR_Integer) 1)));
#line 803 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 803 "error_util.m"
      {
#line 803 "error_util.m"
        parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_13, (MR_Integer) 0)));
#line 803 "error_util.m"
        parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_13, (MR_Integer) 1)));
#line 800 "error_util.m"
        {
#line 800 "error_util.m"
          MR_Word base;
#line 800 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 800 "error_util.m"
          *parse_tree__error_util__Msg_6 = base;
#line 800 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__MaybeContext_9));
#line 800 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__TreatAsFirst_10));
#line 800 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__error_util__ExtraIndent_11));
#line 800 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__error_util__Components_13));
#line 800 "error_util.m"
        }
#line 800 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 803 "error_util.m"
      }
#line 786 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 786 "error_util.m"
  }
#line 783 "error_util.m"
}

#line 762 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1(
#line 762 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 762 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 762 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2)
#line 762 "error_util.m"
{
#line 762 "error_util.m"
  {
#line 762 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 762 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 762 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Msg_6;

#line 762 "error_util.m"
    {
#line 762 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__remove_conditionals_in_msg_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), &parse_tree__error_util__conv0_Msg_6);
    }
#line 762 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 762 "error_util.m"
      {
#line 762 "error_util.m"
        *parse_tree__error_util__wrapper_arg_2 = ((MR_Box) (parse_tree__error_util__conv0_Msg_6));
#line 762 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 762 "error_util.m"
      }
#line 762 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 762 "error_util.m"
  }
#line 762 "error_util.m"
}

#line 756 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0(
#line 756 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 756 "error_util.m"
  MR_Word parse_tree__error_util__Spec0_5,
#line 756 "error_util.m"
  MR_Word * parse_tree__error_util__Spec_6)
#line 756 "error_util.m"
{
#line 759 "error_util.m"
  {
#line 759 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_19_19;
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__Severity0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 0)));
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__Phase_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 1)));
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__Msgs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 2)));
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActualSeverity_10;
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_11;
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__ActualSeverity_12;
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__Severity_15;
#line 759 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;
#line 765 "error_util.m"
    MR_Word parse_tree__error_util__V_13_13;
#line 765 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 761 "error_util.m"
    {
#line 761 "error_util.m"
      parse_tree__error_util__MaybeActualSeverity_10 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Severity0_7);
    }
#line 17006 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0;
#line 762 "error_util.m"
    {
#line 762 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 762 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[3]));
#line 762 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1));
#line 762 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 3) = ((MR_Box) (parse_tree__error_util__Globals_4));
#line 762 "error_util.m"
    }
#line 762 "error_util.m"
    {
#line 762 "error_util.m"
      mercury__list__filter_map_3_p_0(parse_tree__error_util__TypeCtorInfo_19_19, parse_tree__error_util__TypeCtorInfo_19_19, parse_tree__error_util__V_16_16, parse_tree__error_util__Msgs0_9, &parse_tree__error_util__Msgs_11);
    }
#line 765 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Msgs_11)) == (MR_mktag((MR_Integer) 1)));
#line 765 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 765 "error_util.m"
      {
#line 765 "error_util.m"
        parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msgs_11, (MR_Integer) 0)));
#line 765 "error_util.m"
        parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msgs_11, (MR_Integer) 1)));
#line 764 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__MaybeActualSeverity_10)) == (MR_mktag((MR_Integer) 1)));
#line 764 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 764 "error_util.m"
          {
#line 764 "error_util.m"
            parse_tree__error_util__ActualSeverity_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActualSeverity_10, (MR_Integer) 0)));
#line 770 "error_util.m"
#line 770 "error_util.m"
            switch (parse_tree__error_util__ActualSeverity_12) {
#line 770 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 770 "error_util.m"
              case (MR_Integer) 0:
#line 769 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 770 "error_util.m"
                break;
#line 770 "error_util.m"
              case (MR_Integer) 2:
#line 775 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 770 "error_util.m"
                break;
#line 770 "error_util.m"
              case (MR_Integer) 1:
#line 772 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 770 "error_util.m"
                break;
#line 770 "error_util.m"
            }
#line 777 "error_util.m"
            {
#line 777 "error_util.m"
              MR_Word base;
#line 777 "error_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 777 "error_util.m"
              *parse_tree__error_util__Spec_6 = base;
#line 777 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__error_util__Severity_15));
#line 777 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__error_util__Phase_8));
#line 777 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__error_util__Msgs_11));
#line 777 "error_util.m"
            }
#line 777 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 764 "error_util.m"
          }
#line 765 "error_util.m"
      }
#line 759 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 759 "error_util.m"
  }
#line 756 "error_util.m"
}

#line 648 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 648 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 648 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 648 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 648 "error_util.m"
{
#line 651 "error_util.m"
  {
#line 651 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 651 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 651 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 651 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 669 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 669 "error_util.m"
      {
#line 669 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 672 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 672 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 672 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 669 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
        else
#line 673 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 669 "error_util.m"
      }
#line 669 "error_util.m"
    else
#line 669 "error_util.m"
      {
#line 669 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 669 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 670 "error_util.m"
        {
#line 670 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 670 "error_util.m"
        }
#line 669 "error_util.m"
      }
#line 669 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 669 "error_util.m"
      {
#line 669 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 672 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 672 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 672 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 669 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
        else
#line 673 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 669 "error_util.m"
      }
#line 669 "error_util.m"
    else
#line 669 "error_util.m"
      {
#line 669 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 669 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 670 "error_util.m"
        {
#line 670 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 670 "error_util.m"
        }
#line 669 "error_util.m"
      }
#line 654 "error_util.m"
    {
#line 654 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 658 "error_util.m"
#line 658 "error_util.m"
    switch (parse_tree__error_util__ContextResult_9) {
#line 658 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 658 "error_util.m"
      case (MR_Integer) 1:
#line 658 "error_util.m"
      case (MR_Integer) 2:
#line 662 "error_util.m"
        *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 658 "error_util.m"
        break;
#line 658 "error_util.m"
      case (MR_Integer) 0:
#line 657 "error_util.m"
        {
#line 657 "error_util.m"
          parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
        }
#line 658 "error_util.m"
        break;
#line 658 "error_util.m"
    }
#line 651 "error_util.m"
  }
#line 648 "error_util.m"
}

#line 634 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 634 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 634 "error_util.m"
{
#line 636 "error_util.m"
  {
#line 636 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 636 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 636 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "error_util.m"
    else
#line 637 "error_util.m"
      {
#line 637 "error_util.m"
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 637 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 638 "error_util.m"
        {
#line 638 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 17273 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 17275 "parse_tree.error_util.c"
          {
#line 17277 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 672 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 672 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 672 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 17286 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 17290 "parse_tree.error_util.c"
            else
#line 17292 "parse_tree.error_util.c"
              {
#line 17294 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 642 "error_util.m"
                {
#line 642 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 642 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 642 "error_util.m"
                }
#line 17307 "parse_tree.error_util.c"
              }
#line 17309 "parse_tree.error_util.c"
          }
#line 17311 "parse_tree.error_util.c"
        else
#line 17313 "parse_tree.error_util.c"
          {
#line 17315 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 669 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 642 "error_util.m"
            {
#line 642 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 642 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 642 "error_util.m"
            }
#line 17330 "parse_tree.error_util.c"
          }
#line 637 "error_util.m"
      }
#line 636 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 636 "error_util.m"
  }
#line 634 "error_util.m"
}

#line 573 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 573 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 573 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 573 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 573 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 573 "error_util.m"
{
#line 576 "error_util.m"
  while (MR_TRUE)
#line 576 "error_util.m"
    {
#line 576 "error_util.m"
      /* tailcall optimized into a loop */
#line 576 "error_util.m"
      {
#line 576 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 576 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 576 "error_util.m"
        else
#line 577 "error_util.m"
          {
#line 577 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 577 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 577 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 577 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 577 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 578 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 578 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 579 "error_util.m"
            {
#line 579 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 583 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 583 "error_util.m"
            else
#line 583 "error_util.m"
              {
#line 583 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 583 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 583 "error_util.m"
                else
#line 587 "error_util.m"
                  {
#line 587 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 587 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 589 "error_util.m"
                    {
#line 589 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 589 "error_util.m"
                    {
#line 589 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 589 "error_util.m"
                    }
#line 587 "error_util.m"
                  }
#line 583 "error_util.m"
              }
#line 591 "error_util.m"
            /* direct tailcall eliminated */
#line 591 "error_util.m"
            {
#line 591 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 591 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 591 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 591 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 591 "error_util.m"
            }
#line 591 "error_util.m"
            continue;
#line 577 "error_util.m"
          }
#line 576 "error_util.m"
      }
#line 576 "error_util.m"
      break;
#line 576 "error_util.m"
    }
#line 573 "error_util.m"
}

#line 500 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 500 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 500 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 500 "error_util.m"
{
#line 1851 "error_util.m"
  {
#line 1851 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1851 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1851 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1852 "error_util.m"
    {
#line 1852 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1853 "error_util.m"
    {
#line 1853 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1854 "error_util.m"
    {
#line 1854 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1855 "error_util.m"
    {
#line 1855 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1856 "error_util.m"
    {
#line 1856 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1856 "error_util.m"
    {
#line 1856 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1857 "error_util.m"
    {
#line 1857 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1859 "error_util.m"
    {
#line 1859 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 1851 "error_util.m"
  }
#line 500 "error_util.m"
}

#line 492 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 492 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 492 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 492 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 492 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 492 "error_util.m"
{
#line 1845 "error_util.m"
  {
#line 1845 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1845 "error_util.m"
    MR_Word parse_tree__error_util__V_24_24;
#line 1845 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_34;
#line 1845 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_35;

#line 1846 "error_util.m"
    {
#line 1846 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 1142 "error_util.m"
    {
#line 1142 "error_util.m"
      parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1142 "error_util.m"
    }
#line 1156 "error_util.m"
    {
#line 1156 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_34);
    }
#line 1158 "error_util.m"
    {
#line 1158 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_35);
    }
#line 1159 "error_util.m"
    {
#line 1159 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_24_24, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_34, parse_tree__error_util__LimitErrorContextsMap_35, parse_tree__error_util__Components_10);
    }
#line 1845 "error_util.m"
  }
#line 492 "error_util.m"
}

#line 487 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 487 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 487 "error_util.m"
{
#line 1830 "error_util.m"
  {
#line 1830 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1830 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1830 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1839 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1839 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1833 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1831 "error_util.m"
    {
#line 1831 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1833 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1833 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1833 "error_util.m"
      {
#line 1833 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1833 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1834 "error_util.m"
        {
#line 1834 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1833 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1833 "error_util.m"
          {
#line 1835 "error_util.m"
            {
#line 1835 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1835 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1833 "error_util.m"
          }
#line 1833 "error_util.m"
      }
#line 1839 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1837 "error_util.m"
      {
#line 1837 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1837 "error_util.m"
        {
#line 1837 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1837 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1837 "error_util.m"
        }
#line 1838 "error_util.m"
        {
#line 1838 "error_util.m"
          parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1837 "error_util.m"
      }
#line 1839 "error_util.m"
    else
#line 1840 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1830 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1830 "error_util.m"
  }
#line 487 "error_util.m"
}

#line 482 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 482 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 482 "error_util.m"
{
#line 1828 "error_util.m"
  {
#line 1828 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1828 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1828 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1828 "error_util.m"
    {
#line 1828 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1828 "error_util.m"
    {
#line 1828 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1828 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1828 "error_util.m"
  }
#line 482 "error_util.m"
}

#line 478 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 478 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 478 "error_util.m"
{
#line 1825 "error_util.m"
  {
#line 1825 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1825 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1825 "error_util.m"
#line 1825 "error_util.m"
    switch (parse_tree__error_util__HeadVar__1_1) {
#line 1825 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1825 "error_util.m"
      case (MR_Integer) 1:
#line 1826 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1825 "error_util.m"
        break;
#line 1825 "error_util.m"
      case (MR_Integer) 0:
#line 1825 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1825 "error_util.m"
        break;
#line 1825 "error_util.m"
    }
#line 1825 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1825 "error_util.m"
  }
#line 478 "error_util.m"
}

#line 476 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 476 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 476 "error_util.m"
{
#line 1818 "error_util.m"
  {
#line 1818 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1818 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1818 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1818 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1818 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1818 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1818 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1818 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1818 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1818 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1820 "error_util.m"
    {
#line 1820 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1820 "error_util.m"
    {
#line 1820 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1820 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1820 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19])));
#line 1820 "error_util.m"
    }
#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1819 "error_util.m"
    }
#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1819 "error_util.m"
    }
#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1819 "error_util.m"
    }
#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1818 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1818 "error_util.m"
  }
#line 476 "error_util.m"
}

#line 474 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 474 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 474 "error_util.m"
{
#line 1822 "error_util.m"
  {
#line 1822 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1822 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1822 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1822 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1822 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1823 "error_util.m"
    {
#line 1823 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1823 "error_util.m"
    {
#line 1823 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1823 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19])));
#line 1823 "error_util.m"
    }
#line 1823 "error_util.m"
    {
#line 1823 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1823 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1823 "error_util.m"
    }
#line 1823 "error_util.m"
    {
#line 1823 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1822 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1822 "error_util.m"
  }
#line 474 "error_util.m"
}

#line 470 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 470 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 470 "error_util.m"
{
#line 1291 "error_util.m"
  {
#line 1291 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1291 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1292 "error_util.m"
    {
#line 1292 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1291 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1291 "error_util.m"
  }
#line 470 "error_util.m"
}

#line 466 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 466 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 466 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 466 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 466 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 466 "error_util.m"
{
#line 1146 "error_util.m"
  {
#line 1146 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1146 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_24;
#line 1146 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_25;

#line 1156 "error_util.m"
    {
#line 1156 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_24);
    }
#line 1158 "error_util.m"
    {
#line 1158 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_25);
    }
#line 1159 "error_util.m"
    {
#line 1159 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_24, parse_tree__error_util__LimitErrorContextsMap_25, parse_tree__error_util__Components_10);
    }
#line 1146 "error_util.m"
  }
#line 466 "error_util.m"
}

#line 463 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
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
#line 1141 "error_util.m"
  {
#line 1141 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1141 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1141 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_25;
#line 1141 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_26;

#line 1142 "error_util.m"
    {
#line 1142 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1142 "error_util.m"
    }
#line 1156 "error_util.m"
    {
#line 1156 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_25);
    }
#line 1158 "error_util.m"
    {
#line 1158 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_26);
    }
#line 1159 "error_util.m"
    {
#line 1159 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_15_15, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_25, parse_tree__error_util__LimitErrorContextsMap_26, parse_tree__error_util__Components_10);
    }
#line 1141 "error_util.m"
  }
#line 463 "error_util.m"
}

#line 455 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 455 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 455 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 455 "error_util.m"
{
#line 1125 "error_util.m"
  {
#line 1125 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1125 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsg_9;
#line 1125 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsgPieces_10;
#line 1125 "error_util.m"
    MR_Word parse_tree__error_util__Components_11;
#line 1125 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1125 "error_util.m"
    MR_String parse_tree__error_util__V_16_16;
#line 1125 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;

#line 1127 "error_util.m"
    {
#line 1127 "error_util.m"
      parse_tree__error_util__LinesInMsg_9 = mercury__string__split_at_char_2_f_0((MR_Char) 10, parse_tree__error_util__Msg_6);
    }
#line 1128 "error_util.m"
    {
#line 1128 "error_util.m"
      parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__LinesInMsg_9, &parse_tree__error_util__LinesInMsgPieces_10);
    }
#line 1129 "error_util.m"
    {
#line 1129 "error_util.m"
      parse_tree__error_util__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 1129 "error_util.m"
    {
#line 1129 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "error_util.m"
      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1129 "error_util.m"
    }
#line 1129 "error_util.m"
    {
#line 1129 "error_util.m"
      parse_tree__error_util__Components_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1129 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 1) = ((MR_Box) (parse_tree__error_util__LinesInMsgPieces_10));
#line 1129 "error_util.m"
    }
#line 1131 "error_util.m"
    {
#line 1131 "error_util.m"
      parse_tree__error_util__V_22_22 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2]);
    }
#line 1130 "error_util.m"
    {
#line 1130 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__V_22_22, parse_tree__error_util__Components_11);
    }
#line 1125 "error_util.m"
  }
#line 455 "error_util.m"
}

#line 447 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 447 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 447 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 447 "error_util.m"
{
#line 1121 "error_util.m"
  {
#line 1121 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_22;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_23;

#line 1156 "error_util.m"
    {
#line 1156 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_22);
    }
#line 1158 "error_util.m"
    {
#line 1158 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_5, &parse_tree__error_util__LimitErrorContextsMap_23);
    }
#line 1159 "error_util.m"
    {
#line 1159 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_22, parse_tree__error_util__LimitErrorContextsMap_23, parse_tree__error_util__Components_6);
    }
#line 1121 "error_util.m"
  }
#line 447 "error_util.m"
}

#line 437 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 437 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 437 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 437 "error_util.m"
{
#line 1116 "error_util.m"
  {
#line 1116 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1116 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1116 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1116 "error_util.m"
      {
#line 1116 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 1117 "error_util.m"
        {
#line 1117 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 1116 "error_util.m"
      }
#line 1116 "error_util.m"
    else
#line 1116 "error_util.m"
      {
#line 1116 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1118 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1116 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1118 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 1116 "error_util.m"
        else
#line 1119 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 1116 "error_util.m"
      }
#line 1116 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1116 "error_util.m"
  }
#line 437 "error_util.m"
}

#line 432 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 432 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 432 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 432 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 432 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 432 "error_util.m"
{
#line 1112 "error_util.m"
  {
#line 1112 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1112 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 1112 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1112 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1112 "error_util.m"
    else
#line 1112 "error_util.m"
      {
#line 1112 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1112 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1113 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 1112 "error_util.m"
        else
#line 1114 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1112 "error_util.m"
      }
#line 1112 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 1112 "error_util.m"
  }
#line 432 "error_util.m"
}

#line 424 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 424 "error_util.m"
{
#line 1106 "error_util.m"
  {
#line 1106 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1106 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1106 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1106 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1106 "error_util.m"
    else
#line 1106 "error_util.m"
      {
#line 1106 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1106 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1106 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1107 "error_util.m"
          {
#line 1107 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1107 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 1107 "error_util.m"
            {
#line 1107 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[12]));
            }
#line 1107 "error_util.m"
            {
#line 1107 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 1107 "error_util.m"
          }
#line 1106 "error_util.m"
        else
#line 1108 "error_util.m"
          {
#line 1108 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1108 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 1108 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 1110 "error_util.m"
            {
#line 1110 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 1110 "error_util.m"
            {
#line 1110 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[14]), parse_tree__error_util__V_24_24);
            }
#line 1109 "error_util.m"
            {
#line 1109 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 1108 "error_util.m"
          }
#line 1106 "error_util.m"
      }
#line 1106 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1106 "error_util.m"
  }
#line 424 "error_util.m"
}

#line 413 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 413 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 413 "error_util.m"
{
#line 1099 "error_util.m"
  {
#line 1099 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1099 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1099 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "error_util.m"
    else
#line 1099 "error_util.m"
      {
#line 1099 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1099 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1099 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "error_util.m"
          {
#line 1100 "error_util.m"
            {
#line 1100 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1100 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "error_util.m"
            }
#line 1100 "error_util.m"
          }
#line 1099 "error_util.m"
        else
#line 1099 "error_util.m"
          {
#line 1099 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1099 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1099 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1101 "error_util.m"
              {
#line 1101 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 1101 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 1101 "error_util.m"
                {
#line 1101 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1101 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1101 "error_util.m"
                }
#line 1101 "error_util.m"
                {
#line 1101 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1101 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1101 "error_util.m"
                }
#line 1101 "error_util.m"
                {
#line 1101 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1101 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 1101 "error_util.m"
                }
#line 1101 "error_util.m"
              }
#line 1099 "error_util.m"
            else
#line 1102 "error_util.m"
              {
#line 1102 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 1102 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 1103 "error_util.m"
                {
#line 1103 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1103 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18])));
#line 1103 "error_util.m"
                }
#line 1104 "error_util.m"
                {
#line 1104 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1104 "error_util.m"
                {
#line 1104 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 1102 "error_util.m"
              }
#line 1099 "error_util.m"
          }
#line 1099 "error_util.m"
      }
#line 1099 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1099 "error_util.m"
  }
#line 413 "error_util.m"
}

#line 407 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 407 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 407 "error_util.m"
{
#line 1091 "error_util.m"
  {
#line 1091 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1091 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1091 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1091 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1091 "error_util.m"
    else
#line 1091 "error_util.m"
      {
#line 1091 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1091 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1091 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1092 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 1091 "error_util.m"
        else
#line 1091 "error_util.m"
          {
#line 1091 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1091 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1091 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1093 "error_util.m"
              {
#line 1093 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1093 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 1094 "error_util.m"
                {
#line 1094 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[17]), parse_tree__error_util__V_33_33);
                }
#line 1094 "error_util.m"
                {
#line 1094 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 1093 "error_util.m"
              }
#line 1091 "error_util.m"
            else
#line 1095 "error_util.m"
              {
#line 1095 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1095 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 1095 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 1097 "error_util.m"
                {
#line 1097 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1097 "error_util.m"
                {
#line 1097 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18]), parse_tree__error_util__V_25_25);
                }
#line 1096 "error_util.m"
                {
#line 1096 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 1095 "error_util.m"
              }
#line 1091 "error_util.m"
          }
#line 1091 "error_util.m"
      }
#line 1091 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1091 "error_util.m"
  }
#line 407 "error_util.m"
}

#line 401 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 401 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 401 "error_util.m"
{
#line 1083 "error_util.m"
  {
#line 1083 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1083 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1083 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1083 "error_util.m"
    else
#line 1083 "error_util.m"
      {
#line 1083 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1083 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1083 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "error_util.m"
          {
#line 1084 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1084 "error_util.m"
            {
#line 1084 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1084 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1084 "error_util.m"
            }
#line 1084 "error_util.m"
            {
#line 1084 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1084 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1084 "error_util.m"
            }
#line 1084 "error_util.m"
          }
#line 1083 "error_util.m"
        else
#line 1083 "error_util.m"
          {
#line 1083 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 1083 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 1083 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "error_util.m"
              {
#line 1085 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 1085 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 1085 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 1085 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 1086 "error_util.m"
                {
#line 1086 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1086 "error_util.m"
                }
#line 1086 "error_util.m"
                {
#line 1086 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1086 "error_util.m"
                }
#line 1086 "error_util.m"
                {
#line 1086 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "error_util.m"
                }
#line 1086 "error_util.m"
                {
#line 1086 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1086 "error_util.m"
                }
#line 1086 "error_util.m"
                {
#line 1086 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1086 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1086 "error_util.m"
                }
#line 1085 "error_util.m"
              }
#line 1083 "error_util.m"
            else
#line 1087 "error_util.m"
              {
#line 1087 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 1087 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 1087 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 1088 "error_util.m"
                {
#line 1088 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1088 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1088 "error_util.m"
                }
#line 1089 "error_util.m"
                {
#line 1089 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 1088 "error_util.m"
                {
#line 1088 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[16])));
#line 1088 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 1088 "error_util.m"
                }
#line 1088 "error_util.m"
                {
#line 1088 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1088 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1088 "error_util.m"
                }
#line 1087 "error_util.m"
              }
#line 1083 "error_util.m"
          }
#line 1083 "error_util.m"
      }
#line 1083 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1083 "error_util.m"
  }
#line 401 "error_util.m"
}

#line 397 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 397 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 397 "error_util.m"
{
#line 1077 "error_util.m"
  {
#line 1077 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1077 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1077 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1077 "error_util.m"
    else
#line 1077 "error_util.m"
      {
#line 1077 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1077 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1077 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "error_util.m"
          {
#line 1078 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1078 "error_util.m"
            {
#line 1078 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1078 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1078 "error_util.m"
            }
#line 1078 "error_util.m"
            {
#line 1078 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1078 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1078 "error_util.m"
            }
#line 1078 "error_util.m"
          }
#line 1077 "error_util.m"
        else
#line 1077 "error_util.m"
          {
#line 1077 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1077 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1077 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "error_util.m"
              {
#line 1079 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 1079 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 1079 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 1079 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 1079 "error_util.m"
                {
#line 1079 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1079 "error_util.m"
                }
#line 1079 "error_util.m"
                {
#line 1079 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1079 "error_util.m"
                }
#line 1079 "error_util.m"
                {
#line 1079 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1079 "error_util.m"
                }
#line 1079 "error_util.m"
                {
#line 1079 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1079 "error_util.m"
                }
#line 1079 "error_util.m"
                {
#line 1079 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1079 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1079 "error_util.m"
                }
#line 1079 "error_util.m"
              }
#line 1077 "error_util.m"
            else
#line 1080 "error_util.m"
              {
#line 1080 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 1080 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 1080 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 1081 "error_util.m"
                {
#line 1081 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 1081 "error_util.m"
                {
#line 1081 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1081 "error_util.m"
                }
#line 1081 "error_util.m"
                {
#line 1081 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1081 "error_util.m"
                {
#line 1081 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1081 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1081 "error_util.m"
                }
#line 1080 "error_util.m"
              }
#line 1077 "error_util.m"
          }
#line 1077 "error_util.m"
      }
#line 1077 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1077 "error_util.m"
  }
#line 397 "error_util.m"
}

#line 392 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 392 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 392 "error_util.m"
{
#line 1075 "error_util.m"
  {
#line 1075 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1075 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1075 "error_util.m"
    {
#line 1075 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1075 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 1075 "error_util.m"
    }
#line 1075 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1075 "error_util.m"
  }
#line 392 "error_util.m"
}

#line 890 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_3(
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 890 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 890 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9)
#line 890 "error_util.m"
{
#line 890 "error_util.m"
  {
#line 890 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 890 "error_util.m"
    MR_Integer parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24;
#line 890 "error_util.m"
    MR_Integer parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26;
#line 890 "error_util.m"
    MR_Word parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28;

#line 890 "error_util.m"
    {
#line 890 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26, ((MR_Word) parse_tree__error_util__wrapper_arg_6), &parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 890 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24));
#line 890 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26));
#line 890 "error_util.m"
    *parse_tree__error_util__wrapper_arg_7 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28));
#line 890 "error_util.m"
  }
#line 890 "error_util.m"
}

#line 754 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 754 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 754 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 754 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 754 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 754 "error_util.m"
{
#line 754 "error_util.m"
  {
#line 754 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 754 "error_util.m"
    MR_Word parse_tree__error_util__conv1_Result_6;

#line 754 "error_util.m"
    {
#line 754 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv1_Result_6);
    }
#line 754 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv1_Result_6));
#line 754 "error_util.m"
  }
#line 754 "error_util.m"
}

#line 753 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 753 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 753 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 753 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2)
#line 753 "error_util.m"
{
#line 753 "error_util.m"
  {
#line 753 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 753 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 753 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Spec_6;

#line 753 "error_util.m"
    {
#line 753 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__remove_conditionals_in_spec_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), &parse_tree__error_util__conv0_Spec_6);
    }
#line 753 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 753 "error_util.m"
      {
#line 753 "error_util.m"
        *parse_tree__error_util__wrapper_arg_2 = ((MR_Box) (parse_tree__error_util__conv0_Spec_6));
#line 753 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 753 "error_util.m"
      }
#line 753 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 753 "error_util.m"
  }
#line 753 "error_util.m"
}

#line 284 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 284 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 284 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 284 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16,
#line 284 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_17,
#line 284 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18,
#line 284 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_19)
#line 284 "error_util.m"
{
#line 888 "error_util.m"
  {
#line 888 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_38_38;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_14_51;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__V_25_25;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__V_45_45;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_9_46;
#line 890 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 890 "error_util.m"
    MR_Box parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17;
#line 890 "error_util.m"
    MR_Box parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19;
#line 890 "error_util.m"
    MR_Box parse_tree__error_util__conv6_V_15_15;
#line 890 "error_util.m"
    MR_Box parse_tree__error_util__conv5_STATE_VARIABLE_IO_21;

#line 753 "error_util.m"
    {
#line 753 "error_util.m"
      parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 753 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[1]));
#line 753 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_1));
#line 753 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 753 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 753 "error_util.m"
    }
#line 19141 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_14_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 753 "error_util.m"
    {
#line 753 "error_util.m"
      mercury__list__filter_map_3_p_0(parse_tree__error_util__TypeCtorInfo_14_51, parse_tree__error_util__TypeCtorInfo_14_51, parse_tree__error_util__V_45_45, parse_tree__error_util__Specs0_9, &parse_tree__error_util__STATE_VARIABLE_Specs_9_46);
    }
#line 754 "error_util.m"
    {
#line 754 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0(parse_tree__error_util__TypeCtorInfo_14_51, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__STATE_VARIABLE_Specs_9_46, &parse_tree__error_util__Specs_14);
    }
#line 890 "error_util.m"
    {
#line 890 "error_util.m"
      parse_tree__error_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 890 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 890 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_3));
#line 890 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 890 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 890 "error_util.m"
    }
#line 891 "error_util.m"
    {
#line 891 "error_util.m"
      parse_tree__error_util__V_25_25 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 19172 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 890 "error_util.m"
    {
#line 890 "error_util.m"
      mercury__list__foldl4_10_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_38_38, parse_tree__error_util__TypeCtorInfo_38_38, (MR_Word) &parse_tree__error_util_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_22_22, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16)), &parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18)), &parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19, ((MR_Box) (parse_tree__error_util__V_25_25)), &parse_tree__error_util__conv6_V_15_15, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv5_STATE_VARIABLE_IO_21);
    }
#line 890 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_17 = ((MR_Integer) parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17);
#line 890 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_19 = ((MR_Integer) parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19);
#line 890 "error_util.m"
    parse_tree__error_util__V_15_15 = ((MR_Word) parse_tree__error_util__conv6_V_15_15);
#line 888 "error_util.m"
  }
#line 284 "error_util.m"
}

#line 282 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 282 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 282 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 282 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 282 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 282 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 282 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 282 "error_util.m"
{
#line 884 "error_util.m"
  {
#line 884 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__V_23_23;
#line 885 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 886 "error_util.m"
    {
#line 886 "error_util.m"
      parse_tree__error_util__V_23_23 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 885 "error_util.m"
    {
#line 885 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15, parse_tree__error_util__STATE_VARIABLE_NumWarnings_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17, parse_tree__error_util__STATE_VARIABLE_NumErrors_18, parse_tree__error_util__V_23_23, &parse_tree__error_util__V_14_14);
    }
#line 884 "error_util.m"
  }
#line 282 "error_util.m"
}

#line 259 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 259 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 259 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 259 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 259 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 259 "error_util.m"
{
#line 861 "error_util.m"
  {
#line 861 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 861 "error_util.m"
#line 861 "error_util.m"
    switch (parse_tree__error_util__Verbose_7) {
#line 861 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 861 "error_util.m"
      case (MR_Integer) 0:
#line 861 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 861 "error_util.m"
        break;
#line 861 "error_util.m"
      case (MR_Integer) 1:
#line 863 "error_util.m"
        {
#line 865 "error_util.m"
          MR_Integer parse_tree__error_util___NumWarnings_11;
#line 865 "error_util.m"
          MR_Integer parse_tree__error_util___NumErrors_12;

#line 865 "error_util.m"
          {
#line 865 "error_util.m"
            parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
          }
#line 867 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 863 "error_util.m"
        }
#line 861 "error_util.m"
        break;
#line 861 "error_util.m"
    }
#line 861 "error_util.m"
  }
#line 259 "error_util.m"
}

#line 254 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 254 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 254 "error_util.m"
{
#line 702 "error_util.m"
  {
#line 702 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 702 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 702 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "error_util.m"
    else
#line 703 "error_util.m"
      {
#line 703 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 703 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 703 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 703 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 703 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 703 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 703 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 19324 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 704 "error_util.m"
        {
#line 704 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 704 "error_util.m"
        {
#line 704 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 703 "error_util.m"
      }
#line 702 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 702 "error_util.m"
  }
#line 254 "error_util.m"
}

#line 686 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 686 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 686 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 686 "error_util.m"
{
#line 686 "error_util.m"
  {
#line 686 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 686 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 686 "error_util.m"
    {
#line 686 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__686__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 686 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 686 "error_util.m"
  }
#line 686 "error_util.m"
}

#line 251 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 251 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 251 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 251 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 251 "error_util.m"
{
#line 685 "error_util.m"
  {
#line 685 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 685 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 685 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 685 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 685 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 685 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 686 "error_util.m"
    {
#line 686 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 690 "error_util.m"
    {
#line 690 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 691 "error_util.m"
    {
#line 691 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 697 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "error_util.m"
      {
#line 698 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 699 "error_util.m"
        {
#line 699 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 699 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 699 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 699 "error_util.m"
        }
#line 699 "error_util.m"
        {
#line 699 "error_util.m"
          MR_Word base;
#line 699 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 699 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 699 "error_util.m"
        }
#line 698 "error_util.m"
      }
#line 697 "error_util.m"
    else
#line 693 "error_util.m"
      {
#line 693 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 693 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 693 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 693 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 693 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 693 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 693 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 693 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 694 "error_util.m"
        {
#line 694 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 695 "error_util.m"
        {
#line 695 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 696 "error_util.m"
        {
#line 696 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 696 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 696 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 696 "error_util.m"
        }
#line 696 "error_util.m"
        {
#line 696 "error_util.m"
          MR_Word base;
#line 696 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 696 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 696 "error_util.m"
        }
#line 693 "error_util.m"
      }
#line 685 "error_util.m"
  }
#line 251 "error_util.m"
}

#line 249 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 249 "error_util.m"
{
#line 683 "error_util.m"
  {
#line 683 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 683 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "error_util.m"
  }
#line 249 "error_util.m"
}

#line 632 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 632 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 632 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 632 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 632 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 632 "error_util.m"
{
#line 632 "error_util.m"
  {
#line 632 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 632 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 632 "error_util.m"
    {
#line 632 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 632 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 632 "error_util.m"
  }
#line 632 "error_util.m"
}

#line 238 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 238 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 238 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 238 "error_util.m"
{
#line 631 "error_util.m"
  {
#line 631 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 632 "error_util.m"
    {
#line 632 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
    }
#line 631 "error_util.m"
  }
#line 238 "error_util.m"
}

#line 234 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 234 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 234 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 234 "error_util.m"
{
#line 611 "error_util.m"
  {
#line 611 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 611 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 611 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 571 "error_util.m"
    {
#line 571 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 616 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 616 "error_util.m"
    else
#line 617 "error_util.m"
      {
#line 617 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 623 "error_util.m"
#line 623 "error_util.m"
        switch (parse_tree__error_util__WorstActual_8) {
#line 623 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 623 "error_util.m"
          case (MR_Integer) 0:
#line 623 "error_util.m"
          case (MR_Integer) 1:
#line 622 "error_util.m"
            parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 623 "error_util.m"
            break;
#line 623 "error_util.m"
          case (MR_Integer) 2:
#line 625 "error_util.m"
            parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 623 "error_util.m"
            break;
#line 623 "error_util.m"
        }
#line 617 "error_util.m"
      }
#line 611 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 611 "error_util.m"
  }
#line 234 "error_util.m"
}

#line 229 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 229 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 229 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 229 "error_util.m"
{
#line 593 "error_util.m"
  {
#line 593 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 593 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 593 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 571 "error_util.m"
    {
#line 571 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 598 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 598 "error_util.m"
    else
#line 599 "error_util.m"
      {
#line 599 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 603 "error_util.m"
#line 603 "error_util.m"
        switch (parse_tree__error_util__WorstActual_8) {
#line 603 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 603 "error_util.m"
          case (MR_Integer) 0:
#line 602 "error_util.m"
            parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 603 "error_util.m"
            break;
#line 603 "error_util.m"
          case (MR_Integer) 2:
#line 603 "error_util.m"
          case (MR_Integer) 1:
#line 607 "error_util.m"
            parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 603 "error_util.m"
            break;
#line 603 "error_util.m"
        }
#line 599 "error_util.m"
      }
#line 593 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 593 "error_util.m"
  }
#line 229 "error_util.m"
}

#line 223 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 223 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 223 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 223 "error_util.m"
{
#line 570 "error_util.m"
  {
#line 570 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 570 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 571 "error_util.m"
    {
#line 571 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 570 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 570 "error_util.m"
  }
#line 223 "error_util.m"
}

#line 217 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 217 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 217 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 217 "error_util.m"
{
#line 545 "error_util.m"
  while (MR_TRUE)
#line 545 "error_util.m"
    {
#line 545 "error_util.m"
      /* tailcall optimized into a loop */
#line 545 "error_util.m"
      {
#line 545 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 545 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 545 "error_util.m"
#line 545 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Severity_5)) {
#line 545 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 545 "error_util.m"
          case (MR_Integer) 0:
#line 545 "error_util.m"
#line 545 "error_util.m"
            switch (MR_unmkbody(parse_tree__error_util__Severity_5)) {
#line 545 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 545 "error_util.m"
              case (MR_Integer) 0:
#line 545 "error_util.m"
                {
#line 546 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 545 "error_util.m"
                }
#line 545 "error_util.m"
                break;
#line 545 "error_util.m"
              case (MR_Integer) 1:
#line 548 "error_util.m"
                {
#line 549 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 548 "error_util.m"
                }
#line 545 "error_util.m"
                break;
#line 545 "error_util.m"
              case (MR_Integer) 2:
#line 551 "error_util.m"
                {
#line 552 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 551 "error_util.m"
                }
#line 545 "error_util.m"
                break;
#line 545 "error_util.m"
            }
#line 545 "error_util.m"
            break;
#line 545 "error_util.m"
          case (MR_Integer) 1:
#line 555 "error_util.m"
            {
#line 555 "error_util.m"
              MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 555 "error_util.m"
              MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 555 "error_util.m"
              MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 555 "error_util.m"
              MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 555 "error_util.m"
              MR_Word parse_tree__error_util__Value_11;

#line 556 "error_util.m"
              {
#line 556 "error_util.m"
                libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
              }
#line 557 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 559 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 558 "error_util.m"
                {
#line 558 "error_util.m"
                  /* direct tailcall eliminated */
#line 558 "error_util.m"
                  {
#line 558 "error_util.m"
                    MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 558 "error_util.m"
                    parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 558 "error_util.m"
                  }
#line 558 "error_util.m"
                  continue;
#line 558 "error_util.m"
                }
#line 559 "error_util.m"
              else
#line 563 "error_util.m"
              if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 562 "error_util.m"
                parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "error_util.m"
              else
#line 564 "error_util.m"
                {
#line 564 "error_util.m"
                  MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 565 "error_util.m"
                  /* direct tailcall eliminated */
#line 565 "error_util.m"
                  {
#line 565 "error_util.m"
                    MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 565 "error_util.m"
                    parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 565 "error_util.m"
                  }
#line 565 "error_util.m"
                  continue;
#line 564 "error_util.m"
                }
#line 555 "error_util.m"
            }
#line 545 "error_util.m"
            break;
#line 545 "error_util.m"
        }
#line 545 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 545 "error_util.m"
      }
#line 545 "error_util.m"
      break;
#line 545 "error_util.m"
    }
#line 217 "error_util.m"
}

#line 211 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 211 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 211 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 211 "error_util.m"
{
#line 524 "error_util.m"
  {
#line 524 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 524 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 524 "error_util.m"
#line 524 "error_util.m"
    switch (parse_tree__error_util__HeadVar__1_1) {
#line 524 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 524 "error_util.m"
      case (MR_Integer) 0:
#line 524 "error_util.m"
#line 524 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 524 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 524 "error_util.m"
          case (MR_Integer) 0:
#line 525 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
          case (MR_Integer) 2:
#line 529 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
          case (MR_Integer) 1:
#line 527 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
        }
#line 524 "error_util.m"
        break;
#line 524 "error_util.m"
      case (MR_Integer) 2:
#line 524 "error_util.m"
#line 524 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 524 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 524 "error_util.m"
          case (MR_Integer) 0:
#line 537 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
          case (MR_Integer) 2:
#line 541 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
          case (MR_Integer) 1:
#line 539 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
        }
#line 524 "error_util.m"
        break;
#line 524 "error_util.m"
      case (MR_Integer) 1:
#line 524 "error_util.m"
#line 524 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 524 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 524 "error_util.m"
          case (MR_Integer) 0:
#line 531 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
          case (MR_Integer) 2:
#line 535 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
          case (MR_Integer) 1:
#line 533 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 524 "error_util.m"
            break;
#line 524 "error_util.m"
        }
#line 524 "error_util.m"
        break;
#line 524 "error_util.m"
    }
#line 524 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 524 "error_util.m"
  }
#line 211 "error_util.m"
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
