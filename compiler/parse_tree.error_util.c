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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 101 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 104 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 107 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 110 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 113 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 116 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 119 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 122 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 125 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 128 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 131 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 134 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 137 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 140 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 143 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 146 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 149 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 152 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 155 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 158 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 161 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 164 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 167 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 170 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 173 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 176 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 179 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 182 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 185 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 188 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 191 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 194 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 197 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 200 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 203 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2];

#line 206 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 209 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 212 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 215 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 218 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 221 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 224 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 227 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 230 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 233 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 236 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 239 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 242 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 245 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 248 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 251 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 254 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 257 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 260 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 263 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 266 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 269 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 272 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1];

#line 275 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 278 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 281 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 284 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 287 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1];

#line 290 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 293 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 296 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 299 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 302 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 305 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 308 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 311 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[15];

#line 314 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 317 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 320 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 323 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[17];

#line 326 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[17];

#line 329 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 332 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 335 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 338 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 341 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 344 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 347 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 350 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 353 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 356 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 359 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 362 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 365 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 368 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 371 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 374 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 377 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 380 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 383 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 386 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 389 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 392 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 395 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 398 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 401 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 404 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 407 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 410 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 413 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 416 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 419 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 422 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1];

#line 425 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 428 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 431 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 434 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 437 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 440 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 443 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 446 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 449 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 452 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 455 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 458 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 461 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 464 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 467 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 470 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 473 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 476 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 479 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 482 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 485 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 488 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 491 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1];

#line 494 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 497 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1];

#line 500 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 503 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 506 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1];

#line 509 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19;

#line 512 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20;

#line 515 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1];

#line 518 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_21;

#line 521 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 524 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 527 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 530 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[17];

#line 533 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 536 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[22];

#line 539 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[22];

#line 542 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 545 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 548 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 551 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 554 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 557 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 560 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 563 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 566 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 569 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 572 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 575 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 578 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 581 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 584 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 587 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 590 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 593 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 596 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 599 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 602 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 605 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 608 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 611 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 614 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 617 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 620 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 623 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 626 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 629 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 632 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 635 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 638 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 641 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 644 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 647 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 650 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 653 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 656 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 659 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 662 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 665 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 668 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0;

#line 671 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1;

#line 674 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2];

#line 677 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2];

#line 680 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2];

#line 683 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 686 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 689 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 692 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 695 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 698 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 701 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 704 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 707 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 710 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 713 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 716 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 719 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 722 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 725 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 728 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 731 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 734 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 737 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 739 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 742 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 745 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 747 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 749 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 752 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 755 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 757 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 760 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 763 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 765 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 767 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 770 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 773 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 775 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 778 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 781 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 783 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 785 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 788 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 791 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 793 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 796 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 799 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 801 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 803 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 806 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 809 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 811 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 814 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 817 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 819 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 821 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 824 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 827 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 829 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 832 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 835 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 837 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 839 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 842 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 845 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 847 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 850 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 853 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 855 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 857 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 860 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 863 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 865 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 868 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 871 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 873 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 875 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 878 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 881 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 883 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 886 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 889 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 891 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 893 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 896 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 899 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 901 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 904 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 907 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 909 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 911 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 914 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 917 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 919 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 922 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 925 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 927 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 929 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 932 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 935 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 937 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 940 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 943 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 945 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 947 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 950 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 953 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 955 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 958 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 961 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 963 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 965 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 968 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 971 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 973 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 976 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 979 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 981 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 983 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 986 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 989 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 991 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 994 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 997 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 999 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1001 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1004 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 1007 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1009 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1012 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 1015 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1017 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1019 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1022 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1025 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1027 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1030 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1033 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1035 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1037 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1040 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1043 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1045 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1048 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1051 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1053 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1055 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1058 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 1061 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1063 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1066 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 1069 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1071 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1073 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1076 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1079 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1081 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1084 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1087 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1089 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1091 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 684 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__684__1_1_p_0(
#line 684 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21);

#line 1323 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1323 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1323 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1433 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1433 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1433 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1305 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1305 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1305 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 827 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 827 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 827 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 831 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 831 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 831 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 961 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 961 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 961 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1583 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1583 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1583 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 835 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 835 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 835 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1673 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1673 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1673 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1673 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1673 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1673 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1673 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1648 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1648 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1648 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1648 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1648 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1600 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1600 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1600 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1600 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1600 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1600 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1568 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1568 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1568 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1568 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1558 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1558 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1558 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1558 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1545 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1545 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1545 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1545 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1545 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1540 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1540 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1540 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1540 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1535 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1535 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1530 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1530 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1489 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1489 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1444 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1444 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1438 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1438 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1329 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1329 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1292 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1292 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1292 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1292 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1279 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1279 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1184 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1173 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1173 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1146 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1146 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 1118 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1118 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1118 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2);

#line 1052 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1052 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__Components_14);

#line 1040 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1040 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 1023 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1023 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1023 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2);

#line 869 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 869 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 869 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 869 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 869 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10);

#line 837 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 837 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 837 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7);

#line 785 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 785 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 785 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 785 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 785 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 785 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 785 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 785 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 785 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);

#line 732 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 732 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 732 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 732 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

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

#line 782 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9);

#line 730 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1840 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1848 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1856 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1862 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1868 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1874 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1881 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 1888 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1895 "parse_tree.error_util.c"
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

#line 1912 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1920 "parse_tree.error_util.c"
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

#line 1937 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1945 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1951 "parse_tree.error_util.c"
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

#line 1966 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1971 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 1980 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1985 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 1990 "parse_tree.error_util.c"
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

#line 2007 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 2015 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2021 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 2027 "parse_tree.error_util.c"
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

#line 2042 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2050 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2058 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 2066 "parse_tree.error_util.c"
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

#line 2081 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2086 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 2091 "parse_tree.error_util.c"
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

#line 2105 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2111 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2117 "parse_tree.error_util.c"
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

#line 2134 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2139 "parse_tree.error_util.c"
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

#line 2154 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2161 "parse_tree.error_util.c"
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

#line 2180 "parse_tree.error_util.c"
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

#line 2195 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_verbose_always_or_once_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2201 "parse_tree.error_util.c"
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

#line 2216 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2222 "parse_tree.error_util.c"
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

#line 2237 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2242 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2250 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2255 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2263 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2272 "parse_tree.error_util.c"
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

#line 2287 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2292 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2297 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2302 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2308 "parse_tree.error_util.c"
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

#line 2332 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2341 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2350 "parse_tree.error_util.c"
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

#line 2367 "parse_tree.error_util.c"
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

#line 2382 "parse_tree.error_util.c"
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

#line 2397 "parse_tree.error_util.c"
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

#line 2412 "parse_tree.error_util.c"
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

#line 2427 "parse_tree.error_util.c"
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

#line 2442 "parse_tree.error_util.c"
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

#line 2457 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2462 "parse_tree.error_util.c"
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

#line 2477 "parse_tree.error_util.c"
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

#line 2492 "parse_tree.error_util.c"
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

#line 2507 "parse_tree.error_util.c"
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

#line 2522 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2527 "parse_tree.error_util.c"
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

#line 2542 "parse_tree.error_util.c"
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

#line 2557 "parse_tree.error_util.c"
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

#line 2572 "parse_tree.error_util.c"
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

#line 2587 "parse_tree.error_util.c"
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

#line 2602 "parse_tree.error_util.c"
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

#line 2617 "parse_tree.error_util.c"
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

#line 2632 "parse_tree.error_util.c"
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

#line 2651 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2656 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10
};

#line 2661 "parse_tree.error_util.c"
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

#line 2680 "parse_tree.error_util.c"
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

#line 2701 "parse_tree.error_util.c"
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

#line 2722 "parse_tree.error_util.c"
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

#line 2739 "parse_tree.error_util.c"
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

#line 2754 "parse_tree.error_util.c"
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

#line 2769 "parse_tree.error_util.c"
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

#line 2784 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2792 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2800 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2808 "parse_tree.error_util.c"
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

#line 2823 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2830 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2835 "parse_tree.error_util.c"
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

#line 2849 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2857 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2865 "parse_tree.error_util.c"
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

#line 2882 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 2890 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 2897 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 2904 "parse_tree.error_util.c"
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

#line 2919 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2924 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 2933 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2938 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 2943 "parse_tree.error_util.c"
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

#line 2960 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2968 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2977 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2985 "parse_tree.error_util.c"
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

#line 3002 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3007 "parse_tree.error_util.c"
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

#line 3022 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3027 "parse_tree.error_util.c"
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

#line 3042 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3047 "parse_tree.error_util.c"
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

#line 3062 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3067 "parse_tree.error_util.c"
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

#line 3082 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3087 "parse_tree.error_util.c"
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

#line 3102 "parse_tree.error_util.c"
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

#line 3117 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3122 "parse_tree.error_util.c"
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

#line 3137 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3142 "parse_tree.error_util.c"
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

#line 3157 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3162 "parse_tree.error_util.c"
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

#line 3177 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3182 "parse_tree.error_util.c"
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

#line 3197 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3202 "parse_tree.error_util.c"
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

#line 3217 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3222 "parse_tree.error_util.c"
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

#line 3237 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 3242 "parse_tree.error_util.c"
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

#line 3257 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3262 "parse_tree.error_util.c"
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

#line 3277 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3282 "parse_tree.error_util.c"
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

#line 3297 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3302 "parse_tree.error_util.c"
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

#line 3317 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3322 "parse_tree.error_util.c"
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

#line 3337 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3342 "parse_tree.error_util.c"
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

#line 3357 "parse_tree.error_util.c"
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

#line 3372 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3377 "parse_tree.error_util.c"
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

#line 3392 "parse_tree.error_util.c"
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

#line 3407 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3412 "parse_tree.error_util.c"
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

#line 3427 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20
};

#line 3434 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3439 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3444 "parse_tree.error_util.c"
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

#line 3465 "parse_tree.error_util.c"
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

#line 3489 "parse_tree.error_util.c"
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

#line 3515 "parse_tree.error_util.c"
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

#line 3541 "parse_tree.error_util.c"
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

#line 3558 "parse_tree.error_util.c"
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

#line 3575 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3581 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3587 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3593 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3599 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3605 "parse_tree.error_util.c"
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

#line 3622 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3628 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3634 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3640 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3646 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3652 "parse_tree.error_util.c"
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

#line 3669 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3675 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3681 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3687 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3693 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3699 "parse_tree.error_util.c"
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

#line 3716 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3722 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3728 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3734 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3740 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3746 "parse_tree.error_util.c"
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

#line 3763 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3769 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3775 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3781 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3787 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3793 "parse_tree.error_util.c"
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

#line 3810 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3817 "parse_tree.error_util.c"
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

#line 3832 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3837 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3846 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3851 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3856 "parse_tree.error_util.c"
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

#line 3873 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3878 "parse_tree.error_util.c"
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

#line 3893 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3898 "parse_tree.error_util.c"
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

#line 3913 "parse_tree.error_util.c"
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

#line 3928 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 3933 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 3938 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3943 "parse_tree.error_util.c"
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

#line 3962 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3969 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3976 "parse_tree.error_util.c"
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

#line 3993 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0 = {
  (MR_String) "verbose_always",
  (MR_Integer) 0
};

#line 3999 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1 = {
  (MR_String) "verbose_once",
  (MR_Integer) 1
};

#line 4005 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4011 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4017 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4023 "parse_tree.error_util.c"
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

#line 4040 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4045 "parse_tree.error_util.c"
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

#line 4060 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4065 "parse_tree.error_util.c"
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

#line 4080 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4085 "parse_tree.error_util.c"
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

#line 4100 "parse_tree.error_util.c"
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

#line 4115 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 4120 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 4125 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 4130 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4135 "parse_tree.error_util.c"
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

#line 4159 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4167 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 4175 "parse_tree.error_util.c"
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

#line 4192 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4197 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4206 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4217 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4225 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4228 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4230 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4232 "parse_tree.error_util.c"
{
#line 4234 "parse_tree.error_util.c"
  {
#line 4236 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4239 "parse_tree.error_util.c"
    {
#line 4241 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4244 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4246 "parse_tree.error_util.c"
  }
#line 4248 "parse_tree.error_util.c"
}

#line 4251 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4254 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4256 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4258 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4260 "parse_tree.error_util.c"
{
#line 4262 "parse_tree.error_util.c"
  {
#line 4264 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4267 "parse_tree.error_util.c"
    {
#line 4269 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4272 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4274 "parse_tree.error_util.c"
  }
#line 4276 "parse_tree.error_util.c"
}

#line 4279 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 4282 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4284 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4286 "parse_tree.error_util.c"
{
#line 4288 "parse_tree.error_util.c"
  {
#line 4290 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4293 "parse_tree.error_util.c"
    {
#line 4295 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____already_printed_verbose_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4298 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4300 "parse_tree.error_util.c"
  }
#line 4302 "parse_tree.error_util.c"
}

#line 4305 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 4308 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4310 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4312 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4314 "parse_tree.error_util.c"
{
#line 4316 "parse_tree.error_util.c"
  {
#line 4318 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4321 "parse_tree.error_util.c"
    {
#line 4323 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____already_printed_verbose_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4326 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4328 "parse_tree.error_util.c"
  }
#line 4330 "parse_tree.error_util.c"
}

#line 4333 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4336 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4338 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4340 "parse_tree.error_util.c"
{
#line 4342 "parse_tree.error_util.c"
  {
#line 4344 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4347 "parse_tree.error_util.c"
    {
#line 4349 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4352 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4354 "parse_tree.error_util.c"
  }
#line 4356 "parse_tree.error_util.c"
}

#line 4359 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4362 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4364 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4366 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4368 "parse_tree.error_util.c"
{
#line 4370 "parse_tree.error_util.c"
  {
#line 4372 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4375 "parse_tree.error_util.c"
    {
#line 4377 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4380 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4382 "parse_tree.error_util.c"
  }
#line 4384 "parse_tree.error_util.c"
}

#line 4387 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4390 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4392 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4394 "parse_tree.error_util.c"
{
#line 4396 "parse_tree.error_util.c"
  {
#line 4398 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4401 "parse_tree.error_util.c"
    {
#line 4403 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4406 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4408 "parse_tree.error_util.c"
  }
#line 4410 "parse_tree.error_util.c"
}

#line 4413 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4416 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4418 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4420 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4422 "parse_tree.error_util.c"
{
#line 4424 "parse_tree.error_util.c"
  {
#line 4426 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4429 "parse_tree.error_util.c"
    {
#line 4431 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4434 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4436 "parse_tree.error_util.c"
  }
#line 4438 "parse_tree.error_util.c"
}

#line 4441 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4444 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4446 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4448 "parse_tree.error_util.c"
{
#line 4450 "parse_tree.error_util.c"
  {
#line 4452 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4455 "parse_tree.error_util.c"
    {
#line 4457 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4460 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4462 "parse_tree.error_util.c"
  }
#line 4464 "parse_tree.error_util.c"
}

#line 4467 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4470 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4472 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4474 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4476 "parse_tree.error_util.c"
{
#line 4478 "parse_tree.error_util.c"
  {
#line 4480 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4483 "parse_tree.error_util.c"
    {
#line 4485 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4488 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4490 "parse_tree.error_util.c"
  }
#line 4492 "parse_tree.error_util.c"
}

#line 4495 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4498 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4500 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4502 "parse_tree.error_util.c"
{
#line 4504 "parse_tree.error_util.c"
  {
#line 4506 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4509 "parse_tree.error_util.c"
    {
#line 4511 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4514 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4516 "parse_tree.error_util.c"
  }
#line 4518 "parse_tree.error_util.c"
}

#line 4521 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4524 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4526 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4528 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4530 "parse_tree.error_util.c"
{
#line 4532 "parse_tree.error_util.c"
  {
#line 4534 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4537 "parse_tree.error_util.c"
    {
#line 4539 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4542 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4544 "parse_tree.error_util.c"
  }
#line 4546 "parse_tree.error_util.c"
}

#line 4549 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4552 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4554 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4556 "parse_tree.error_util.c"
{
#line 4558 "parse_tree.error_util.c"
  {
#line 4560 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4563 "parse_tree.error_util.c"
    {
#line 4565 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4568 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4570 "parse_tree.error_util.c"
  }
#line 4572 "parse_tree.error_util.c"
}

#line 4575 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4578 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4580 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4582 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4584 "parse_tree.error_util.c"
{
#line 4586 "parse_tree.error_util.c"
  {
#line 4588 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4591 "parse_tree.error_util.c"
    {
#line 4593 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4596 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4598 "parse_tree.error_util.c"
  }
#line 4600 "parse_tree.error_util.c"
}

#line 4603 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4606 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4608 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4610 "parse_tree.error_util.c"
{
#line 4612 "parse_tree.error_util.c"
  {
#line 4614 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4617 "parse_tree.error_util.c"
    {
#line 4619 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4622 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4624 "parse_tree.error_util.c"
  }
#line 4626 "parse_tree.error_util.c"
}

#line 4629 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4632 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4634 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4636 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4638 "parse_tree.error_util.c"
{
#line 4640 "parse_tree.error_util.c"
  {
#line 4642 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4645 "parse_tree.error_util.c"
    {
#line 4647 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4650 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4652 "parse_tree.error_util.c"
  }
#line 4654 "parse_tree.error_util.c"
}

#line 4657 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4660 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4662 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4664 "parse_tree.error_util.c"
{
#line 4666 "parse_tree.error_util.c"
  {
#line 4668 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4671 "parse_tree.error_util.c"
    {
#line 4673 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4676 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4678 "parse_tree.error_util.c"
  }
#line 4680 "parse_tree.error_util.c"
}

#line 4683 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4686 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4688 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4690 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4692 "parse_tree.error_util.c"
{
#line 4694 "parse_tree.error_util.c"
  {
#line 4696 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4699 "parse_tree.error_util.c"
    {
#line 4701 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4704 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4706 "parse_tree.error_util.c"
  }
#line 4708 "parse_tree.error_util.c"
}

#line 4711 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4714 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4716 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4718 "parse_tree.error_util.c"
{
#line 4720 "parse_tree.error_util.c"
  {
#line 4722 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4725 "parse_tree.error_util.c"
    {
#line 4727 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4730 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4732 "parse_tree.error_util.c"
  }
#line 4734 "parse_tree.error_util.c"
}

#line 4737 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4740 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4742 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4744 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4746 "parse_tree.error_util.c"
{
#line 4748 "parse_tree.error_util.c"
  {
#line 4750 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4753 "parse_tree.error_util.c"
    {
#line 4755 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4758 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4760 "parse_tree.error_util.c"
  }
#line 4762 "parse_tree.error_util.c"
}

#line 4765 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4768 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4770 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4772 "parse_tree.error_util.c"
{
#line 4774 "parse_tree.error_util.c"
  {
#line 4776 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4779 "parse_tree.error_util.c"
    {
#line 4781 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4784 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4786 "parse_tree.error_util.c"
  }
#line 4788 "parse_tree.error_util.c"
}

#line 4791 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4794 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4796 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4798 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4800 "parse_tree.error_util.c"
{
#line 4802 "parse_tree.error_util.c"
  {
#line 4804 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4807 "parse_tree.error_util.c"
    {
#line 4809 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4812 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4814 "parse_tree.error_util.c"
  }
#line 4816 "parse_tree.error_util.c"
}

#line 4819 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4822 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4824 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4826 "parse_tree.error_util.c"
{
#line 4828 "parse_tree.error_util.c"
  {
#line 4830 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4833 "parse_tree.error_util.c"
    {
#line 4835 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4838 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4840 "parse_tree.error_util.c"
  }
#line 4842 "parse_tree.error_util.c"
}

#line 4845 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4848 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4850 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4852 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4854 "parse_tree.error_util.c"
{
#line 4856 "parse_tree.error_util.c"
  {
#line 4858 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4861 "parse_tree.error_util.c"
    {
#line 4863 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4866 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4868 "parse_tree.error_util.c"
  }
#line 4870 "parse_tree.error_util.c"
}

#line 4873 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 4876 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4878 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4880 "parse_tree.error_util.c"
{
#line 4882 "parse_tree.error_util.c"
  {
#line 4884 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4887 "parse_tree.error_util.c"
    {
#line 4889 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4892 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4894 "parse_tree.error_util.c"
  }
#line 4896 "parse_tree.error_util.c"
}

#line 4899 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 4902 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4904 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4906 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4908 "parse_tree.error_util.c"
{
#line 4910 "parse_tree.error_util.c"
  {
#line 4912 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4915 "parse_tree.error_util.c"
    {
#line 4917 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4920 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4922 "parse_tree.error_util.c"
  }
#line 4924 "parse_tree.error_util.c"
}

#line 4927 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 4930 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4932 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4934 "parse_tree.error_util.c"
{
#line 4936 "parse_tree.error_util.c"
  {
#line 4938 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4941 "parse_tree.error_util.c"
    {
#line 4943 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4946 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4948 "parse_tree.error_util.c"
  }
#line 4950 "parse_tree.error_util.c"
}

#line 4953 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 4956 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4958 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4960 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4962 "parse_tree.error_util.c"
{
#line 4964 "parse_tree.error_util.c"
  {
#line 4966 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4969 "parse_tree.error_util.c"
    {
#line 4971 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4974 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4976 "parse_tree.error_util.c"
  }
#line 4978 "parse_tree.error_util.c"
}

#line 4981 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 4984 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4986 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4988 "parse_tree.error_util.c"
{
#line 4990 "parse_tree.error_util.c"
  {
#line 4992 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4995 "parse_tree.error_util.c"
    {
#line 4997 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5000 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5002 "parse_tree.error_util.c"
  }
#line 5004 "parse_tree.error_util.c"
}

#line 5007 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 5010 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5012 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5014 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5016 "parse_tree.error_util.c"
{
#line 5018 "parse_tree.error_util.c"
  {
#line 5020 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5023 "parse_tree.error_util.c"
    {
#line 5025 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5028 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5030 "parse_tree.error_util.c"
  }
#line 5032 "parse_tree.error_util.c"
}

#line 5035 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 5038 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5040 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5042 "parse_tree.error_util.c"
{
#line 5044 "parse_tree.error_util.c"
  {
#line 5046 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5049 "parse_tree.error_util.c"
    {
#line 5051 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5054 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5056 "parse_tree.error_util.c"
  }
#line 5058 "parse_tree.error_util.c"
}

#line 5061 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 5064 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5066 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5068 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5070 "parse_tree.error_util.c"
{
#line 5072 "parse_tree.error_util.c"
  {
#line 5074 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5077 "parse_tree.error_util.c"
    {
#line 5079 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5082 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5084 "parse_tree.error_util.c"
  }
#line 5086 "parse_tree.error_util.c"
}

#line 5089 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 5092 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5094 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5096 "parse_tree.error_util.c"
{
#line 5098 "parse_tree.error_util.c"
  {
#line 5100 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5103 "parse_tree.error_util.c"
    {
#line 5105 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5108 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5110 "parse_tree.error_util.c"
  }
#line 5112 "parse_tree.error_util.c"
}

#line 5115 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 5118 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5120 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5122 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5124 "parse_tree.error_util.c"
{
#line 5126 "parse_tree.error_util.c"
  {
#line 5128 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5131 "parse_tree.error_util.c"
    {
#line 5133 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5136 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5138 "parse_tree.error_util.c"
  }
#line 5140 "parse_tree.error_util.c"
}

#line 5143 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 5146 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5148 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5150 "parse_tree.error_util.c"
{
#line 5152 "parse_tree.error_util.c"
  {
#line 5154 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5157 "parse_tree.error_util.c"
    {
#line 5159 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5162 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5164 "parse_tree.error_util.c"
  }
#line 5166 "parse_tree.error_util.c"
}

#line 5169 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 5172 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5174 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5176 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5178 "parse_tree.error_util.c"
{
#line 5180 "parse_tree.error_util.c"
  {
#line 5182 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5185 "parse_tree.error_util.c"
    {
#line 5187 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5190 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5192 "parse_tree.error_util.c"
  }
#line 5194 "parse_tree.error_util.c"
}

#line 5197 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 5200 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5202 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5204 "parse_tree.error_util.c"
{
#line 5206 "parse_tree.error_util.c"
  {
#line 5208 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5211 "parse_tree.error_util.c"
    {
#line 5213 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____verbose_always_or_once_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5216 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5218 "parse_tree.error_util.c"
  }
#line 5220 "parse_tree.error_util.c"
}

#line 5223 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 5226 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5228 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5230 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5232 "parse_tree.error_util.c"
{
#line 5234 "parse_tree.error_util.c"
  {
#line 5236 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5239 "parse_tree.error_util.c"
    {
#line 5241 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____verbose_always_or_once_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5244 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5246 "parse_tree.error_util.c"
  }
#line 5248 "parse_tree.error_util.c"
}

#line 5251 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 5254 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5256 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5258 "parse_tree.error_util.c"
{
#line 5260 "parse_tree.error_util.c"
  {
#line 5262 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5265 "parse_tree.error_util.c"
    {
#line 5267 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5270 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5272 "parse_tree.error_util.c"
  }
#line 5274 "parse_tree.error_util.c"
}

#line 5277 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 5280 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5282 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5284 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5286 "parse_tree.error_util.c"
{
#line 5288 "parse_tree.error_util.c"
  {
#line 5290 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5293 "parse_tree.error_util.c"
    {
#line 5295 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5298 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5300 "parse_tree.error_util.c"
  }
#line 5302 "parse_tree.error_util.c"
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
#line 714 "error_util.m"
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
#line 718 "error_util.m"
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
        }
#line 707 "error_util.m"
        break;
#line 707 "error_util.m"
      case (MR_Integer) 1:
#line 713 "error_util.m"
        {
#line 713 "error_util.m"
          MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 713 "error_util.m"
          {
#line 713 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 713 "error_util.m"
          }
#line 713 "error_util.m"
        }
#line 707 "error_util.m"
        break;
#line 707 "error_util.m"
      case (MR_Integer) 2:
#line 717 "error_util.m"
        {
#line 717 "error_util.m"
          MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 717 "error_util.m"
          {
#line 717 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 717 "error_util.m"
          }
#line 717 "error_util.m"
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

#line 1323 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1323 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1323 "error_util.m"
{
#line 1323 "error_util.m"
  {
#line 1323 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1323 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1323 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1323 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1323 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5516 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1323 "error_util.m"
    else
#line 1323 "error_util.m"
#line 1323 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1323 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "error_util.m"
        case (MR_Integer) 0:
#line 1323 "error_util.m"
#line 1323 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1323 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "error_util.m"
            case (MR_Integer) 0:
#line 1323 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1323 "error_util.m"
              break;
#line 1323 "error_util.m"
            case (MR_Integer) 1:
#line 5540 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1323 "error_util.m"
              break;
#line 1323 "error_util.m"
            case (MR_Integer) 2:
#line 5546 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1323 "error_util.m"
              break;
#line 1323 "error_util.m"
            case (MR_Integer) 3:
#line 5552 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1323 "error_util.m"
              break;
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
        case (MR_Integer) 1:
#line 1323 "error_util.m"
          {
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1323 "error_util.m"
#line 1323 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1323 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "error_util.m"
              case (MR_Integer) 0:
#line 5574 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 1:
#line 1323 "error_util.m"
                {
#line 1323 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1323 "error_util.m"
                  {
#line 1323 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
#line 1323 "error_util.m"
                    return;
                  }
#line 1323 "error_util.m"
                }
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 2:
#line 5598 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 3:
#line 5604 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
            }
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
        case (MR_Integer) 2:
#line 1323 "error_util.m"
          {
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1323 "error_util.m"
#line 1323 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1323 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "error_util.m"
              case (MR_Integer) 0:
#line 5628 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 1:
#line 5634 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 2:
#line 1323 "error_util.m"
                {
#line 1323 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1323 "error_util.m"
                  {
#line 1323 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
#line 1323 "error_util.m"
                    return;
                  }
#line 1323 "error_util.m"
                }
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 3:
#line 5658 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
            }
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
        case (MR_Integer) 3:
#line 1323 "error_util.m"
          {
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1323 "error_util.m"
#line 1323 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1323 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "error_util.m"
              case (MR_Integer) 0:
#line 5682 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 1:
#line 5688 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 2:
#line 5694 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
              case (MR_Integer) 3:
#line 1323 "error_util.m"
                {
#line 1323 "error_util.m"
                  MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1323 "error_util.m"
                  {
#line 1323 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
#line 1323 "error_util.m"
                    return;
                  }
#line 1323 "error_util.m"
                }
#line 1323 "error_util.m"
                break;
#line 1323 "error_util.m"
            }
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
      }
#line 1323 "error_util.m"
  }
#line 1323 "error_util.m"
}

#line 1323 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1323 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1323 "error_util.m"
{
#line 1323 "error_util.m"
  {
#line 1323 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1323 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1323 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1323 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1323 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1323 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1323 "error_util.m"
    else
#line 1323 "error_util.m"
#line 1323 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1323 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1323 "error_util.m"
        case (MR_Integer) 0:
#line 1323 "error_util.m"
          {
#line 1323 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1323 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1323 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
        case (MR_Integer) 1:
#line 1323 "error_util.m"
          {
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1323 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1323 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1323 "error_util.m"
              {
#line 1323 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5792 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1323 "error_util.m"
              }
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
        case (MR_Integer) 2:
#line 1323 "error_util.m"
          {
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1323 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1323 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1323 "error_util.m"
              {
#line 1323 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5817 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1323 "error_util.m"
              }
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
        case (MR_Integer) 3:
#line 1323 "error_util.m"
          {
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1323 "error_util.m"
            MR_String parse_tree__error_util__V_8_8;

#line 1323 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1323 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1323 "error_util.m"
              {
#line 1323 "error_util.m"
                parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5842 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1323 "error_util.m"
              }
#line 1323 "error_util.m"
          }
#line 1323 "error_util.m"
          break;
#line 1323 "error_util.m"
      }
#line 1323 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1323 "error_util.m"
  }
#line 1323 "error_util.m"
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
#line 5900 "parse_tree.error_util.c"
  {
#line 5902 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5905 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5907 "parse_tree.error_util.c"
  }
#line 164 "error_util.m"
}

#line 1433 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1433 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1433 "error_util.m"
{
#line 1433 "error_util.m"
  {
#line 1433 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1433 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1433 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1433 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1433 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5936 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1433 "error_util.m"
    else
#line 1433 "error_util.m"
#line 1433 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1433 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "error_util.m"
        case (MR_Integer) 0:
#line 1433 "error_util.m"
#line 1433 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1433 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "error_util.m"
            case (MR_Integer) 0:
#line 1433 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1433 "error_util.m"
              break;
#line 1433 "error_util.m"
            case (MR_Integer) 1:
#line 5960 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1433 "error_util.m"
              break;
#line 1433 "error_util.m"
            case (MR_Integer) 2:
#line 5966 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1433 "error_util.m"
              break;
#line 1433 "error_util.m"
          }
#line 1433 "error_util.m"
          break;
#line 1433 "error_util.m"
        case (MR_Integer) 1:
#line 1433 "error_util.m"
          {
#line 1433 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1433 "error_util.m"
#line 1433 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1433 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "error_util.m"
              case (MR_Integer) 0:
#line 5988 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1433 "error_util.m"
                break;
#line 1433 "error_util.m"
              case (MR_Integer) 1:
#line 1433 "error_util.m"
                {
#line 1433 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1433 "error_util.m"
                  {
#line 1433 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
#line 1433 "error_util.m"
                    return;
                  }
#line 1433 "error_util.m"
                }
#line 1433 "error_util.m"
                break;
#line 1433 "error_util.m"
              case (MR_Integer) 2:
#line 6012 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1433 "error_util.m"
                break;
#line 1433 "error_util.m"
            }
#line 1433 "error_util.m"
          }
#line 1433 "error_util.m"
          break;
#line 1433 "error_util.m"
        case (MR_Integer) 2:
#line 1433 "error_util.m"
          {
#line 1433 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1433 "error_util.m"
#line 1433 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1433 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "error_util.m"
              case (MR_Integer) 0:
#line 6036 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1433 "error_util.m"
                break;
#line 1433 "error_util.m"
              case (MR_Integer) 1:
#line 6042 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1433 "error_util.m"
                break;
#line 1433 "error_util.m"
              case (MR_Integer) 2:
#line 1433 "error_util.m"
                {
#line 1433 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1433 "error_util.m"
                  {
#line 1433 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
#line 1433 "error_util.m"
                    return;
                  }
#line 1433 "error_util.m"
                }
#line 1433 "error_util.m"
                break;
#line 1433 "error_util.m"
            }
#line 1433 "error_util.m"
          }
#line 1433 "error_util.m"
          break;
#line 1433 "error_util.m"
      }
#line 1433 "error_util.m"
  }
#line 1433 "error_util.m"
}

#line 1433 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1433 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1433 "error_util.m"
{
#line 1433 "error_util.m"
  {
#line 1433 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1433 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1433 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1433 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1433 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1433 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1433 "error_util.m"
    else
#line 1433 "error_util.m"
#line 1433 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1433 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "error_util.m"
        case (MR_Integer) 0:
#line 1433 "error_util.m"
          {
#line 1433 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1433 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1433 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1433 "error_util.m"
          }
#line 1433 "error_util.m"
          break;
#line 1433 "error_util.m"
        case (MR_Integer) 1:
#line 1433 "error_util.m"
          {
#line 1433 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1433 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1433 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1433 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1433 "error_util.m"
              {
#line 1433 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6140 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1433 "error_util.m"
              }
#line 1433 "error_util.m"
          }
#line 1433 "error_util.m"
          break;
#line 1433 "error_util.m"
        case (MR_Integer) 2:
#line 1433 "error_util.m"
          {
#line 1433 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1433 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1433 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1433 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1433 "error_util.m"
              {
#line 1433 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6165 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1433 "error_util.m"
              }
#line 1433 "error_util.m"
          }
#line 1433 "error_util.m"
          break;
#line 1433 "error_util.m"
      }
#line 1433 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1433 "error_util.m"
  }
#line 1433 "error_util.m"
}

#line 1305 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1305 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1305 "error_util.m"
{
#line 1305 "error_util.m"
  {
#line 1305 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1305 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1305 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1305 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1305 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6206 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1305 "error_util.m"
    else
#line 1305 "error_util.m"
      {
#line 1305 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1305 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1305 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1305 "error_util.m"
        {
#line 1305 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 6232 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1305 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1305 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1305 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1305 "error_util.m"
        else
#line 1305 "error_util.m"
          {
#line 1305 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1305 "error_util.m"
            {
#line 1305 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 6252 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1305 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1305 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1305 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1305 "error_util.m"
            else
#line 1305 "error_util.m"
              {
#line 1305 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
#line 1305 "error_util.m"
                return;
              }
#line 1305 "error_util.m"
          }
#line 1305 "error_util.m"
      }
#line 1305 "error_util.m"
  }
#line 1305 "error_util.m"
}

#line 1305 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1305 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1305 "error_util.m"
{
#line 1305 "error_util.m"
  {
#line 1305 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1305 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1305 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1305 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1305 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1305 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1305 "error_util.m"
    else
#line 1305 "error_util.m"
      {
#line 1305 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1305 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1305 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 6319 "parse_tree.error_util.c"
        {
#line 6321 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1305 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1305 "error_util.m"
          {
#line 6328 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1305 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6332 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1305 "error_util.m"
          }
#line 1305 "error_util.m"
      }
#line 1305 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1305 "error_util.m"
  }
#line 1305 "error_util.m"
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
#line 6386 "parse_tree.error_util.c"
  {
#line 6388 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6391 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6393 "parse_tree.error_util.c"
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
#line 6439 "parse_tree.error_util.c"
  {
#line 6441 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6444 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6446 "parse_tree.error_util.c"
  }
#line 148 "error_util.m"
}

#line 827 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 827 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 827 "error_util.m"
{
#line 827 "error_util.m"
  {
#line 827 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 827 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 827 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 827 "error_util.m"
    {
#line 827 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 827 "error_util.m"
      return;
    }
#line 827 "error_util.m"
  }
#line 827 "error_util.m"
}

#line 827 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 827 "error_util.m"
{
#line 6492 "parse_tree.error_util.c"
  {
#line 6494 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6497 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6499 "parse_tree.error_util.c"
  }
#line 827 "error_util.m"
}

#line 831 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 831 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 831 "error_util.m"
{
#line 831 "error_util.m"
  {
#line 831 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 831 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 831 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 831 "error_util.m"
    {
#line 831 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 831 "error_util.m"
      return;
    }
#line 831 "error_util.m"
  }
#line 831 "error_util.m"
}

#line 831 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 831 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 831 "error_util.m"
{
#line 6545 "parse_tree.error_util.c"
  {
#line 6547 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6550 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6552 "parse_tree.error_util.c"
  }
#line 831 "error_util.m"
}

#line 961 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 961 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 961 "error_util.m"
{
#line 961 "error_util.m"
  {
#line 961 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 961 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 961 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 961 "error_util.m"
    {
#line 961 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 961 "error_util.m"
      return;
    }
#line 961 "error_util.m"
  }
#line 961 "error_util.m"
}

#line 961 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 961 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 961 "error_util.m"
{
#line 6598 "parse_tree.error_util.c"
  {
#line 6600 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6603 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6605 "parse_tree.error_util.c"
  }
#line 961 "error_util.m"
}

#line 385 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 385 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 385 "error_util.m"
{
#line 385 "error_util.m"
  {
#line 385 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 385 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 385 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 385 "error_util.m"
    {
#line 385 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 385 "error_util.m"
      return;
    }
#line 385 "error_util.m"
  }
#line 385 "error_util.m"
}

#line 385 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 385 "error_util.m"
{
#line 385 "error_util.m"
  {
#line 385 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 385 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 385 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 385 "error_util.m"
    {
#line 385 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 385 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 385 "error_util.m"
  }
#line 385 "error_util.m"
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
    MR_Integer parse_tree__error_util__CastX_45 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 286 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_46 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 286 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_45 == parse_tree__error_util__CastY_46);
#line 286 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6696 "parse_tree.error_util.c"
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
#line 6721 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 286 "error_util.m"
        else
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 286 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6731 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 286 "error_util.m"
            else
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 286 "error_util.m"
#line 286 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 286 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
                  case (MR_Integer) 0:
#line 286 "error_util.m"
#line 286 "error_util.m"
                    switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 286 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
                      case (MR_Integer) 0:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 1:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 2:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                    }
#line 286 "error_util.m"
                    break;
#line 286 "error_util.m"
                  case (MR_Integer) 1:
#line 286 "error_util.m"
                    {
#line 286 "error_util.m"
                      MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "error_util.m"
                      MR_Integer parse_tree__error_util__V_8_8;

#line 286 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 286 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 286 "error_util.m"
                          {
#line 286 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                          }
#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                    }
#line 286 "error_util.m"
                    break;
#line 286 "error_util.m"
                  case (MR_Integer) 2:
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
                    break;
#line 286 "error_util.m"
                  case (MR_Integer) 3:
#line 286 "error_util.m"
#line 286 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 286 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
                      case (MR_Integer) 0:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_String parse_tree__error_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_String parse_tree__error_util__V_12_12;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 1:
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
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 2:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_Integer parse_tree__error_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_Integer parse_tree__error_util__V_16_16;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 3:
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
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 4:
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
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 5:
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
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 6:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_String parse_tree__error_util__V_24_24;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 7:
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
                                mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 8:
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
                                parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 9:
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
                                parse_tree__prog_data____Compare____cons_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 10:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_Word parse_tree__error_util__V_32_32;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 11:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_Word parse_tree__error_util__V_34_34;
#line 286 "error_util.m"
                          MR_Integer parse_tree__error_util__V_66_66;
#line 286 "error_util.m"
                          MR_Integer parse_tree__error_util__V_67_67;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              parse_tree__error_util__V_66_66 = (MR_Integer) parse_tree__error_util__V_33_33;
#line 286 "error_util.m"
                              parse_tree__error_util__V_67_67 = (MR_Integer) parse_tree__error_util__V_34_34;
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_66_66, parse_tree__error_util__V_67_67);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 12:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_Word parse_tree__error_util__V_36_36;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 13:
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
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 14:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_String parse_tree__error_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_String parse_tree__error_util__V_40_40;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_39_39, parse_tree__error_util__V_40_40);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 15:
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
                        break;
#line 286 "error_util.m"
                      case (MR_Integer) 16:
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                          MR_Integer parse_tree__error_util__V_44_44;

#line 286 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 286 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                            {
#line 286 "error_util.m"
                              parse_tree__error_util__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                              {
#line 286 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_43_43, parse_tree__error_util__V_44_44);
                              }
#line 286 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                            }
#line 286 "error_util.m"
                        }
#line 286 "error_util.m"
                        break;
#line 286 "error_util.m"
                    }
#line 286 "error_util.m"
                    break;
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
#line 286 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 286 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
      case (MR_Integer) 0:
#line 286 "error_util.m"
#line 286 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 286 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
          case (MR_Integer) 0:
#line 7435 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 1:
#line 7441 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 2:
#line 7447 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 20;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
        }
#line 286 "error_util.m"
        break;
#line 286 "error_util.m"
      case (MR_Integer) 1:
#line 7457 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 286 "error_util.m"
        break;
#line 286 "error_util.m"
      case (MR_Integer) 2:
#line 7463 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 286 "error_util.m"
        break;
#line 286 "error_util.m"
      case (MR_Integer) 3:
#line 286 "error_util.m"
#line 286 "error_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 286 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
          case (MR_Integer) 0:
#line 7476 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 1:
#line 7482 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 2:
#line 7488 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 3:
#line 7494 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 4:
#line 7500 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 5:
#line 7506 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 6:
#line 7512 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 7:
#line 7518 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 8:
#line 7524 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 9:
#line 7530 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 10:
#line 7536 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 11:
#line 7542 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 12:
#line 7548 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 13:
#line 7554 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 14:
#line 7560 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 15:
#line 7566 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
          case (MR_Integer) 16:
#line 7572 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 21;
#line 286 "error_util.m"
            break;
#line 286 "error_util.m"
        }
#line 286 "error_util.m"
        break;
#line 286 "error_util.m"
    }
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
    MR_Integer parse_tree__error_util__CastX_47 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_48 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_47 == parse_tree__error_util__CastY_48);
#line 286 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
#line 286 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 286 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
        case (MR_Integer) 0:
#line 286 "error_util.m"
#line 286 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 286 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
            case (MR_Integer) 0:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 1:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 2:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_44 == parse_tree__error_util__CastX_43);
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
          break;
#line 286 "error_util.m"
        case (MR_Integer) 1:
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "error_util.m"
            MR_Integer parse_tree__error_util__V_4_4;

#line 286 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 286 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7691 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_4_4);
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
          break;
#line 286 "error_util.m"
        case (MR_Integer) 2:
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
#line 7716 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
          break;
#line 286 "error_util.m"
        case (MR_Integer) 3:
#line 286 "error_util.m"
#line 286 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 286 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 286 "error_util.m"
            case (MR_Integer) 0:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
                MR_String parse_tree__error_util__V_8_8;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7748 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 1:
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
#line 7773 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 2:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__V_12_12;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7798 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_12_12);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 3:
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
#line 7823 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 4:
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
#line 7848 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 5:
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
#line 7873 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 6:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
                MR_String parse_tree__error_util__V_22_22;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7898 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22) == 0);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 7:
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
#line 7923 "parse_tree.error_util.c"
                    {
#line 7925 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                    }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 8:
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
#line 7951 "parse_tree.error_util.c"
                    {
#line 7953 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                    }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 9:
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
#line 7979 "parse_tree.error_util.c"
                    {
#line 7981 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                    }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 10:
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
#line 8007 "parse_tree.error_util.c"
                    {
#line 8009 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                    }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 11:
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
#line 8035 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == parse_tree__error_util__V_32_32);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 12:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
                MR_Word parse_tree__error_util__V_34_34;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8060 "parse_tree.error_util.c"
                    {
#line 8062 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                    }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 13:
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
#line 8088 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36) == 0);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 14:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
                MR_String parse_tree__error_util__V_38_38;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8113 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38) == 0);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 15:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__V_42_42;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8138 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_41_41 == parse_tree__error_util__V_42_42);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
            case (MR_Integer) 16:
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46;

#line 286 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8163 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_45_45 == parse_tree__error_util__V_46_46);
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
              break;
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
          break;
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 286 "error_util.m"
  }
#line 286 "error_util.m"
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
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[10], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
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
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[10], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
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
#line 8270 "parse_tree.error_util.c"
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
#line 8296 "parse_tree.error_util.c"
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
#line 8316 "parse_tree.error_util.c"
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

#line 8389 "parse_tree.error_util.c"
        {
#line 8391 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 67 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
          {
#line 8398 "parse_tree.error_util.c"
            {
#line 8400 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 67 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
              {
#line 8407 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[8];
#line 8409 "parse_tree.error_util.c"
                {
#line 8411 "parse_tree.error_util.c"
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
#line 8451 "parse_tree.error_util.c"
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
#line 8505 "parse_tree.error_util.c"
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
#line 8551 "parse_tree.error_util.c"
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
#line 8597 "parse_tree.error_util.c"
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
#line 8636 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                    break;
#line 74 "error_util.m"
                  case (MR_Integer) 1:
#line 8642 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                    break;
#line 74 "error_util.m"
                  case (MR_Integer) 2:
#line 8648 "parse_tree.error_util.c"
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
#line 8680 "parse_tree.error_util.c"
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
#line 8704 "parse_tree.error_util.c"
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
#line 8724 "parse_tree.error_util.c"
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
#line 8890 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 74 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                  {
#line 8896 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 74 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                      {
#line 8902 "parse_tree.error_util.c"
                        {
#line 8904 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                        }
#line 74 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                          {
#line 8911 "parse_tree.error_util.c"
                            parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 8913 "parse_tree.error_util.c"
                            {
#line 8915 "parse_tree.error_util.c"
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
#line 8963 "parse_tree.error_util.c"
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
#line 8988 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "error_util.m"
        else
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 8998 "parse_tree.error_util.c"
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
#line 9333 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 1:
#line 9339 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 2:
#line 9345 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 3:
#line 9351 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 4:
#line 9357 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 5:
#line 9363 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 6:
#line 9369 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 7:
#line 9375 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 8:
#line 9381 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 9:
#line 9387 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 10:
#line 9393 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 11:
#line 9399 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 12:
#line 9405 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 13:
#line 9411 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 14:
#line 9417 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
        }
#line 108 "error_util.m"
        break;
#line 108 "error_util.m"
      case (MR_Integer) 1:
#line 9427 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 108 "error_util.m"
        break;
#line 108 "error_util.m"
      case (MR_Integer) 2:
#line 9433 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
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
          }
#line 108 "error_util.m"
          break;
#line 108 "error_util.m"
        case (MR_Integer) 1:
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
#line 9728 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_15_15 == parse_tree__error_util__V_16_16);
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
#line 9753 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_23_23 == parse_tree__error_util__V_24_24);
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
#line 170 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 170 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
        case (MR_Integer) 0:
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "error_util.m"
#line 170 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 170 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
              case (MR_Integer) 0:
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
                break;
#line 170 "error_util.m"
              case (MR_Integer) 1:
#line 170 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
              case (MR_Integer) 2:
#line 170 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
              case (MR_Integer) 3:
#line 170 "error_util.m"
#line 170 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 170 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
                  case (MR_Integer) 0:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 1:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                }
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
            }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
          break;
#line 170 "error_util.m"
        case (MR_Integer) 1:
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_124_124 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 170 "error_util.m"
#line 170 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 170 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
              case (MR_Integer) 0:
#line 170 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
              case (MR_Integer) 1:
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
                break;
#line 170 "error_util.m"
              case (MR_Integer) 2:
#line 170 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
              case (MR_Integer) 3:
#line 170 "error_util.m"
#line 170 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 170 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
                  case (MR_Integer) 0:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 1:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                }
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
            }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
          break;
#line 170 "error_util.m"
        case (MR_Integer) 2:
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "error_util.m"
#line 170 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 170 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
              case (MR_Integer) 0:
#line 170 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
              case (MR_Integer) 1:
#line 170 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
              case (MR_Integer) 2:
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
                break;
#line 170 "error_util.m"
              case (MR_Integer) 3:
#line 170 "error_util.m"
#line 170 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 170 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
                  case (MR_Integer) 0:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 1:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                }
#line 170 "error_util.m"
                break;
#line 170 "error_util.m"
            }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
          break;
#line 170 "error_util.m"
        case (MR_Integer) 3:
#line 170 "error_util.m"
#line 170 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 170 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
            case (MR_Integer) 0:
#line 170 "error_util.m"
              {
#line 170 "error_util.m"
                MR_Word parse_tree__error_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "error_util.m"
                MR_Word parse_tree__error_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 170 "error_util.m"
#line 170 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 170 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
                  case (MR_Integer) 0:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 1:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 2:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 3:
#line 170 "error_util.m"
#line 170 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 170 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
                      case (MR_Integer) 0:
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
                        break;
#line 170 "error_util.m"
                      case (MR_Integer) 1:
#line 170 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
                        break;
#line 170 "error_util.m"
                    }
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
              break;
#line 170 "error_util.m"
            case (MR_Integer) 1:
#line 170 "error_util.m"
              {
#line 170 "error_util.m"
                MR_Word parse_tree__error_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
                MR_Box parse_tree__error_util__V_125_125 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 170 "error_util.m"
#line 170 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 170 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
                  case (MR_Integer) 0:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 1:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 2:
#line 170 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                  case (MR_Integer) 3:
#line 170 "error_util.m"
#line 170 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 170 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
                      case (MR_Integer) 0:
#line 170 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
                        break;
#line 170 "error_util.m"
                      case (MR_Integer) 1:
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

#line 10265 "parse_tree.error_util.c"
                          {
#line 10267 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_126_126, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_103_103);
                          }
#line 10270 "parse_tree.error_util.c"
                          {
#line 10272 "parse_tree.error_util.c"
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
                        break;
#line 170 "error_util.m"
                    }
#line 170 "error_util.m"
                    break;
#line 170 "error_util.m"
                }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
              break;
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
          break;
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
#line 170 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 170 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
        case (MR_Integer) 0:
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
#line 10357 "parse_tree.error_util.c"
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
          break;
#line 170 "error_util.m"
        case (MR_Integer) 1:
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
#line 10413 "parse_tree.error_util.c"
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
          break;
#line 170 "error_util.m"
        case (MR_Integer) 2:
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
#line 10461 "parse_tree.error_util.c"
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
          break;
#line 170 "error_util.m"
        case (MR_Integer) 3:
#line 170 "error_util.m"
#line 170 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 170 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 170 "error_util.m"
            case (MR_Integer) 0:
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
#line 10510 "parse_tree.error_util.c"
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
#line 10521 "parse_tree.error_util.c"
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
              break;
#line 170 "error_util.m"
            case (MR_Integer) 1:
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
#line 10565 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_25 = (MR_Integer) 1;
#line 10567 "parse_tree.error_util.c"
                    {
#line 10569 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_23, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_26_26);
                    }
#line 10572 "parse_tree.error_util.c"
                    {
#line 10574 "parse_tree.error_util.c"
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
              break;
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
          break;
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
#line 10625 "parse_tree.error_util.c"
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
#line 10662 "parse_tree.error_util.c"
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
#line 10686 "parse_tree.error_util.c"
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
#line 10706 "parse_tree.error_util.c"
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
#line 10735 "parse_tree.error_util.c"
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
#line 10750 "parse_tree.error_util.c"
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
#line 10768 "parse_tree.error_util.c"
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
#line 10863 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 10865 "parse_tree.error_util.c"
            {
#line 10867 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
            }
#line 152 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
              {
#line 10874 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 152 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                  {
#line 10880 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 152 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                      {
#line 10886 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 10888 "parse_tree.error_util.c"
                        {
#line 10890 "parse_tree.error_util.c"
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
#line 10928 "parse_tree.error_util.c"
            {
#line 10930 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
            }
#line 152 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
              {
#line 10937 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 10939 "parse_tree.error_util.c"
                {
#line 10941 "parse_tree.error_util.c"
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

#line 1583 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1583 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1583 "error_util.m"
{
#line 1583 "error_util.m"
  {
#line 1583 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1583 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1583 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1583 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1583 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 10981 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1583 "error_util.m"
    else
#line 1583 "error_util.m"
      {
#line 1583 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1583 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1583 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1583 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1583 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1583 "error_util.m"
        {
#line 1583 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 11003 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1583 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1583 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1583 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1583 "error_util.m"
        else
#line 1583 "error_util.m"
          {
#line 1583 "error_util.m"
            {
#line 1583 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 1583 "error_util.m"
              return;
            }
#line 1583 "error_util.m"
          }
#line 1583 "error_util.m"
      }
#line 1583 "error_util.m"
  }
#line 1583 "error_util.m"
}

#line 1583 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1583 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1583 "error_util.m"
{
#line 1583 "error_util.m"
  {
#line 1583 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1583 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1583 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1583 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1583 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1583 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1583 "error_util.m"
    else
#line 1583 "error_util.m"
      {
#line 1583 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1583 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1583 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1583 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1583 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 11070 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1583 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1583 "error_util.m"
          {
#line 11076 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[5];
#line 11078 "parse_tree.error_util.c"
            {
#line 11080 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1583 "error_util.m"
          }
#line 1583 "error_util.m"
      }
#line 1583 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1583 "error_util.m"
  }
#line 1583 "error_util.m"
}

#line 835 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 835 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 835 "error_util.m"
{
#line 835 "error_util.m"
  {
#line 835 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 835 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 835 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 835 "error_util.m"
    {
#line 835 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 835 "error_util.m"
      return;
    }
#line 835 "error_util.m"
  }
#line 835 "error_util.m"
}

#line 835 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 835 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 835 "error_util.m"
{
#line 835 "error_util.m"
  {
#line 835 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 835 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 835 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 835 "error_util.m"
    {
#line 835 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 835 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 835 "error_util.m"
  }
#line 835 "error_util.m"
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
#line 11197 "parse_tree.error_util.c"
  {
#line 11199 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 11202 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 11204 "parse_tree.error_util.c"
  }
#line 99 "error_util.m"
}

#line 1673 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1673 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1673 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1673 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1673 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1673 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1673 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1673 "error_util.m"
{
#line 1676 "error_util.m"
  while (MR_TRUE)
#line 1676 "error_util.m"
    {
#line 1676 "error_util.m"
      /* tailcall optimized into a loop */
#line 1676 "error_util.m"
      {
#line 1676 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1676 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1676 "error_util.m"
          {
#line 1676 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1676 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1676 "error_util.m"
          }
#line 1676 "error_util.m"
        else
#line 1677 "error_util.m"
          {
#line 1677 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1677 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1677 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1677 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1677 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1678 "error_util.m"
            {
#line 1678 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1679 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1679 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1680 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1683 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1681 "error_util.m"
              {
#line 1681 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1681 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1681 "error_util.m"
                {
#line 1681 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1681 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1681 "error_util.m"
                }
#line 1681 "error_util.m"
                {
#line 1681 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1682 "error_util.m"
                /* direct tailcall eliminated */
#line 1682 "error_util.m"
                {
#line 1682 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1682 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1682 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1682 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1682 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1682 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1682 "error_util.m"
                }
#line 1682 "error_util.m"
                continue;
#line 1681 "error_util.m"
              }
#line 1683 "error_util.m"
            else
#line 1684 "error_util.m"
              {
#line 1684 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1685 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1684 "error_util.m"
              }
#line 1677 "error_util.m"
          }
#line 1676 "error_util.m"
      }
#line 1676 "error_util.m"
      break;
#line 1676 "error_util.m"
    }
#line 1673 "error_util.m"
}

#line 1648 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1648 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1648 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1648 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1648 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1648 "error_util.m"
{
#line 1653 "error_util.m"
  {
#line 1653 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1653 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1654 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1653 "error_util.m"
    else
#line 1656 "error_util.m"
      {
#line 1656 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1656 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1656 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1656 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1656 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1656 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1656 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1656 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1656 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1656 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1668 "error_util.m"
        {
#line 1668 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1669 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1669 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1670 "error_util.m"
        {
#line 1670 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1670 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1670 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1670 "error_util.m"
        }
#line 1670 "error_util.m"
        {
#line 1670 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1659 "error_util.m"
        {
#line 1659 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1659 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1659 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1659 "error_util.m"
        }
#line 1660 "error_util.m"
        {
#line 1660 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1661 "error_util.m"
        {
#line 1661 "error_util.m"
          MR_Word base;
#line 1661 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1661 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1661 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1661 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1661 "error_util.m"
        }
#line 1656 "error_util.m"
      }
#line 1653 "error_util.m"
  }
#line 1648 "error_util.m"
}

#line 1600 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1600 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1600 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1600 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1600 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1600 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1600 "error_util.m"
{
#line 1606 "error_util.m"
  {
#line 1606 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1606 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1607 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1606 "error_util.m"
    else
#line 1609 "error_util.m"
      {
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1609 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1609 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1609 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1609 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1609 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1614 "error_util.m"
#line 1614 "error_util.m"
        switch (parse_tree__error_util__TreatAsFirst_6) {
#line 1614 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1614 "error_util.m"
          case (MR_Integer) 1:
#line 1616 "error_util.m"
            parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1614 "error_util.m"
            break;
#line 1614 "error_util.m"
          case (MR_Integer) 0:
#line 1612 "error_util.m"
            {
#line 1613 "error_util.m"
              parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1612 "error_util.m"
            }
#line 1614 "error_util.m"
            break;
#line 1614 "error_util.m"
        }
#line 1618 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1620 "error_util.m"
        {
#line 1620 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1620 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1620 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1620 "error_util.m"
        }
#line 11540 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1621 "error_util.m"
        {
#line 1621 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1626 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1623 "error_util.m"
          {
#line 1624 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1625 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1623 "error_util.m"
          }
#line 1626 "error_util.m"
        else
#line 1627 "error_util.m"
          {
#line 1627 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1627 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1628 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1638 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1639 "error_util.m"
              {
#line 1639 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1640 "error_util.m"
                {
#line 1640 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1640 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1640 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1640 "error_util.m"
                }
#line 1640 "error_util.m"
                {
#line 1640 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1640 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1640 "error_util.m"
                }
#line 1639 "error_util.m"
              }
#line 1638 "error_util.m"
            else
#line 1630 "error_util.m"
              {
#line 1630 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1630 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1630 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1630 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1630 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1630 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1630 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1630 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1630 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1668 "error_util.m"
                {
#line 1668 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1669 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1669 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1670 "error_util.m"
                {
#line 1670 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1670 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1670 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1670 "error_util.m"
                }
#line 1670 "error_util.m"
                {
#line 1670 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1633 "error_util.m"
                {
#line 1633 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1633 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1633 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1633 "error_util.m"
                }
#line 1635 "error_util.m"
                {
#line 1635 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1637 "error_util.m"
                {
#line 1637 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1637 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1637 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1637 "error_util.m"
                }
#line 1630 "error_util.m"
              }
#line 1627 "error_util.m"
          }
#line 1643 "error_util.m"
        {
#line 1643 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1645 "error_util.m"
        {
#line 1645 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1645 "error_util.m"
        {
#line 1645 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1609 "error_util.m"
      }
#line 1606 "error_util.m"
  }
#line 1600 "error_util.m"
}

#line 1568 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1568 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1568 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1568 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1568 "error_util.m"
{
#line 1577 "error_util.m"
  while (MR_TRUE)
#line 1577 "error_util.m"
    {
#line 1577 "error_util.m"
      /* tailcall optimized into a loop */
#line 1577 "error_util.m"
      {
#line 1577 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1577 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1577 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1571 "error_util.m"
        {
#line 1571 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1577 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1574 "error_util.m"
          {
#line 1572 "error_util.m"
            {
#line 1572 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1574 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1573 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1574 "error_util.m"
            else
#line 1575 "error_util.m"
              {
#line 1575 "error_util.m"
                /* direct tailcall eliminated */
#line 1575 "error_util.m"
                {
#line 1575 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1575 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1575 "error_util.m"
                }
#line 1575 "error_util.m"
                continue;
#line 1575 "error_util.m"
              }
#line 1574 "error_util.m"
          }
#line 1577 "error_util.m"
        else
#line 1578 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1577 "error_util.m"
      }
#line 1577 "error_util.m"
      break;
#line 1577 "error_util.m"
    }
#line 1568 "error_util.m"
}

#line 1558 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1558 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1558 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1558 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1558 "error_util.m"
{
#line 1560 "error_util.m"
  while (MR_TRUE)
#line 1560 "error_util.m"
    {
#line 1560 "error_util.m"
      /* tailcall optimized into a loop */
#line 1560 "error_util.m"
      {
#line 1560 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1560 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1560 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1561 "error_util.m"
        {
#line 1561 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1560 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1560 "error_util.m"
          {
#line 1562 "error_util.m"
            {
#line 1562 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1564 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1563 "error_util.m"
              {
#line 1563 "error_util.m"
                /* direct tailcall eliminated */
#line 1563 "error_util.m"
                {
#line 1563 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1563 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1563 "error_util.m"
                }
#line 1563 "error_util.m"
                continue;
#line 1563 "error_util.m"
              }
#line 1564 "error_util.m"
            else
#line 1565 "error_util.m"
              {
#line 1565 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1565 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1565 "error_util.m"
              }
#line 1560 "error_util.m"
          }
#line 1560 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1560 "error_util.m"
      }
#line 1560 "error_util.m"
      break;
#line 1560 "error_util.m"
    }
#line 1558 "error_util.m"
}

#line 1545 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1545 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1545 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1545 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1545 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1545 "error_util.m"
{
#line 1554 "error_util.m"
  while (MR_TRUE)
#line 1554 "error_util.m"
    {
#line 1554 "error_util.m"
      /* tailcall optimized into a loop */
#line 1554 "error_util.m"
      {
#line 1554 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1554 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1549 "error_util.m"
        {
#line 1549 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1554 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1550 "error_util.m"
          {
#line 1550 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1550 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1550 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1550 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1550 "error_util.m"
            {
#line 1550 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1551 "error_util.m"
            {
#line 1551 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1552 "error_util.m"
            {
#line 1552 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1552 "error_util.m"
            }
#line 1552 "error_util.m"
            {
#line 1552 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1552 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1552 "error_util.m"
            }
#line 1552 "error_util.m"
            /* direct tailcall eliminated */
#line 1552 "error_util.m"
            {
#line 1552 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1552 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1552 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1552 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1552 "error_util.m"
            }
#line 1552 "error_util.m"
            continue;
#line 1550 "error_util.m"
          }
#line 1554 "error_util.m"
        else
#line 1555 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1554 "error_util.m"
      }
#line 1554 "error_util.m"
      break;
#line 1554 "error_util.m"
    }
#line 1545 "error_util.m"
}

#line 1540 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1540 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1540 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1540 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1540 "error_util.m"
{
#line 1542 "error_util.m"
  {
#line 1542 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1543 "error_util.m"
    {
#line 1543 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
#line 1543 "error_util.m"
      return;
    }
#line 1542 "error_util.m"
  }
#line 1540 "error_util.m"
}

#line 1535 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1535 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1535 "error_util.m"
{
#line 1537 "error_util.m"
  {
#line 1537 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1537 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1537 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1537 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1537 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1537 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1537 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1537 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1537 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1538 "error_util.m"
    {
#line 1538 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1700 "error_util.m"
    {
#line 1700 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1700 "error_util.m"
    {
#line 1700 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1538 "error_util.m"
    {
#line 1538 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1538 "error_util.m"
    {
#line 1538 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1538 "error_util.m"
    {
#line 1538 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1537 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1537 "error_util.m"
  }
#line 1535 "error_util.m"
}

#line 1530 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1530 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1530 "error_util.m"
{
#line 1532 "error_util.m"
  {
#line 1532 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1532 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1532 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1532 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1533 "error_util.m"
    {
#line 1533 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1700 "error_util.m"
    {
#line 1700 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1700 "error_util.m"
    {
#line 1700 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1532 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1532 "error_util.m"
  }
#line 1530 "error_util.m"
}

#line 1489 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1489 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1489 "error_util.m"
{
#line 1491 "error_util.m"
  {
#line 1491 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1491 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1491 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1491 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1491 "error_util.m"
    else
#line 1492 "error_util.m"
      {
#line 1492 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1492 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1492 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1493 "error_util.m"
        {
#line 1493 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1497 "error_util.m"
#line 1497 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Head_3)) {
#line 1497 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1497 "error_util.m"
          case (MR_Integer) 0:
#line 1511 "error_util.m"
            if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1510 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1511 "error_util.m"
            else
#line 1512 "error_util.m"
              {
#line 1512 "error_util.m"
                MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1512 "error_util.m"
                MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1512 "error_util.m"
                MR_String parse_tree__error_util__V_13_13;
#line 1526 "error_util.m"
                MR_Char parse_tree__error_util__First_17;
#line 1526 "error_util.m"
                MR_String parse_tree__error_util__Rest_18;

#line 1521 "error_util.m"
                {
#line 1521 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
                }
#line 1521 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1522 "error_util.m"
                  {
#line 1522 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                  }
#line 1526 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1524 "error_util.m"
                  {
#line 1524 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1524 "error_util.m"
                    {
#line 1524 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                    }
#line 1525 "error_util.m"
                    {
#line 1525 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                    }
#line 1524 "error_util.m"
                  }
#line 1526 "error_util.m"
                else
#line 1527 "error_util.m"
                  parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1513 "error_util.m"
                {
#line 1513 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1513 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1513 "error_util.m"
                }
#line 1512 "error_util.m"
              }
#line 1497 "error_util.m"
            break;
#line 1497 "error_util.m"
          case (MR_Integer) 1:
#line 1495 "error_util.m"
            {
#line 1495 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1496 "error_util.m"
              {
#line 1496 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1496 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1496 "error_util.m"
              }
#line 1495 "error_util.m"
            }
#line 1497 "error_util.m"
            break;
#line 1497 "error_util.m"
          case (MR_Integer) 2:
#line 1498 "error_util.m"
            {
#line 1498 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1502 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1504 "error_util.m"
                {
#line 1504 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1504 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1504 "error_util.m"
                }
#line 1502 "error_util.m"
              else
#line 1500 "error_util.m"
                {
#line 1500 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1500 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1500 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1501 "error_util.m"
                  {
#line 1501 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1501 "error_util.m"
                  {
#line 1501 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1501 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1501 "error_util.m"
                  }
#line 1500 "error_util.m"
                }
#line 1498 "error_util.m"
            }
#line 1497 "error_util.m"
            break;
#line 1497 "error_util.m"
        }
#line 1492 "error_util.m"
      }
#line 1491 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1491 "error_util.m"
  }
#line 1489 "error_util.m"
}

#line 1444 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1444 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1444 "error_util.m"
{
#line 1446 "error_util.m"
  while (MR_TRUE)
#line 1446 "error_util.m"
    {
#line 1446 "error_util.m"
      /* tailcall optimized into a loop */
#line 1446 "error_util.m"
      {
#line 1446 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1446 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1446 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1446 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1446 "error_util.m"
        else
#line 1447 "error_util.m"
          {
#line 1447 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1447 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1451 "error_util.m"
#line 1451 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Word_3)) {
#line 1451 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1451 "error_util.m"
              case (MR_Integer) 0:
#line 1452 "error_util.m"
                {
#line 1452 "error_util.m"
                  MR_Word parse_tree__error_util__V_32_32;

#line 1453 "error_util.m"
                  {
#line 1453 "error_util.m"
                    parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1453 "error_util.m"
                  {
#line 1453 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1453 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1453 "error_util.m"
                  }
#line 1452 "error_util.m"
                }
#line 1451 "error_util.m"
                break;
#line 1451 "error_util.m"
              case (MR_Integer) 1:
#line 1449 "error_util.m"
                {
#line 1449 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1449 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1449 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1450 "error_util.m"
                  {
#line 1450 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1450 "error_util.m"
                  }
#line 1450 "error_util.m"
                  {
#line 1450 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1450 "error_util.m"
                  {
#line 1450 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1450 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1450 "error_util.m"
                  }
#line 1449 "error_util.m"
                }
#line 1451 "error_util.m"
                break;
#line 1451 "error_util.m"
              case (MR_Integer) 2:
#line 1455 "error_util.m"
                {
#line 1455 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1455 "error_util.m"
                  MR_Word parse_tree__error_util__V_29_29;
#line 1455 "error_util.m"
                  MR_Word parse_tree__error_util__V_30_30;

#line 1456 "error_util.m"
                  {
#line 1456 "error_util.m"
                    parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "error_util.m"
                    MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1456 "error_util.m"
                  }
#line 1456 "error_util.m"
                  {
#line 1456 "error_util.m"
                    parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1456 "error_util.m"
                  {
#line 1456 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1456 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1456 "error_util.m"
                  }
#line 1455 "error_util.m"
                }
#line 1451 "error_util.m"
                break;
#line 1451 "error_util.m"
              case (MR_Integer) 3:
#line 1458 "error_util.m"
                {
#line 1458 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1462 "error_util.m"
                  if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "error_util.m"
                    {
#line 1460 "error_util.m"
                      MR_Word parse_tree__error_util__V_27_27;

#line 1461 "error_util.m"
                      {
#line 1461 "error_util.m"
                        parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1461 "error_util.m"
                      }
#line 1461 "error_util.m"
                      {
#line 1461 "error_util.m"
                        parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1461 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1461 "error_util.m"
                      }
#line 1460 "error_util.m"
                    }
#line 1462 "error_util.m"
                  else
#line 1462 "error_util.m"
                    {
#line 1462 "error_util.m"
                      MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1462 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1462 "error_util.m"
#line 1462 "error_util.m"
                      switch (MR_tag((MR_Word) parse_tree__error_util__V_45_45)) {
#line 1462 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1462 "error_util.m"
                        case (MR_Integer) 0:
#line 1467 "error_util.m"
                          {
#line 1467 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1467 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1467 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1526 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1526 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1521 "error_util.m"
                            {
#line 1521 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1521 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1522 "error_util.m"
                              {
#line 1522 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1526 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1524 "error_util.m"
                              {
#line 1524 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1524 "error_util.m"
                                {
#line 1524 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1525 "error_util.m"
                                {
#line 1525 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1524 "error_util.m"
                              }
#line 1526 "error_util.m"
                            else
#line 1527 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1472 "error_util.m"
                            {
#line 1472 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1472 "error_util.m"
                            }
#line 1472 "error_util.m"
                            {
#line 1472 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1472 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1472 "error_util.m"
                            }
#line 1473 "error_util.m"
                            /* direct tailcall eliminated */
#line 1473 "error_util.m"
                            {
#line 1473 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1473 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1473 "error_util.m"
                            }
#line 1473 "error_util.m"
                            continue;
#line 1467 "error_util.m"
                          }
#line 1462 "error_util.m"
                          break;
#line 1462 "error_util.m"
                        case (MR_Integer) 1:
#line 1463 "error_util.m"
                          {
#line 1463 "error_util.m"
                            MR_Word parse_tree__error_util__V_24_24;
#line 1463 "error_util.m"
                            MR_String parse_tree__error_util__V_25_25;
#line 1463 "error_util.m"
                            MR_Word parse_tree__error_util__V_26_26;
#line 1463 "error_util.m"
                            MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1464 "error_util.m"
                            {
#line 1464 "error_util.m"
                              parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                            }
#line 1464 "error_util.m"
                            {
#line 1464 "error_util.m"
                              parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1464 "error_util.m"
                            }
#line 1465 "error_util.m"
                            {
#line 1465 "error_util.m"
                              parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1465 "error_util.m"
                            {
#line 1465 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1465 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1465 "error_util.m"
                            }
#line 1463 "error_util.m"
                          }
#line 1462 "error_util.m"
                          break;
#line 1462 "error_util.m"
                        case (MR_Integer) 2:
#line 1475 "error_util.m"
                          {
#line 1475 "error_util.m"
                            MR_Word parse_tree__error_util__V_17_17;
#line 1475 "error_util.m"
                            MR_String parse_tree__error_util__V_18_18;
#line 1475 "error_util.m"
                            MR_Word parse_tree__error_util__V_19_19;
#line 1475 "error_util.m"
                            MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1480 "error_util.m"
                            {
#line 1480 "error_util.m"
                              parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                            }
#line 1480 "error_util.m"
                            {
#line 1480 "error_util.m"
                              parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1480 "error_util.m"
                            }
#line 1481 "error_util.m"
                            {
#line 1481 "error_util.m"
                              parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1481 "error_util.m"
                            {
#line 1481 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1481 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1481 "error_util.m"
                            }
#line 1475 "error_util.m"
                          }
#line 1462 "error_util.m"
                          break;
#line 1462 "error_util.m"
                        case (MR_Integer) 3:
#line 1483 "error_util.m"
                          {
#line 1483 "error_util.m"
                            MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1483 "error_util.m"
                            MR_Word parse_tree__error_util__V_13_13;
#line 1483 "error_util.m"
                            MR_Word parse_tree__error_util__V_14_14;
#line 1483 "error_util.m"
                            MR_String parse_tree__error_util__V_15_15;

#line 1485 "error_util.m"
                            {
#line 1485 "error_util.m"
                              parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                            }
#line 1485 "error_util.m"
                            {
#line 1485 "error_util.m"
                              parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1485 "error_util.m"
                            }
#line 1485 "error_util.m"
                            {
#line 1485 "error_util.m"
                              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1485 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1485 "error_util.m"
                            }
#line 1484 "error_util.m"
                            /* direct tailcall eliminated */
#line 1484 "error_util.m"
                            {
#line 1484 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1484 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1484 "error_util.m"
                            }
#line 1484 "error_util.m"
                            continue;
#line 1483 "error_util.m"
                          }
#line 1462 "error_util.m"
                          break;
#line 1462 "error_util.m"
                      }
#line 1462 "error_util.m"
                    }
#line 1458 "error_util.m"
                }
#line 1451 "error_util.m"
                break;
#line 1451 "error_util.m"
            }
#line 1447 "error_util.m"
          }
#line 1446 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1446 "error_util.m"
      }
#line 1446 "error_util.m"
      break;
#line 1446 "error_util.m"
    }
#line 1444 "error_util.m"
}

#line 1438 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1438 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1438 "error_util.m"
{
#line 1440 "error_util.m"
  {
#line 1440 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1440 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1440 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1440 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1441 "error_util.m"
    {
#line 1441 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1441 "error_util.m"
    {
#line 1441 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1442 "error_util.m"
    {
#line 1442 "error_util.m"
      return parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1440 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1440 "error_util.m"
  }
#line 1438 "error_util.m"
}

#line 1329 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1329 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1329 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1329 "error_util.m"
{
#line 1333 "error_util.m"
  while (MR_TRUE)
#line 1333 "error_util.m"
    {
#line 1333 "error_util.m"
      /* tailcall optimized into a loop */
#line 1333 "error_util.m"
      {
#line 1333 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1333 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "error_util.m"
          {
#line 1333 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1333 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1334 "error_util.m"
            {
#line 1334 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1335 "error_util.m"
            {
#line 1335 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1335 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1335 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1335 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1335 "error_util.m"
            }
#line 1335 "error_util.m"
            {
#line 1335 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1333 "error_util.m"
          }
#line 1333 "error_util.m"
        else
#line 1337 "error_util.m"
          {
#line 1337 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1337 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1337 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1337 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1341 "error_util.m"
#line 1341 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_17)) {
#line 1341 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1341 "error_util.m"
              case (MR_Integer) 0:
#line 1341 "error_util.m"
#line 1341 "error_util.m"
                switch (MR_unmkbody(parse_tree__error_util__Component_17)) {
#line 1341 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1341 "error_util.m"
                  case (MR_Integer) 0:
#line 1357 "error_util.m"
                    {
#line 1361 "error_util.m"
#line 1361 "error_util.m"
                      switch (parse_tree__error_util__FirstInMsg_1) {
#line 1361 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1361 "error_util.m"
                        case (MR_Integer) 0:
#line 1360 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1361 "error_util.m"
                          break;
#line 1361 "error_util.m"
                        case (MR_Integer) 1:
#line 1362 "error_util.m"
                          {
#line 1363 "error_util.m"
                            {
#line 1363 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1363 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1363 "error_util.m"
                            }
#line 1362 "error_util.m"
                          }
#line 1361 "error_util.m"
                          break;
#line 1361 "error_util.m"
                      }
#line 1357 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1357 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 1:
#line 1410 "error_util.m"
                    {
#line 1410 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_38;
#line 1410 "error_util.m"
                      MR_Word parse_tree__error_util__V_52_52;

#line 1411 "error_util.m"
                      {
#line 1411 "error_util.m"
                        parse_tree__error_util__Strings_38 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1412 "error_util.m"
                      {
#line 1412 "error_util.m"
                        parse_tree__error_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 0) = ((MR_Box) (parse_tree__error_util__Strings_38));
#line 1412 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1412 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1412 "error_util.m"
                      }
#line 1412 "error_util.m"
                      {
#line 1412 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_52_52)));
                      }
#line 1413 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1410 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 2:
#line 1420 "error_util.m"
                    {
#line 1420 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45;
#line 1420 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_98;

#line 1421 "error_util.m"
                      {
#line 1421 "error_util.m"
                        parse_tree__error_util__Strings_98 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1422 "error_util.m"
                      {
#line 1422 "error_util.m"
                        parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1422 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (parse_tree__error_util__Strings_98));
#line 1422 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1422 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1422 "error_util.m"
                      }
#line 1422 "error_util.m"
                      {
#line 1422 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_45_45)));
                      }
#line 1423 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1420 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                }
#line 1341 "error_util.m"
                break;
#line 1341 "error_util.m"
              case (MR_Integer) 1:
#line 1427 "error_util.m"
                {
#line 1428 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1427 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1427 "error_util.m"
                }
#line 1341 "error_util.m"
                break;
#line 1341 "error_util.m"
              case (MR_Integer) 2:
#line 1345 "error_util.m"
                {
#line 1345 "error_util.m"
                  MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1345 "error_util.m"
                  MR_Word parse_tree__error_util__V_79_79;

#line 1346 "error_util.m"
                  {
#line 1346 "error_util.m"
                    parse_tree__error_util__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_79_79, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1346 "error_util.m"
                  }
#line 1346 "error_util.m"
                  {
#line 1346 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_79_79));
#line 1346 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1346 "error_util.m"
                  }
#line 1345 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1345 "error_util.m"
                }
#line 1341 "error_util.m"
                break;
#line 1341 "error_util.m"
              case (MR_Integer) 3:
#line 1341 "error_util.m"
#line 1341 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) {
#line 1341 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1341 "error_util.m"
                  case (MR_Integer) 0:
#line 1348 "error_util.m"
                    {
#line 1348 "error_util.m"
                      MR_Word parse_tree__error_util__V_77_77;
#line 1348 "error_util.m"
                      MR_String parse_tree__error_util__V_78_78;
#line 1348 "error_util.m"
                      MR_String parse_tree__error_util__Word_84 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1349 "error_util.m"
                      {
#line 1349 "error_util.m"
                        parse_tree__error_util__V_78_78 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_84);
                      }
#line 1349 "error_util.m"
                      {
#line 1349 "error_util.m"
                        parse_tree__error_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_77_77, 0) = ((MR_Box) (parse_tree__error_util__V_78_78));
#line 1349 "error_util.m"
                      }
#line 1349 "error_util.m"
                      {
#line 1349 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_77_77));
#line 1349 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1349 "error_util.m"
                      }
#line 1348 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1348 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 1:
#line 1351 "error_util.m"
                    {
#line 1351 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1351 "error_util.m"
                      MR_Word parse_tree__error_util__V_75_75;
#line 1351 "error_util.m"
                      MR_String parse_tree__error_util__V_76_76;

#line 1352 "error_util.m"
                      {
#line 1352 "error_util.m"
                        parse_tree__error_util__V_76_76 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                      }
#line 1352 "error_util.m"
                      {
#line 1352 "error_util.m"
                        parse_tree__error_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_75_75, 0) = ((MR_Box) (parse_tree__error_util__V_76_76));
#line 1352 "error_util.m"
                      }
#line 1352 "error_util.m"
                      {
#line 1352 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_75_75));
#line 1352 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1352 "error_util.m"
                      }
#line 1351 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1351 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 2:
#line 1354 "error_util.m"
                    {
#line 1354 "error_util.m"
                      MR_Word parse_tree__error_util__V_73_73;
#line 1354 "error_util.m"
                      MR_String parse_tree__error_util__V_74_74;
#line 1354 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1355 "error_util.m"
                      {
#line 1355 "error_util.m"
                        parse_tree__error_util__V_74_74 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_85);
                      }
#line 1355 "error_util.m"
                      {
#line 1355 "error_util.m"
                        parse_tree__error_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_73_73, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1355 "error_util.m"
                      }
#line 1355 "error_util.m"
                      {
#line 1355 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1355 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1355 "error_util.m"
                      }
#line 1354 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1354 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 3:
#line 1366 "error_util.m"
                    {
#line 1366 "error_util.m"
                      MR_Word parse_tree__error_util__V_71_71;
#line 1366 "error_util.m"
                      MR_String parse_tree__error_util__Word_86 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1367 "error_util.m"
                      {
#line 1367 "error_util.m"
                        parse_tree__error_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "error_util.m"
                        MR_hl_field(MR_mktag(2), parse_tree__error_util__V_71_71, 0) = ((MR_Box) (parse_tree__error_util__Word_86));
#line 1367 "error_util.m"
                      }
#line 1367 "error_util.m"
                      {
#line 1367 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_71_71));
#line 1367 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1367 "error_util.m"
                      }
#line 1366 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1366 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 4:
#line 1369 "error_util.m"
                    {
#line 1369 "error_util.m"
                      MR_Word parse_tree__error_util__V_70_70;
#line 1369 "error_util.m"
                      MR_String parse_tree__error_util__Word_87 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1370 "error_util.m"
                      {
#line 1370 "error_util.m"
                        parse_tree__error_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "error_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__error_util__V_70_70, 0) = ((MR_Box) (parse_tree__error_util__Word_87));
#line 1370 "error_util.m"
                      }
#line 1370 "error_util.m"
                      {
#line 1370 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1370 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1370 "error_util.m"
                      }
#line 1369 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1369 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 5:
#line 1339 "error_util.m"
                    {
#line 1339 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1340 "error_util.m"
                      {
#line 1340 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1339 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1339 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 6:
#line 1342 "error_util.m"
                    {
#line 1342 "error_util.m"
                      MR_String parse_tree__error_util__V_80_80;
#line 1342 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_83 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1343 "error_util.m"
                      {
#line 1343 "error_util.m"
                        parse_tree__error_util__V_80_80 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_83);
                      }
#line 1343 "error_util.m"
                      {
#line 1343 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_80_80, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1342 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1342 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 7:
#line 1372 "error_util.m"
                    {
#line 1372 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1372 "error_util.m"
                      MR_Word parse_tree__error_util__V_68_68;
#line 1372 "error_util.m"
                      MR_String parse_tree__error_util__V_69_69;

#line 1373 "error_util.m"
                      {
#line 1373 "error_util.m"
                        parse_tree__error_util__V_69_69 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                      }
#line 1373 "error_util.m"
                      {
#line 1373 "error_util.m"
                        parse_tree__error_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_68_68, 0) = ((MR_Box) (parse_tree__error_util__V_69_69));
#line 1373 "error_util.m"
                      }
#line 1373 "error_util.m"
                      {
#line 1373 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_68_68));
#line 1373 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1373 "error_util.m"
                      }
#line 1372 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1372 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 8:
#line 1375 "error_util.m"
                    {
#line 1375 "error_util.m"
                      MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1375 "error_util.m"
                      MR_Word parse_tree__error_util__V_67_67;
#line 1375 "error_util.m"
                      MR_String parse_tree__error_util__Word_88;

#line 1376 "error_util.m"
                      {
#line 1376 "error_util.m"
                        parse_tree__error_util__Word_88 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                      }
#line 1377 "error_util.m"
                      {
#line 1377 "error_util.m"
                        parse_tree__error_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_67_67, 0) = ((MR_Box) (parse_tree__error_util__Word_88));
#line 1377 "error_util.m"
                      }
#line 1377 "error_util.m"
                      {
#line 1377 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_67_67));
#line 1377 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1377 "error_util.m"
                      }
#line 1375 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1375 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 9:
#line 1379 "error_util.m"
                    {
#line 1379 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1379 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId_28;
#line 1379 "error_util.m"
                      MR_Word parse_tree__error_util__V_66_66;
#line 1379 "error_util.m"
                      MR_String parse_tree__error_util__Word_89;

#line 1380 "error_util.m"
                      {
#line 1380 "error_util.m"
                        parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_27, &parse_tree__error_util__ConsId_28);
                      }
#line 1381 "error_util.m"
                      {
#line 1381 "error_util.m"
                        parse_tree__error_util__Word_89 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_28);
                      }
#line 1382 "error_util.m"
                      {
#line 1382 "error_util.m"
                        parse_tree__error_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_66_66, 0) = ((MR_Box) (parse_tree__error_util__Word_89));
#line 1382 "error_util.m"
                      }
#line 1382 "error_util.m"
                      {
#line 1382 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1382 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1382 "error_util.m"
                      }
#line 1379 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1379 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 10:
#line 1384 "error_util.m"
                    {
#line 1384 "error_util.m"
                      MR_Word parse_tree__error_util__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1390 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtor_30;

#line 1385 "error_util.m"
                      {
#line 1385 "error_util.m"
                        parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_29, &parse_tree__error_util__TypeCtor_30);
                      }
#line 1390 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1386 "error_util.m"
                        {
#line 1386 "error_util.m"
                          MR_Word parse_tree__error_util__TypeCtorName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 0)));
#line 1386 "error_util.m"
                          MR_Integer parse_tree__error_util__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 1)));
#line 1386 "error_util.m"
                          MR_Word parse_tree__error_util__NewWord_33;
#line 1386 "error_util.m"
                          MR_String parse_tree__error_util__V_62_62;
#line 1386 "error_util.m"
                          MR_Word parse_tree__error_util__SymName_90;

#line 1387 "error_util.m"
                          {
#line 1387 "error_util.m"
                            parse_tree__error_util__SymName_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1387 "error_util.m"
                            MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_90, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_31));
#line 1387 "error_util.m"
                            MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_90, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_32));
#line 1387 "error_util.m"
                          }
#line 1388 "error_util.m"
                          {
#line 1388 "error_util.m"
                            parse_tree__error_util__V_62_62 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_90);
                          }
#line 1388 "error_util.m"
                          {
#line 1388 "error_util.m"
                            parse_tree__error_util__NewWord_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_33, 0) = ((MR_Box) (parse_tree__error_util__V_62_62));
#line 1388 "error_util.m"
                          }
#line 1389 "error_util.m"
                          {
#line 1389 "error_util.m"
                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_33));
#line 1389 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1389 "error_util.m"
                          }
#line 1386 "error_util.m"
                        }
#line 1390 "error_util.m"
                      else
#line 1391 "error_util.m"
                        {
#line 1391 "error_util.m"
                          {
#line 1391 "error_util.m"
                            mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "predicate \140parse_tree.error_util.convert_components_to_paragraphs_acc\'/5", (MR_String) "type is variable");
#line 1391 "error_util.m"
                            return;
                          }
#line 1391 "error_util.m"
                        }
#line 1384 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1384 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 11:
#line 1394 "error_util.m"
                    {
#line 1394 "error_util.m"
                      MR_Word parse_tree__error_util__PredOrFunc_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1394 "error_util.m"
                      MR_Word parse_tree__error_util__V_61_61;
#line 1394 "error_util.m"
                      MR_String parse_tree__error_util__Word_93;

#line 1395 "error_util.m"
                      {
#line 1395 "error_util.m"
                        parse_tree__error_util__Word_93 = parse_tree__error_util__pred_or_func_to_string_1_f_0(parse_tree__error_util__PredOrFunc_34);
                      }
#line 1396 "error_util.m"
                      {
#line 1396 "error_util.m"
                        parse_tree__error_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_61_61, 0) = ((MR_Box) (parse_tree__error_util__Word_93));
#line 1396 "error_util.m"
                      }
#line 1396 "error_util.m"
                      {
#line 1396 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_61_61));
#line 1396 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1396 "error_util.m"
                      }
#line 1394 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1394 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 12:
#line 1398 "error_util.m"
                    {
#line 1398 "error_util.m"
                      MR_Word parse_tree__error_util__SimpleCallId_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1398 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_94;

#line 1399 "error_util.m"
                      {
#line 1399 "error_util.m"
                        parse_tree__error_util__WordsStr_94 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_35);
                      }
#line 1400 "error_util.m"
                      {
#line 1400 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_94, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1398 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1398 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 13:
#line 1402 "error_util.m"
                    {
#line 1402 "error_util.m"
                      MR_String parse_tree__error_util__DeclName_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1402 "error_util.m"
                      MR_String parse_tree__error_util__V_58_58;
#line 1402 "error_util.m"
                      MR_Word parse_tree__error_util__V_60_60;
#line 1402 "error_util.m"
                      MR_String parse_tree__error_util__Word_95;

#line 1403 "error_util.m"
                      {
#line 1403 "error_util.m"
                        parse_tree__error_util__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_36);
                      }
#line 1403 "error_util.m"
                      {
#line 1403 "error_util.m"
                        parse_tree__error_util__Word_95 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_58_58);
                      }
#line 1404 "error_util.m"
                      {
#line 1404 "error_util.m"
                        parse_tree__error_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_60_60, 0) = ((MR_Box) (parse_tree__error_util__Word_95));
#line 1404 "error_util.m"
                      }
#line 1404 "error_util.m"
                      {
#line 1404 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_60_60));
#line 1404 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1404 "error_util.m"
                      }
#line 1402 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1402 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 14:
#line 1406 "error_util.m"
                    {
#line 1406 "error_util.m"
                      MR_String parse_tree__error_util__PragmaName_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1406 "error_util.m"
                      MR_String parse_tree__error_util__V_55_55;
#line 1406 "error_util.m"
                      MR_Word parse_tree__error_util__V_57_57;
#line 1406 "error_util.m"
                      MR_String parse_tree__error_util__Word_96;

#line 1407 "error_util.m"
                      {
#line 1407 "error_util.m"
                        parse_tree__error_util__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_37);
                      }
#line 1407 "error_util.m"
                      {
#line 1407 "error_util.m"
                        parse_tree__error_util__Word_96 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_55_55);
                      }
#line 1408 "error_util.m"
                      {
#line 1408 "error_util.m"
                        parse_tree__error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_57_57, 0) = ((MR_Box) (parse_tree__error_util__Word_96));
#line 1408 "error_util.m"
                      }
#line 1408 "error_util.m"
                      {
#line 1408 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_57_57));
#line 1408 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1408 "error_util.m"
                      }
#line 1406 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1406 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 15:
#line 1415 "error_util.m"
                    {
#line 1415 "error_util.m"
                      MR_Integer parse_tree__error_util__IndentDelta_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1415 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49;
#line 1415 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_97;

#line 1416 "error_util.m"
                      {
#line 1416 "error_util.m"
                        parse_tree__error_util__Strings_97 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1417 "error_util.m"
                      {
#line 1417 "error_util.m"
                        parse_tree__error_util__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1417 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 0) = ((MR_Box) (parse_tree__error_util__Strings_97));
#line 1417 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1417 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_39));
#line 1417 "error_util.m"
                      }
#line 1417 "error_util.m"
                      {
#line 1417 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_49_49)));
                      }
#line 1418 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1415 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                  case (MR_Integer) 16:
#line 1427 "error_util.m"
                    {
#line 1428 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1427 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1427 "error_util.m"
                    }
#line 1341 "error_util.m"
                    break;
#line 1341 "error_util.m"
                }
#line 1341 "error_util.m"
                break;
#line 1341 "error_util.m"
            }
#line 1430 "error_util.m"
            /* direct tailcall eliminated */
#line 1430 "error_util.m"
            {
#line 1430 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1430 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1430 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1430 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1430 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1430 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1430 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1430 "error_util.m"
            }
#line 1430 "error_util.m"
            continue;
#line 1337 "error_util.m"
          }
#line 1333 "error_util.m"
      }
#line 1333 "error_util.m"
      break;
#line 1333 "error_util.m"
    }
#line 1329 "error_util.m"
}

#line 1292 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1292 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1292 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1292 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1292 "error_util.m"
{
#line 1297 "error_util.m"
  {
#line 1297 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1297 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1297 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1296 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1297 "error_util.m"
    else
#line 1299 "error_util.m"
      {
#line 1297 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1297 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1297 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1297 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1297 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1297 "error_util.m"
          {
#line 1297 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1297 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1297 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1297 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1297 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1297 "error_util.m"
          }
#line 1299 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1298 "error_util.m"
          {
#line 1298 "error_util.m"
            return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1299 "error_util.m"
        else
#line 1300 "error_util.m"
          {
#line 1300 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1300 "error_util.m"
            {
#line 1300 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1300 "error_util.m"
            {
#line 1300 "error_util.m"
              return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1300 "error_util.m"
          }
#line 1299 "error_util.m"
      }
#line 1297 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1297 "error_util.m"
  }
#line 1292 "error_util.m"
}

#line 1279 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1279 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1279 "error_util.m"
{
#line 1281 "error_util.m"
  {
#line 1281 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1281 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1281 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1283 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "first";
#line 1281 "error_util.m"
    else
#line 1286 "error_util.m"
      {
#line 1284 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1285 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "second";
#line 1286 "error_util.m"
        else
#line 1288 "error_util.m"
          {
#line 1286 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1288 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1287 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_String) "third";
#line 1288 "error_util.m"
            else
#line 1289 "error_util.m"
              {
#line 1289 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 1289 "error_util.m"
                {
#line 1289 "error_util.m"
                  parse_tree__error_util__V_4_4 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                }
#line 1289 "error_util.m"
                {
#line 1289 "error_util.m"
                  return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "th");
                }
#line 1289 "error_util.m"
              }
#line 1288 "error_util.m"
          }
#line 1286 "error_util.m"
      }
#line 1281 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1281 "error_util.m"
  }
#line 1279 "error_util.m"
}

#line 1184 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1184 "error_util.m"
{
#line 1187 "error_util.m"
  {
#line 1187 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1187 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1187 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1187 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1187 "error_util.m"
    else
#line 1188 "error_util.m"
      {
#line 1188 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1188 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1188 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1189 "error_util.m"
        {
#line 1189 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1193 "error_util.m"
#line 1193 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Component_6)) {
#line 1193 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1193 "error_util.m"
          case (MR_Integer) 0:
#line 1193 "error_util.m"
#line 1193 "error_util.m"
            switch (MR_unmkbody(parse_tree__error_util__Component_6)) {
#line 1193 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1193 "error_util.m"
              case (MR_Integer) 0:
#line 1213 "error_util.m"
#line 1213 "error_util.m"
                switch (parse_tree__error_util__FirstInMsg_1) {
#line 1213 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1213 "error_util.m"
                  case (MR_Integer) 0:
#line 1212 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1213 "error_util.m"
                    break;
#line 1213 "error_util.m"
                  case (MR_Integer) 1:
#line 1526 "error_util.m"
                    {
#line 1526 "error_util.m"
                      MR_Char parse_tree__error_util__First_67;
#line 1526 "error_util.m"
                      MR_String parse_tree__error_util__Rest_68;

#line 1521 "error_util.m"
                      {
#line 1521 "error_util.m"
                        parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_67, &parse_tree__error_util__Rest_68);
                      }
#line 1521 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1522 "error_util.m"
                        {
#line 1522 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_67);
                        }
#line 1526 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1524 "error_util.m"
                        {
#line 1524 "error_util.m"
                          MR_Char parse_tree__error_util__LoweredFirst_69;

#line 1524 "error_util.m"
                          {
#line 1524 "error_util.m"
                            mercury__char__to_lower_2_p_0(parse_tree__error_util__First_67, &parse_tree__error_util__LoweredFirst_69);
                          }
#line 1525 "error_util.m"
                          {
#line 1525 "error_util.m"
                            mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_69, parse_tree__error_util__Rest_68);
                          }
#line 1524 "error_util.m"
                        }
#line 1526 "error_util.m"
                      else
#line 1527 "error_util.m"
                        parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1526 "error_util.m"
                    }
#line 1213 "error_util.m"
                    break;
#line 1213 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 1:
#line 1263 "error_util.m"
                {
#line 1264 "error_util.m"
                  {
#line 1264 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1263 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 2:
#line 1270 "error_util.m"
                {
#line 1271 "error_util.m"
                  {
#line 1271 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
                  }
#line 1270 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
            }
#line 1193 "error_util.m"
            break;
#line 1193 "error_util.m"
          case (MR_Integer) 1:
#line 1276 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1193 "error_util.m"
            break;
#line 1193 "error_util.m"
          case (MR_Integer) 2:
#line 1197 "error_util.m"
            {
#line 1197 "error_util.m"
              MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1198 "error_util.m"
              {
#line 1198 "error_util.m"
                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
              }
#line 1197 "error_util.m"
            }
#line 1193 "error_util.m"
            break;
#line 1193 "error_util.m"
          case (MR_Integer) 3:
#line 1193 "error_util.m"
#line 1193 "error_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) {
#line 1193 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1193 "error_util.m"
              case (MR_Integer) 0:
#line 1200 "error_util.m"
                {
#line 1200 "error_util.m"
                  MR_String parse_tree__error_util__V_43_43;
#line 1200 "error_util.m"
                  MR_String parse_tree__error_util__Word_46 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1200 "error_util.m"
                  MR_String parse_tree__error_util__V_79_79;

#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__V_79_79 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_46, (MR_String) "\'");
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_79_79);
                  }
#line 1201 "error_util.m"
                  {
#line 1201 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_43_43, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1200 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 1:
#line 1203 "error_util.m"
                {
#line 1203 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1203 "error_util.m"
                  MR_String parse_tree__error_util__V_42_42;

#line 1204 "error_util.m"
                  {
#line 1204 "error_util.m"
                    parse_tree__error_util__V_42_42 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                  }
#line 1204 "error_util.m"
                  {
#line 1204 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_42_42, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1203 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 2:
#line 1206 "error_util.m"
                {
#line 1206 "error_util.m"
                  MR_String parse_tree__error_util__V_41_41;
#line 1206 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1282 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_47 == (MR_Integer) 1);
#line 1281 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 1283 "error_util.m"
                    parse_tree__error_util__V_41_41 = (MR_String) "first";
#line 1281 "error_util.m"
                  else
#line 1286 "error_util.m"
                    {
#line 1284 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_47 == (MR_Integer) 2);
#line 1286 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1285 "error_util.m"
                        parse_tree__error_util__V_41_41 = (MR_String) "second";
#line 1286 "error_util.m"
                      else
#line 1288 "error_util.m"
                        {
#line 1286 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_47 == (MR_Integer) 3);
#line 1288 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 1287 "error_util.m"
                            parse_tree__error_util__V_41_41 = (MR_String) "third";
#line 1288 "error_util.m"
                          else
#line 1289 "error_util.m"
                            {
#line 1289 "error_util.m"
                              MR_String parse_tree__error_util__V_71_71;

#line 1289 "error_util.m"
                              {
#line 1289 "error_util.m"
                                parse_tree__error_util__V_71_71 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_47);
                              }
#line 1289 "error_util.m"
                              {
#line 1289 "error_util.m"
                                parse_tree__error_util__V_41_41 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_71_71, (MR_String) "th");
                              }
#line 1289 "error_util.m"
                            }
#line 1288 "error_util.m"
                        }
#line 1286 "error_util.m"
                    }
#line 1207 "error_util.m"
                  {
#line 1207 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_41_41, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1206 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 3:
#line 1218 "error_util.m"
                {
#line 1218 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1219 "error_util.m"
                  {
#line 1219 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                  }
#line 1218 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 4:
#line 1221 "error_util.m"
                {
#line 1221 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1222 "error_util.m"
                  {
#line 1222 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1221 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 5:
#line 1191 "error_util.m"
                {
#line 1191 "error_util.m"
                  MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1192 "error_util.m"
                  {
#line 1192 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1191 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 6:
#line 1194 "error_util.m"
                {
#line 1194 "error_util.m"
                  MR_String parse_tree__error_util__V_44_44;
#line 1194 "error_util.m"
                  MR_String parse_tree__error_util__Words_45 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1195 "error_util.m"
                  {
#line 1195 "error_util.m"
                    parse_tree__error_util__V_44_44 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Words_45);
                  }
#line 1195 "error_util.m"
                  {
#line 1195 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_44_44, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1194 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 7:
#line 1224 "error_util.m"
                {
#line 1224 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1224 "error_util.m"
                  MR_String parse_tree__error_util__Word_48;
#line 1224 "error_util.m"
                  MR_String parse_tree__error_util__V_82_82;
#line 1224 "error_util.m"
                  MR_String parse_tree__error_util__V_85_85;

#line 1533 "error_util.m"
                  {
#line 1533 "error_util.m"
                    parse_tree__error_util__V_82_82 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__V_85_85 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_82_82, (MR_String) "\'");
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__Word_48 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_85_85);
                  }
#line 1226 "error_util.m"
                  {
#line 1226 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1224 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 8:
#line 1228 "error_util.m"
                {
#line 1228 "error_util.m"
                  MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1228 "error_util.m"
                  MR_String parse_tree__error_util__Word_49;
#line 1228 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1228 "error_util.m"
                  MR_Integer parse_tree__error_util__Arity_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1228 "error_util.m"
                  MR_String parse_tree__error_util__V_89_89;
#line 1228 "error_util.m"
                  MR_String parse_tree__error_util__V_90_90;
#line 1228 "error_util.m"
                  MR_String parse_tree__error_util__V_91_91;
#line 1228 "error_util.m"
                  MR_String parse_tree__error_util__V_93_93;
#line 1228 "error_util.m"
                  MR_String parse_tree__error_util__V_96_96;

#line 1538 "error_util.m"
                  {
#line 1538 "error_util.m"
                    parse_tree__error_util__V_90_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_87);
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__V_96_96 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_90_90, (MR_String) "\'");
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_96_96);
                  }
#line 1538 "error_util.m"
                  {
#line 1538 "error_util.m"
                    parse_tree__error_util__V_93_93 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_88);
                  }
#line 1538 "error_util.m"
                  {
#line 1538 "error_util.m"
                    parse_tree__error_util__V_91_91 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_93_93);
                  }
#line 1538 "error_util.m"
                  {
#line 1538 "error_util.m"
                    parse_tree__error_util__Word_49 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_89_89, parse_tree__error_util__V_91_91);
                  }
#line 1230 "error_util.m"
                  {
#line 1230 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1228 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 9:
#line 1232 "error_util.m"
                {
#line 1232 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1232 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId_18;
#line 1232 "error_util.m"
                  MR_String parse_tree__error_util__Word_50;

#line 1233 "error_util.m"
                  {
#line 1233 "error_util.m"
                    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_17, &parse_tree__error_util__ConsId_18);
                  }
#line 1234 "error_util.m"
                  {
#line 1234 "error_util.m"
                    parse_tree__error_util__Word_50 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_18);
                  }
#line 1235 "error_util.m"
                  {
#line 1235 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1232 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 10:
#line 1253 "error_util.m"
                {
#line 1253 "error_util.m"
                  MR_Word parse_tree__error_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1259 "error_util.m"
                  MR_Word parse_tree__error_util__TypeCtor_24;

#line 1254 "error_util.m"
                  {
#line 1254 "error_util.m"
                    parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_23, &parse_tree__error_util__TypeCtor_24);
                  }
#line 1259 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 1255 "error_util.m"
                    {
#line 1255 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtorName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 0)));
#line 1255 "error_util.m"
                      MR_Integer parse_tree__error_util__TypeCtorArity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 1)));
#line 1255 "error_util.m"
                      MR_String parse_tree__error_util__Word_55;
#line 1255 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_56;

#line 1256 "error_util.m"
                      {
#line 1256 "error_util.m"
                        parse_tree__error_util__SymName_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_56, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_25));
#line 1256 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_56, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_26));
#line 1256 "error_util.m"
                      }
#line 1257 "error_util.m"
                      {
#line 1257 "error_util.m"
                        parse_tree__error_util__Word_55 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_56);
                      }
#line 1258 "error_util.m"
                      {
#line 1258 "error_util.m"
                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_55, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                      }
#line 1255 "error_util.m"
                    }
#line 1259 "error_util.m"
                  else
#line 1260 "error_util.m"
                    {
#line 1260 "error_util.m"
                      {
#line 1260 "error_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "function \140parse_tree.error_util.error_pieces_to_string_2\'/2", (MR_String) "type is variable");
                      }
#line 1260 "error_util.m"
                    }
#line 1253 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 11:
#line 1237 "error_util.m"
                {
#line 1237 "error_util.m"
                  MR_Word parse_tree__error_util__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1237 "error_util.m"
                  MR_String parse_tree__error_util__Word_51;

#line 1697 "error_util.m"
#line 1697 "error_util.m"
                  switch (parse_tree__error_util__PredOrFunc_19) {
#line 1697 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1697 "error_util.m"
                    case (MR_Integer) 1:
#line 1698 "error_util.m"
                      parse_tree__error_util__Word_51 = (MR_String) "function";
#line 1697 "error_util.m"
                      break;
#line 1697 "error_util.m"
                    case (MR_Integer) 0:
#line 1697 "error_util.m"
                      parse_tree__error_util__Word_51 = (MR_String) "predicate";
#line 1697 "error_util.m"
                      break;
#line 1697 "error_util.m"
                  }
#line 1239 "error_util.m"
                  {
#line 1239 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_51, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1237 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 12:
#line 1241 "error_util.m"
                {
#line 1241 "error_util.m"
                  MR_Word parse_tree__error_util__SimpleCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1241 "error_util.m"
                  MR_String parse_tree__error_util__Word_52;

#line 1242 "error_util.m"
                  {
#line 1242 "error_util.m"
                    parse_tree__error_util__Word_52 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_20);
                  }
#line 1243 "error_util.m"
                  {
#line 1243 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_52, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1241 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 13:
#line 1245 "error_util.m"
                {
#line 1245 "error_util.m"
                  MR_String parse_tree__error_util__Decl_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1245 "error_util.m"
                  MR_String parse_tree__error_util__V_39_39;
#line 1245 "error_util.m"
                  MR_String parse_tree__error_util__Word_53;
#line 1245 "error_util.m"
                  MR_String parse_tree__error_util__V_63_63;

#line 1246 "error_util.m"
                  {
#line 1246 "error_util.m"
                    parse_tree__error_util__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_21);
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__V_63_63 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_39_39, (MR_String) "\'");
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__Word_53 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_63_63);
                  }
#line 1247 "error_util.m"
                  {
#line 1247 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_53, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1245 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 14:
#line 1249 "error_util.m"
                {
#line 1249 "error_util.m"
                  MR_String parse_tree__error_util__PragmaName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1249 "error_util.m"
                  MR_String parse_tree__error_util__V_37_37;
#line 1249 "error_util.m"
                  MR_String parse_tree__error_util__Word_54;
#line 1249 "error_util.m"
                  MR_String parse_tree__error_util__V_75_75;

#line 1250 "error_util.m"
                  {
#line 1250 "error_util.m"
                    parse_tree__error_util__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_22);
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_37_37, (MR_String) "\'");
                  }
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__Word_54 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_75_75);
                  }
#line 1251 "error_util.m"
                  {
#line 1251 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_54, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1249 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 15:
#line 1266 "error_util.m"
                {
#line 1268 "error_util.m"
                  {
#line 1268 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1266 "error_util.m"
                }
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
              case (MR_Integer) 16:
#line 1276 "error_util.m"
                parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1193 "error_util.m"
                break;
#line 1193 "error_util.m"
            }
#line 1193 "error_util.m"
            break;
#line 1193 "error_util.m"
        }
#line 1188 "error_util.m"
      }
#line 1187 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1187 "error_util.m"
  }
#line 1184 "error_util.m"
}

#line 1173 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1173 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1173 "error_util.m"
{
#line 1175 "error_util.m"
  while (MR_TRUE)
#line 1175 "error_util.m"
    {
#line 1175 "error_util.m"
      /* tailcall optimized into a loop */
#line 1175 "error_util.m"
      {
#line 1175 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1175 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1175 "error_util.m"
          {
#line 1175 "error_util.m"
          }
#line 1175 "error_util.m"
        else
#line 1176 "error_util.m"
          {
#line 1176 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1176 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1177 "error_util.m"
            {
#line 1177 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1178 "error_util.m"
            {
#line 1178 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1179 "error_util.m"
            /* direct tailcall eliminated */
#line 1179 "error_util.m"
            {
#line 1179 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1179 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1179 "error_util.m"
            }
#line 1179 "error_util.m"
            continue;
#line 1176 "error_util.m"
          }
#line 1175 "error_util.m"
      }
#line 1175 "error_util.m"
      break;
#line 1175 "error_util.m"
    }
#line 1173 "error_util.m"
}

#line 1146 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1146 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1146 "error_util.m"
{
#line 1149 "error_util.m"
  while (MR_TRUE)
#line 1149 "error_util.m"
    {
#line 1149 "error_util.m"
      /* tailcall optimized into a loop */
#line 1149 "error_util.m"
      {
#line 1149 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1149 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "error_util.m"
          {
#line 1149 "error_util.m"
          }
#line 1149 "error_util.m"
        else
#line 1150 "error_util.m"
          {
#line 1150 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1150 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1150 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1150 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1150 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1150 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1150 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1154 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1155 "error_util.m"
              {
#line 1155 "error_util.m"
              }
#line 1154 "error_util.m"
            else
#line 1152 "error_util.m"
              {
#line 1152 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1153 "error_util.m"
                {
#line 1153 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1152 "error_util.m"
              }
#line 1157 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1157 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1158 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1158 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1159 "error_util.m"
            {
#line 1159 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1160 "error_util.m"
            {
#line 1160 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1166 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "error_util.m"
              {
#line 1167 "error_util.m"
                {
#line 1167 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1166 "error_util.m"
              }
#line 1166 "error_util.m"
            else
#line 1168 "error_util.m"
              {
#line 1168 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1168 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1169 "error_util.m"
                {
#line 1169 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1170 "error_util.m"
                {
#line 1170 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1171 "error_util.m"
                {
#line 1171 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1168 "error_util.m"
              }
#line 1162 "error_util.m"
            /* direct tailcall eliminated */
#line 1162 "error_util.m"
            {
#line 1162 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1162 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1162 "error_util.m"
            }
#line 1162 "error_util.m"
            continue;
#line 1150 "error_util.m"
          }
#line 1149 "error_util.m"
      }
#line 1149 "error_util.m"
      break;
#line 1149 "error_util.m"
    }
#line 1146 "error_util.m"
}

#line 1118 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1118 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1118 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2)
#line 1118 "error_util.m"
{
#line 1120 "error_util.m"
  while (MR_TRUE)
#line 1120 "error_util.m"
    {
#line 1120 "error_util.m"
      /* tailcall optimized into a loop */
#line 1120 "error_util.m"
      {
#line 1120 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1120 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1120 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 1120 "error_util.m"
        else
#line 1121 "error_util.m"
          {
#line 1121 "error_util.m"
            MR_Word parse_tree__error_util__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1121 "error_util.m"
            MR_Word parse_tree__error_util__Ranges_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1121 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 0)));
#line 1121 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMax_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 1)));

#line 1126 "error_util.m"
            if ((parse_tree__error_util__MaybeMin_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1126 "error_util.m"
            else
#line 1127 "error_util.m"
              {
#line 1127 "error_util.m"
                MR_Integer parse_tree__error_util__Min_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMin_9, (MR_Integer) 0)));

#line 1128 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Min_11 <= parse_tree__error_util__LineNumber_2);
#line 1127 "error_util.m"
              }
#line 1129 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1132 "error_util.m"
              {
#line 1132 "error_util.m"
                if ((parse_tree__error_util__MaybeMax_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1131 "error_util.m"
                  parse_tree__error_util__succeeded = MR_TRUE;
#line 1132 "error_util.m"
                else
#line 1133 "error_util.m"
                  {
#line 1133 "error_util.m"
                    MR_Integer parse_tree__error_util__Max_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_10, (MR_Integer) 0)));

#line 1134 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumber_2 <= parse_tree__error_util__Max_12);
#line 1133 "error_util.m"
                  }
#line 1132 "error_util.m"
              }
#line 1138 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1137 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1138 "error_util.m"
            else
#line 1139 "error_util.m"
              {
#line 1139 "error_util.m"
                /* direct tailcall eliminated */
#line 1139 "error_util.m"
                {
#line 1139 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Ranges_6;

#line 1139 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1139 "error_util.m"
                }
#line 1139 "error_util.m"
                continue;
#line 1139 "error_util.m"
              }
#line 1121 "error_util.m"
          }
#line 1120 "error_util.m"
        return parse_tree__error_util__HeadVar__3_3;
#line 1120 "error_util.m"
      }
#line 1120 "error_util.m"
      break;
#line 1120 "error_util.m"
    }
#line 1118 "error_util.m"
}

#line 1052 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1052 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1052 "error_util.m"
  MR_Word parse_tree__error_util__Components_14)
#line 1052 "error_util.m"
{
#line 1058 "error_util.m"
  {
#line 1058 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1058 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextLength_20;

#line 1094 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1095 "error_util.m"
      {
#line 1096 "error_util.m"
        parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[4]);
#line 1095 "error_util.m"
      }
#line 1094 "error_util.m"
    else
#line 1067 "error_util.m"
      {
#line 1067 "error_util.m"
        MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_10, (MR_Integer) 0)));
#line 1067 "error_util.m"
        MR_String parse_tree__error_util__FileName_17;
#line 1067 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_18;

#line 1068 "error_util.m"
        {
#line 1068 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__FileName_17);
        }
#line 1069 "error_util.m"
        {
#line 1069 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__LineNumber_18);
        }
#line 1072 "error_util.m"
        {
#line 1072 "error_util.m"
          MR_Word parse_tree__error_util__LineNumberRanges_19;
#line 1072 "error_util.m"
          MR_Word parse_tree__error_util__V_37_37;
#line 1072 "error_util.m"
          MR_Box parse_tree__error_util__conv0_LineNumberRanges_19;

#line 1072 "error_util.m"
          {
#line 1072 "error_util.m"
            parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) (parse_tree__error_util__FileName_17)), &parse_tree__error_util__conv0_LineNumberRanges_19);
          }
#line 1072 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1072 "error_util.m"
            {
#line 1072 "error_util.m"
              parse_tree__error_util__LineNumberRanges_19 = ((MR_Word) parse_tree__error_util__conv0_LineNumberRanges_19);
#line 1072 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1072 "error_util.m"
            }
#line 1072 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1072 "error_util.m"
            {
#line 1073 "error_util.m"
              {
#line 1073 "error_util.m"
                parse_tree__error_util__V_37_37 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_19, parse_tree__error_util__LineNumber_18);
              }
#line 1073 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 1072 "error_util.m"
            }
#line 1072 "error_util.m"
        }
#line 1074 "error_util.m"
        if (!(parse_tree__error_util__succeeded))
#line 1076 "error_util.m"
          {
#line 1076 "error_util.m"
            MR_Word parse_tree__error_util__V_36_36;
#line 1076 "error_util.m"
            MR_Word parse_tree__error_util__LineNumberRanges_48;
#line 1076 "error_util.m"
            MR_Box parse_tree__error_util__conv1_LineNumberRanges_48;

#line 1076 "error_util.m"
            {
#line 1076 "error_util.m"
              parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) ((MR_String) "")), &parse_tree__error_util__conv1_LineNumberRanges_48);
            }
#line 1076 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1076 "error_util.m"
              {
#line 1076 "error_util.m"
                parse_tree__error_util__LineNumberRanges_48 = ((MR_Word) parse_tree__error_util__conv1_LineNumberRanges_48);
#line 1076 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1076 "error_util.m"
              }
#line 1076 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1076 "error_util.m"
              {
#line 1077 "error_util.m"
                {
#line 1077 "error_util.m"
                  parse_tree__error_util__V_36_36 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_48, parse_tree__error_util__LineNumber_18);
                }
#line 1077 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 1076 "error_util.m"
              }
#line 1076 "error_util.m"
          }
#line 1082 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1080 "error_util.m"
          {
#line 1080 "error_util.m"
            {
#line 1080 "error_util.m"
              libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 1);
            }
#line 1081 "error_util.m"
            parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1080 "error_util.m"
          }
#line 1082 "error_util.m"
        else
#line 1083 "error_util.m"
          {
#line 1083 "error_util.m"
            MR_Integer parse_tree__error_util__FileNameLength_21;
#line 1083 "error_util.m"
            MR_String parse_tree__error_util__LineNumberStr_22;
#line 1083 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength0_23;
#line 1083 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength_24;
#line 1083 "error_util.m"
            MR_Integer parse_tree__error_util__V_41_41;
#line 1083 "error_util.m"
            MR_Integer parse_tree__error_util__V_42_42;
#line 1083 "error_util.m"
            MR_Integer parse_tree__error_util__V_43_43;

#line 1083 "error_util.m"
            {
#line 1083 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_17, &parse_tree__error_util__FileNameLength_21);
            }
#line 1084 "error_util.m"
            {
#line 1084 "error_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_18, &parse_tree__error_util__LineNumberStr_22);
            }
#line 1085 "error_util.m"
            {
#line 1085 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_22, &parse_tree__error_util__LineNumberStrLength0_23);
            }
#line 1086 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_23 < (MR_Integer) 3);
#line 1088 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1087 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = (MR_Integer) 3;
#line 1088 "error_util.m"
            else
#line 1089 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = parse_tree__error_util__LineNumberStrLength0_23;
#line 1092 "error_util.m"
            parse_tree__error_util__V_43_43 = (parse_tree__error_util__FileNameLength_21 + (MR_Integer) 1);
#line 1092 "error_util.m"
            parse_tree__error_util__V_42_42 = (parse_tree__error_util__V_43_43 + parse_tree__error_util__LineNumberStrLength_24);
#line 1092 "error_util.m"
            parse_tree__error_util__V_41_41 = (parse_tree__error_util__V_42_42 + (MR_Integer) 2);
#line 1092 "error_util.m"
            {
#line 1092 "error_util.m"
              parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, 0) = ((MR_Box) (parse_tree__error_util__V_41_41));
#line 1092 "error_util.m"
            }
#line 1083 "error_util.m"
          }
#line 1067 "error_util.m"
      }
#line 1101 "error_util.m"
    if ((parse_tree__error_util__MaybeContextLength_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "error_util.m"
      {
#line 1099 "error_util.m"
      }
#line 1101 "error_util.m"
    else
#line 1102 "error_util.m"
      {
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1102 "error_util.m"
        MR_Integer parse_tree__error_util__ContextLength_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, (MR_Integer) 0)));
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__Paragraphs_26;
#line 1102 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndent_27;
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__MaybeRemain_30;
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__Lines_31;
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__ParasCord_55;
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__V_58_58;

#line 1320 "error_util.m"
        {
#line 1320 "error_util.m"
          parse_tree__error_util__V_58_58 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_59);
        }
#line 1319 "error_util.m"
        {
#line 1319 "error_util.m"
          parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_58_58, &parse_tree__error_util__ParasCord_55);
        }
#line 1321 "error_util.m"
        {
#line 1321 "error_util.m"
          parse_tree__error_util__Paragraphs_26 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_59, parse_tree__error_util__ParasCord_55);
        }
#line 1104 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_9 == (MR_Integer) 0);
#line 1104 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1104 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 0;
#line 1104 "error_util.m"
        else
#line 1104 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 1;
#line 1109 "error_util.m"
        if ((parse_tree__error_util__MaybeMaxWidth_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1111 "error_util.m"
          parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1109 "error_util.m"
        else
#line 1106 "error_util.m"
          {
#line 1106 "error_util.m"
            MR_Integer parse_tree__error_util__MaxWidth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_12, (MR_Integer) 0)));
#line 1106 "error_util.m"
            MR_Integer parse_tree__error_util__Remain_29;
#line 1106 "error_util.m"
            MR_Integer parse_tree__error_util__V_46_46 = (parse_tree__error_util__ContextLength_25 + parse_tree__error_util__FixedIndent_11);

#line 1107 "error_util.m"
            parse_tree__error_util__Remain_29 = (parse_tree__error_util__MaxWidth_28 - parse_tree__error_util__V_46_46);
#line 1108 "error_util.m"
            {
#line 1108 "error_util.m"
              parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_30, 0) = ((MR_Box) (parse_tree__error_util__Remain_29));
#line 1108 "error_util.m"
            }
#line 1106 "error_util.m"
          }
#line 1113 "error_util.m"
        {
#line 1113 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_9, parse_tree__error_util__FirstIndent_27, parse_tree__error_util__Paragraphs_26, parse_tree__error_util__MaybeRemain_30, &parse_tree__error_util__Lines_31);
        }
#line 1115 "error_util.m"
        {
#line 1115 "error_util.m"
          parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_31, parse_tree__error_util__MaybeContext_10, parse_tree__error_util__FixedIndent_11);
#line 1115 "error_util.m"
          return;
        }
#line 1102 "error_util.m"
      }
#line 1058 "error_util.m"
  }
#line 1052 "error_util.m"
}

#line 1040 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1040 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1040 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 1040 "error_util.m"
{
#line 1045 "error_util.m"
  {
#line 1045 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1045 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_14;
#line 1045 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_15;

#line 1046 "error_util.m"
    {
#line 1046 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_11, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_14);
    }
#line 1048 "error_util.m"
    {
#line 1048 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_11, &parse_tree__error_util__LimitErrorContextsMap_15);
    }
#line 1049 "error_util.m"
    {
#line 1049 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10, parse_tree__error_util__MaybeMaxWidth_14, parse_tree__error_util__LimitErrorContextsMap_15, parse_tree__error_util__Components_12);
#line 1049 "error_util.m"
      return;
    }
#line 1045 "error_util.m"
  }
#line 1040 "error_util.m"
}

#line 1023 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1023 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1023 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2)
#line 1023 "error_util.m"
{
#line 1026 "error_util.m"
  {
#line 1026 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1026 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1026 "error_util.m"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1026 "error_util.m"
    else
#line 1027 "error_util.m"
      {
#line 1027 "error_util.m"
        MR_String parse_tree__error_util__Line_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "error_util.m"
        MR_Word parse_tree__error_util__Lines_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1027 "error_util.m"
        MR_Word parse_tree__error_util__TailPieces_6;
#line 1027 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7;
#line 1027 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1028 "error_util.m"
        {
#line 1028 "error_util.m"
          parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__Lines_4, &parse_tree__error_util__TailPieces_6);
        }
#line 1029 "error_util.m"
        {
#line 1029 "error_util.m"
          parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1029 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__Line_3));
#line 1029 "error_util.m"
        }
#line 1029 "error_util.m"
        {
#line 1029 "error_util.m"
          parse_tree__error_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1029 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 1) = ((MR_Box) (parse_tree__error_util__TailPieces_6));
#line 1029 "error_util.m"
        }
#line 1029 "error_util.m"
        {
#line 1029 "error_util.m"
          MR_Word base;
#line 1029 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "error_util.m"
          *parse_tree__error_util__HeadVar__2_2 = base;
#line 1029 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1029 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1029 "error_util.m"
        }
#line 1027 "error_util.m"
      }
#line 1026 "error_util.m"
  }
#line 1023 "error_util.m"
}

#line 869 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 869 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 869 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 869 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 869 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 869 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10)
#line 869 "error_util.m"
{
#line 876 "error_util.m"
  while (MR_TRUE)
#line 876 "error_util.m"
    {
#line 876 "error_util.m"
      /* tailcall optimized into a loop */
#line 876 "error_util.m"
      {
#line 876 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 876 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "error_util.m"
          {
#line 877 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 876 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 876 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 876 "error_util.m"
          }
#line 876 "error_util.m"
        else
#line 879 "error_util.m"
          {
#line 879 "error_util.m"
            MR_Word parse_tree__error_util__Component_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 879 "error_util.m"
            MR_Word parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 879 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;
#line 879 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 879 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;

#line 886 "error_util.m"
#line 886 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_28)) {
#line 886 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 886 "error_util.m"
              case (MR_Integer) 0:
#line 881 "error_util.m"
                {
#line 881 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_28, (MR_Integer) 0)));

#line 882 "error_util.m"
                  {
#line 882 "error_util.m"
                    parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_37);
                  }
#line 884 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 885 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 881 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 881 "error_util.m"
                }
#line 886 "error_util.m"
                break;
#line 886 "error_util.m"
              case (MR_Integer) 1:
#line 887 "error_util.m"
                {
#line 887 "error_util.m"
                  MR_Word parse_tree__error_util__Option_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 887 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 887 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 887 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_41;

#line 888 "error_util.m"
                  {
#line 888 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_38, &parse_tree__error_util__OptionValue_41);
                  }
#line 889 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_41 == parse_tree__error_util__RequiredValue_39);
#line 892 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 890 "error_util.m"
                    {
#line 890 "error_util.m"
                      parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__EmbeddedComponents_40, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_80_80, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                    }
#line 892 "error_util.m"
                  else
#line 893 "error_util.m"
                    {
#line 893 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 893 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 893 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 893 "error_util.m"
                    }
#line 887 "error_util.m"
                }
#line 886 "error_util.m"
                break;
#line 886 "error_util.m"
              case (MR_Integer) 2:
#line 896 "error_util.m"
                {
#line 896 "error_util.m"
                  MR_Word parse_tree__error_util__AlwaysOrOnce_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 0)));
#line 896 "error_util.m"
                  MR_Word parse_tree__error_util__VerboseErrors_43;
#line 896 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 1)));

#line 897 "error_util.m"
                  {
#line 897 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_43);
                  }
#line 918 "error_util.m"
#line 918 "error_util.m"
                  switch (parse_tree__error_util__VerboseErrors_43) {
#line 918 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 918 "error_util.m"
                    case (MR_Integer) 0:
#line 919 "error_util.m"
                      {
#line 920 "error_util.m"
                        {
#line 920 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 919 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 919 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 919 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 919 "error_util.m"
                      }
#line 918 "error_util.m"
                      break;
#line 918 "error_util.m"
                    case (MR_Integer) 1:
#line 906 "error_util.m"
#line 906 "error_util.m"
                      switch (parse_tree__error_util__AlwaysOrOnce_42) {
#line 906 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 906 "error_util.m"
                        case (MR_Integer) 0:
#line 901 "error_util.m"
                          {
#line 902 "error_util.m"
                            {
#line 902 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                            }
#line 904 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 905 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 901 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 901 "error_util.m"
                          }
#line 906 "error_util.m"
                          break;
#line 906 "error_util.m"
                        case (MR_Integer) 1:
#line 910 "error_util.m"
                          {
#line 908 "error_util.m"
                            {
#line 908 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, ((MR_Box) (parse_tree__error_util__ComponentPieces_86)));
                            }
#line 910 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 909 "error_util.m"
                              {
#line 909 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 909 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 909 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 909 "error_util.m"
                              }
#line 910 "error_util.m"
                            else
#line 912 "error_util.m"
                              {
#line 911 "error_util.m"
                                {
#line 911 "error_util.m"
                                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                                }
#line 913 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 914 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 915 "error_util.m"
                                {
#line 915 "error_util.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__ComponentPieces_86)), parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                                }
#line 912 "error_util.m"
                              }
#line 910 "error_util.m"
                          }
#line 906 "error_util.m"
                          break;
#line 906 "error_util.m"
                      }
#line 918 "error_util.m"
                      break;
#line 918 "error_util.m"
                  }
#line 896 "error_util.m"
                }
#line 886 "error_util.m"
                break;
#line 886 "error_util.m"
              case (MR_Integer) 3:
#line 886 "error_util.m"
#line 886 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 0)))) {
#line 886 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 886 "error_util.m"
                  case (MR_Integer) 0:
#line 923 "error_util.m"
                    {
#line 923 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 923 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2)));
#line 923 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_87;

#line 924 "error_util.m"
                      {
#line 924 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_87);
                      }
#line 929 "error_util.m"
#line 929 "error_util.m"
                      switch (parse_tree__error_util__VerboseErrors_87) {
#line 929 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 929 "error_util.m"
                        case (MR_Integer) 0:
#line 930 "error_util.m"
                          {
#line 931 "error_util.m"
                            {
#line 931 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__NonVerbosePieces_45);
                            }
#line 933 "error_util.m"
                            {
#line 933 "error_util.m"
                              libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                            }
#line 930 "error_util.m"
                          }
#line 929 "error_util.m"
                          break;
#line 929 "error_util.m"
                        case (MR_Integer) 1:
#line 927 "error_util.m"
                          {
#line 927 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__VerbosePieces_44);
                          }
#line 929 "error_util.m"
                          break;
#line 929 "error_util.m"
                      }
#line 935 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 936 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 923 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 923 "error_util.m"
                    }
#line 886 "error_util.m"
                    break;
#line 886 "error_util.m"
                  case (MR_Integer) 1:
#line 938 "error_util.m"
                    {
#line 938 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 938 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_46 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2));
#line 15669 "parse_tree.error_util.c"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15671 "parse_tree.error_util.c"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79;

#line 15674 "parse_tree.error_util.c"
                      {
#line 15676 "parse_tree.error_util.c"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_90), parse_tree__error_util__Anything_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79);
                      }
#line 940 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 941 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 938 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 938 "error_util.m"
                    }
#line 886 "error_util.m"
                    break;
#line 886 "error_util.m"
                }
#line 886 "error_util.m"
                break;
#line 886 "error_util.m"
            }
#line 943 "error_util.m"
            /* direct tailcall eliminated */
#line 943 "error_util.m"
            {
#line 943 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_29;
#line 943 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 943 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;
#line 943 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;

#line 943 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9;
#line 943 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 943 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 943 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 943 "error_util.m"
            }
#line 943 "error_util.m"
            continue;
#line 879 "error_util.m"
          }
#line 876 "error_util.m"
      }
#line 876 "error_util.m"
      break;
#line 876 "error_util.m"
    }
#line 869 "error_util.m"
}

#line 837 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 837 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 837 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 837 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7)
#line 837 "error_util.m"
{
#line 843 "error_util.m"
  while (MR_TRUE)
#line 843 "error_util.m"
    {
#line 843 "error_util.m"
      /* tailcall optimized into a loop */
#line 843 "error_util.m"
      {
#line 843 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 843 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "error_util.m"
          {
#line 844 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6;
#line 843 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 843 "error_util.m"
          }
#line 843 "error_util.m"
        else
#line 846 "error_util.m"
          {
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__Msg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__Components_29;
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_30;
#line 846 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_32;
#line 846 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_33;
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_41_41;
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 846 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 15796 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_21)) == (MR_mktag((MR_Integer) 1))))
#line 15798 "parse_tree.error_util.c"
              {
#line 15800 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_31;

#line 853 "error_util.m"
                parse_tree__error_util__MaybeContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 0)));
#line 853 "error_util.m"
                parse_tree__error_util__TreatAsFirst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 853 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 2)));
#line 853 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 3)));
#line 859 "error_util.m"
#line 859 "error_util.m"
                switch (parse_tree__error_util__TreatAsFirst_31) {
#line 859 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 859 "error_util.m"
                  case (MR_Integer) 1:
#line 860 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 859 "error_util.m"
                    break;
#line 859 "error_util.m"
                  case (MR_Integer) 0:
#line 858 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = (MR_Integer) 0;
#line 859 "error_util.m"
                    break;
#line 859 "error_util.m"
                }
#line 15830 "parse_tree.error_util.c"
              }
#line 15832 "parse_tree.error_util.c"
            else
#line 15834 "parse_tree.error_util.c"
              {
#line 15836 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 0)));

#line 848 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 849 "error_util.m"
                {
#line 849 "error_util.m"
                  parse_tree__error_util__MaybeContext_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_30, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_28));
#line 849 "error_util.m"
                }
#line 851 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = (MR_Integer) 0;
#line 860 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 15853 "parse_tree.error_util.c"
              }
#line 863 "error_util.m"
            parse_tree__error_util__Indent_33 = (parse_tree__error_util__ExtraIndentLevel_32 * (MR_Integer) 2);
#line 864 "error_util.m"
            {
#line 864 "error_util.m"
              parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__Components_29, parse_tree__error_util__MaybeContext_30, parse_tree__error_util__Indent_33, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_41_41, &parse_tree__error_util__STATE_VARIABLE_First_43_43, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45);
            }
#line 866 "error_util.m"
            /* direct tailcall eliminated */
#line 866 "error_util.m"
            {
#line 866 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_22;
#line 866 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 866 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 866 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 866 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6;
#line 866 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 866 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 866 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 866 "error_util.m"
            }
#line 866 "error_util.m"
            continue;
#line 846 "error_util.m"
          }
#line 843 "error_util.m"
      }
#line 843 "error_util.m"
      break;
#line 843 "error_util.m"
    }
#line 837 "error_util.m"
}

#line 785 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 785 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 785 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 785 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 785 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 785 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 785 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 785 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 785 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28)
#line 785 "error_util.m"
{
#line 791 "error_util.m"
  {
#line 791 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 791 "error_util.m"
    MR_Word parse_tree__error_util__Severity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 0)));
#line 791 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 2)));
#line 791 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_20;
#line 791 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_21;
#line 792 "error_util.m"
    MR_Word parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 1)));

#line 793 "error_util.m"
    {
#line 793 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_9_p_0(parse_tree__error_util__Msgs_19, parse_tree__error_util__Globals_11, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_20, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 795 "error_util.m"
    {
#line 795 "error_util.m"
      parse_tree__error_util__MaybeActual_21 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_11, parse_tree__error_util__Severity_17);
    }
#line 806 "error_util.m"
#line 806 "error_util.m"
    switch (parse_tree__error_util__PrintedSome_20) {
#line 806 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 806 "error_util.m"
      case (MR_Integer) 1:
#line 797 "error_util.m"
        {
#line 797 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 797 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 797 "error_util.m"
        }
#line 806 "error_util.m"
        break;
#line 806 "error_util.m"
      case (MR_Integer) 0:
#line 821 "error_util.m"
        if ((parse_tree__error_util__MaybeActual_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "error_util.m"
          {
#line 823 "error_util.m"
            {
#line 823 "error_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/10", (MR_String) "MaybeActual is no");
#line 823 "error_util.m"
              return;
            }
#line 822 "error_util.m"
          }
#line 821 "error_util.m"
        else
#line 809 "error_util.m"
          {
#line 809 "error_util.m"
            MR_Word parse_tree__error_util__Actual_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_21, (MR_Integer) 0)));

#line 814 "error_util.m"
#line 814 "error_util.m"
            switch (parse_tree__error_util__Actual_22) {
#line 814 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 814 "error_util.m"
              case (MR_Integer) 0:
#line 811 "error_util.m"
                {
#line 812 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25 + (MR_Integer) 1);
#line 813 "error_util.m"
                  {
#line 813 "error_util.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
#line 811 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 811 "error_util.m"
                }
#line 814 "error_util.m"
                break;
#line 814 "error_util.m"
              case (MR_Integer) 2:
#line 819 "error_util.m"
                {
#line 819 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 819 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 819 "error_util.m"
                }
#line 814 "error_util.m"
                break;
#line 814 "error_util.m"
              case (MR_Integer) 1:
#line 815 "error_util.m"
                {
#line 816 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23 + (MR_Integer) 1);
#line 817 "error_util.m"
                  {
#line 817 "error_util.m"
                    libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_11);
                  }
#line 815 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 815 "error_util.m"
                }
#line 814 "error_util.m"
                break;
#line 814 "error_util.m"
            }
#line 809 "error_util.m"
          }
#line 806 "error_util.m"
        break;
#line 806 "error_util.m"
    }
#line 791 "error_util.m"
  }
#line 785 "error_util.m"
}

#line 732 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 732 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 732 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 732 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 732 "error_util.m"
{
#line 735 "error_util.m"
  {
#line 735 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 735 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 735 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 735 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 735 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 735 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 736 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 736 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 737 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 737 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 738 "error_util.m"
    {
#line 738 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 739 "error_util.m"
    {
#line 739 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 740 "error_util.m"
    {
#line 740 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 741 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 743 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 742 "error_util.m"
      {
#line 742 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
#line 742 "error_util.m"
        return;
      }
#line 743 "error_util.m"
    else
#line 744 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 735 "error_util.m"
  }
#line 732 "error_util.m"
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
#line 16292 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 16294 "parse_tree.error_util.c"
          {
#line 16296 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 670 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 670 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 670 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 16305 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 16309 "parse_tree.error_util.c"
            else
#line 16311 "parse_tree.error_util.c"
              {
#line 16313 "parse_tree.error_util.c"
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
#line 16326 "parse_tree.error_util.c"
              }
#line 16328 "parse_tree.error_util.c"
          }
#line 16330 "parse_tree.error_util.c"
        else
#line 16332 "parse_tree.error_util.c"
          {
#line 16334 "parse_tree.error_util.c"
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
#line 16349 "parse_tree.error_util.c"
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

#line 497 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 497 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 497 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 497 "error_util.m"
{
#line 1723 "error_util.m"
  {
#line 1723 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1723 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1723 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1724 "error_util.m"
    {
#line 1724 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1725 "error_util.m"
    {
#line 1725 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1726 "error_util.m"
    {
#line 1726 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1727 "error_util.m"
    {
#line 1727 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1728 "error_util.m"
    {
#line 1728 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1728 "error_util.m"
    {
#line 1728 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1729 "error_util.m"
    {
#line 1729 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1731 "error_util.m"
    {
#line 1731 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 1731 "error_util.m"
      return;
    }
#line 1723 "error_util.m"
  }
#line 497 "error_util.m"
}

#line 489 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 489 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 489 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 489 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 489 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 489 "error_util.m"
{
#line 1717 "error_util.m"
  {
#line 1717 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1717 "error_util.m"
    MR_Word parse_tree__error_util__V_24_24;
#line 1717 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_34;
#line 1717 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_35;

#line 1718 "error_util.m"
    {
#line 1718 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 1032 "error_util.m"
    {
#line 1032 "error_util.m"
      parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1032 "error_util.m"
    }
#line 1046 "error_util.m"
    {
#line 1046 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_34);
    }
#line 1048 "error_util.m"
    {
#line 1048 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_35);
    }
#line 1049 "error_util.m"
    {
#line 1049 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_24_24, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_34, parse_tree__error_util__LimitErrorContextsMap_35, parse_tree__error_util__Components_10);
#line 1049 "error_util.m"
      return;
    }
#line 1717 "error_util.m"
  }
#line 489 "error_util.m"
}

#line 484 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 484 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 484 "error_util.m"
{
#line 1702 "error_util.m"
  {
#line 1702 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1702 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1702 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1711 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1711 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1705 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1703 "error_util.m"
    {
#line 1703 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1705 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1705 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1705 "error_util.m"
      {
#line 1705 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1705 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1706 "error_util.m"
        {
#line 1706 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1705 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1705 "error_util.m"
          {
#line 1707 "error_util.m"
            {
#line 1707 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1707 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1705 "error_util.m"
          }
#line 1705 "error_util.m"
      }
#line 1711 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1709 "error_util.m"
      {
#line 1709 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1709 "error_util.m"
        {
#line 1709 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1709 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1709 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1709 "error_util.m"
        }
#line 1710 "error_util.m"
        {
#line 1710 "error_util.m"
          return parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1709 "error_util.m"
      }
#line 1711 "error_util.m"
    else
#line 1712 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1702 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1702 "error_util.m"
  }
#line 484 "error_util.m"
}

#line 479 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 479 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 479 "error_util.m"
{
#line 1700 "error_util.m"
  {
#line 1700 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1700 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1700 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1700 "error_util.m"
    {
#line 1700 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1700 "error_util.m"
    {
#line 1700 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1700 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1700 "error_util.m"
  }
#line 479 "error_util.m"
}

#line 475 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 475 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 475 "error_util.m"
{
#line 1697 "error_util.m"
  {
#line 1697 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1697 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1697 "error_util.m"
#line 1697 "error_util.m"
    switch (parse_tree__error_util__HeadVar__1_1) {
#line 1697 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1697 "error_util.m"
      case (MR_Integer) 1:
#line 1698 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1697 "error_util.m"
        break;
#line 1697 "error_util.m"
      case (MR_Integer) 0:
#line 1697 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1697 "error_util.m"
        break;
#line 1697 "error_util.m"
    }
#line 1697 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1697 "error_util.m"
  }
#line 475 "error_util.m"
}

#line 473 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 473 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 473 "error_util.m"
{
#line 1690 "error_util.m"
  {
#line 1690 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1690 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1690 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1690 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1690 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1690 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1690 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1690 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1690 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1690 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1691 "error_util.m"
    {
#line 1691 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1692 "error_util.m"
    {
#line 1692 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1692 "error_util.m"
    {
#line 1692 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1692 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1692 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18])));
#line 1692 "error_util.m"
    }
#line 1691 "error_util.m"
    {
#line 1691 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1691 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1691 "error_util.m"
    }
#line 1691 "error_util.m"
    {
#line 1691 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1691 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1691 "error_util.m"
    }
#line 1691 "error_util.m"
    {
#line 1691 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1691 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1691 "error_util.m"
    }
#line 1691 "error_util.m"
    {
#line 1691 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1690 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1690 "error_util.m"
  }
#line 473 "error_util.m"
}

#line 471 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 471 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 471 "error_util.m"
{
#line 1694 "error_util.m"
  {
#line 1694 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1694 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1694 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1694 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1694 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1695 "error_util.m"
    {
#line 1695 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1695 "error_util.m"
    {
#line 1695 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1695 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18])));
#line 1695 "error_util.m"
    }
#line 1695 "error_util.m"
    {
#line 1695 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1695 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1695 "error_util.m"
    }
#line 1695 "error_util.m"
    {
#line 1695 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1694 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1694 "error_util.m"
  }
#line 471 "error_util.m"
}

#line 467 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 467 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 467 "error_util.m"
{
#line 1181 "error_util.m"
  {
#line 1181 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1181 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1182 "error_util.m"
    {
#line 1182 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1181 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1181 "error_util.m"
  }
#line 467 "error_util.m"
}

#line 463 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 463 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 463 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 463 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 463 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 463 "error_util.m"
{
#line 1036 "error_util.m"
  {
#line 1036 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1036 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_24;
#line 1036 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_25;

#line 1046 "error_util.m"
    {
#line 1046 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_24);
    }
#line 1048 "error_util.m"
    {
#line 1048 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_25);
    }
#line 1049 "error_util.m"
    {
#line 1049 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_24, parse_tree__error_util__LimitErrorContextsMap_25, parse_tree__error_util__Components_10);
#line 1049 "error_util.m"
      return;
    }
#line 1036 "error_util.m"
  }
#line 463 "error_util.m"
}

#line 460 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 460 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 460 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 460 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 460 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 460 "error_util.m"
{
#line 1031 "error_util.m"
  {
#line 1031 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1031 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1031 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_25;
#line 1031 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_26;

#line 1032 "error_util.m"
    {
#line 1032 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1032 "error_util.m"
    }
#line 1046 "error_util.m"
    {
#line 1046 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_25);
    }
#line 1048 "error_util.m"
    {
#line 1048 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_26);
    }
#line 1049 "error_util.m"
    {
#line 1049 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_15_15, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_25, parse_tree__error_util__LimitErrorContextsMap_26, parse_tree__error_util__Components_10);
#line 1049 "error_util.m"
      return;
    }
#line 1031 "error_util.m"
  }
#line 460 "error_util.m"
}

#line 452 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 452 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 452 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 452 "error_util.m"
{
#line 1015 "error_util.m"
  {
#line 1015 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1015 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsg_9;
#line 1015 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsgPieces_10;
#line 1015 "error_util.m"
    MR_Word parse_tree__error_util__Components_11;
#line 1015 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1015 "error_util.m"
    MR_String parse_tree__error_util__V_16_16;
#line 1015 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;

#line 1017 "error_util.m"
    {
#line 1017 "error_util.m"
      parse_tree__error_util__LinesInMsg_9 = mercury__string__split_at_char_2_f_0((MR_Char) 10, parse_tree__error_util__Msg_6);
    }
#line 1018 "error_util.m"
    {
#line 1018 "error_util.m"
      parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__LinesInMsg_9, &parse_tree__error_util__LinesInMsgPieces_10);
    }
#line 1019 "error_util.m"
    {
#line 1019 "error_util.m"
      parse_tree__error_util__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 1019 "error_util.m"
    {
#line 1019 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "error_util.m"
      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1019 "error_util.m"
    }
#line 1019 "error_util.m"
    {
#line 1019 "error_util.m"
      parse_tree__error_util__Components_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1019 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 1) = ((MR_Box) (parse_tree__error_util__LinesInMsgPieces_10));
#line 1019 "error_util.m"
    }
#line 1021 "error_util.m"
    {
#line 1021 "error_util.m"
      parse_tree__error_util__V_22_22 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2]);
    }
#line 1020 "error_util.m"
    {
#line 1020 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__V_22_22, parse_tree__error_util__Components_11);
#line 1020 "error_util.m"
      return;
    }
#line 1015 "error_util.m"
  }
#line 452 "error_util.m"
}

#line 444 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 444 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 444 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 444 "error_util.m"
{
#line 1011 "error_util.m"
  {
#line 1011 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1011 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_22;
#line 1011 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_23;

#line 1046 "error_util.m"
    {
#line 1046 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_22);
    }
#line 1048 "error_util.m"
    {
#line 1048 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_5, &parse_tree__error_util__LimitErrorContextsMap_23);
    }
#line 1049 "error_util.m"
    {
#line 1049 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_22, parse_tree__error_util__LimitErrorContextsMap_23, parse_tree__error_util__Components_6);
#line 1049 "error_util.m"
      return;
    }
#line 1011 "error_util.m"
  }
#line 444 "error_util.m"
}

#line 434 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 434 "error_util.m"
{
#line 1006 "error_util.m"
  {
#line 1006 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1006 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1006 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "error_util.m"
      {
#line 1006 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 1007 "error_util.m"
        {
#line 1007 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 1006 "error_util.m"
      }
#line 1006 "error_util.m"
    else
#line 1006 "error_util.m"
      {
#line 1006 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1008 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1006 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 1006 "error_util.m"
        else
#line 1009 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 1006 "error_util.m"
      }
#line 1006 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1006 "error_util.m"
  }
#line 434 "error_util.m"
}

#line 429 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 429 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 429 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 429 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 429 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 429 "error_util.m"
{
#line 1002 "error_util.m"
  {
#line 1002 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1002 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 1002 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1002 "error_util.m"
    else
#line 1002 "error_util.m"
      {
#line 1002 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1003 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1002 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1003 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 1002 "error_util.m"
        else
#line 1004 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1002 "error_util.m"
      }
#line 1002 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 1002 "error_util.m"
  }
#line 429 "error_util.m"
}

#line 421 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 421 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 421 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 421 "error_util.m"
{
#line 996 "error_util.m"
  {
#line 996 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 996 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 996 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "error_util.m"
    else
#line 996 "error_util.m"
      {
#line 996 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 996 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 996 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 997 "error_util.m"
          {
#line 997 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 997 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 997 "error_util.m"
            {
#line 997 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11]));
            }
#line 997 "error_util.m"
            {
#line 997 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 997 "error_util.m"
          }
#line 996 "error_util.m"
        else
#line 998 "error_util.m"
          {
#line 998 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 998 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 998 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 1000 "error_util.m"
            {
#line 1000 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 1000 "error_util.m"
            {
#line 1000 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[13]), parse_tree__error_util__V_24_24);
            }
#line 999 "error_util.m"
            {
#line 999 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 998 "error_util.m"
          }
#line 996 "error_util.m"
      }
#line 996 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 996 "error_util.m"
  }
#line 421 "error_util.m"
}

#line 410 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 410 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 410 "error_util.m"
{
#line 989 "error_util.m"
  {
#line 989 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 989 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 989 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 989 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 989 "error_util.m"
    else
#line 989 "error_util.m"
      {
#line 989 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 989 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 989 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "error_util.m"
          {
#line 990 "error_util.m"
            {
#line 990 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 990 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 990 "error_util.m"
            }
#line 990 "error_util.m"
          }
#line 989 "error_util.m"
        else
#line 989 "error_util.m"
          {
#line 989 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 989 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 989 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "error_util.m"
              {
#line 991 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 991 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 991 "error_util.m"
                {
#line 991 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 991 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 991 "error_util.m"
                }
#line 991 "error_util.m"
                {
#line 991 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14])));
#line 991 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 991 "error_util.m"
                }
#line 991 "error_util.m"
                {
#line 991 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 991 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 991 "error_util.m"
                }
#line 991 "error_util.m"
              }
#line 989 "error_util.m"
            else
#line 992 "error_util.m"
              {
#line 992 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 992 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 993 "error_util.m"
                {
#line 993 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 993 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[17])));
#line 993 "error_util.m"
                }
#line 994 "error_util.m"
                {
#line 994 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 994 "error_util.m"
                {
#line 994 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 992 "error_util.m"
              }
#line 989 "error_util.m"
          }
#line 989 "error_util.m"
      }
#line 989 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 989 "error_util.m"
  }
#line 410 "error_util.m"
}

#line 404 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 404 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 404 "error_util.m"
{
#line 981 "error_util.m"
  {
#line 981 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 981 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 981 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 981 "error_util.m"
    else
#line 981 "error_util.m"
      {
#line 981 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 981 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 981 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 982 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 981 "error_util.m"
        else
#line 981 "error_util.m"
          {
#line 981 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 981 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 981 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 983 "error_util.m"
              {
#line 983 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 983 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 984 "error_util.m"
                {
#line 984 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16]), parse_tree__error_util__V_33_33);
                }
#line 984 "error_util.m"
                {
#line 984 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 983 "error_util.m"
              }
#line 981 "error_util.m"
            else
#line 985 "error_util.m"
              {
#line 985 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 985 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 985 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 987 "error_util.m"
                {
#line 987 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 987 "error_util.m"
                {
#line 987 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[17]), parse_tree__error_util__V_25_25);
                }
#line 986 "error_util.m"
                {
#line 986 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 985 "error_util.m"
              }
#line 981 "error_util.m"
          }
#line 981 "error_util.m"
      }
#line 981 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 981 "error_util.m"
  }
#line 404 "error_util.m"
}

#line 398 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 398 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 398 "error_util.m"
{
#line 973 "error_util.m"
  {
#line 973 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 973 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 973 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 973 "error_util.m"
    else
#line 973 "error_util.m"
      {
#line 973 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 973 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 973 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "error_util.m"
          {
#line 974 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 974 "error_util.m"
            {
#line 974 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 974 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 974 "error_util.m"
            }
#line 974 "error_util.m"
            {
#line 974 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 974 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "error_util.m"
            }
#line 974 "error_util.m"
          }
#line 973 "error_util.m"
        else
#line 973 "error_util.m"
          {
#line 973 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 973 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 973 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 975 "error_util.m"
              {
#line 975 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 975 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 975 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 975 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 976 "error_util.m"
                {
#line 976 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 976 "error_util.m"
                }
#line 976 "error_util.m"
                {
#line 976 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 976 "error_util.m"
                }
#line 976 "error_util.m"
                {
#line 976 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 976 "error_util.m"
                }
#line 976 "error_util.m"
                {
#line 976 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14])));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 976 "error_util.m"
                }
#line 976 "error_util.m"
                {
#line 976 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 976 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 976 "error_util.m"
                }
#line 975 "error_util.m"
              }
#line 973 "error_util.m"
            else
#line 977 "error_util.m"
              {
#line 977 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 977 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 977 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 978 "error_util.m"
                {
#line 978 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 978 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 978 "error_util.m"
                }
#line 979 "error_util.m"
                {
#line 979 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 978 "error_util.m"
                {
#line 978 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 978 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 978 "error_util.m"
                }
#line 978 "error_util.m"
                {
#line 978 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 978 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 978 "error_util.m"
                }
#line 977 "error_util.m"
              }
#line 973 "error_util.m"
          }
#line 973 "error_util.m"
      }
#line 973 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 973 "error_util.m"
  }
#line 398 "error_util.m"
}

#line 394 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 394 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 394 "error_util.m"
{
#line 967 "error_util.m"
  {
#line 967 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 967 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 967 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 967 "error_util.m"
    else
#line 967 "error_util.m"
      {
#line 967 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 967 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 967 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "error_util.m"
          {
#line 968 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 968 "error_util.m"
            {
#line 968 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 968 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 968 "error_util.m"
            }
#line 968 "error_util.m"
            {
#line 968 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 968 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 968 "error_util.m"
            }
#line 968 "error_util.m"
          }
#line 967 "error_util.m"
        else
#line 967 "error_util.m"
          {
#line 967 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 967 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 967 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "error_util.m"
              {
#line 969 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 969 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 969 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 969 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 969 "error_util.m"
                {
#line 969 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 969 "error_util.m"
                }
#line 969 "error_util.m"
                {
#line 969 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 969 "error_util.m"
                }
#line 969 "error_util.m"
                {
#line 969 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "error_util.m"
                }
#line 969 "error_util.m"
                {
#line 969 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14])));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 969 "error_util.m"
                }
#line 969 "error_util.m"
                {
#line 969 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 969 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 969 "error_util.m"
                }
#line 969 "error_util.m"
              }
#line 967 "error_util.m"
            else
#line 970 "error_util.m"
              {
#line 970 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 970 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 970 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 971 "error_util.m"
                {
#line 971 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 971 "error_util.m"
                {
#line 971 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 971 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 971 "error_util.m"
                }
#line 971 "error_util.m"
                {
#line 971 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 971 "error_util.m"
                {
#line 971 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 971 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 971 "error_util.m"
                }
#line 970 "error_util.m"
              }
#line 967 "error_util.m"
          }
#line 967 "error_util.m"
      }
#line 967 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 967 "error_util.m"
  }
#line 394 "error_util.m"
}

#line 389 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 389 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 389 "error_util.m"
{
#line 965 "error_util.m"
  {
#line 965 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 965 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 965 "error_util.m"
    {
#line 965 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 965 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 965 "error_util.m"
    }
#line 965 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 965 "error_util.m"
  }
#line 389 "error_util.m"
}

#line 782 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 782 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 782 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9)
#line 782 "error_util.m"
{
#line 782 "error_util.m"
  {
#line 782 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 782 "error_util.m"
    MR_Integer parse_tree__error_util__conv3_STATE_VARIABLE_NumWarnings_24;
#line 782 "error_util.m"
    MR_Integer parse_tree__error_util__conv2_STATE_VARIABLE_NumErrors_26;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__conv1_STATE_VARIABLE_AlreadyPrintedVerbose_28;

#line 782 "error_util.m"
    {
#line 782 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv3_STATE_VARIABLE_NumWarnings_24, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv2_STATE_VARIABLE_NumErrors_26, ((MR_Word) parse_tree__error_util__wrapper_arg_6), &parse_tree__error_util__conv1_STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 782 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv3_STATE_VARIABLE_NumWarnings_24));
#line 782 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_NumErrors_26));
#line 782 "error_util.m"
    *parse_tree__error_util__wrapper_arg_7 = ((MR_Box) (parse_tree__error_util__conv1_STATE_VARIABLE_AlreadyPrintedVerbose_28));
#line 782 "error_util.m"
  }
#line 782 "error_util.m"
}

#line 730 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 730 "error_util.m"
{
#line 730 "error_util.m"
  {
#line 730 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 730 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 730 "error_util.m"
    {
#line 730 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 730 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 730 "error_util.m"
  }
#line 730 "error_util.m"
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
#line 780 "error_util.m"
  {
#line 780 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 780 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_38_38;
#line 780 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 780 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 780 "error_util.m"
    MR_Word parse_tree__error_util__V_25_25;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 782 "error_util.m"
    MR_Box parse_tree__error_util__conv7_STATE_VARIABLE_NumWarnings_17;
#line 782 "error_util.m"
    MR_Box parse_tree__error_util__conv6_STATE_VARIABLE_NumErrors_19;
#line 782 "error_util.m"
    MR_Box parse_tree__error_util__conv5_V_15_15;
#line 782 "error_util.m"
    MR_Box parse_tree__error_util__conv4_STATE_VARIABLE_IO_21;

#line 730 "error_util.m"
    {
#line 730 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__Specs0_9, &parse_tree__error_util__Specs_14);
    }
#line 782 "error_util.m"
    {
#line 782 "error_util.m"
      parse_tree__error_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 782 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 782 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_2));
#line 782 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 782 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 782 "error_util.m"
    }
#line 783 "error_util.m"
    {
#line 783 "error_util.m"
      parse_tree__error_util__V_25_25 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 18134 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 782 "error_util.m"
    {
#line 782 "error_util.m"
      mercury__list__foldl4_10_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_38_38, parse_tree__error_util__TypeCtorInfo_38_38, (MR_Word) &parse_tree__error_util_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_22_22, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16)), &parse_tree__error_util__conv7_STATE_VARIABLE_NumWarnings_17, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18)), &parse_tree__error_util__conv6_STATE_VARIABLE_NumErrors_19, ((MR_Box) (parse_tree__error_util__V_25_25)), &parse_tree__error_util__conv5_V_15_15, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv4_STATE_VARIABLE_IO_21);
    }
#line 782 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_17 = ((MR_Integer) parse_tree__error_util__conv7_STATE_VARIABLE_NumWarnings_17);
#line 782 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_19 = ((MR_Integer) parse_tree__error_util__conv6_STATE_VARIABLE_NumErrors_19);
#line 782 "error_util.m"
    parse_tree__error_util__V_15_15 = ((MR_Word) parse_tree__error_util__conv5_V_15_15);
#line 780 "error_util.m"
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
#line 776 "error_util.m"
  {
#line 776 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 776 "error_util.m"
    MR_Word parse_tree__error_util__V_23_23;
#line 777 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 778 "error_util.m"
    {
#line 778 "error_util.m"
      parse_tree__error_util__V_23_23 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 777 "error_util.m"
    {
#line 777 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15, parse_tree__error_util__STATE_VARIABLE_NumWarnings_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17, parse_tree__error_util__STATE_VARIABLE_NumErrors_18, parse_tree__error_util__V_23_23, &parse_tree__error_util__V_14_14);
    }
#line 776 "error_util.m"
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
#line 753 "error_util.m"
  {
#line 753 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 753 "error_util.m"
#line 753 "error_util.m"
    switch (parse_tree__error_util__Verbose_7) {
#line 753 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 753 "error_util.m"
      case (MR_Integer) 0:
#line 753 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 753 "error_util.m"
        break;
#line 753 "error_util.m"
      case (MR_Integer) 1:
#line 755 "error_util.m"
        {
#line 757 "error_util.m"
          MR_Integer parse_tree__error_util___NumWarnings_11;
#line 757 "error_util.m"
          MR_Integer parse_tree__error_util___NumErrors_12;

#line 757 "error_util.m"
          {
#line 757 "error_util.m"
            parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
          }
#line 759 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "error_util.m"
        }
#line 753 "error_util.m"
        break;
#line 753 "error_util.m"
    }
#line 753 "error_util.m"
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
#line 18286 "parse_tree.error_util.c"
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
#line 251 "error_util.m"
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
#line 248 "error_util.m"
}

#line 246 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 246 "error_util.m"
{
#line 681 "error_util.m"
  {
#line 681 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 681 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "error_util.m"
  }
#line 246 "error_util.m"
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

#line 235 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 235 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 235 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 235 "error_util.m"
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
#line 18978 "parse_tree.error_util.c"
  {
#line 18980 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 18982 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18984 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 18987 "parse_tree.error_util.c"
    {
#line 18989 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 18992 "parse_tree.error_util.c"
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
