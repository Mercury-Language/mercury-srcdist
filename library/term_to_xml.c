/*
** Automatically generated from `term_to_xml.m'
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


/* :- module term_to_xml. */
/* :- implementation. */

/*
INIT mercury__term_to_xml__init
ENDINIT
*/

#include "term_to_xml.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 94 "term_to_xml.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0;

#line 97 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2];

#line 100 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0;

#line 103 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1];

#line 106 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1];

#line 109 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1];

#line 112 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1];

#line 115 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2];

#line 118 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2];

#line 121 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0;

#line 124 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1];

#line 127 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1];

#line 130 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1];

#line 133 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1];

#line 136 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0;

#line 139 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1;

#line 142 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2;

#line 145 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3;

#line 148 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4];

#line 151 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4];

#line 154 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4];

#line 157 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1];

#line 160 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0;

#line 163 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2];

#line 166 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1;

#line 169 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1];

#line 172 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2;

#line 175 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1];

#line 178 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1];

#line 181 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1];

#line 184 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0[3];

#line 187 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3];

#line 190 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3];

#line 193 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0;

#line 196 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1;

#line 199 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0;

#line 202 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2];

#line 205 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2];

#line 208 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2;

#line 211 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1];

#line 214 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3;

#line 217 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1];

#line 220 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4;

#line 223 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2];

#line 226 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1];

#line 229 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1];

#line 232 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1];

#line 235 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0[4];

#line 238 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5];

#line 241 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5];

#line 244 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0;

#line 247 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1;

#line 250 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0;

#line 253 "term_to_xml.c"
static const MR_VA_TypeInfo_Struct4 mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0;

#line 256 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1];

#line 259 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2;

#line 262 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2];

#line 265 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1];

#line 268 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0[2];

#line 271 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3];

#line 274 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3];

#line 277 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0;

#line 280 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1];

#line 283 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1;

#line 286 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2;

#line 289 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2];

#line 292 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1];

#line 295 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0[2];

#line 298 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3];

#line 301 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3];

#line 304 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0;

#line 307 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1;

#line 310 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2];

#line 313 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2];

#line 316 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2];

#line 319 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2];

#line 322 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2];

#line 325 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0;

#line 328 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1;

#line 331 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1];

#line 334 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1];

#line 337 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0[2];

#line 340 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2];

#line 343 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2];

#line 346 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2];

#line 349 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2];

#line 352 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0;

#line 355 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1;

#line 358 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1];

#line 361 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1];

#line 364 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0[2];

#line 367 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2];

#line 370 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2];

#line 373 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0;

#line 376 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0;

#line 379 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3];

#line 382 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3];

#line 385 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0;

#line 388 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1];

#line 391 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1;

#line 394 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1];

#line 397 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2;

#line 400 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1];

#line 403 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3;

#line 406 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1];

#line 409 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4;

#line 412 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1];

#line 415 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5;

#line 418 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1];

#line 421 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1];

#line 424 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1];

#line 427 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3];

#line 430 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0[4];

#line 433 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6];

#line 436 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6];

#line 439 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1];

#line 442 "term_to_xml.c"
static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1];

#line 445 "term_to_xml.c"
static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1;

#line 448 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
#line 451 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 453 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 456 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
#line 459 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 461 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 463 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 466 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
#line 469 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 471 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 474 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
#line 477 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 479 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 481 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 484 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
#line 487 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 489 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 492 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
#line 495 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 497 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 499 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 502 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
#line 505 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 507 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 510 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
#line 513 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 515 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 517 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 520 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
#line 523 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 525 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 528 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
#line 531 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 533 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 535 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 538 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
#line 541 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 543 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 546 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
#line 549 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 551 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 553 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 556 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
#line 559 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 561 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 564 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
#line 567 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 569 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 571 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 574 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
#line 577 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 579 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 582 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
#line 585 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 587 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 589 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 592 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
#line 595 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 597 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 600 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
#line 603 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 605 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 607 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 610 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
#line 613 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 615 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 618 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
#line 621 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 623 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 625 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 628 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
#line 631 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 633 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 636 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
#line 639 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 641 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 643 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 646 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
#line 649 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 651 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 654 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
#line 657 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 659 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 661 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 460 "string.int0"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
#line 460 "string.int0"
  MR_Word mercury__term_to_xml__V_17_17,
#line 460 "string.int0"
  MR_Box mercury__term_to_xml__V_18_18,
#line 460 "string.int0"
  MR_String mercury__term_to_xml__V_8_8,
#line 460 "string.int0"
  MR_Integer mercury__term_to_xml__V_9_9,
#line 460 "string.int0"
  MR_Integer mercury__term_to_xml__V_10_10,
#line 460 "string.int0"
  MR_Box mercury__term_to_xml__V_14_11,
#line 460 "string.int0"
  MR_Box * mercury__term_to_xml__V_15_12);

#line 319 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
#line 319 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 319 "list.int"
  MR_Word mercury__term_to_xml__V_17_17,
#line 319 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 319 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 319 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4);

#line 360 "list.int"
static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
#line 360 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 360 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 360 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 360 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 360 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__5_5);

#line 129 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_18_18,
#line 129 "list.int"
  MR_Integer mercury__term_to_xml__V_19_19,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 141 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 141 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 141 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 141 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 141 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 141 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 141 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 141 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 150 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 150 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 150 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 150 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 150 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 150 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 150 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 150 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 150 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 150 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 129 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_13_13,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_14_14,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_15_15,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 94 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
#line 94 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 94 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 94 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 129 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 129 "list.int"
  MR_String mercury__term_to_xml__V_18_18,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_19_19,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_21_21,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 461 "string.int0"
static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
#line 461 "string.int0"
  MR_String mercury__term_to_xml__V_8_8,
#line 461 "string.int0"
  MR_Integer mercury__term_to_xml__V_9_9,
#line 461 "string.int0"
  MR_Integer mercury__term_to_xml__V_10_10,
#line 461 "string.int0"
  MR_Word mercury__term_to_xml__V_14_11,
#line 461 "string.int0"
  MR_Word * mercury__term_to_xml__V_15_12);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 428 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
#line 428 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 428 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3);

#line 100 "list.int"
static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
#line 100 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 100 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 1363 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
#line 1363 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
#line 1363 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1363 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 1631 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
#line 1631 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_4,
#line 1631 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5);

#line 1546 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
#line 1546 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__4_4,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArityList_6,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttributeListList_8,
#line 1546 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1546 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

#line 1517 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1517 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1517 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_13,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1517 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1517 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17);

#line 1484 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1484 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1484 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_12,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_13,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__6_6,
#line 1484 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1484 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20);

#line 1438 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
#line 1438 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AlreadyDone_4,
#line 1438 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
#line 1438 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6);

#line 1386 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_1,
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Done_3,
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementsSoFar_4);

#line 1308 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
#line 1308 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 1308 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1308 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_6,
#line 1308 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1308 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

#line 1302 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
#line 1302 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
#line 1302 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1302 "term_to_xml.m"
  MR_String mercury__term_to_xml__Str_6,
#line 1302 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1302 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9);

#line 1072 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
#line 1072 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_6,
#line 1072 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1072 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_9,
#line 1072 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_10,
#line 1072 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11);

#line 1046 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
#line 1046 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1046 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgPseudoType_4);

#line 962 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
#line 962 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
#line 962 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 962 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_7,
#line 962 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_8,
#line 962 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 962 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11);

#line 955 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
#line 955 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 955 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1,
#line 955 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 955 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
#line 955 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4);

#line 812 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
#line 812 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_8,
#line 812 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__Elements_10,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeArities_12,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttributeLists_14);

#line 794 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
#line 794 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_4,
#line 794 "term_to_xml.m"
  MR_Word mercury__term_to_xml__PrevChrs_5,
#line 794 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 777 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
#line 777 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_3);

#line 744 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
#line 744 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 744 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 692 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void);

#line 669 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
#line 669 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 669 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 669 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 669 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8);

#line 641 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
#line 641 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 641 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 641 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 641 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 587 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 587 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 587 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 587 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 587 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 587 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 583 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 583 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 583 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 583 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 583 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 583 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);


static /* final */ const MR_Box mercury__term_to_xml_scalar_common_1[21][2];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_2[1][6];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_3[23][3];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_4[1][4];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_5[2][5];

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__term_to_xml_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "field")),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "type")),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "arity")),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "functor")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_2[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_3[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__can_generate_dtd_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_dtd_from_type_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_1_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_2_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_xml_element_general_7_p_3_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_2_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__write_doctype_8_p_2_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__term_to_xml_scalar_common_6[0])),
    ((MR_Box) (mercury__term_to_xml__get_element_pred_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_5[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_to_xml_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_to_xml_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



#line 1896 "term_to_xml.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 1904 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1910 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0 = {
  (MR_String) "attr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_attr_0_0,
  NULL,
  NULL,
  NULL
};

#line 1925 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 1930 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0
  }
};

#line 1939 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 1944 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1] = {
  (MR_Integer) 0
};

#line 1949 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_0
};

#line 1966 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0
};

#line 1972 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2] = {
  (MR_String) "attr_name",
  (MR_String) "attr_source"
};

#line 1978 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0 = {
  (MR_String) "attr_from_source",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0,
  mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0,
  NULL,
  NULL
};

#line 1993 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 1998 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0
  }
};

#line 2007 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 2012 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1] = {
  (MR_Integer) 0
};

#line 2017 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_from_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_from_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_from_source",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0
};

#line 2034 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0 = {
  (MR_String) "functor",
  (MR_Integer) 0
};

#line 2040 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1 = {
  (MR_String) "field_name",
  (MR_Integer) 1
};

#line 2046 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2 = {
  (MR_String) "type_name",
  (MR_Integer) 2
};

#line 2052 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3 = {
  (MR_String) "arity",
  (MR_Integer) 3
};

#line 2058 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3
};

#line 2066 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2
};

#line 2074 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2082 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_source",
  {     mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0 },
  {     mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0
};

#line 2099 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2104 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0 = {
  (MR_String) "public",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_0,
  NULL,
  NULL,
  NULL
};

#line 2119 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2125 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1 = {
  (MR_String) "public_system",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_1,
  NULL,
  NULL,
  NULL
};

#line 2140 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2145 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2 = {
  (MR_String) "system",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_doctype_0_2,
  NULL,
  NULL,
  NULL
};

#line 2160 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0
};

#line 2165 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1
};

#line 2170 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2175 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2
  }
};

#line 2194 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2201 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2208 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____doctype_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____doctype_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "doctype",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0
};

#line 2225 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0 = {
  (MR_String) "ok",
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

#line 2240 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1 = {
  (MR_String) "multiple_functors_for_root",
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

#line 2255 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 2263 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0
};

#line 2269 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2] = {
  (MR_String) "duplicate_element",
  (MR_String) "duplicate_types"
};

#line 2275 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2 = {
  (MR_String) "duplicate_elements",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2,
  mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2,
  NULL,
  NULL
};

#line 2290 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
};

#line 2295 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3 = {
  (MR_String) "unsupported_dtd_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3,
  NULL,
  NULL,
  NULL
};

#line 2310 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0
};

#line 2315 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4 = {
  (MR_String) "type_not_ground",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4,
  NULL,
  NULL,
  NULL
};

#line 2330 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1
};

#line 2336 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2
};

#line 2341 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2346 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4
};

#line 2351 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3
  }
};

#line 2375 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2384 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2393 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_dtd_generation_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "dtd_generation_result",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0
};

#line 2410 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0 = {
  (MR_String) "simple",
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

#line 2425 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1 = {
  (MR_String) "unique",
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

#line 2440 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2448 "term_to_xml.c"
static const MR_VA_TypeInfo_Struct4 mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2460 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
};

#line 2465 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2 = {
  (MR_String) "custom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2,
  NULL,
  NULL,
  NULL
};

#line 2480 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2486 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2
};

#line 2491 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1
  }
};

#line 2505 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2512 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2519 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_element_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____element_mapping_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_mapping_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_mapping",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0
};

#line 2536 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_element_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_to_xml____Unify____element_pred_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_pred_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2553 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0 = {
  (MR_String) "embed_dtd",
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

#line 2568 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0
};

#line 2573 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1 = {
  (MR_String) "external_dtd",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1,
  NULL,
  NULL,
  NULL
};

#line 2588 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2 = {
  (MR_String) "no_dtd",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2603 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2609 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1
};

#line 2614 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1
  }
};

#line 2628 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2635 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2642 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_dtd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_dtd_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_dtd_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_dtd",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0
};

#line 2659 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0 = {
  (MR_String) "format",
  (MR_Integer) 0
};

#line 2665 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1 = {
  (MR_String) "no_format",
  (MR_Integer) 1
};

#line 2671 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 2677 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 2683 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2689 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_format_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_format_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_format",
  {     mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0 },
  {     mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0
};

#line 2706 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2712 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2] = {
  (MR_String) "functor_name",
  (MR_String) "functor_arity"
};

#line 2718 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0 = {
  (MR_String) "du_functor",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0,
  NULL,
  NULL
};

#line 2733 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1 = {
  (MR_String) "non_du",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2748 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 2753 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0
};

#line 2758 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1
  }
};

#line 2772 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 2778 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2784 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_functor_info",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0
};

#line 2801 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2807 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2] = {
  (MR_String) "stylesheet_type",
  (MR_String) "stylesheet_href"
};

#line 2813 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0 = {
  (MR_String) "with_stylesheet",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0,
  mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0,
  NULL,
  NULL
};

#line 2828 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1 = {
  (MR_String) "no_stylesheet",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2843 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1
};

#line 2848 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 2853 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1
  }
};

#line 2867 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 2873 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2879 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_stylesheet_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_stylesheet",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0
};

#line 2896 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0
  }
};

#line 2904 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

#line 2912 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0
};

#line 2919 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3] = {
  (MR_String) "element_name",
  (MR_String) "attributes",
  (MR_String) "children"
};

#line 2926 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0 = {
  (MR_String) "elem",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_0,
  mercury__term_to_xml__term_to_xml__field_names_xml_0_0,
  NULL,
  NULL
};

#line 2941 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2946 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1 = {
  (MR_String) "data",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_1,
  NULL,
  NULL,
  NULL
};

#line 2961 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2966 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2 = {
  (MR_String) "cdata",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_2,
  NULL,
  NULL,
  NULL
};

#line 2981 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2986 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3 = {
  (MR_String) "comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_3,
  NULL,
  NULL,
  NULL
};

#line 3001 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3006 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4 = {
  (MR_String) "entity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_4,
  NULL,
  NULL,
  NULL
};

#line 3021 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3026 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5 = {
  (MR_String) "raw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__term_to_xml__term_to_xml__field_types_xml_0_5,
  NULL,
  NULL,
  NULL
};

#line 3041 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0
};

#line 3046 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1
};

#line 3051 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2
};

#line 3056 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3063 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3
  }
};

#line 3087 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3097 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 3107 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____xml_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____xml_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "xml",
  {     mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0 },
  {     mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_xml_0
};

#line 3124 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1] = {
  (MR_String) "T"
};

#line 3129 "term_to_xml.c"
static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1] = {
  {
    (MR_String) "to_xml",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 3138 "term_to_xml.c"
static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1 = {
  (MR_String) "term_to_xml",
  (MR_String) "xmlable",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1,
  mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1
};

#line 3149 "term_to_xml.c"
const MR_TypeClassDeclStruct mercury__term_to_xml__term_to_xml__type_class_decl_xmlable_1 = {
  &mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3157 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
#line 3160 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3162 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3164 "term_to_xml.c"
{
#line 3166 "term_to_xml.c"
  {
#line 3168 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3171 "term_to_xml.c"
    {
#line 3173 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3176 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3178 "term_to_xml.c"
  }
#line 3180 "term_to_xml.c"
}

#line 3183 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
#line 3186 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3188 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3190 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3192 "term_to_xml.c"
{
#line 3194 "term_to_xml.c"
  {
#line 3196 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3199 "term_to_xml.c"
    {
#line 3201 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3204 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3206 "term_to_xml.c"
  }
#line 3208 "term_to_xml.c"
}

#line 3211 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
#line 3214 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3216 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3218 "term_to_xml.c"
{
#line 3220 "term_to_xml.c"
  {
#line 3222 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3225 "term_to_xml.c"
    {
#line 3227 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_from_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3230 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3232 "term_to_xml.c"
  }
#line 3234 "term_to_xml.c"
}

#line 3237 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
#line 3240 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3242 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3244 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3246 "term_to_xml.c"
{
#line 3248 "term_to_xml.c"
  {
#line 3250 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3253 "term_to_xml.c"
    {
#line 3255 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_from_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3258 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3260 "term_to_xml.c"
  }
#line 3262 "term_to_xml.c"
}

#line 3265 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
#line 3268 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3270 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3272 "term_to_xml.c"
{
#line 3274 "term_to_xml.c"
  {
#line 3276 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3279 "term_to_xml.c"
    {
#line 3281 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3284 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3286 "term_to_xml.c"
  }
#line 3288 "term_to_xml.c"
}

#line 3291 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
#line 3294 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3296 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3298 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3300 "term_to_xml.c"
{
#line 3302 "term_to_xml.c"
  {
#line 3304 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3307 "term_to_xml.c"
    {
#line 3309 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3312 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3314 "term_to_xml.c"
  }
#line 3316 "term_to_xml.c"
}

#line 3319 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
#line 3322 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3324 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3326 "term_to_xml.c"
{
#line 3328 "term_to_xml.c"
  {
#line 3330 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3333 "term_to_xml.c"
    {
#line 3335 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3338 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3340 "term_to_xml.c"
  }
#line 3342 "term_to_xml.c"
}

#line 3345 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
#line 3348 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3350 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3352 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3354 "term_to_xml.c"
{
#line 3356 "term_to_xml.c"
  {
#line 3358 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3361 "term_to_xml.c"
    {
#line 3363 "term_to_xml.c"
      mercury__term_to_xml____Compare____doctype_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3366 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3368 "term_to_xml.c"
  }
#line 3370 "term_to_xml.c"
}

#line 3373 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
#line 3376 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3378 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3380 "term_to_xml.c"
{
#line 3382 "term_to_xml.c"
  {
#line 3384 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3387 "term_to_xml.c"
    {
#line 3389 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____dtd_generation_result_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3392 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3394 "term_to_xml.c"
  }
#line 3396 "term_to_xml.c"
}

#line 3399 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
#line 3402 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3404 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3406 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3408 "term_to_xml.c"
{
#line 3410 "term_to_xml.c"
  {
#line 3412 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3415 "term_to_xml.c"
    {
#line 3417 "term_to_xml.c"
      mercury__term_to_xml____Compare____dtd_generation_result_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3420 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3422 "term_to_xml.c"
  }
#line 3424 "term_to_xml.c"
}

#line 3427 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
#line 3430 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3432 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3434 "term_to_xml.c"
{
#line 3436 "term_to_xml.c"
  {
#line 3438 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3441 "term_to_xml.c"
    {
#line 3443 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_mapping_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3446 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3448 "term_to_xml.c"
  }
#line 3450 "term_to_xml.c"
}

#line 3453 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
#line 3456 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3458 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3460 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3462 "term_to_xml.c"
{
#line 3464 "term_to_xml.c"
  {
#line 3466 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3469 "term_to_xml.c"
    {
#line 3471 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_mapping_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3474 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3476 "term_to_xml.c"
  }
#line 3478 "term_to_xml.c"
}

#line 3481 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
#line 3484 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3486 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3488 "term_to_xml.c"
{
#line 3490 "term_to_xml.c"
  {
#line 3492 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3495 "term_to_xml.c"
    {
#line 3497 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_pred_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3500 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3502 "term_to_xml.c"
  }
#line 3504 "term_to_xml.c"
}

#line 3507 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
#line 3510 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3512 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3514 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3516 "term_to_xml.c"
{
#line 3518 "term_to_xml.c"
  {
#line 3520 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3523 "term_to_xml.c"
    {
#line 3525 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_pred_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3528 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3530 "term_to_xml.c"
  }
#line 3532 "term_to_xml.c"
}

#line 3535 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
#line 3538 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3540 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3542 "term_to_xml.c"
{
#line 3544 "term_to_xml.c"
  {
#line 3546 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3549 "term_to_xml.c"
    {
#line 3551 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_dtd_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3554 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3556 "term_to_xml.c"
  }
#line 3558 "term_to_xml.c"
}

#line 3561 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
#line 3564 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3566 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3568 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3570 "term_to_xml.c"
{
#line 3572 "term_to_xml.c"
  {
#line 3574 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3577 "term_to_xml.c"
    {
#line 3579 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_dtd_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3582 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3584 "term_to_xml.c"
  }
#line 3586 "term_to_xml.c"
}

#line 3589 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
#line 3592 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3594 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3596 "term_to_xml.c"
{
#line 3598 "term_to_xml.c"
  {
#line 3600 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3603 "term_to_xml.c"
    {
#line 3605 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_format_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3608 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3610 "term_to_xml.c"
  }
#line 3612 "term_to_xml.c"
}

#line 3615 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
#line 3618 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3620 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3622 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3624 "term_to_xml.c"
{
#line 3626 "term_to_xml.c"
  {
#line 3628 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3631 "term_to_xml.c"
    {
#line 3633 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_format_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3636 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3638 "term_to_xml.c"
  }
#line 3640 "term_to_xml.c"
}

#line 3643 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
#line 3646 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3648 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3650 "term_to_xml.c"
{
#line 3652 "term_to_xml.c"
  {
#line 3654 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3657 "term_to_xml.c"
    {
#line 3659 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_functor_info_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3662 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3664 "term_to_xml.c"
  }
#line 3666 "term_to_xml.c"
}

#line 3669 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
#line 3672 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3674 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3676 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3678 "term_to_xml.c"
{
#line 3680 "term_to_xml.c"
  {
#line 3682 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3685 "term_to_xml.c"
    {
#line 3687 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_functor_info_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3690 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3692 "term_to_xml.c"
  }
#line 3694 "term_to_xml.c"
}

#line 3697 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
#line 3700 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3702 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3704 "term_to_xml.c"
{
#line 3706 "term_to_xml.c"
  {
#line 3708 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3711 "term_to_xml.c"
    {
#line 3713 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_stylesheet_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3716 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3718 "term_to_xml.c"
  }
#line 3720 "term_to_xml.c"
}

#line 3723 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
#line 3726 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3728 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3730 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3732 "term_to_xml.c"
{
#line 3734 "term_to_xml.c"
  {
#line 3736 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3739 "term_to_xml.c"
    {
#line 3741 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_stylesheet_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3744 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3746 "term_to_xml.c"
  }
#line 3748 "term_to_xml.c"
}

#line 3751 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
#line 3754 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3756 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3758 "term_to_xml.c"
{
#line 3760 "term_to_xml.c"
  {
#line 3762 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3765 "term_to_xml.c"
    {
#line 3767 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____xml_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3770 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3772 "term_to_xml.c"
  }
#line 3774 "term_to_xml.c"
}

#line 3777 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
#line 3780 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3782 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3784 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3786 "term_to_xml.c"
{
#line 3788 "term_to_xml.c"
  {
#line 3790 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3793 "term_to_xml.c"
    {
#line 3795 "term_to_xml.c"
      mercury__term_to_xml____Compare____xml_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3798 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3800 "term_to_xml.c"
  }
#line 3802 "term_to_xml.c"
}

#line 460 "string.int0"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
#line 460 "string.int0"
  MR_Word mercury__term_to_xml__V_17_17,
#line 460 "string.int0"
  MR_Box mercury__term_to_xml__V_18_18,
#line 460 "string.int0"
  MR_String mercury__term_to_xml__V_8_8,
#line 460 "string.int0"
  MR_Integer mercury__term_to_xml__V_9_9,
#line 460 "string.int0"
  MR_Integer mercury__term_to_xml__V_10_10,
#line 460 "string.int0"
  MR_Box mercury__term_to_xml__V_14_11,
#line 460 "string.int0"
  MR_Box * mercury__term_to_xml__V_15_12)
#line 460 "string.int0"
{
#line 421 "string.opt"
  while (MR_TRUE)
#line 421 "string.opt"
    {
#line 421 "string.opt"
      /* tailcall optimized into a loop */
#line 421 "string.opt"
      {
#line 421 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_9_9 < mercury__term_to_xml__V_10_10);
#line 421 "string.opt"
        MR_Integer mercury__term_to_xml__V_12_13;
#line 421 "string.opt"
        MR_Char mercury__term_to_xml__V_13_14;

#line 415 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 415 "string.opt"
          {
#line 1047 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_to_xml__V_8_8 ;
	Index =  mercury__term_to_xml__V_9_9 ;
		{
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3868 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_12_13  = NextIndex;
	 mercury__term_to_xml__V_13_14  = Ch;
#line 1047 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 415 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 417 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_12_13 <= mercury__term_to_xml__V_10_10);
#line 415 "string.opt"
          }
#line 421 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 419 "string.opt"
          {
#line 419 "string.opt"
            MR_Box mercury__term_to_xml__V_16_15;

#line 419 "string.opt"
            {
#line 419 "string.opt"
              mercury__term_to_xml__write_xml_escaped_char_4_p_0(mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_13_14, mercury__term_to_xml__V_14_11, &mercury__term_to_xml__V_16_15);
            }
#line 420 "string.opt"
            /* direct tailcall eliminated */
#line 420 "string.opt"
            {
#line 420 "string.opt"
              MR_Integer mercury__term_to_xml__V_9__tmp_copy_9 = mercury__term_to_xml__V_12_13;
#line 420 "string.opt"
              MR_Box mercury__term_to_xml__V_14__tmp_copy_11 = mercury__term_to_xml__V_16_15;

#line 420 "string.opt"
              mercury__term_to_xml__V_14_11 = mercury__term_to_xml__V_14__tmp_copy_11;
#line 420 "string.opt"
              mercury__term_to_xml__V_9_9 = mercury__term_to_xml__V_9__tmp_copy_9;
#line 420 "string.opt"
            }
#line 420 "string.opt"
            continue;
#line 419 "string.opt"
          }
#line 421 "string.opt"
        else
#line 422 "string.opt"
          *mercury__term_to_xml__V_15_12 = mercury__term_to_xml__V_14_11;
#line 421 "string.opt"
      }
#line 421 "string.opt"
      break;
#line 421 "string.opt"
    }
#line 460 "string.int0"
}

#line 319 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
#line 319 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 319 "list.int"
  MR_Word mercury__term_to_xml__V_17_17,
#line 319 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 319 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 319 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4)
#line 319 "list.int"
{
#line 615 "list.opt"
  {
#line 615 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 615 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "list.opt"
      {
#line 615 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "list.opt"
      }
#line 615 "list.opt"
    else
#line 616 "list.opt"
      {
#line 616 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 616 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 616 "list.opt"
        MR_String mercury__term_to_xml__V_9_9;
#line 616 "list.opt"
        MR_Word mercury__term_to_xml__V_10_10;
#line 616 "list.opt"
        MR_Word mercury__term_to_xml__V_11_11;
#line 616 "list.opt"
        MR_Word mercury__term_to_xml__V_12_12;
#line 831 "term_to_xml.m"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_16_16, (MR_Integer) 1)));
#line 831 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv2_V_9_9;
#line 831 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv1_V_11_11;

#line 831 "term_to_xml.m"
        {
#line 831 "term_to_xml.m"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__V_16_16), ((MR_Box) (mercury__term_to_xml__V_17_17)), ((MR_Box) (mercury__term_to_xml__V_7_7)), &mercury__term_to_xml__conv2_V_9_9, &mercury__term_to_xml__conv1_V_11_11);
        }
#line 831 "term_to_xml.m"
        mercury__term_to_xml__V_9_9 = ((MR_String) mercury__term_to_xml__conv2_V_9_9);
#line 831 "term_to_xml.m"
        mercury__term_to_xml__V_11_11 = ((MR_Word) mercury__term_to_xml__conv1_V_11_11);
#line 618 "list.opt"
        {
#line 618 "list.opt"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_12_12);
        }
#line 616 "list.opt"
        {
#line 616 "list.opt"
          MR_Word base;
#line 616 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = base;
#line 616 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 616 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_10_10));
#line 616 "list.opt"
        }
#line 616 "list.opt"
        {
#line 616 "list.opt"
          MR_Word base;
#line 616 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = base;
#line 616 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_11_11));
#line 616 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_12_12));
#line 616 "list.opt"
        }
#line 616 "list.opt"
      }
#line 615 "list.opt"
  }
#line 319 "list.int"
}

#line 360 "list.int"
static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
#line 360 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 360 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 360 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 360 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 360 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__5_5)
#line 360 "list.int"
{
#line 650 "list.opt"
  {
#line 650 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 650 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "list.opt"
      {
#line 650 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 650 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 650 "list.opt"
        *mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 650 "list.opt"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 650 "list.opt"
      }
#line 650 "list.opt"
    else
#line 651 "list.opt"
      {
#line 651 "list.opt"
        MR_Integer mercury__term_to_xml__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 651 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 651 "list.opt"
        MR_String mercury__term_to_xml__V_10_10;
#line 651 "list.opt"
        MR_Word mercury__term_to_xml__V_11_11;
#line 651 "list.opt"
        MR_Integer mercury__term_to_xml__V_12_12;
#line 651 "list.opt"
        MR_Word mercury__term_to_xml__V_13_13;
#line 651 "list.opt"
        MR_Word mercury__term_to_xml__V_14_14;
#line 651 "list.opt"
        MR_Word mercury__term_to_xml__V_15_15;

#line 62 "construct.opt"
        {
#line 62 "construct.opt"
          mercury__term_to_xml__succeeded = mercury__construct__get_functor_internal_5_p_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_12_12, &mercury__term_to_xml__V_14_14);
        }
#line 651 "list.opt"
        if (mercury__term_to_xml__succeeded)
#line 651 "list.opt"
          {
#line 653 "list.opt"
            {
#line 653 "list.opt"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_9_9, &mercury__term_to_xml__V_11_11, &mercury__term_to_xml__V_13_13, &mercury__term_to_xml__V_15_15);
            }
#line 651 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 651 "list.opt"
              {
#line 651 "list.opt"
                {
#line 651 "list.opt"
                  MR_Word base;
#line 651 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 651 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_10_10));
#line 651 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_11_11));
#line 651 "list.opt"
                }
#line 651 "list.opt"
                {
#line 651 "list.opt"
                  MR_Word base;
#line 651 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "list.opt"
                  *mercury__term_to_xml__HeadVar__4_4 = base;
#line 651 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_12_12));
#line 651 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_13_13));
#line 651 "list.opt"
                }
#line 651 "list.opt"
                {
#line 651 "list.opt"
                  MR_Word base;
#line 651 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "list.opt"
                  *mercury__term_to_xml__HeadVar__5_5 = base;
#line 651 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_14_14));
#line 651 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_15_15));
#line 651 "list.opt"
                }
#line 651 "list.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 651 "list.opt"
              }
#line 651 "list.opt"
          }
#line 651 "list.opt"
      }
#line 650 "list.opt"
    return mercury__term_to_xml__succeeded;
#line 650 "list.opt"
  }
#line 360 "list.int"
}

#line 129 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_18_18,
#line 129 "list.int"
  MR_Integer mercury__term_to_xml__V_19_19,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 129 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 391 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Box mercury__term_to_xml__V_15_13;

#line 394 "list.opt"
            {
#line 394 "list.opt"
              mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_11_10;
#line 395 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_15_13;

#line 395 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 129 "list.int"
}

#line 141 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 141 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 141 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 141 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 141 "list.int"
{
#line 409 "list.opt"
  while (MR_TRUE)
#line 409 "list.opt"
    {
#line 409 "list.opt"
      /* tailcall optimized into a loop */
#line 409 "list.opt"
      {
#line 409 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 409 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "list.opt"
          {
#line 409 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 409 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 409 "list.opt"
          }
#line 409 "list.opt"
        else
#line 412 "list.opt"
          {
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_23_19;
#line 412 "list.opt"
            MR_Box mercury__term_to_xml__V_24_20;

#line 1133 "term_to_xml.m"
            {
#line 1133 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 0, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
#line 414 "list.opt"
            /* direct tailcall eliminated */
#line 414 "list.opt"
            {
#line 414 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_16_14;
#line 414 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_23_19;
#line 414 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__V_24_20;

#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 414 "list.opt"
            }
#line 414 "list.opt"
            continue;
#line 412 "list.opt"
          }
#line 409 "list.opt"
      }
#line 409 "list.opt"
      break;
#line 409 "list.opt"
    }
#line 141 "list.int"
}

#line 141 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 141 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 141 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 141 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 141 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 141 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 141 "list.int"
{
#line 409 "list.opt"
  while (MR_TRUE)
#line 409 "list.opt"
    {
#line 409 "list.opt"
      /* tailcall optimized into a loop */
#line 409 "list.opt"
      {
#line 409 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 409 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "list.opt"
          {
#line 409 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 409 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 409 "list.opt"
          }
#line 409 "list.opt"
        else
#line 412 "list.opt"
          {
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_23_19;
#line 412 "list.opt"
            MR_Box mercury__term_to_xml__V_24_20;

#line 1143 "term_to_xml.m"
            {
#line 1143 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 1, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
#line 414 "list.opt"
            /* direct tailcall eliminated */
#line 414 "list.opt"
            {
#line 414 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_16_14;
#line 414 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_23_19;
#line 414 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__V_24_20;

#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 414 "list.opt"
            }
#line 414 "list.opt"
            continue;
#line 412 "list.opt"
          }
#line 409 "list.opt"
      }
#line 409 "list.opt"
      break;
#line 409 "list.opt"
    }
#line 141 "list.int"
}

#line 150 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 150 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 150 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 150 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 150 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 150 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 150 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 150 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 150 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 150 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 150 "list.int"
{
#line 409 "list.opt"
  while (MR_TRUE)
#line 409 "list.opt"
    {
#line 409 "list.opt"
      /* tailcall optimized into a loop */
#line 409 "list.opt"
      {
#line 409 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 409 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "list.opt"
          {
#line 409 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 409 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 409 "list.opt"
          }
#line 409 "list.opt"
        else
#line 412 "list.opt"
          {
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 412 "list.opt"
            MR_Word mercury__term_to_xml__V_23_19;
#line 412 "list.opt"
            MR_Box mercury__term_to_xml__V_24_20;

#line 1153 "term_to_xml.m"
            {
#line 1153 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 2, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
#line 414 "list.opt"
            /* direct tailcall eliminated */
#line 414 "list.opt"
            {
#line 414 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_16_14;
#line 414 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_23_19;
#line 414 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__V_24_20;

#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 414 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 414 "list.opt"
            }
#line 414 "list.opt"
            continue;
#line 412 "list.opt"
          }
#line 409 "list.opt"
      }
#line 409 "list.opt"
      break;
#line 409 "list.opt"
    }
#line 150 "list.int"
}

#line 129 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 129 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 391 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Box mercury__term_to_xml__V_15_13;

#line 394 "list.opt"
            {
#line 394 "list.opt"
              mercury__term_to_xml__write_attribute_4_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_11_10;
#line 395 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_15_13;

#line 395 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 129 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_13_13,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_14_14,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_15_15,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 610 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 612 "list.opt"
        {
#line 612 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 94 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
#line 94 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 94 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 94 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 94 "list.int"
{
#line 169 "list.opt"
  while (MR_TRUE)
#line 169 "list.opt"
    {
#line 169 "list.opt"
      /* tailcall optimized into a loop */
#line 169 "list.opt"
      {
#line 169 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 169 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "list.opt"
        else
#line 170 "list.opt"
          {
#line 170 "list.opt"
            MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "list.opt"
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1407 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_42_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1407 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_43_53 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 452 "map.opt"
            MR_Word mercury__term_to_xml__V_5_61;
#line 452 "map.opt"
            MR_Box mercury__term_to_xml__conv0_V_5_61;

#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_42_52, mercury__term_to_xml__TypeCtorInfo_43_53, mercury__term_to_xml__V_12_12, ((MR_Box) (mercury__term_to_xml__V_6_6)), &mercury__term_to_xml__conv0_V_5_61);
            }
#line 452 "map.opt"
            if (mercury__term_to_xml__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__term_to_xml__V_5_61 = ((MR_Word) mercury__term_to_xml__conv0_V_5_61);
#line 452 "map.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 176 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 174 "list.opt"
              {
#line 174 "list.opt"
                MR_Word mercury__term_to_xml__V_9_9;

#line 174 "list.opt"
                {
#line 174 "list.opt"
                  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_7_7, &mercury__term_to_xml__V_9_9);
                }
#line 175 "list.opt"
                {
#line 175 "list.opt"
                  MR_Word base;
#line 175 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 175 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 175 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 175 "list.opt"
                }
#line 174 "list.opt"
              }
#line 176 "list.opt"
            else
#line 177 "list.opt"
              {
#line 177 "list.opt"
                /* direct tailcall eliminated */
#line 177 "list.opt"
                {
#line 177 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_7_7;

#line 177 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 177 "list.opt"
                }
#line 177 "list.opt"
                continue;
#line 177 "list.opt"
              }
#line 170 "list.opt"
          }
#line 169 "list.opt"
      }
#line 169 "list.opt"
      break;
#line 169 "list.opt"
    }
#line 94 "list.int"
}

#line 129 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 129 "list.int"
  MR_String mercury__term_to_xml__V_18_18,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_19_19,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__V_21_21,
#line 129 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 129 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 391 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Box mercury__term_to_xml__V_15_13;

#line 394 "list.opt"
            {
#line 394 "list.opt"
              mercury__term_to_xml__write_dtd_attlist_8_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_21_21, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_11_10;
#line 395 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_15_13;

#line 395 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 129 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 610 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_String mercury__term_to_xml__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 612 "list.opt"
        {
#line 612 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 1096 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1096 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1096 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1096 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1096 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1096 "term_to_xml.m"
{
#line 1120 "term_to_xml.m"
  {
#line 1120 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1120 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_18_18;

#line 1120 "term_to_xml.m"
    {
#line 1120 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_18_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1120 "term_to_xml.m"
  }
#line 1096 "term_to_xml.m"
}

#line 1094 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1094 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1094 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1094 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1094 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1094 "term_to_xml.m"
{
#line 1114 "term_to_xml.m"
  {
#line 1114 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1114 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_17_17;

#line 1114 "term_to_xml.m"
    {
#line 1114 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_17_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1114 "term_to_xml.m"
  }
#line 1094 "term_to_xml.m"
}

#line 1092 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1092 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1092 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1092 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1092 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1092 "term_to_xml.m"
{
#line 1108 "term_to_xml.m"
  {
#line 1108 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1108 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 1108 "term_to_xml.m"
    {
#line 1108 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1108 "term_to_xml.m"
  }
#line 1092 "term_to_xml.m"
}

#line 461 "string.int0"
static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
#line 461 "string.int0"
  MR_String mercury__term_to_xml__V_8_8,
#line 461 "string.int0"
  MR_Integer mercury__term_to_xml__V_9_9,
#line 461 "string.int0"
  MR_Integer mercury__term_to_xml__V_10_10,
#line 461 "string.int0"
  MR_Word mercury__term_to_xml__V_14_11,
#line 461 "string.int0"
  MR_Word * mercury__term_to_xml__V_15_12)
#line 461 "string.int0"
{
#line 421 "string.opt"
  while (MR_TRUE)
#line 421 "string.opt"
    {
#line 421 "string.opt"
      /* tailcall optimized into a loop */
#line 421 "string.opt"
      {
#line 421 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_9_9 < mercury__term_to_xml__V_10_10);
#line 421 "string.opt"
        MR_Integer mercury__term_to_xml__V_12_13;
#line 421 "string.opt"
        MR_Char mercury__term_to_xml__V_13_14;

#line 415 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 415 "string.opt"
          {
#line 1047 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_to_xml__V_8_8 ;
	Index =  mercury__term_to_xml__V_9_9 ;
		{
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 5113 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_12_13  = NextIndex;
	 mercury__term_to_xml__V_13_14  = Ch;
#line 1047 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 415 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 417 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_12_13 <= mercury__term_to_xml__V_10_10);
#line 415 "string.opt"
          }
#line 421 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 419 "string.opt"
          {
#line 419 "string.opt"
            MR_Word mercury__term_to_xml__V_16_15;

#line 419 "string.opt"
            {
#line 419 "string.opt"
              mercury__term_to_xml__mangle_char_3_p_0(mercury__term_to_xml__V_13_14, mercury__term_to_xml__V_14_11, &mercury__term_to_xml__V_16_15);
            }
#line 420 "string.opt"
            /* direct tailcall eliminated */
#line 420 "string.opt"
            {
#line 420 "string.opt"
              MR_Integer mercury__term_to_xml__V_9__tmp_copy_9 = mercury__term_to_xml__V_12_13;
#line 420 "string.opt"
              MR_Word mercury__term_to_xml__V_14__tmp_copy_11 = mercury__term_to_xml__V_16_15;

#line 420 "string.opt"
              mercury__term_to_xml__V_14_11 = mercury__term_to_xml__V_14__tmp_copy_11;
#line 420 "string.opt"
              mercury__term_to_xml__V_9_9 = mercury__term_to_xml__V_9__tmp_copy_9;
#line 420 "string.opt"
            }
#line 420 "string.opt"
            continue;
#line 419 "string.opt"
          }
#line 421 "string.opt"
        else
#line 422 "string.opt"
          *mercury__term_to_xml__V_15_12 = mercury__term_to_xml__V_14_11;
#line 421 "string.opt"
      }
#line 421 "string.opt"
      break;
#line 421 "string.opt"
    }
#line 461 "string.int0"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 610 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 612 "list.opt"
        {
#line 612 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(mercury__term_to_xml__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 610 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 825 "term_to_xml.m"
        {
#line 825 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 825 "term_to_xml.m"
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 610 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Integer mercury__term_to_xml__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 826 "term_to_xml.m"
        {
#line 826 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 826 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 826 "term_to_xml.m"
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 428 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
#line 428 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 428 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 428 "list.int"
{
#line 714 "list.opt"
  {
#line 714 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 714 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__4_4;

#line 714 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "list.opt"
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "list.opt"
        mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "list.opt"
      else
#line 715 "list.opt"
        {
#line 66 "require.opt"
          {
#line 66 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 715 "list.opt"
        }
#line 714 "list.opt"
    else
#line 714 "list.opt"
      {
#line 714 "list.opt"
        MR_Word mercury__term_to_xml__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 714 "list.opt"
        MR_String mercury__term_to_xml__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 714 "list.opt"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "list.opt"
          {
#line 66 "require.opt"
            {
#line 66 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 720 "list.opt"
          }
#line 714 "list.opt"
        else
#line 725 "list.opt"
          {
#line 725 "list.opt"
            MR_Integer mercury__term_to_xml__V_21_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 725 "list.opt"
            MR_Word mercury__term_to_xml__V_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 725 "list.opt"
            MR_Word mercury__term_to_xml__V_23_25;
#line 725 "list.opt"
            MR_Word mercury__term_to_xml__V_24_26;

#line 852 "term_to_xml.m"
            {
#line 852 "term_to_xml.m"
              mercury__term_to_xml__V_23_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 0) = ((MR_Box) (mercury__term_to_xml__V_35_35));
#line 852 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 1) = ((MR_Box) (mercury__term_to_xml__V_21_23));
#line 852 "term_to_xml.m"
            }
#line 727 "list.opt"
            {
#line 727 "list.opt"
              mercury__term_to_xml__V_24_26 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__V_34_34, mercury__term_to_xml__V_22_24);
            }
#line 725 "list.opt"
            {
#line 725 "list.opt"
              mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 0) = ((MR_Box) (mercury__term_to_xml__V_23_25));
#line 725 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 1) = ((MR_Box) (mercury__term_to_xml__V_24_26));
#line 725 "list.opt"
            }
#line 725 "list.opt"
          }
#line 714 "list.opt"
      }
#line 714 "list.opt"
    return mercury__term_to_xml__HeadVar__4_4;
#line 714 "list.opt"
  }
#line 428 "list.int"
}

#line 100 "list.int"
static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
#line 100 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 100 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 100 "list.int"
{
#line 195 "list.opt"
  while (MR_TRUE)
#line 195 "list.opt"
    {
#line 195 "list.opt"
      /* tailcall optimized into a loop */
#line 195 "list.opt"
      {
#line 195 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 195 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 195 "list.opt"
        else
#line 196 "list.opt"
          {
#line 196 "list.opt"
            MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "list.opt"
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "list.opt"
            MR_Word mercury__term_to_xml__V_9_9;

#line 1290 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 1290 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1290 "term_to_xml.m"
              {
#line 1290 "term_to_xml.m"
                mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_6_6, (MR_Integer) 0)));
#line 200 "list.opt"
                {
#line 200 "list.opt"
                  MR_Word mercury__term_to_xml__V_10_10;

#line 200 "list.opt"
                  {
#line 200 "list.opt"
                    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__V_7_7, &mercury__term_to_xml__V_10_10);
                  }
#line 201 "list.opt"
                  {
#line 201 "list.opt"
                    MR_Word base;
#line 201 "list.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "list.opt"
                    *mercury__term_to_xml__HeadVar__3_3 = base;
#line 201 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 201 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_10_10));
#line 201 "list.opt"
                  }
#line 200 "list.opt"
                }
#line 1290 "term_to_xml.m"
              }
#line 1290 "term_to_xml.m"
            else
#line 203 "list.opt"
              {
#line 203 "list.opt"
                /* direct tailcall eliminated */
#line 203 "list.opt"
                {
#line 203 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_7_7;

#line 203 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 203 "list.opt"
                }
#line 203 "list.opt"
                continue;
#line 203 "list.opt"
              }
#line 196 "list.opt"
          }
#line 195 "list.opt"
      }
#line 195 "list.opt"
      break;
#line 195 "list.opt"
    }
#line 100 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 610 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 1537 "term_to_xml.m"
        {
#line 1537 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 610 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 190 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__map__ho3_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__V_6_6 ;
		{
#line 190 "construct.opt"

    SUCCESS_INDICATOR = (S == NULL);

#line 5667 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 190 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 199 "construct.opt"
        if (mercury__term_to_xml__succeeded)
#line 198 "construct.opt"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "construct.opt"
        else
#line 200 "construct.opt"
          {
#line 200 "construct.opt"
            mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "construct.opt"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 200 "construct.opt"
          }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 1363 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
#line 1363 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
#line 1363 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1363 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 1363 "term_to_xml.m"
{
#line 1363 "term_to_xml.m"
  {
#line 1363 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_6_6;
#line 1363 "term_to_xml.m"
    MR_Box mercury__term_to_xml__V_7_7;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;

#line 1363 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
      {
#line 1363 "term_to_xml.m"
        mercury__term_to_xml__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0));
#line 1363 "term_to_xml.m"
        mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)) = mercury__term_to_xml__V_7_7;
#line 1363 "term_to_xml.m"
        mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
        {
#line 1363 "term_to_xml.m"
          return mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_for_T_11, mercury__term_to_xml__V_6_6, mercury__term_to_xml__V_8_8);
        }
#line 1363 "term_to_xml.m"
      }
#line 1363 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1363 "term_to_xml.m"
  }
#line 1363 "term_to_xml.m"
}

#line 75 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0(
#line 75 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 75 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 75 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 75 "term_to_xml.m"
{
#line 75 "term_to_xml.m"
  {
#line 75 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 75 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_102 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 75 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_103 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 75 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_102 == mercury__term_to_xml__CastY_103);
#line 75 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 5786 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "term_to_xml.m"
    else
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
#line 75 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
        case (MR_Integer) 0:
#line 75 "term_to_xml.m"
          {
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 75 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
              case (MR_Integer) 0:
#line 75 "term_to_xml.m"
                {
#line 75 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_10_10;
#line 75 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_7_138;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_117_117 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5841 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_138  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_138 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                    mercury__term_to_xml__V_10_10 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_138 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                        mercury__term_to_xml__V_10_10 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        mercury__term_to_xml__V_10_10 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 5870 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_10_10 == (MR_Integer) 0);
#line 75 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 75 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                    *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_10_10;
#line 75 "term_to_xml.m"
                  else
#line 75 "term_to_xml.m"
                    {
#line 75 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_11_11;
#line 75 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__TypeInfo_110_110 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];

#line 75 "term_to_xml.m"
                      {
#line 75 "term_to_xml.m"
                        mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_110_110, &mercury__term_to_xml__V_11_11, ((MR_Box) (mercury__term_to_xml__V_116_116)), ((MR_Box) (mercury__term_to_xml__V_8_8)));
                      }
#line 5892 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_11_11 == (MR_Integer) 0);
#line 75 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 75 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                        *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_11_11;
#line 75 "term_to_xml.m"
                      else
#line 75 "term_to_xml.m"
                        {
#line 75 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__TypeInfo_111_111 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];

#line 75 "term_to_xml.m"
                          {
#line 75 "term_to_xml.m"
                            mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_111_111, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__V_115_115)), ((MR_Box) (mercury__term_to_xml__V_9_9)));
#line 75 "term_to_xml.m"
                            return;
                          }
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                    }
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 1:
#line 5924 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 2:
#line 5930 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 5943 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 5949 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 5955 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
            }
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
        case (MR_Integer) 1:
#line 75 "term_to_xml.m"
          {
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 75 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
              case (MR_Integer) 0:
#line 5983 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 1:
#line 75 "term_to_xml.m"
                {
#line 75 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_7_133;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_114_114 ;
	S2 =  mercury__term_to_xml__V_37_37 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6011 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_133  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_133 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_133 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 2:
#line 6046 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 6059 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6065 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6071 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
            }
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
        case (MR_Integer) 2:
#line 75 "term_to_xml.m"
          {
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 75 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
              case (MR_Integer) 0:
#line 6099 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 1:
#line 6105 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 2:
#line 75 "term_to_xml.m"
                {
#line 75 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_7_123;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_112_112 ;
	S2 =  mercury__term_to_xml__V_53_53 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6133 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_123  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_123 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_123 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 6175 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6181 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6187 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
            }
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
        case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
            case (MR_Integer) 0:
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 75 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 6222 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6228 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6234 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                      case (MR_Integer) 0:
#line 75 "term_to_xml.m"
                        {
#line 75 "term_to_xml.m"
                          MR_String mercury__term_to_xml__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                          MR_Integer mercury__term_to_xml__V_7_128;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_113_113 ;
	S2 =  mercury__term_to_xml__V_69_69 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6269 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_128  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_128 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                          else
#line 97 "private_builtin.opt"
                            {
#line 94 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_128 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                              else
#line 98 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                            }
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 1:
#line 6304 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 2:
#line 6310 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                    }
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
              break;
#line 75 "term_to_xml.m"
            case (MR_Integer) 1:
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 75 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 6338 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6344 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6350 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                      case (MR_Integer) 0:
#line 6363 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 1:
#line 75 "term_to_xml.m"
                        {
#line 75 "term_to_xml.m"
                          MR_String mercury__term_to_xml__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                          MR_Integer mercury__term_to_xml__V_7_143;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_118_118 ;
	S2 =  mercury__term_to_xml__V_85_85 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6391 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_143  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_143 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                          else
#line 97 "private_builtin.opt"
                            {
#line 94 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_143 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                              else
#line 98 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                            }
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 2:
#line 6426 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                    }
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
              break;
#line 75 "term_to_xml.m"
            case (MR_Integer) 2:
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 75 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 6454 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6460 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6466 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
                      case (MR_Integer) 0:
#line 6479 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 1:
#line 6485 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 2:
#line 75 "term_to_xml.m"
                        {
#line 75 "term_to_xml.m"
                          MR_String mercury__term_to_xml__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                          MR_Integer mercury__term_to_xml__V_7_148;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_119_119 ;
	S2 =  mercury__term_to_xml__V_101_101 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6513 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_148  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_148 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                          else
#line 97 "private_builtin.opt"
                            {
#line 94 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_148 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                              else
#line 98 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                            }
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                    }
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
              break;
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
      }
#line 75 "term_to_xml.m"
  }
#line 75 "term_to_xml.m"
}

#line 75 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0(
#line 75 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 75 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 75 "term_to_xml.m"
{
#line 75 "term_to_xml.m"
  {
#line 75 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 75 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_19 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 75 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_20 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 75 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_19 == mercury__term_to_xml__CastY_20);
#line 75 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 75 "term_to_xml.m"
    else
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 75 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
        case (MR_Integer) 0:
#line 75 "term_to_xml.m"
          {
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_21_21;
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_22_22;
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_6_6;
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_7_7;
#line 75 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_8_8;

#line 75 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 75 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "term_to_xml.m"
                mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 2)));
#line 6631 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_6_6) == 0);
#line 75 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                  {
#line 6637 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_21_21 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];
#line 6639 "term_to_xml.c"
                    {
#line 6641 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_21_21, ((MR_Box) (mercury__term_to_xml__V_4_4)), ((MR_Box) (mercury__term_to_xml__V_7_7)));
                    }
#line 75 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                      {
#line 6648 "term_to_xml.c"
                        mercury__term_to_xml__TypeInfo_22_22 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];
#line 6650 "term_to_xml.c"
                        {
#line 6652 "term_to_xml.c"
                          return mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_22_22, ((MR_Box) (mercury__term_to_xml__V_5_5)), ((MR_Box) (mercury__term_to_xml__V_8_8)));
                        }
#line 75 "term_to_xml.m"
                      }
#line 75 "term_to_xml.m"
                  }
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
        case (MR_Integer) 1:
#line 75 "term_to_xml.m"
          {
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_10_10;

#line 75 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 75 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                mercury__term_to_xml__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 6682 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, mercury__term_to_xml__V_10_10) == 0);
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
        case (MR_Integer) 2:
#line 75 "term_to_xml.m"
          {
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_12_12;

#line 75 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 75 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                mercury__term_to_xml__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 6707 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_11_11, mercury__term_to_xml__V_12_12) == 0);
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
        case (MR_Integer) 3:
#line 75 "term_to_xml.m"
#line 75 "term_to_xml.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) {
#line 75 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "term_to_xml.m"
            case (MR_Integer) 0:
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_14_14;

#line 75 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                  {
#line 75 "term_to_xml.m"
                    mercury__term_to_xml__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 6739 "term_to_xml.c"
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14) == 0);
#line 75 "term_to_xml.m"
                  }
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
              break;
#line 75 "term_to_xml.m"
            case (MR_Integer) 1:
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_16_16;

#line 75 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                  {
#line 75 "term_to_xml.m"
                    mercury__term_to_xml__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 6764 "term_to_xml.c"
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_15_15, mercury__term_to_xml__V_16_16) == 0);
#line 75 "term_to_xml.m"
                  }
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
              break;
#line 75 "term_to_xml.m"
            case (MR_Integer) 2:
#line 75 "term_to_xml.m"
              {
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_18_18;

#line 75 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 75 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                  {
#line 75 "term_to_xml.m"
                    mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 6789 "term_to_xml.c"
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18) == 0);
#line 75 "term_to_xml.m"
                  }
#line 75 "term_to_xml.m"
              }
#line 75 "term_to_xml.m"
              break;
#line 75 "term_to_xml.m"
          }
#line 75 "term_to_xml.m"
          break;
#line 75 "term_to_xml.m"
      }
#line 75 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 75 "term_to_xml.m"
  }
#line 75 "term_to_xml.m"
}

#line 151 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0(
#line 151 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 151 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 151 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 151 "term_to_xml.m"
{
#line 151 "term_to_xml.m"
  {
#line 151 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 151 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_13 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 151 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_14 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 151 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_13 == mercury__term_to_xml__CastY_14);
#line 151 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 6834 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "term_to_xml.m"
    else
#line 151 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "term_to_xml.m"
      else
#line 6846 "term_to_xml.c"
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "term_to_xml.m"
    else
#line 151 "term_to_xml.m"
      {
#line 151 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6859 "term_to_xml.c"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "term_to_xml.m"
        else
#line 151 "term_to_xml.m"
          {
#line 151 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 151 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_8_8;
#line 151 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_7_22;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6889 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_22  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
            else
#line 97 "private_builtin.opt"
              {
#line 94 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                else
#line 98 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
              }
#line 6918 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 151 "term_to_xml.m"
            mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 151 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 151 "term_to_xml.m"
              *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 151 "term_to_xml.m"
            else
#line 151 "term_to_xml.m"
              {
#line 151 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__V_7_27;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_17_17 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6948 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_27  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_27 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                else
#line 97 "private_builtin.opt"
                  {
#line 94 "private_builtin.opt"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_27 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                    if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                    else
#line 98 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                  }
#line 151 "term_to_xml.m"
              }
#line 151 "term_to_xml.m"
          }
#line 151 "term_to_xml.m"
      }
#line 151 "term_to_xml.m"
  }
#line 151 "term_to_xml.m"
}

#line 151 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0(
#line 151 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 151 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 151 "term_to_xml.m"
{
#line 151 "term_to_xml.m"
  {
#line 151 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 151 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 151 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 151 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 151 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 151 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 151 "term_to_xml.m"
    else
#line 151 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "term_to_xml.m"
      {
#line 151 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 151 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 151 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
#line 151 "term_to_xml.m"
      }
#line 151 "term_to_xml.m"
    else
#line 151 "term_to_xml.m"
      {
#line 151 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5;
#line 151 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_6_6;

#line 151 "term_to_xml.m"
        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 151 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 151 "term_to_xml.m"
          {
#line 151 "term_to_xml.m"
            mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "term_to_xml.m"
            mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 7050 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 151 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 7054 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_4_4, mercury__term_to_xml__V_6_6) == 0);
#line 151 "term_to_xml.m"
          }
#line 151 "term_to_xml.m"
      }
#line 151 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 151 "term_to_xml.m"
  }
#line 151 "term_to_xml.m"
}

#line 269 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0(
#line 269 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 269 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 269 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 269 "term_to_xml.m"
{
#line 269 "term_to_xml.m"
  {
#line 269 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 269 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_13 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 269 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_14 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 269 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_13 == mercury__term_to_xml__CastY_14);
#line 269 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 7091 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "term_to_xml.m"
    else
#line 269 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "term_to_xml.m"
      else
#line 7103 "term_to_xml.c"
        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "term_to_xml.m"
    else
#line 269 "term_to_xml.m"
      {
#line 269 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 269 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 269 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7116 "term_to_xml.c"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "term_to_xml.m"
        else
#line 269 "term_to_xml.m"
          {
#line 269 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 269 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 269 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_8_8;
#line 269 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_7_22;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_functor_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7146 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_22  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
            else
#line 97 "private_builtin.opt"
              {
#line 94 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                else
#line 98 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
              }
#line 7175 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 269 "term_to_xml.m"
            mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 269 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 269 "term_to_xml.m"
              *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 269 "term_to_xml.m"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 < mercury__term_to_xml__V_7_7);
#line 74 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                else
#line 79 "private_builtin.opt"
                  {
#line 76 "private_builtin.opt"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 == mercury__term_to_xml__V_7_7);
#line 79 "private_builtin.opt"
                    if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                    else
#line 80 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                  }
#line 74 "private_builtin.opt"
              }
#line 269 "term_to_xml.m"
          }
#line 269 "term_to_xml.m"
      }
#line 269 "term_to_xml.m"
  }
#line 269 "term_to_xml.m"
}

#line 269 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0(
#line 269 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 269 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 269 "term_to_xml.m"
{
#line 269 "term_to_xml.m"
  {
#line 269 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 269 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 269 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 269 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 269 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 269 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 269 "term_to_xml.m"
    else
#line 269 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "term_to_xml.m"
      {
#line 269 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 269 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 269 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
#line 269 "term_to_xml.m"
      }
#line 269 "term_to_xml.m"
    else
#line 269 "term_to_xml.m"
      {
#line 269 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5;
#line 269 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_6_6;

#line 269 "term_to_xml.m"
        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 269 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 269 "term_to_xml.m"
          {
#line 269 "term_to_xml.m"
            mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 269 "term_to_xml.m"
            mercury__term_to_xml__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 7282 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 269 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 7286 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_4_4 == mercury__term_to_xml__V_6_6);
#line 269 "term_to_xml.m"
          }
#line 269 "term_to_xml.m"
      }
#line 269 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 269 "term_to_xml.m"
  }
#line 269 "term_to_xml.m"
}

#line 878 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0(
#line 878 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 878 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 878 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 878 "term_to_xml.m"
{
#line 878 "term_to_xml.m"
  {
#line 878 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 878 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar1_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 878 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar2_5 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 71 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
    else
#line 79 "private_builtin.opt"
      {
#line 76 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 79 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
        else
#line 80 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
      }
#line 878 "term_to_xml.m"
  }
#line 878 "term_to_xml.m"
}

#line 878 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0(
#line 878 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_1,
#line 878 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 878 "term_to_xml.m"
{
#line 7355 "term_to_xml.c"
  {
#line 7357 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 7360 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 7362 "term_to_xml.c"
  }
#line 878 "term_to_xml.m"
}

#line 133 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0(
#line 133 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 133 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 133 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 133 "term_to_xml.m"
{
#line 133 "term_to_xml.m"
  {
#line 133 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 133 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 133 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_11 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 133 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_10 == mercury__term_to_xml__CastY_11);
#line 133 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 7391 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "term_to_xml.m"
    else
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
#line 133 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
        case (MR_Integer) 0:
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__2_2)) {
#line 133 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
            case (MR_Integer) 0:
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 133 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
                case (MR_Integer) 0:
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 133 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 133 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "term_to_xml.m"
                      break;
#line 133 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 133 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 133 "term_to_xml.m"
                      break;
#line 133 "term_to_xml.m"
                  }
#line 133 "term_to_xml.m"
                  break;
#line 133 "term_to_xml.m"
                case (MR_Integer) 1:
#line 7439 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 133 "term_to_xml.m"
                  break;
#line 133 "term_to_xml.m"
              }
#line 133 "term_to_xml.m"
              break;
#line 133 "term_to_xml.m"
            case (MR_Integer) 1:
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 133 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
                case (MR_Integer) 0:
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 133 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 133 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 133 "term_to_xml.m"
                      break;
#line 133 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 133 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "term_to_xml.m"
                      break;
#line 133 "term_to_xml.m"
                  }
#line 133 "term_to_xml.m"
                  break;
#line 133 "term_to_xml.m"
                case (MR_Integer) 1:
#line 7479 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 133 "term_to_xml.m"
                  break;
#line 133 "term_to_xml.m"
              }
#line 133 "term_to_xml.m"
              break;
#line 133 "term_to_xml.m"
          }
#line 133 "term_to_xml.m"
          break;
#line 133 "term_to_xml.m"
        case (MR_Integer) 1:
#line 133 "term_to_xml.m"
          {
#line 133 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 133 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
              case (MR_Integer) 0:
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 133 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 7512 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 133 "term_to_xml.m"
                    break;
#line 133 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 7518 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 133 "term_to_xml.m"
                    break;
#line 133 "term_to_xml.m"
                }
#line 133 "term_to_xml.m"
                break;
#line 133 "term_to_xml.m"
              case (MR_Integer) 1:
#line 133 "term_to_xml.m"
                {
#line 133 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 133 "term_to_xml.m"
                  {
#line 133 "term_to_xml.m"
                    mercury__term_to_xml____Compare____doctype_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_7_7);
#line 133 "term_to_xml.m"
                    return;
                  }
#line 133 "term_to_xml.m"
                }
#line 133 "term_to_xml.m"
                break;
#line 133 "term_to_xml.m"
            }
#line 133 "term_to_xml.m"
          }
#line 133 "term_to_xml.m"
          break;
#line 133 "term_to_xml.m"
      }
#line 133 "term_to_xml.m"
  }
#line 133 "term_to_xml.m"
}

#line 133 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0(
#line 133 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 133 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 133 "term_to_xml.m"
{
#line 133 "term_to_xml.m"
  {
#line 133 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 133 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 133 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 133 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 133 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 133 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 133 "term_to_xml.m"
    else
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 133 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
        case (MR_Integer) 0:
#line 133 "term_to_xml.m"
#line 133 "term_to_xml.m"
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
#line 133 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 133 "term_to_xml.m"
            case (MR_Integer) 0:
#line 133 "term_to_xml.m"
              {
#line 133 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 133 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 133 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
#line 133 "term_to_xml.m"
              }
#line 133 "term_to_xml.m"
              break;
#line 133 "term_to_xml.m"
            case (MR_Integer) 1:
#line 133 "term_to_xml.m"
              {
#line 133 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 133 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 133 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
#line 133 "term_to_xml.m"
              }
#line 133 "term_to_xml.m"
              break;
#line 133 "term_to_xml.m"
          }
#line 133 "term_to_xml.m"
          break;
#line 133 "term_to_xml.m"
        case (MR_Integer) 1:
#line 133 "term_to_xml.m"
          {
#line 133 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_6_6;

#line 133 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 133 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 133 "term_to_xml.m"
              {
#line 133 "term_to_xml.m"
                mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 7646 "term_to_xml.c"
                {
#line 7648 "term_to_xml.c"
                  return mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(mercury__term_to_xml__V_5_5, mercury__term_to_xml__V_6_6);
                }
#line 133 "term_to_xml.m"
              }
#line 133 "term_to_xml.m"
          }
#line 133 "term_to_xml.m"
          break;
#line 133 "term_to_xml.m"
      }
#line 133 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 133 "term_to_xml.m"
  }
#line 133 "term_to_xml.m"
}

#line 258 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0(
#line 258 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 258 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 258 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 258 "term_to_xml.m"
{
#line 258 "term_to_xml.m"
  {
#line 258 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 258 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_6_6 = (MR_Word) &mercury__term_to_xml_scalar_common_2[0];
#line 258 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar1_4 = mercury__term_to_xml__HeadVar__2_2;
#line 258 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar2_5 = mercury__term_to_xml__HeadVar__3_3;

#line 258 "term_to_xml.m"
    {
#line 258 "term_to_xml.m"
      mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_6_6, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_to_xml__Cast_HeadVar2_5)));
#line 258 "term_to_xml.m"
      return;
    }
#line 258 "term_to_xml.m"
  }
#line 258 "term_to_xml.m"
}

#line 258 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0(
#line 258 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 258 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 258 "term_to_xml.m"
{
#line 258 "term_to_xml.m"
  {
#line 258 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 258 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar1_3 = mercury__term_to_xml__HeadVar__1_1;
#line 258 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar2_4 = mercury__term_to_xml__HeadVar__2_2;

#line 258 "term_to_xml.m"
    {
#line 258 "term_to_xml.m"
      return mercury__term_to_xml__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__term_to_xml__Cast_HeadVar1_3, (MR_Word) mercury__term_to_xml__Cast_HeadVar2_4);
    }
#line 258 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 258 "term_to_xml.m"
  }
#line 258 "term_to_xml.m"
}

#line 241 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0(
#line 241 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 241 "term_to_xml.m"
{
#line 241 "term_to_xml.m"
  {
#line 241 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 241 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 241 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_11 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 241 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_10 == mercury__term_to_xml__CastY_11);
#line 241 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 7754 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 241 "term_to_xml.m"
    else
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
#line 241 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
        case (MR_Integer) 0:
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__2_2)) {
#line 241 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
            case (MR_Integer) 0:
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 241 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
                case (MR_Integer) 0:
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 241 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 241 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 241 "term_to_xml.m"
                      break;
#line 241 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 241 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 241 "term_to_xml.m"
                      break;
#line 241 "term_to_xml.m"
                  }
#line 241 "term_to_xml.m"
                  break;
#line 241 "term_to_xml.m"
                case (MR_Integer) 1:
#line 7802 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 241 "term_to_xml.m"
                  break;
#line 241 "term_to_xml.m"
              }
#line 241 "term_to_xml.m"
              break;
#line 241 "term_to_xml.m"
            case (MR_Integer) 1:
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 241 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
                case (MR_Integer) 0:
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 241 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 241 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 241 "term_to_xml.m"
                      break;
#line 241 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 241 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 241 "term_to_xml.m"
                      break;
#line 241 "term_to_xml.m"
                  }
#line 241 "term_to_xml.m"
                  break;
#line 241 "term_to_xml.m"
                case (MR_Integer) 1:
#line 7842 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 241 "term_to_xml.m"
                  break;
#line 241 "term_to_xml.m"
              }
#line 241 "term_to_xml.m"
              break;
#line 241 "term_to_xml.m"
          }
#line 241 "term_to_xml.m"
          break;
#line 241 "term_to_xml.m"
        case (MR_Integer) 1:
#line 241 "term_to_xml.m"
          {
#line 241 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 241 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
              case (MR_Integer) 0:
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 241 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 7875 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 241 "term_to_xml.m"
                    break;
#line 241 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 7881 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 241 "term_to_xml.m"
                    break;
#line 241 "term_to_xml.m"
                }
#line 241 "term_to_xml.m"
                break;
#line 241 "term_to_xml.m"
              case (MR_Integer) 1:
#line 241 "term_to_xml.m"
                {
#line 241 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__TypeInfo_12_12 = (MR_Word) &mercury__term_to_xml_scalar_common_2[0];
#line 241 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 241 "term_to_xml.m"
                  {
#line 241 "term_to_xml.m"
                    mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_12_12, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__V_13_13)), ((MR_Box) (mercury__term_to_xml__V_9_9)));
#line 241 "term_to_xml.m"
                    return;
                  }
#line 241 "term_to_xml.m"
                }
#line 241 "term_to_xml.m"
                break;
#line 241 "term_to_xml.m"
            }
#line 241 "term_to_xml.m"
          }
#line 241 "term_to_xml.m"
          break;
#line 241 "term_to_xml.m"
      }
#line 241 "term_to_xml.m"
  }
#line 241 "term_to_xml.m"
}

#line 241 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0(
#line 241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 241 "term_to_xml.m"
{
#line 241 "term_to_xml.m"
  {
#line 241 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 241 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 241 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 241 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 241 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 241 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 241 "term_to_xml.m"
    else
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 241 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
        case (MR_Integer) 0:
#line 241 "term_to_xml.m"
#line 241 "term_to_xml.m"
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
#line 241 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 241 "term_to_xml.m"
            case (MR_Integer) 0:
#line 241 "term_to_xml.m"
              {
#line 241 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 241 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 241 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
#line 241 "term_to_xml.m"
              }
#line 241 "term_to_xml.m"
              break;
#line 241 "term_to_xml.m"
            case (MR_Integer) 1:
#line 241 "term_to_xml.m"
              {
#line 241 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastX_5 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 241 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastY_6 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 241 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_6 == mercury__term_to_xml__CastX_5);
#line 241 "term_to_xml.m"
              }
#line 241 "term_to_xml.m"
              break;
#line 241 "term_to_xml.m"
          }
#line 241 "term_to_xml.m"
          break;
#line 241 "term_to_xml.m"
        case (MR_Integer) 1:
#line 241 "term_to_xml.m"
          {
#line 241 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 241 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_8_8;

#line 241 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 241 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 241 "term_to_xml.m"
              {
#line 241 "term_to_xml.m"
                mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 8011 "term_to_xml.c"
                {
#line 8013 "term_to_xml.c"
                  return mercury__term_to_xml__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__term_to_xml__V_7_7, (MR_Word) mercury__term_to_xml__V_8_8);
                }
#line 241 "term_to_xml.m"
              }
#line 241 "term_to_xml.m"
          }
#line 241 "term_to_xml.m"
          break;
#line 241 "term_to_xml.m"
      }
#line 241 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 241 "term_to_xml.m"
  }
#line 241 "term_to_xml.m"
}

#line 332 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0(
#line 332 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 332 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 332 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 332 "term_to_xml.m"
{
#line 332 "term_to_xml.m"
  {
#line 332 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 332 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_45 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 332 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_46 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 332 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_45 == mercury__term_to_xml__CastY_46);
#line 332 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 8055 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 332 "term_to_xml.m"
    else
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
#line 332 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
        case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__2_2)) {
#line 332 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
            case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
                case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 332 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 332 "term_to_xml.m"
                      break;
#line 332 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 332 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                      break;
#line 332 "term_to_xml.m"
                  }
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 1:
#line 8103 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 2:
#line 8109 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 3:
#line 8115 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
              }
#line 332 "term_to_xml.m"
              break;
#line 332 "term_to_xml.m"
            case (MR_Integer) 1:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
                case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 332 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                      break;
#line 332 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 332 "term_to_xml.m"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 332 "term_to_xml.m"
                      break;
#line 332 "term_to_xml.m"
                  }
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 1:
#line 8155 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 2:
#line 8161 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 3:
#line 8167 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
              }
#line 332 "term_to_xml.m"
              break;
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
        case (MR_Integer) 1:
#line 332 "term_to_xml.m"
          {
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 332 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
              case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 8202 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8208 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 1:
#line 332 "term_to_xml.m"
                {
#line 332 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 332 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 332 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_20_20;
#line 332 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_7_58;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____dtd_generation_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_52_52 ;
	S2 =  mercury__term_to_xml__V_18_18 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8244 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_58  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_58 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                    mercury__term_to_xml__V_20_20 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_58 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                        mercury__term_to_xml__V_20_20 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        mercury__term_to_xml__V_20_20 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 8273 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_20_20 == (MR_Integer) 0);
#line 332 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 332 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
                    *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_20_20;
#line 332 "term_to_xml.m"
                  else
#line 332 "term_to_xml.m"
                    {
#line 332 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__TypeInfo_50_50 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];

#line 332 "term_to_xml.m"
                      {
#line 332 "term_to_xml.m"
                        mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_50_50, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__V_51_51)), ((MR_Box) (mercury__term_to_xml__V_19_19)));
#line 332 "term_to_xml.m"
                        return;
                      }
#line 332 "term_to_xml.m"
                    }
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8303 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 3:
#line 8309 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
            }
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
        case (MR_Integer) 2:
#line 332 "term_to_xml.m"
          {
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
              case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 8340 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8346 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8356 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 2:
#line 332 "term_to_xml.m"
                {
#line 332 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 332 "term_to_xml.m"
                  {
#line 332 "term_to_xml.m"
                    mercury__type_desc____Compare____type_desc_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__V_54_54, mercury__term_to_xml__V_33_33);
#line 332 "term_to_xml.m"
                    return;
                  }
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 3:
#line 8380 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
            }
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
        case (MR_Integer) 3:
#line 332 "term_to_xml.m"
          {
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
              case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
                switch (MR_unmkbody(mercury__term_to_xml__HeadVar__3_3)) {
#line 332 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 8411 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8417 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8427 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8433 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 3:
#line 332 "term_to_xml.m"
                {
#line 332 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 332 "term_to_xml.m"
                  {
#line 332 "term_to_xml.m"
                    mercury__type_desc____Compare____pseudo_type_desc_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__V_53_53, mercury__term_to_xml__V_44_44);
#line 332 "term_to_xml.m"
                    return;
                  }
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
            }
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
      }
#line 332 "term_to_xml.m"
  }
#line 332 "term_to_xml.m"
}

#line 332 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0(
#line 332 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 332 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 332 "term_to_xml.m"
{
#line 332 "term_to_xml.m"
  {
#line 332 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 332 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_15 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 332 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_16 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 332 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_15 == mercury__term_to_xml__CastY_16);
#line 332 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 332 "term_to_xml.m"
    else
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 332 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
        case (MR_Integer) 0:
#line 332 "term_to_xml.m"
#line 332 "term_to_xml.m"
          switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
#line 332 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 332 "term_to_xml.m"
            case (MR_Integer) 0:
#line 332 "term_to_xml.m"
              {
#line 332 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 332 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 332 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
#line 332 "term_to_xml.m"
              }
#line 332 "term_to_xml.m"
              break;
#line 332 "term_to_xml.m"
            case (MR_Integer) 1:
#line 332 "term_to_xml.m"
              {
#line 332 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastX_5 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 332 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__CastY_6 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 332 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_6 == mercury__term_to_xml__CastX_5);
#line 332 "term_to_xml.m"
              }
#line 332 "term_to_xml.m"
              break;
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
        case (MR_Integer) 1:
#line 332 "term_to_xml.m"
          {
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_17_17;
#line 332 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 332 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_9_9;
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_10_10;

#line 332 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 332 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
              {
#line 332 "term_to_xml.m"
                mercury__term_to_xml__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 332 "term_to_xml.m"
                mercury__term_to_xml__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 8565 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_7_7, mercury__term_to_xml__V_9_9) == 0);
#line 332 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
                  {
#line 8571 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_17_17 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 8573 "term_to_xml.c"
                    {
#line 8575 "term_to_xml.c"
                      return mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_17_17, ((MR_Box) (mercury__term_to_xml__V_8_8)), ((MR_Box) (mercury__term_to_xml__V_10_10)));
                    }
#line 332 "term_to_xml.m"
                  }
#line 332 "term_to_xml.m"
              }
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
        case (MR_Integer) 2:
#line 332 "term_to_xml.m"
          {
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_12_12;

#line 332 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 332 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
              {
#line 332 "term_to_xml.m"
                mercury__term_to_xml__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 8603 "term_to_xml.c"
                {
#line 8605 "term_to_xml.c"
                  return mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__V_11_11, mercury__term_to_xml__V_12_12);
                }
#line 332 "term_to_xml.m"
              }
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
        case (MR_Integer) 3:
#line 332 "term_to_xml.m"
          {
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_14_14;

#line 332 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 332 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
              {
#line 332 "term_to_xml.m"
                mercury__term_to_xml__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 8631 "term_to_xml.c"
                {
#line 8633 "term_to_xml.c"
                  return mercury__term_to_xml__succeeded = mercury__type_desc____Unify____pseudo_type_desc_0_0(mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14);
                }
#line 332 "term_to_xml.m"
              }
#line 332 "term_to_xml.m"
          }
#line 332 "term_to_xml.m"
          break;
#line 332 "term_to_xml.m"
      }
#line 332 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 332 "term_to_xml.m"
  }
#line 332 "term_to_xml.m"
}

#line 125 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0(
#line 125 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 125 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 125 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 125 "term_to_xml.m"
{
#line 125 "term_to_xml.m"
  {
#line 125 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 125 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_29 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 125 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_30 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 125 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_29 == mercury__term_to_xml__CastY_30);
#line 125 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 8675 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 125 "term_to_xml.m"
    else
#line 125 "term_to_xml.m"
#line 125 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) {
#line 125 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 125 "term_to_xml.m"
        case (MR_Integer) 0:
#line 125 "term_to_xml.m"
          {
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 125 "term_to_xml.m"
#line 125 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 125 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 125 "term_to_xml.m"
              case (MR_Integer) 0:
#line 125 "term_to_xml.m"
                {
#line 125 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 125 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_7_42;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_35_35 ;
	S2 =  mercury__term_to_xml__V_5_5 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8720 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_42  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_42 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_42 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 125 "term_to_xml.m"
                }
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8755 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8761 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
            }
#line 125 "term_to_xml.m"
          }
#line 125 "term_to_xml.m"
          break;
#line 125 "term_to_xml.m"
        case (MR_Integer) 1:
#line 125 "term_to_xml.m"
          {
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 125 "term_to_xml.m"
#line 125 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 125 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 125 "term_to_xml.m"
              case (MR_Integer) 0:
#line 8787 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 1:
#line 125 "term_to_xml.m"
                {
#line 125 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 125 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 125 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_18_18;
#line 125 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_7_47;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_37_37 ;
	S2 =  mercury__term_to_xml__V_16_16 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8819 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_47  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_47 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                    mercury__term_to_xml__V_18_18 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_47 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 8848 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_18_18 == (MR_Integer) 0);
#line 125 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 125 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 125 "term_to_xml.m"
                    *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_18_18;
#line 125 "term_to_xml.m"
                  else
#line 125 "term_to_xml.m"
                    {
#line 125 "term_to_xml.m"
                      MR_Integer mercury__term_to_xml__V_7_52;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_36_36 ;
	S2 =  mercury__term_to_xml__V_17_17 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8878 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_52  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_52 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                      else
#line 97 "private_builtin.opt"
                        {
#line 94 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_52 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                          else
#line 98 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                        }
#line 125 "term_to_xml.m"
                    }
#line 125 "term_to_xml.m"
                }
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8915 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
            }
#line 125 "term_to_xml.m"
          }
#line 125 "term_to_xml.m"
          break;
#line 125 "term_to_xml.m"
        case (MR_Integer) 2:
#line 125 "term_to_xml.m"
          {
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 125 "term_to_xml.m"
#line 125 "term_to_xml.m"
            switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) {
#line 125 "term_to_xml.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 125 "term_to_xml.m"
              case (MR_Integer) 0:
#line 8939 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8945 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 2:
#line 125 "term_to_xml.m"
                {
#line 125 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 125 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_7_57;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_38_38 ;
	S2 =  mercury__term_to_xml__V_28_28 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8973 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_57  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_57 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_57 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 125 "term_to_xml.m"
                }
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
            }
#line 125 "term_to_xml.m"
          }
#line 125 "term_to_xml.m"
          break;
#line 125 "term_to_xml.m"
      }
#line 125 "term_to_xml.m"
  }
#line 125 "term_to_xml.m"
}

#line 125 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0(
#line 125 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 125 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 125 "term_to_xml.m"
{
#line 125 "term_to_xml.m"
  {
#line 125 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 125 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_11 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 125 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_12 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 125 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_11 == mercury__term_to_xml__CastY_12);
#line 125 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 125 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 125 "term_to_xml.m"
    else
#line 125 "term_to_xml.m"
#line 125 "term_to_xml.m"
      switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 125 "term_to_xml.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 125 "term_to_xml.m"
        case (MR_Integer) 0:
#line 125 "term_to_xml.m"
          {
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_4_4;

#line 125 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 125 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 125 "term_to_xml.m"
              {
#line 125 "term_to_xml.m"
                mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 9067 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_4_4) == 0);
#line 125 "term_to_xml.m"
              }
#line 125 "term_to_xml.m"
          }
#line 125 "term_to_xml.m"
          break;
#line 125 "term_to_xml.m"
        case (MR_Integer) 1:
#line 125 "term_to_xml.m"
          {
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_7_7;
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_8_8;

#line 125 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 125 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 125 "term_to_xml.m"
              {
#line 125 "term_to_xml.m"
                mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 125 "term_to_xml.m"
                mercury__term_to_xml__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 9098 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_5_5, mercury__term_to_xml__V_7_7) == 0);
#line 125 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 9102 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_6_6, mercury__term_to_xml__V_8_8) == 0);
#line 125 "term_to_xml.m"
              }
#line 125 "term_to_xml.m"
          }
#line 125 "term_to_xml.m"
          break;
#line 125 "term_to_xml.m"
        case (MR_Integer) 2:
#line 125 "term_to_xml.m"
          {
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_10_10;

#line 125 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 125 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 125 "term_to_xml.m"
              {
#line 125 "term_to_xml.m"
                mercury__term_to_xml__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 9127 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, mercury__term_to_xml__V_10_10) == 0);
#line 125 "term_to_xml.m"
              }
#line 125 "term_to_xml.m"
          }
#line 125 "term_to_xml.m"
          break;
#line 125 "term_to_xml.m"
      }
#line 125 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 125 "term_to_xml.m"
  }
#line 125 "term_to_xml.m"
}

#line 292 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0(
#line 292 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 292 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 292 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 292 "term_to_xml.m"
{
#line 292 "term_to_xml.m"
  {
#line 292 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 292 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar1_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 292 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar2_5 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 71 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
    else
#line 79 "private_builtin.opt"
      {
#line 76 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 79 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
        else
#line 80 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
      }
#line 292 "term_to_xml.m"
  }
#line 292 "term_to_xml.m"
}

#line 292 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0(
#line 292 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_1,
#line 292 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 292 "term_to_xml.m"
{
#line 9200 "term_to_xml.c"
  {
#line 9202 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 9205 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 9207 "term_to_xml.c"
  }
#line 292 "term_to_xml.m"
}

#line 284 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0(
#line 284 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 284 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 284 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 284 "term_to_xml.m"
{
#line 284 "term_to_xml.m"
  {
#line 284 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 284 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 284 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 284 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 284 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 9236 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 284 "term_to_xml.m"
    else
#line 284 "term_to_xml.m"
      {
#line 284 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 284 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 284 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 284 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_8_8;
#line 284 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_7_18;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_from_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9270 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_18  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_18 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
        else
#line 97 "private_builtin.opt"
          {
#line 94 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_18 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
            else
#line 98 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
          }
#line 9299 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 284 "term_to_xml.m"
        mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 284 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 284 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 284 "term_to_xml.m"
        else
#line 284 "term_to_xml.m"
          {
#line 284 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_13_13 = (MR_Integer) mercury__term_to_xml__V_5_5;
#line 284 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_14_14 = (MR_Integer) mercury__term_to_xml__V_7_7;

#line 71 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 < mercury__term_to_xml__V_14_14);
#line 74 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              {
#line 76 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 == mercury__term_to_xml__V_14_14);
#line 79 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                else
#line 80 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
              }
#line 284 "term_to_xml.m"
          }
#line 284 "term_to_xml.m"
      }
#line 284 "term_to_xml.m"
  }
#line 284 "term_to_xml.m"
}

#line 284 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0(
#line 284 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 284 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 284 "term_to_xml.m"
{
#line 284 "term_to_xml.m"
  {
#line 284 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 284 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 284 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 284 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_7 == mercury__term_to_xml__CastY_8);
#line 284 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 284 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 284 "term_to_xml.m"
    else
#line 284 "term_to_xml.m"
      {
#line 284 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 284 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 284 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 9384 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 284 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9388 "term_to_xml.c"
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_4_4 == mercury__term_to_xml__V_6_6);
#line 284 "term_to_xml.m"
      }
#line 284 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 284 "term_to_xml.m"
  }
#line 284 "term_to_xml.m"
}

#line 119 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0(
#line 119 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 119 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 119 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 119 "term_to_xml.m"
{
#line 119 "term_to_xml.m"
  {
#line 119 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 119 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 119 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 119 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 119 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 9423 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "term_to_xml.m"
    else
#line 119 "term_to_xml.m"
      {
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 119 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_8_8;
#line 119 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_7_16;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9457 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_16  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_16 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
        else
#line 97 "private_builtin.opt"
          {
#line 94 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_16 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
            else
#line 98 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
          }
#line 9486 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 119 "term_to_xml.m"
        mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 119 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 119 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 119 "term_to_xml.m"
        else
#line 119 "term_to_xml.m"
          {
#line 119 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_7_21;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_5_5 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9516 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_21  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_21 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 91 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
            else
#line 97 "private_builtin.opt"
              {
#line 94 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_21 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 96 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                else
#line 98 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
              }
#line 119 "term_to_xml.m"
          }
#line 119 "term_to_xml.m"
      }
#line 119 "term_to_xml.m"
  }
#line 119 "term_to_xml.m"
}

#line 119 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0(
#line 119 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 119 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 119 "term_to_xml.m"
{
#line 119 "term_to_xml.m"
  {
#line 119 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 119 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 119 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 119 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_7 == mercury__term_to_xml__CastY_8);
#line 119 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 119 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 119 "term_to_xml.m"
    else
#line 119 "term_to_xml.m"
      {
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 9591 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 119 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9595 "term_to_xml.c"
          mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_4_4, mercury__term_to_xml__V_6_6) == 0);
#line 119 "term_to_xml.m"
      }
#line 119 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 119 "term_to_xml.m"
  }
#line 119 "term_to_xml.m"
}

#line 1631 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
#line 1631 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_4,
#line 1631 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5)
#line 1631 "term_to_xml.m"
{
#line 1634 "term_to_xml.m"
  {
#line 1634 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1634 "term_to_xml.m"
    MR_String mercury__term_to_xml__Regex_6;
#line 1634 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Elements_7;
#line 1634 "term_to_xml.m"
    MR_String mercury__term_to_xml__ElementsStr_12;
#line 1635 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;
#line 1635 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_9_9;
#line 1635 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10;
#line 1635 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11;
#line 1637 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_19_19;
#line 1637 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_14_14;

#line 1635 "term_to_xml.m"
    {
#line 1635 "term_to_xml.m"
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_4, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__Elements_7, &mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_9_9, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_11_11);
    }
#line 1636 "term_to_xml.m"
    {
#line 1636 "term_to_xml.m"
      mercury__term_to_xml__ElementsStr_12 = mercury__string__join_list_2_f_0((MR_String) "|", mercury__term_to_xml__Elements_7);
    }
#line 9648 "term_to_xml.c"
    mercury__term_to_xml__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 600 "list.opt"
    {
#line 600 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__term_to_xml__TypeCtorInfo_19_19, mercury__term_to_xml__Elements_7, (MR_Integer) 0, &mercury__term_to_xml__V_14_14);
    }
#line 1637 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_14_14 > (MR_Integer) 1);
#line 1639 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1638 "term_to_xml.m"
      {
#line 1638 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_17_17;

#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__ElementsStr_12, (MR_String) ")", &mercury__term_to_xml__V_17_17);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2((MR_String) "(", mercury__term_to_xml__V_17_17, &mercury__term_to_xml__Regex_6);
        }
#line 1638 "term_to_xml.m"
      }
#line 1639 "term_to_xml.m"
    else
#line 1640 "term_to_xml.m"
      mercury__term_to_xml__Regex_6 = mercury__term_to_xml__ElementsStr_12;
#line 1634 "term_to_xml.m"
    return mercury__term_to_xml__Regex_6;
#line 1634 "term_to_xml.m"
  }
#line 1631 "term_to_xml.m"
}

#line 1546 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
#line 1546 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__4_4,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArityList_6,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
#line 1546 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttributeListList_8,
#line 1546 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1546 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1546 "term_to_xml.m"
{
#line 1554 "term_to_xml.m"
  while (MR_TRUE)
#line 1554 "term_to_xml.m"
    {
#line 1554 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1554 "term_to_xml.m"
      {
#line 1554 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;

#line 1554 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1554 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_10 = mercury__term_to_xml__STATE_VARIABLE_State_0_9;
#line 1554 "term_to_xml.m"
        else
#line 1557 "term_to_xml.m"
          {
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_80_80 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_81_81;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_82_82;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_83_83;
#line 1557 "term_to_xml.m"
            MR_String mercury__term_to_xml__Element_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)));
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Elements_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeFunctor_31;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeFunctors_32;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeArity_33;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeArities_34;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgTypeList_35;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgTypeLists_36;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__AttributeList_37;
#line 1557 "term_to_xml.m"
            MR_Word mercury__term_to_xml__AttributeLists_38;
#line 1557 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;
#line 1557 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_53_53;
#line 1557 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_55_55;
#line 1557 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_57;
#line 1557 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_75_75;
#line 1557 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_77_77;
#line 1558 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv0_MaybeFunctor_31;
#line 1560 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv1_MaybeArity_33;
#line 1562 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv2_ArgTypeList_35;
#line 1564 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv3_AttributeList_37;
#line 9781 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9783 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9785 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1570 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_39_39;
#line 9789 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1558 "term_to_xml.m"
            {
#line 1558 "term_to_xml.m"
              mercury__term_to_xml__conv0_MaybeFunctor_31 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
#line 1558 "term_to_xml.m"
            mercury__term_to_xml__MaybeFunctor_31 = ((MR_Word) mercury__term_to_xml__conv0_MaybeFunctor_31);
#line 1559 "term_to_xml.m"
            {
#line 1559 "term_to_xml.m"
              mercury__term_to_xml__MaybeFunctors_32 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
#line 9804 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_81_81 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1560 "term_to_xml.m"
            {
#line 1560 "term_to_xml.m"
              mercury__term_to_xml__conv1_MaybeArity_33 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
#line 1560 "term_to_xml.m"
            mercury__term_to_xml__MaybeArity_33 = ((MR_Word) mercury__term_to_xml__conv1_MaybeArity_33);
#line 1561 "term_to_xml.m"
            {
#line 1561 "term_to_xml.m"
              mercury__term_to_xml__MaybeArities_34 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
#line 9818 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_82_82 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 1562 "term_to_xml.m"
            {
#line 1562 "term_to_xml.m"
              mercury__term_to_xml__conv2_ArgTypeList_35 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
#line 1562 "term_to_xml.m"
            mercury__term_to_xml__ArgTypeList_35 = ((MR_Word) mercury__term_to_xml__conv2_ArgTypeList_35);
#line 1563 "term_to_xml.m"
            {
#line 1563 "term_to_xml.m"
              mercury__term_to_xml__ArgTypeLists_36 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
#line 9832 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_83_83 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
#line 1564 "term_to_xml.m"
            {
#line 1564 "term_to_xml.m"
              mercury__term_to_xml__conv3_AttributeList_37 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
#line 1564 "term_to_xml.m"
            mercury__term_to_xml__AttributeList_37 = ((MR_Word) mercury__term_to_xml__conv3_AttributeList_37);
#line 1565 "term_to_xml.m"
            {
#line 1565 "term_to_xml.m"
              mercury__term_to_xml__AttributeLists_38 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
#line 9846 "term_to_xml.c"
            mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9848 "term_to_xml.c"
            {
#line 9850 "term_to_xml.c"
              mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!ELEMENT ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
            }
#line 9853 "term_to_xml.c"
            mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9855 "term_to_xml.c"
            {
#line 9857 "term_to_xml.c"
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__Element_24)), mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_53_53);
            }
#line 9860 "term_to_xml.c"
            mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9862 "term_to_xml.c"
            {
#line 9864 "term_to_xml.c"
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_53_53, &mercury__term_to_xml__STATE_VARIABLE_State_55_55);
            }
#line 1570 "term_to_xml.m"
            {
#line 1570 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_39_39);
            }
#line 1572 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1571 "term_to_xml.m"
              {
#line 9876 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9879 "term_to_xml.c"
                {
#line 9881 "term_to_xml.c"
                  mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(#PCDATA)>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1571 "term_to_xml.m"
              }
#line 1572 "term_to_xml.m"
            else
#line 1576 "term_to_xml.m"
            if ((mercury__term_to_xml__ArgTypeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1574 "term_to_xml.m"
              {
#line 9892 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9895 "term_to_xml.c"
                {
#line 9897 "term_to_xml.c"
                  mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "EMPTY>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1574 "term_to_xml.m"
              }
#line 1576 "term_to_xml.m"
            else
#line 1577 "term_to_xml.m"
              {
#line 1577 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Head_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 0)));
#line 1577 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Tail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 1)));
#line 1577 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Braces_44;
#line 1577 "term_to_xml.m"
                MR_Word mercury__term_to_xml__AllowedFunctorsRegexs_46;
#line 1577 "term_to_xml.m"
                MR_String mercury__term_to_xml__AllowedFunctorsRegex_47;
#line 1577 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_61_61;
#line 1577 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_63_63;
#line 1577 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_66_66;
#line 1577 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_68_68;
#line 1577 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_70_70;
#line 1591 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_45_45;
#line 9928 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1613 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_48_48;
#line 9932 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1581 "term_to_xml.m"
                if ((mercury__term_to_xml__Tail_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1585 "term_to_xml.m"
                  {
#line 1583 "term_to_xml.m"
                    MR_Integer mercury__term_to_xml__V_58_58;
#line 1583 "term_to_xml.m"
                    MR_Integer mercury__term_to_xml__V_59_59;

#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__Head_40 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 9961 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_58_58  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1583 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1583 "term_to_xml.m"
                      {
#line 1583 "term_to_xml.m"
                        mercury__term_to_xml__V_59_59 = (MR_Integer) 1;
#line 1583 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_58_58 > mercury__term_to_xml__V_59_59);
#line 1583 "term_to_xml.m"
                      }
#line 1585 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1584 "term_to_xml.m"
                      mercury__term_to_xml__Braces_44 = (MR_Integer) 0;
#line 1585 "term_to_xml.m"
                    else
#line 1586 "term_to_xml.m"
                      mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
#line 1585 "term_to_xml.m"
                  }
#line 1581 "term_to_xml.m"
                else
#line 1580 "term_to_xml.m"
                  mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
#line 1591 "term_to_xml.m"
                {
#line 1591 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_45_45);
                }
#line 1593 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1592 "term_to_xml.m"
                  {
#line 10004 "term_to_xml.c"
                    void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10007 "term_to_xml.c"
                    {
#line 10009 "term_to_xml.c"
                      mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_61_61);
                    }
#line 1592 "term_to_xml.m"
                  }
#line 1593 "term_to_xml.m"
                else
#line 1593 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_61_61 = mercury__term_to_xml__STATE_VARIABLE_State_55_55;
#line 1599 "term_to_xml.m"
#line 1599 "term_to_xml.m"
                switch (mercury__term_to_xml__Braces_44) {
#line 1599 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1599 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 1600 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_63_63 = mercury__term_to_xml__STATE_VARIABLE_State_61_61;
#line 1599 "term_to_xml.m"
                    break;
#line 1599 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 1597 "term_to_xml.m"
                    {
#line 10033 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10036 "term_to_xml.c"
                      {
#line 10038 "term_to_xml.c"
                        mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_61_61, &mercury__term_to_xml__STATE_VARIABLE_State_63_63);
                      }
#line 1597 "term_to_xml.m"
                    }
#line 1599 "term_to_xml.m"
                    break;
#line 1599 "term_to_xml.m"
                }
#line 1602 "term_to_xml.m"
                {
#line 1602 "term_to_xml.m"
                  mercury__term_to_xml__AllowedFunctorsRegexs_46 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__ArgTypeList_35);
                }
#line 1605 "term_to_xml.m"
                {
#line 1605 "term_to_xml.m"
                  mercury__term_to_xml__AllowedFunctorsRegex_47 = mercury__string__join_list_2_f_0((MR_String) ",", mercury__term_to_xml__AllowedFunctorsRegexs_46);
                }
#line 10057 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10059 "term_to_xml.c"
                {
#line 10061 "term_to_xml.c"
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__AllowedFunctorsRegex_47)), mercury__term_to_xml__STATE_VARIABLE_State_63_63, &mercury__term_to_xml__STATE_VARIABLE_State_66_66);
                }
#line 1610 "term_to_xml.m"
#line 1610 "term_to_xml.m"
                switch (mercury__term_to_xml__Braces_44) {
#line 1610 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1610 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 1611 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_68_68 = mercury__term_to_xml__STATE_VARIABLE_State_66_66;
#line 1610 "term_to_xml.m"
                    break;
#line 1610 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 1608 "term_to_xml.m"
                    {
#line 10079 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10082 "term_to_xml.c"
                      {
#line 10084 "term_to_xml.c"
                        mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ")")), mercury__term_to_xml__STATE_VARIABLE_State_66_66, &mercury__term_to_xml__STATE_VARIABLE_State_68_68);
                      }
#line 1608 "term_to_xml.m"
                    }
#line 1610 "term_to_xml.m"
                    break;
#line 1610 "term_to_xml.m"
                }
#line 1613 "term_to_xml.m"
                {
#line 1613 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_48_48);
                }
#line 1615 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1614 "term_to_xml.m"
                  {
#line 10102 "term_to_xml.c"
                    void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10105 "term_to_xml.c"
                    {
#line 10107 "term_to_xml.c"
                      mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "*)")), mercury__term_to_xml__STATE_VARIABLE_State_68_68, &mercury__term_to_xml__STATE_VARIABLE_State_70_70);
                    }
#line 1614 "term_to_xml.m"
                  }
#line 1615 "term_to_xml.m"
                else
#line 1615 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_70_70 = mercury__term_to_xml__STATE_VARIABLE_State_68_68;
#line 10116 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10118 "term_to_xml.c"
                {
#line 10120 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_70_70, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1577 "term_to_xml.m"
              }
#line 1622 "term_to_xml.m"
            {
#line 1622 "term_to_xml.m"
              mercury__term_to_xml__write_dtd_attlists_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_79, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Element_24, mercury__term_to_xml__AttributeList_37, mercury__term_to_xml__MaybeFunctor_31, mercury__term_to_xml__MaybeArity_33, mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_75_75);
            }
#line 10130 "term_to_xml.c"
            mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10132 "term_to_xml.c"
            {
#line 10134 "term_to_xml.c"
              mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_75_75, &mercury__term_to_xml__STATE_VARIABLE_State_77_77);
            }
#line 1625 "term_to_xml.m"
            /* direct tailcall eliminated */
#line 1625 "term_to_xml.m"
            {
#line 1625 "term_to_xml.m"
              MR_Word mercury__term_to_xml__HeadVar__4__tmp_copy_4 = mercury__term_to_xml__Elements_25;
#line 1625 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MaybeFunctorList__tmp_copy_5 = mercury__term_to_xml__MaybeFunctors_32;
#line 1625 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MaybeArityList__tmp_copy_6 = mercury__term_to_xml__MaybeArities_34;
#line 1625 "term_to_xml.m"
              MR_Word mercury__term_to_xml__ArgTypeListList__tmp_copy_7 = mercury__term_to_xml__ArgTypeLists_36;
#line 1625 "term_to_xml.m"
              MR_Word mercury__term_to_xml__AttributeListList__tmp_copy_8 = mercury__term_to_xml__AttributeLists_38;
#line 1625 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_9 = mercury__term_to_xml__STATE_VARIABLE_State_77_77;

#line 1625 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_0_9 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_9;
#line 1625 "term_to_xml.m"
              mercury__term_to_xml__AttributeListList_8 = mercury__term_to_xml__AttributeListList__tmp_copy_8;
#line 1625 "term_to_xml.m"
              mercury__term_to_xml__ArgTypeListList_7 = mercury__term_to_xml__ArgTypeListList__tmp_copy_7;
#line 1625 "term_to_xml.m"
              mercury__term_to_xml__MaybeArityList_6 = mercury__term_to_xml__MaybeArityList__tmp_copy_6;
#line 1625 "term_to_xml.m"
              mercury__term_to_xml__MaybeFunctorList_5 = mercury__term_to_xml__MaybeFunctorList__tmp_copy_5;
#line 1625 "term_to_xml.m"
              mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__4__tmp_copy_4;
#line 1625 "term_to_xml.m"
            }
#line 1625 "term_to_xml.m"
            continue;
#line 1557 "term_to_xml.m"
          }
#line 1554 "term_to_xml.m"
      }
#line 1554 "term_to_xml.m"
      break;
#line 1554 "term_to_xml.m"
    }
#line 1546 "term_to_xml.m"
}

#line 1517 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1517 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1517 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_13,
#line 1517 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1517 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1517 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1517 "term_to_xml.m"
{
#line 1523 "term_to_xml.m"
  {
#line 1523 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1523 "term_to_xml.m"
    {
#line 1523 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Element_10, mercury__term_to_xml__MaybeFunctor_12, mercury__term_to_xml__MaybeArity_13, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__AttrFromSources_11, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1523 "term_to_xml.m"
      return;
    }
#line 1523 "term_to_xml.m"
  }
#line 1517 "term_to_xml.m"
}

#line 1484 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1484 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1484 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_12,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_13,
#line 1484 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__6_6,
#line 1484 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1484 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1484 "term_to_xml.m"
{
#line 1489 "term_to_xml.m"
  {
#line 1489 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1489 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 0)));
#line 1489 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Source_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 1)));
#line 1489 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeValue_17;
#line 1489 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
#line 1489 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1489 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 1489 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 1489 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
#line 1489 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
#line 10266 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10268 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10270 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10272 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10274 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10276 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1493 "term_to_xml.m"
#line 1493 "term_to_xml.m"
    switch (mercury__term_to_xml__Source_15) {
#line 1493 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1493 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1498 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeArity_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1500 "term_to_xml.m"
          mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1498 "term_to_xml.m"
        else
#line 1496 "term_to_xml.m"
          {
#line 1496 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_12, (MR_Integer) 0)));
#line 1496 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_22_22;

#line 554 "string.opt"
            {
#line 554 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_18, (MR_Integer) 10, &mercury__term_to_xml__V_22_22);
            }
#line 1497 "term_to_xml.m"
            {
#line 1497 "term_to_xml.m"
              mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1497 "term_to_xml.m"
            }
#line 1496 "term_to_xml.m"
          }
#line 1493 "term_to_xml.m"
        break;
#line 1493 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1507 "term_to_xml.m"
        mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1493 "term_to_xml.m"
        break;
#line 1493 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1492 "term_to_xml.m"
        mercury__term_to_xml__MaybeValue_17 = mercury__term_to_xml__MaybeFunctor_11;
#line 1493 "term_to_xml.m"
        break;
#line 1493 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1503 "term_to_xml.m"
        {
#line 1503 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_21_21;

#line 1504 "term_to_xml.m"
          {
#line 1504 "term_to_xml.m"
            mercury__term_to_xml__V_21_21 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_13);
          }
#line 1504 "term_to_xml.m"
          {
#line 1504 "term_to_xml.m"
            mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1504 "term_to_xml.m"
          }
#line 1503 "term_to_xml.m"
        }
#line 1493 "term_to_xml.m"
        break;
#line 1493 "term_to_xml.m"
    }
#line 10354 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10356 "term_to_xml.c"
    {
#line 10358 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!ATTLIST ")), mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
    }
#line 10361 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10363 "term_to_xml.c"
    {
#line 10365 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_24_24, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
#line 10368 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10370 "term_to_xml.c"
    {
#line 10372 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 10375 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10377 "term_to_xml.c"
    {
#line 10379 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Name_14)), mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 10382 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10384 "term_to_xml.c"
    {
#line 10386 "term_to_xml.c"
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " CDATA ")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
#line 1461 "term_to_xml.m"
#line 1461 "term_to_xml.m"
    switch (mercury__term_to_xml__Source_15) {
#line 1461 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1461 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1461 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1475 "term_to_xml.m"
          {
#line 10400 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10403 "term_to_xml.c"
            {
#line 10405 "term_to_xml.c"
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1475 "term_to_xml.m"
          }
#line 1461 "term_to_xml.m"
        else
#line 1477 "term_to_xml.m"
          {
#line 1477 "term_to_xml.m"
            MR_String mercury__term_to_xml__Value_86 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1477 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_91;
#line 1477 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_58_92;
#line 10420 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10422 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10425 "term_to_xml.c"
            {
#line 10427 "term_to_xml.c"
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_57_91);
            }
#line 1479 "term_to_xml.m"
            {
#line 1479 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_86, mercury__term_to_xml__STATE_VARIABLE_State_57_91, &mercury__term_to_xml__STATE_VARIABLE_State_58_92);
            }
#line 10435 "term_to_xml.c"
            mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10437 "term_to_xml.c"
            {
#line 10439 "term_to_xml.c"
              mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_58_92, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1477 "term_to_xml.m"
          }
#line 1461 "term_to_xml.m"
        break;
#line 1461 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1467 "term_to_xml.m"
        {
#line 10450 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10453 "term_to_xml.c"
          {
#line 10455 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
          }
#line 1467 "term_to_xml.m"
        }
#line 1461 "term_to_xml.m"
        break;
#line 1461 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1461 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1461 "term_to_xml.m"
          {
#line 10468 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10471 "term_to_xml.c"
            {
#line 10473 "term_to_xml.c"
              mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1461 "term_to_xml.m"
          }
#line 1461 "term_to_xml.m"
        else
#line 1463 "term_to_xml.m"
          {
#line 1463 "term_to_xml.m"
            MR_String mercury__term_to_xml__Value_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1463 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_52;
#line 1463 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_53;
#line 10488 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10490 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10493 "term_to_xml.c"
            {
#line 10495 "term_to_xml.c"
              mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_18_52);
            }
#line 1465 "term_to_xml.m"
            {
#line 1465 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_47, mercury__term_to_xml__STATE_VARIABLE_State_18_52, &mercury__term_to_xml__STATE_VARIABLE_State_19_53);
            }
#line 10503 "term_to_xml.c"
            mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10505 "term_to_xml.c"
            {
#line 10507 "term_to_xml.c"
              mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_19_53, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1463 "term_to_xml.m"
          }
#line 1461 "term_to_xml.m"
        break;
#line 1461 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1461 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1469 "term_to_xml.m"
          {
#line 10520 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10523 "term_to_xml.c"
            {
#line 10525 "term_to_xml.c"
              mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#REQUIRED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1469 "term_to_xml.m"
          }
#line 1461 "term_to_xml.m"
        else
#line 1471 "term_to_xml.m"
          {
#line 1471 "term_to_xml.m"
            MR_String mercury__term_to_xml__Value_70 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1471 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_75;
#line 1471 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_42_76;
#line 10540 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10542 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10545 "term_to_xml.c"
            {
#line 10547 "term_to_xml.c"
              mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_41_75);
            }
#line 1473 "term_to_xml.m"
            {
#line 1473 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_70, mercury__term_to_xml__STATE_VARIABLE_State_41_75, &mercury__term_to_xml__STATE_VARIABLE_State_42_76);
            }
#line 10555 "term_to_xml.c"
            mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10557 "term_to_xml.c"
            {
#line 10559 "term_to_xml.c"
              mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_42_76, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1471 "term_to_xml.m"
          }
#line 1461 "term_to_xml.m"
        break;
#line 1461 "term_to_xml.m"
    }
#line 10568 "term_to_xml.c"
    mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10570 "term_to_xml.c"
    {
#line 10572 "term_to_xml.c"
      mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 10574 "term_to_xml.c"
      return;
    }
#line 1489 "term_to_xml.m"
  }
#line 1484 "term_to_xml.m"
}

#line 1438 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
#line 1438 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 1438 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AlreadyDone_4,
#line 1438 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
#line 1438 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6)
#line 1438 "term_to_xml.m"
{
#line 1442 "term_to_xml.m"
  while (MR_TRUE)
#line 1442 "term_to_xml.m"
    {
#line 1442 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1442 "term_to_xml.m"
      {
#line 1442 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;

#line 1442 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1442 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_6 = mercury__term_to_xml__STATE_VARIABLE_State_0_5;
#line 1442 "term_to_xml.m"
        else
#line 1444 "term_to_xml.m"
          {
#line 1444 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 1444 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDescs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 1445 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_30_30 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1445 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_31_31 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 452 "map.opt"
            MR_Box mercury__term_to_xml__conv0_V_19_19;

#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_30_30, mercury__term_to_xml__TypeCtorInfo_31_31, mercury__term_to_xml__AlreadyDone_4, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_V_19_19);
            }
#line 452 "map.opt"
            if (mercury__term_to_xml__succeeded)
#line 452 "map.opt"
              mercury__term_to_xml__succeeded = MR_TRUE;
#line 1447 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1446 "term_to_xml.m"
              {
#line 1446 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1446 "term_to_xml.m"
                {
#line 1446 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__TypeDescs_16;

#line 1446 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 1446 "term_to_xml.m"
                }
#line 1446 "term_to_xml.m"
                continue;
#line 1446 "term_to_xml.m"
              }
#line 1447 "term_to_xml.m"
            else
#line 1449 "term_to_xml.m"
              {
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_32_32;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_33_33;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_38_67;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_9_73;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeInfo_10_74;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ChildArgTypes_20;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__NewAlreadyDone_21;
#line 1449 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_27_27;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Elements_44;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__MaybeFunctors_45;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__MaybeArities_46;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ArgPseudoTypeLists_47;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__AttributeLists_48;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ArgTypeLists_49;
#line 1449 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_53;
#line 1449 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_54_54;
#line 1449 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_55;
#line 1449 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_57;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_5_70;
#line 1449 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_6_71;
#line 10705 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10707 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1534 "term_to_xml.m"
                {
#line 1534 "term_to_xml.m"
                  mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_44, &mercury__term_to_xml__MaybeFunctors_45, &mercury__term_to_xml__MaybeArities_46, &mercury__term_to_xml__ArgPseudoTypeLists_47, &mercury__term_to_xml__AttributeLists_48);
                }
#line 1537 "term_to_xml.m"
                {
#line 1537 "term_to_xml.m"
                  mercury__term_to_xml__ArgTypeLists_49 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__ArgPseudoTypeLists_47);
                }
#line 10720 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_38_67 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10722 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_9_73 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10724 "term_to_xml.c"
                mercury__term_to_xml__TypeInfo_10_74 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 124 "list.opt"
                {
#line 124 "list.opt"
                  mercury__list__reverse_2_p_0(mercury__term_to_xml__TypeInfo_10_74, mercury__term_to_xml__ArgTypeLists_49, &mercury__term_to_xml__V_5_70);
                }
#line 125 "list.opt"
                mercury__term_to_xml__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 126 "list.opt"
                {
#line 126 "list.opt"
                  mercury__list__condense_acc_3_p_0(mercury__term_to_xml__TypeCtorInfo_38_67, mercury__term_to_xml__V_5_70, mercury__term_to_xml__V_6_71, &mercury__term_to_xml__ChildArgTypes_20);
                }
#line 10738 "term_to_xml.c"
                mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10740 "term_to_xml.c"
                {
#line 10742 "term_to_xml.c"
                  mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!-- Elements for functors of type \"")), mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_23_53);
                }
#line 1541 "term_to_xml.m"
                {
#line 1541 "term_to_xml.m"
                  mercury__term_to_xml__V_54_54 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_15);
                }
#line 1541 "term_to_xml.m"
                {
#line 1541 "term_to_xml.m"
                  mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__V_54_54, mercury__term_to_xml__STATE_VARIABLE_State_23_53, &mercury__term_to_xml__STATE_VARIABLE_State_25_55);
                }
#line 10755 "term_to_xml.c"
                mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10757 "term_to_xml.c"
                {
#line 10759 "term_to_xml.c"
                  mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\" -->\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_25_55, &mercury__term_to_xml__STATE_VARIABLE_State_27_57);
                }
#line 1543 "term_to_xml.m"
                {
#line 1543 "term_to_xml.m"
                  mercury__term_to_xml__write_dtd_entries_10_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Elements_44, mercury__term_to_xml__MaybeFunctors_45, mercury__term_to_xml__MaybeArities_46, mercury__term_to_xml__ArgTypeLists_49, mercury__term_to_xml__AttributeLists_48, mercury__term_to_xml__STATE_VARIABLE_State_27_57, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
                }
#line 1450 "term_to_xml.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10769 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10771 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_33_33 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 476 "map.opt"
                {
#line 476 "map.opt"
                  mercury__tree234__set_4_p_0(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__TypeCtorInfo_33_33, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__AlreadyDone_4, &mercury__term_to_xml__NewAlreadyDone_21);
                }
#line 113 "list.opt"
                {
#line 113 "list.opt"
                  mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__ChildArgTypes_20, mercury__term_to_xml__TypeDescs_16, &mercury__term_to_xml__V_27_27);
                }
#line 1451 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1451 "term_to_xml.m"
                {
#line 1451 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_27_27;
#line 1451 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__AlreadyDone__tmp_copy_4 = mercury__term_to_xml__NewAlreadyDone_21;
#line 1451 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;

#line 1451 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_0_5 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_5;
#line 1451 "term_to_xml.m"
                  mercury__term_to_xml__AlreadyDone_4 = mercury__term_to_xml__AlreadyDone__tmp_copy_4;
#line 1451 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 1451 "term_to_xml.m"
                }
#line 1451 "term_to_xml.m"
                continue;
#line 1449 "term_to_xml.m"
              }
#line 1444 "term_to_xml.m"
          }
#line 1442 "term_to_xml.m"
      }
#line 1442 "term_to_xml.m"
      break;
#line 1442 "term_to_xml.m"
    }
#line 1438 "term_to_xml.m"
}

#line 1386 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_1,
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Done_3,
#line 1386 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementsSoFar_4)
#line 1386 "term_to_xml.m"
{
#line 1391 "term_to_xml.m"
  while (MR_TRUE)
#line 1391 "term_to_xml.m"
    {
#line 1391 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1391 "term_to_xml.m"
      {
#line 1391 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;
#line 1391 "term_to_xml.m"
        MR_Word mercury__term_to_xml__HeadVar__5_5;

#line 1391 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1391 "term_to_xml.m"
          mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1391 "term_to_xml.m"
        else
#line 1393 "term_to_xml.m"
          {
#line 1393 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDesc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1393 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDescs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1429 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDesc_15;

#line 32 "type_desc.opt"
            {
#line 32 "type_desc.opt"
              mercury__term_to_xml__succeeded = mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0(mercury__term_to_xml__PseudoTypeDesc_10, &mercury__term_to_xml__TypeDesc_15);
            }
#line 1429 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1426 "term_to_xml.m"
              {
#line 1042 "term_to_xml.m"
                {
#line 1042 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_16_16;
#line 1042 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_53_53;

#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_15 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 10891 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_16_16  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
                    {
#line 1044 "term_to_xml.m"
                      mercury__term_to_xml__V_53_53 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_16_16 > mercury__term_to_xml__V_53_53);
#line 1042 "term_to_xml.m"
                    }
#line 1042 "term_to_xml.m"
                }
#line 1397 "term_to_xml.m"
                if (!(mercury__term_to_xml__succeeded))
#line 1397 "term_to_xml.m"
                  {
#line 1048 "term_to_xml.m"
                    {
#line 1048 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__PseudoTypeDesc_56;
#line 1048 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__TypeCtor_57;
#line 1048 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__ArgPseudoTypes_58;
#line 1048 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_59_59;
#line 1048 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_60_60;
#line 1048 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_61_61;
#line 1051 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_17_17;
#line 165 "type_desc.opt"
                      MR_String mercury__term_to_xml__V_5_64;
#line 165 "type_desc.opt"
                      MR_Integer mercury__term_to_xml__V_6_65;
#line 165 "type_desc.opt"
                      MR_String mercury__term_to_xml__V_5_68;
#line 165 "type_desc.opt"
                      MR_Integer mercury__term_to_xml__V_6_69;

#line 195 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_15 ;
		{
#line 195 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 10955 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_56  = PseudoTypeDesc;
#line 195 "type_desc.opt"
}
#line 106 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_56 ;
		{
#line 106 "type_desc.opt"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}
#line 10987 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_57  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_58  = ArgPseudoTypeInfos;
#line 106 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1048 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
                        {
#line 1051 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_58)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "term_to_xml.m"
                          if (mercury__term_to_xml__succeeded)
#line 1051 "term_to_xml.m"
                            {
#line 1051 "term_to_xml.m"
                              mercury__term_to_xml__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_58, (MR_Integer) 0)));
#line 1051 "term_to_xml.m"
                              mercury__term_to_xml__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_58, (MR_Integer) 1)));
#line 1051 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1048 "term_to_xml.m"
                              if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
                                {
#line 165 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_57 ;
		{
#line 165 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 11059 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_5_64  = TypeCtorModuleName;
	 mercury__term_to_xml__V_60_60  = TypeCtorName;
	 mercury__term_to_xml__V_6_65  = TypeCtorArity;
#line 165 "type_desc.opt"
}
#line 1052 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_60_60, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                                  if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
                                    {
#line 165 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_57 ;
		{
#line 165 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 11115 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_61_61  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_68  = TypeCtorName;
	 mercury__term_to_xml__V_6_69  = TypeCtorArity;
#line 165 "type_desc.opt"
}
#line 1053 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_61_61, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                                    }
#line 1048 "term_to_xml.m"
                                }
#line 1051 "term_to_xml.m"
                            }
#line 1048 "term_to_xml.m"
                        }
#line 1048 "term_to_xml.m"
                    }
#line 1397 "term_to_xml.m"
                    if (!(mercury__term_to_xml__succeeded))
#line 749 "term_to_xml.m"
                      {
#line 747 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__TypeCtorInfo_9_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 747 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_80_80;
#line 199 "type_desc.opt"
                        MR_String mercury__term_to_xml__V_72_72;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_76 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 11173 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_80_80  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 747 "term_to_xml.m"
                        {
#line 747 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_80_80);
                        }
#line 749 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 748 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = MR_TRUE;
#line 749 "term_to_xml.m"
                        else
#line 751 "term_to_xml.m"
                          {
#line 749 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_10_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 749 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_81_81;
#line 199 "type_desc.opt"
                            MR_Char mercury__term_to_xml__V_73_73;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_77 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 11226 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_81_81  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 749 "term_to_xml.m"
                            {
#line 749 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_81_81);
                            }
#line 751 "term_to_xml.m"
                            if (mercury__term_to_xml__succeeded)
#line 750 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = MR_TRUE;
#line 751 "term_to_xml.m"
                            else
#line 753 "term_to_xml.m"
                              {
#line 751 "term_to_xml.m"
                                MR_Word mercury__term_to_xml__TypeCtorInfo_11_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 751 "term_to_xml.m"
                                MR_Word mercury__term_to_xml__V_82_82;
#line 199 "type_desc.opt"
                                MR_Integer mercury__term_to_xml__V_74_74;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_78 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 11279 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_82_82  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 751 "term_to_xml.m"
                                {
#line 751 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_82_82);
                                }
#line 753 "term_to_xml.m"
                                if (mercury__term_to_xml__succeeded)
#line 752 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = MR_TRUE;
#line 753 "term_to_xml.m"
                                else
#line 755 "term_to_xml.m"
                                  {
#line 755 "term_to_xml.m"
                                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 755 "term_to_xml.m"
                                    MR_Word mercury__term_to_xml__V_83_83;
#line 199 "type_desc.opt"
                                    MR_Float mercury__term_to_xml__V_75_75;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_79 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 11332 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_83_83  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 753 "term_to_xml.m"
                                    {
#line 753 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_83_83);
                                    }
#line 755 "term_to_xml.m"
                                  }
#line 753 "term_to_xml.m"
                              }
#line 751 "term_to_xml.m"
                          }
#line 749 "term_to_xml.m"
                      }
#line 1397 "term_to_xml.m"
                  }
#line 1426 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1404 "term_to_xml.m"
                  {
#line 1401 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_39_39 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1401 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_40_40 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 452 "map.opt"
                    MR_Box mercury__term_to_xml__conv0_V_5_90;

#line 452 "map.opt"
                    {
#line 452 "map.opt"
                      mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_39_39, mercury__term_to_xml__TypeCtorInfo_40_40, mercury__term_to_xml__Done_3, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_V_5_90);
                    }
#line 452 "map.opt"
                    if (mercury__term_to_xml__succeeded)
#line 452 "map.opt"
                      mercury__term_to_xml__succeeded = MR_TRUE;
#line 1404 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1402 "term_to_xml.m"
                      {
#line 1402 "term_to_xml.m"
                        /* direct tailcall eliminated */
#line 1402 "term_to_xml.m"
                        {
#line 1402 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__PseudoTypeDescs_11;

#line 1402 "term_to_xml.m"
                          mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1402 "term_to_xml.m"
                        }
#line 1402 "term_to_xml.m"
                        continue;
#line 1402 "term_to_xml.m"
                      }
#line 1404 "term_to_xml.m"
                    else
#line 1406 "term_to_xml.m"
                      {
#line 1406 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__TypeCtorInfo_44_44;
#line 1406 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__Elements_19;
#line 1406 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__ArgLists_22;
#line 1406 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__DupElements_24;
#line 1405 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_20_20;
#line 1405 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_21_21;
#line 1405 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_23_23;

#line 1405 "term_to_xml.m"
                        {
#line 1405 "term_to_xml.m"
                          mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_1, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_19, &mercury__term_to_xml__V_20_20, &mercury__term_to_xml__V_21_21, &mercury__term_to_xml__ArgLists_22, &mercury__term_to_xml__V_23_23);
                        }
#line 11417 "term_to_xml.c"
                        mercury__term_to_xml__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1407 "term_to_xml.m"
                        {
#line 1407 "term_to_xml.m"
                          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__ElementsSoFar_4, mercury__term_to_xml__Elements_19, &mercury__term_to_xml__DupElements_24);
                        }
#line 1414 "term_to_xml.m"
                        if ((mercury__term_to_xml__DupElements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1415 "term_to_xml.m"
                          {
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_46_46 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0;
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_47_47;
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_48_48;
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewPseudoTypeDescs_29;
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeDescList_30;
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewElementsSoFar_31;
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewDone_32;
#line 1415 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_34_34;
#line 1415 "term_to_xml.m"
                            MR_Integer mercury__term_to_xml__V_35_35;

#line 1416 "term_to_xml.m"
                            {
#line 1416 "term_to_xml.m"
                              mercury__term_to_xml__V_34_34 = mercury__list__condense_1_f_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__ArgLists_22);
                            }
#line 1416 "term_to_xml.m"
                            {
#line 1416 "term_to_xml.m"
                              mercury__list__merge_and_remove_dups_3_p_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__V_34_34, mercury__term_to_xml__PseudoTypeDescs_11, &mercury__term_to_xml__NewPseudoTypeDescs_29);
                            }
#line 1418 "term_to_xml.m"
                            {
#line 1418 "term_to_xml.m"
                              mercury__term_to_xml__V_35_35 = mercury__list__length_1_f_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__Elements_19);
                            }
#line 11462 "term_to_xml.c"
                            mercury__term_to_xml__TypeCtorInfo_47_47 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1418 "term_to_xml.m"
                            {
#line 1418 "term_to_xml.m"
                              mercury__list__duplicate_3_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__V_35_35, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__TypeDescList_30);
                            }
#line 1419 "term_to_xml.m"
                            {
#line 1419 "term_to_xml.m"
                              mercury__map__det_insert_from_corresponding_lists_4_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__Elements_19, mercury__term_to_xml__TypeDescList_30, mercury__term_to_xml__ElementsSoFar_4, &mercury__term_to_xml__NewElementsSoFar_31);
                            }
#line 1421 "term_to_xml.m"
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 11476 "term_to_xml.c"
                            mercury__term_to_xml__TypeCtorInfo_48_48 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1421 "term_to_xml.m"
                            {
#line 1421 "term_to_xml.m"
                              mercury__map__det_insert_4_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__TypeCtorInfo_48_48, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__Done_3, &mercury__term_to_xml__NewDone_32);
                            }
#line 1422 "term_to_xml.m"
                            /* direct tailcall eliminated */
#line 1422 "term_to_xml.m"
                            {
#line 1422 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__NewPseudoTypeDescs_29;
#line 1422 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__Done__tmp_copy_3 = mercury__term_to_xml__NewDone_32;
#line 1422 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__ElementsSoFar__tmp_copy_4 = mercury__term_to_xml__NewElementsSoFar_31;

#line 1422 "term_to_xml.m"
                              mercury__term_to_xml__ElementsSoFar_4 = mercury__term_to_xml__ElementsSoFar__tmp_copy_4;
#line 1422 "term_to_xml.m"
                              mercury__term_to_xml__Done_3 = mercury__term_to_xml__Done__tmp_copy_3;
#line 1422 "term_to_xml.m"
                              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1422 "term_to_xml.m"
                            }
#line 1422 "term_to_xml.m"
                            continue;
#line 1415 "term_to_xml.m"
                          }
#line 1414 "term_to_xml.m"
                        else
#line 1410 "term_to_xml.m"
                          {
#line 1410 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_45_45 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1410 "term_to_xml.m"
                            MR_String mercury__term_to_xml__DupElement_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 0)));
#line 1410 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__DupTypeDesc_27;
#line 1410 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__DupTypes_28;
#line 1410 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_37_37;
#line 1410 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_38_38;
#line 1410 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 1)));
#line 1411 "term_to_xml.m"
                            MR_Box mercury__term_to_xml__conv1_DupTypeDesc_27;

#line 1411 "term_to_xml.m"
                            {
#line 1411 "term_to_xml.m"
                              mercury__map__lookup_3_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_45_45, mercury__term_to_xml__ElementsSoFar_4, ((MR_Box) (mercury__term_to_xml__DupElement_25)), &mercury__term_to_xml__conv1_DupTypeDesc_27);
                            }
#line 1411 "term_to_xml.m"
                            mercury__term_to_xml__DupTypeDesc_27 = ((MR_Word) mercury__term_to_xml__conv1_DupTypeDesc_27);
#line 1412 "term_to_xml.m"
                            mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1412 "term_to_xml.m"
                            {
#line 1412 "term_to_xml.m"
                              mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__DupTypeDesc_27));
#line 1412 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 1) = ((MR_Box) (mercury__term_to_xml__V_38_38));
#line 1412 "term_to_xml.m"
                            }
#line 1412 "term_to_xml.m"
                            {
#line 1412 "term_to_xml.m"
                              mercury__term_to_xml__DupTypes_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
#line 1412 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 1) = ((MR_Box) (mercury__term_to_xml__V_37_37));
#line 1412 "term_to_xml.m"
                            }
#line 1413 "term_to_xml.m"
                            {
#line 1413 "term_to_xml.m"
                              mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__DupElement_25));
#line 1413 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 1) = ((MR_Box) (mercury__term_to_xml__DupTypes_28));
#line 1413 "term_to_xml.m"
                            }
#line 1410 "term_to_xml.m"
                          }
#line 1406 "term_to_xml.m"
                      }
#line 1404 "term_to_xml.m"
                  }
#line 1426 "term_to_xml.m"
                else
#line 1427 "term_to_xml.m"
                  {
#line 1427 "term_to_xml.m"
                    mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "term_to_xml.m"
                    MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
#line 1427 "term_to_xml.m"
                  }
#line 1426 "term_to_xml.m"
              }
#line 1429 "term_to_xml.m"
            else
#line 1430 "term_to_xml.m"
              {
#line 1430 "term_to_xml.m"
                mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "term_to_xml.m"
                MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_10));
#line 1430 "term_to_xml.m"
              }
#line 1393 "term_to_xml.m"
          }
#line 1391 "term_to_xml.m"
        return mercury__term_to_xml__HeadVar__5_5;
#line 1391 "term_to_xml.m"
      }
#line 1391 "term_to_xml.m"
      break;
#line 1391 "term_to_xml.m"
    }
#line 1386 "term_to_xml.m"
}

#line 1308 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
#line 1308 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 1308 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1308 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_6,
#line 1308 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1308 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1308 "term_to_xml.m"
{
#line 1314 "term_to_xml.m"
  {
#line 1314 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1314 "term_to_xml.m"
    MR_String mercury__term_to_xml__Str_8;

#line 1320 "term_to_xml.m"
#line 1320 "term_to_xml.m"
    switch (mercury__term_to_xml__Chr_6) {
#line 1320 "term_to_xml.m"
      default:
#line 1320 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_FALSE;
#line 1320 "term_to_xml.m"
        break;
#line 1320 "term_to_xml.m"
      case (MR_Char) 34:
#line 1324 "term_to_xml.m"
        {
#line 1324 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&quot;";
#line 1324 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1324 "term_to_xml.m"
        }
#line 1320 "term_to_xml.m"
        break;
#line 1320 "term_to_xml.m"
      case (MR_Char) 38:
#line 1322 "term_to_xml.m"
        {
#line 1322 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&amp;";
#line 1322 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1322 "term_to_xml.m"
        }
#line 1320 "term_to_xml.m"
        break;
#line 1320 "term_to_xml.m"
      case (MR_Char) 39:
#line 1323 "term_to_xml.m"
        {
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&apos;";
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1323 "term_to_xml.m"
        }
#line 1320 "term_to_xml.m"
        break;
#line 1320 "term_to_xml.m"
      case (MR_Char) 60:
#line 1320 "term_to_xml.m"
        {
#line 1320 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&lt;";
#line 1320 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1320 "term_to_xml.m"
        }
#line 1320 "term_to_xml.m"
        break;
#line 1320 "term_to_xml.m"
      case (MR_Char) 62:
#line 1321 "term_to_xml.m"
        {
#line 1321 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&gt;";
#line 1321 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1321 "term_to_xml.m"
        }
#line 1320 "term_to_xml.m"
        break;
#line 1320 "term_to_xml.m"
    }
#line 1314 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 11702 "term_to_xml.c"
      {
#line 11704 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11707 "term_to_xml.c"
        {
#line 11709 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Str_8)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11711 "term_to_xml.c"
          return;
        }
#line 11714 "term_to_xml.c"
      }
#line 1314 "term_to_xml.m"
    else
#line 1315 "term_to_xml.m"
      {
#line 1315 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_12_12;
#line 1315 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_5_21;
#line 1315 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11726 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 217 "string.opt"
        {
#line 217 "string.opt"
          mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_6));
#line 217 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 217 "string.opt"
        }
#line 219 "string.opt"
        {
#line 219 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_5_21);
        }
#line 11744 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11746 "term_to_xml.c"
        {
#line 11748 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__V_12_12)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11750 "term_to_xml.c"
          return;
        }
#line 1315 "term_to_xml.m"
      }
#line 1314 "term_to_xml.m"
  }
#line 1308 "term_to_xml.m"
}

#line 1302 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
#line 1302 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
#line 1302 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1302 "term_to_xml.m"
  MR_String mercury__term_to_xml__Str_6,
#line 1302 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1302 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1302 "term_to_xml.m"
{
#line 1305 "term_to_xml.m"
  {
#line 1305 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1305 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_8_22;
#line 1305 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_13_32;
#line 1305 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_33;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 11799 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_8_22  = Length;
#line 703 "string.opt"
}
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 11819 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_33  = Length;
#line 703 "string.opt"
}
#line 242 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_22 < mercury__term_to_xml__V_17_33);
#line 245 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 244 "int.opt"
      mercury__term_to_xml__V_13_32 = mercury__term_to_xml__V_8_22;
#line 245 "int.opt"
    else
#line 246 "int.opt"
      mercury__term_to_xml__V_13_32 = mercury__term_to_xml__V_17_33;
#line 399 "string.opt"
    {
#line 399 "string.opt"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(mercury__term_to_xml__TypeClassInfo_for_writer_12, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Str_6, (MR_Integer) 0, mercury__term_to_xml__V_13_32, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 399 "string.opt"
      return;
    }
#line 1305 "term_to_xml.m"
  }
#line 1302 "term_to_xml.m"
}

#line 1292 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_attribute_4_p_0(
#line 1292 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1292 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1292 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1292 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1292 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1292 "term_to_xml.m"
{
#line 1295 "term_to_xml.m"
  {
#line 1295 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1295 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1295 "term_to_xml.m"
    MR_String mercury__term_to_xml__Value_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1295 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 1295 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1295 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_15;
#line 1295 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 11879 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11881 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11883 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11885 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 11888 "term_to_xml.c"
    {
#line 11890 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 11893 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11895 "term_to_xml.c"
    {
#line 11897 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Name_6)), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 11900 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11902 "term_to_xml.c"
    {
#line 11904 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "=\"")), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_15_15);
    }
#line 1299 "term_to_xml.m"
    {
#line 1299 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Value_7, mercury__term_to_xml__STATE_VARIABLE_State_15_15, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 11912 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11914 "term_to_xml.c"
    {
#line 11916 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11918 "term_to_xml.c"
      return;
    }
#line 1295 "term_to_xml.m"
  }
#line 1292 "term_to_xml.m"
}

#line 1288 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__is_maybe_yes_2_p_0(
#line 1288 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_4,
#line 1288 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1288 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__X_3)
#line 1288 "term_to_xml.m"
{
#line 1290 "term_to_xml.m"
  {
#line 1290 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 1290 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1290 "term_to_xml.m"
      *mercury__term_to_xml__X_3 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0));
#line 1290 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1290 "term_to_xml.m"
  }
#line 1288 "term_to_xml.m"
}

#line 1279 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__make_attrs_from_sources_5_f_0(
#line 1279 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
#line 1279 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_8,
#line 1279 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 1279 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_10,
#line 1279 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11)
#line 1279 "term_to_xml.m"
{
#line 1283 "term_to_xml.m"
  {
#line 1283 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1283 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_12;
#line 1283 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_13;

#line 1284 "term_to_xml.m"
    {
#line 1284 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_13 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_7, mercury__term_to_xml__MaybeArity_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__MaybeField_10, mercury__term_to_xml__AttrFromSources_11);
    }
#line 1286 "term_to_xml.m"
    {
#line 1286 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_13, &mercury__term_to_xml__Attrs_12);
    }
#line 1283 "term_to_xml.m"
    return mercury__term_to_xml__Attrs_12;
#line 1283 "term_to_xml.m"
  }
#line 1279 "term_to_xml.m"
}

#line 1241 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(
#line 1241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
#line 1241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_8,
#line 1241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 1241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldName_10,
#line 1241 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__5_5)
#line 1241 "term_to_xml.m"
{
#line 1245 "term_to_xml.m"
  {
#line 1245 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1245 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttr_13;
#line 1245 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 0)));
#line 1245 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 1)));

#line 1255 "term_to_xml.m"
#line 1255 "term_to_xml.m"
    switch (mercury__term_to_xml__Source_12) {
#line 1255 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1255 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1261 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeArity_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "term_to_xml.m"
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1261 "term_to_xml.m"
        else
#line 1258 "term_to_xml.m"
          {
#line 1258 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_8, (MR_Integer) 0)));
#line 1258 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_20_20;
#line 1258 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_21_21;

#line 554 "string.opt"
            {
#line 554 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_15, (MR_Integer) 10, &mercury__term_to_xml__V_21_21);
            }
#line 1259 "term_to_xml.m"
            {
#line 1259 "term_to_xml.m"
              mercury__term_to_xml__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_20_20, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1259 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_20_20, 1) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1259 "term_to_xml.m"
            }
#line 1259 "term_to_xml.m"
            {
#line 1259 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_20_20));
#line 1259 "term_to_xml.m"
            }
#line 1258 "term_to_xml.m"
          }
#line 1255 "term_to_xml.m"
        break;
#line 1255 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1273 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeFieldName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1275 "term_to_xml.m"
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1273 "term_to_xml.m"
        else
#line 1271 "term_to_xml.m"
          {
#line 1271 "term_to_xml.m"
            MR_String mercury__term_to_xml__FieldName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldName_10, (MR_Integer) 0)));
#line 1271 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_17_17;

#line 1272 "term_to_xml.m"
            {
#line 1272 "term_to_xml.m"
              mercury__term_to_xml__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_17_17, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1272 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_17_17, 1) = ((MR_Box) (mercury__term_to_xml__FieldName_16));
#line 1272 "term_to_xml.m"
            }
#line 1272 "term_to_xml.m"
            {
#line 1272 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_17_17));
#line 1272 "term_to_xml.m"
            }
#line 1271 "term_to_xml.m"
          }
#line 1255 "term_to_xml.m"
        break;
#line 1255 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1251 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeFunctor_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1253 "term_to_xml.m"
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1251 "term_to_xml.m"
        else
#line 1249 "term_to_xml.m"
          {
#line 1249 "term_to_xml.m"
            MR_String mercury__term_to_xml__Functor_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctor_7, (MR_Integer) 0)));
#line 1249 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_22_22;

#line 1250 "term_to_xml.m"
            {
#line 1250 "term_to_xml.m"
              mercury__term_to_xml__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_22_22, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1250 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_22_22, 1) = ((MR_Box) (mercury__term_to_xml__Functor_14));
#line 1250 "term_to_xml.m"
            }
#line 1250 "term_to_xml.m"
            {
#line 1250 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1250 "term_to_xml.m"
            }
#line 1249 "term_to_xml.m"
          }
#line 1255 "term_to_xml.m"
        break;
#line 1255 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1266 "term_to_xml.m"
        {
#line 1266 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_18_18;
#line 1266 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_19_19;

#line 1267 "term_to_xml.m"
          {
#line 1267 "term_to_xml.m"
            mercury__term_to_xml__V_19_19 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_9);
          }
#line 1267 "term_to_xml.m"
          {
#line 1267 "term_to_xml.m"
            mercury__term_to_xml__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "term_to_xml.m"
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_18_18, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1267 "term_to_xml.m"
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_18_18, 1) = ((MR_Box) (mercury__term_to_xml__V_19_19));
#line 1267 "term_to_xml.m"
          }
#line 1267 "term_to_xml.m"
          {
#line 1267 "term_to_xml.m"
            mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_18_18));
#line 1267 "term_to_xml.m"
          }
#line 1266 "term_to_xml.m"
        }
#line 1255 "term_to_xml.m"
        break;
#line 1255 "term_to_xml.m"
    }
#line 1245 "term_to_xml.m"
    return mercury__term_to_xml__MaybeAttr_13;
#line 1245 "term_to_xml.m"
  }
#line 1241 "term_to_xml.m"
}

#line 1233 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_end_4_p_0(
#line 1233 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 1233 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1233 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_6,
#line 1233 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1233 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1233 "term_to_xml.m"
{
#line 1236 "term_to_xml.m"
  {
#line 1236 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1236 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_11;
#line 1236 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 12211 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12213 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12215 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12218 "term_to_xml.c"
    {
#line 12220 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_11_11);
    }
#line 12223 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12225 "term_to_xml.c"
    {
#line 12227 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Element_6)), mercury__term_to_xml__STATE_VARIABLE_State_11_11, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 12230 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12232 "term_to_xml.c"
    {
#line 12234 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 12236 "term_to_xml.c"
      return;
    }
#line 1236 "term_to_xml.m"
  }
#line 1233 "term_to_xml.m"
}

#line 1224 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_empty_element_5_p_0(
#line 1224 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1224 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 1224 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_7,
#line 1224 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Attributes_8,
#line 1224 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 1224 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 1224 "term_to_xml.m"
{
#line 1227 "term_to_xml.m"
  {
#line 1227 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1227 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1227 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
#line 1227 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 12271 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12273 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12275 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12278 "term_to_xml.c"
    {
#line 12280 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 12283 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12285 "term_to_xml.c"
    {
#line 12287 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1230 "term_to_xml.m"
    {
#line 1230 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12295 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12297 "term_to_xml.c"
    {
#line 12299 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " />")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 12301 "term_to_xml.c"
      return;
    }
#line 1227 "term_to_xml.m"
  }
#line 1224 "term_to_xml.m"
}

#line 1212 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(
#line 1212 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
#line 1212 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 1212 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_11,
#line 1212 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_12,
#line 1212 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
#line 1212 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_14,
#line 1212 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_15,
#line 1212 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_16,
#line 1212 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1212 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1212 "term_to_xml.m"
{
#line 1218 "term_to_xml.m"
  {
#line 1218 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1218 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_18;
#line 1218 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1218 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
#line 12344 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1284 "term_to_xml.m"
    {
#line 1284 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
#line 1286 "term_to_xml.m"
    {
#line 1286 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
#line 1221 "term_to_xml.m"
    {
#line 1221 "term_to_xml.m"
      mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 12362 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12364 "term_to_xml.c"
    {
#line 12366 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12368 "term_to_xml.c"
      return;
    }
#line 1218 "term_to_xml.m"
  }
#line 1212 "term_to_xml.m"
}

#line 1203 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_start_5_p_0(
#line 1203 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1203 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 1203 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_7,
#line 1203 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Attributes_8,
#line 1203 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 1203 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 1203 "term_to_xml.m"
{
#line 1206 "term_to_xml.m"
  {
#line 1206 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1206 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1206 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
#line 1206 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 12403 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12405 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12407 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12410 "term_to_xml.c"
    {
#line 12412 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 12415 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12417 "term_to_xml.c"
    {
#line 12419 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1209 "term_to_xml.m"
    {
#line 1209 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12427 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12429 "term_to_xml.c"
    {
#line 12431 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 12433 "term_to_xml.c"
      return;
    }
#line 1206 "term_to_xml.m"
  }
#line 1203 "term_to_xml.m"
}

#line 1190 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(
#line 1190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
#line 1190 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 1190 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_11,
#line 1190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_12,
#line 1190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
#line 1190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_14,
#line 1190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_15,
#line 1190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_16,
#line 1190 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1190 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1190 "term_to_xml.m"
{
#line 1197 "term_to_xml.m"
  {
#line 1197 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1197 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_18;
#line 1197 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1197 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
#line 12476 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1284 "term_to_xml.m"
    {
#line 1284 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
#line 1286 "term_to_xml.m"
    {
#line 1286 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
#line 1200 "term_to_xml.m"
    {
#line 1200 "term_to_xml.m"
      mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 12494 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12496 "term_to_xml.c"
    {
#line 12498 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12500 "term_to_xml.c"
      return;
    }
#line 1197 "term_to_xml.m"
  }
#line 1190 "term_to_xml.m"
}

#line 1172 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(
#line 1172 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1172 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1172 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1172 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1172 "term_to_xml.m"
  MR_String mercury__term_to_xml__Value_12,
#line 1172 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_13,
#line 1172 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1172 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 1172 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 1172 "term_to_xml.m"
{
#line 1178 "term_to_xml.m"
  {
#line 1178 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1178 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_16;
#line 1178 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_20;
#line 1178 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1178 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_22_22;
#line 1178 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 1178 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1178 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 1178 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 1178 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
#line 1178 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
#line 1178 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_47;
#line 12557 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12559 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12561 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12563 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12565 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12567 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12570 "term_to_xml.c"
    {
#line 12572 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_17, &mercury__term_to_xml__STATE_VARIABLE_State_20_20);
    }
#line 12575 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12577 "term_to_xml.c"
    {
#line 12579 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_20_20, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 1181 "term_to_xml.m"
    mercury__term_to_xml__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1181 "term_to_xml.m"
    mercury__term_to_xml__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1284 "term_to_xml.m"
    {
#line 1284 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_47 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_22_22, mercury__term_to_xml__V_23_23, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__MaybeField_13, mercury__term_to_xml__AttrFromSources_11);
    }
#line 1286 "term_to_xml.m"
    {
#line 1286 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_47, &mercury__term_to_xml__Attrs_16);
    }
#line 1183 "term_to_xml.m"
    {
#line 1183 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Attrs_16, mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
#line 12601 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12603 "term_to_xml.c"
    {
#line 12605 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 1185 "term_to_xml.m"
    {
#line 1185 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_12, mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 12613 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12615 "term_to_xml.c"
    {
#line 12617 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
#line 12620 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12622 "term_to_xml.c"
    {
#line 12624 "term_to_xml.c"
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
    }
#line 12627 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12629 "term_to_xml.c"
    {
#line 12631 "term_to_xml.c"
      mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_18);
#line 12633 "term_to_xml.c"
      return;
    }
#line 1178 "term_to_xml.m"
  }
#line 1172 "term_to_xml.m"
}

#line 1161 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__indent_4_p_0(
#line 1161 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_16,
#line 1161 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1161 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_6,
#line 1161 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1161 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1161 "term_to_xml.m"
{
#line 1168 "term_to_xml.m"
  while (MR_TRUE)
#line 1168 "term_to_xml.m"
    {
#line 1168 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1168 "term_to_xml.m"
      {
#line 1168 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__IndentLevel_6 > (MR_Integer) 0);

#line 1168 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1166 "term_to_xml.m"
          {
#line 1166 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 1166 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_13_13;
#line 12675 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12678 "term_to_xml.c"
            {
#line 12680 "term_to_xml.c"
              mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_16), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\t")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
            }
#line 1167 "term_to_xml.m"
            mercury__term_to_xml__V_13_13 = (mercury__term_to_xml__IndentLevel_6 - (MR_Integer) 1);
#line 1167 "term_to_xml.m"
            /* direct tailcall eliminated */
#line 1167 "term_to_xml.m"
            {
#line 1167 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__IndentLevel__tmp_copy_6 = mercury__term_to_xml__V_13_13;
#line 1167 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_8 = mercury__term_to_xml__STATE_VARIABLE_State_12_12;

#line 1167 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_0_8 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_8;
#line 1167 "term_to_xml.m"
              mercury__term_to_xml__IndentLevel_6 = mercury__term_to_xml__IndentLevel__tmp_copy_6;
#line 1167 "term_to_xml.m"
            }
#line 1167 "term_to_xml.m"
            continue;
#line 1166 "term_to_xml.m"
          }
#line 1168 "term_to_xml.m"
        else
#line 1168 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_9 = mercury__term_to_xml__STATE_VARIABLE_State_0_8;
#line 1168 "term_to_xml.m"
      }
#line 1168 "term_to_xml.m"
      break;
#line 1168 "term_to_xml.m"
    }
#line 1161 "term_to_xml.m"
}

#line 1146 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_include_details_cc_8_p_0(
#line 1146 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1146 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1146 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1146 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1146 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1146 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1146 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1146 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1146 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1146 "term_to_xml.m"
{
#line 1152 "term_to_xml.m"
  {
#line 1152 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1153 "term_to_xml.m"
    {
#line 1153 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1153 "term_to_xml.m"
      return;
    }
#line 1152 "term_to_xml.m"
  }
#line 1146 "term_to_xml.m"
}

#line 1136 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_canonicalize_8_p_0(
#line 1136 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1136 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1136 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1136 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1136 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1136 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1136 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1136 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1136 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1136 "term_to_xml.m"
{
#line 1142 "term_to_xml.m"
  {
#line 1142 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1143 "term_to_xml.m"
    {
#line 1143 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1143 "term_to_xml.m"
      return;
    }
#line 1142 "term_to_xml.m"
  }
#line 1136 "term_to_xml.m"
}

#line 1126 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_do_not_allow_8_p_0(
#line 1126 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1126 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1126 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1126 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1126 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1126 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1126 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1126 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1126 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1126 "term_to_xml.m"
{
#line 1132 "term_to_xml.m"
  {
#line 1132 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1133 "term_to_xml.m"
    {
#line 1133 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 0, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1133 "term_to_xml.m"
      return;
    }
#line 1132 "term_to_xml.m"
  }
#line 1126 "term_to_xml.m"
}

#line 1098 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_3(
#line 1098 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1098 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1098 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1098 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1098 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1098 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1098 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1098 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1098 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1098 "term_to_xml.m"
{
#line 1107 "term_to_xml.m"
  {
#line 1107 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1107 "term_to_xml.m"
#line 1107 "term_to_xml.m"
    switch (mercury__term_to_xml__NonCanon_10) {
#line 1107 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1107 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1114 "term_to_xml.m"
        {
#line 1114 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_17_17;

#line 1114 "term_to_xml.m"
          {
#line 1114 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_17_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1114 "term_to_xml.m"
        }
#line 1107 "term_to_xml.m"
        break;
#line 1107 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1108 "term_to_xml.m"
        {
#line 1108 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_16_16;

#line 1108 "term_to_xml.m"
          {
#line 1108 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1108 "term_to_xml.m"
        }
#line 1107 "term_to_xml.m"
        break;
#line 1107 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1120 "term_to_xml.m"
        {
#line 1120 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_18_18;

#line 1120 "term_to_xml.m"
          {
#line 1120 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_18_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1120 "term_to_xml.m"
        }
#line 1107 "term_to_xml.m"
        break;
#line 1107 "term_to_xml.m"
    }
#line 1107 "term_to_xml.m"
  }
#line 1098 "term_to_xml.m"
}

#line 1096 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_2(
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1096 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1096 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1096 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1096 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1096 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1096 "term_to_xml.m"
{
#line 1107 "term_to_xml.m"
  {
#line 1107 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1107 "term_to_xml.m"
    {
#line 1107 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1107 "term_to_xml.m"
      return;
    }
#line 1107 "term_to_xml.m"
  }
#line 1096 "term_to_xml.m"
}

#line 1094 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_1(
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1094 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1094 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1094 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1094 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1094 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1094 "term_to_xml.m"
{
#line 1107 "term_to_xml.m"
  {
#line 1107 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1107 "term_to_xml.m"
    {
#line 1107 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1107 "term_to_xml.m"
      return;
    }
#line 1107 "term_to_xml.m"
  }
#line 1094 "term_to_xml.m"
}

#line 1092 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_0(
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1092 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1092 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1092 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1092 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1092 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1092 "term_to_xml.m"
{
#line 1107 "term_to_xml.m"
  {
#line 1107 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1107 "term_to_xml.m"
    {
#line 1107 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1107 "term_to_xml.m"
      return;
    }
#line 1107 "term_to_xml.m"
  }
#line 1092 "term_to_xml.m"
}

#line 1072 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
#line 1072 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_6,
#line 1072 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1072 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_9,
#line 1072 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_10,
#line 1072 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11)
#line 1072 "term_to_xml.m"
{
#line 1076 "term_to_xml.m"
  while (MR_TRUE)
#line 1076 "term_to_xml.m"
    {
#line 1076 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1076 "term_to_xml.m"
      {
#line 1076 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1076 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__FunctorNum_7;
#line 1076 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_8;
#line 1082 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FoundFieldNames_13;
#line 1078 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_14_14;
#line 1078 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_15_15;
#line 1078 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_13_22;
#line 186 "construct.opt"
        MR_Word mercury__term_to_xml__V_12_12;

#line 1075 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1075 "term_to_xml.m"
          {
#line 1075 "term_to_xml.m"
            mercury__term_to_xml__FunctorNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1075 "term_to_xml.m"
            mercury__term_to_xml__FunctorNums_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "construct.opt"
            {
#line 186 "construct.opt"
              mercury__term_to_xml__succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(mercury__term_to_xml__TypeDesc_6, mercury__term_to_xml__FunctorNum_7, &mercury__term_to_xml__V_14_14, &mercury__term_to_xml__V_15_15, &mercury__term_to_xml__V_12_12, &mercury__term_to_xml__V_13_22);
            }
#line 1078 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1078 "term_to_xml.m"
              {
#line 187 "construct.opt"
                {
#line 187 "construct.opt"
                  mercury__term_to_xml__FoundFieldNames_13 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__V_13_22);
                }
#line 1078 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Functor_9, mercury__term_to_xml__V_14_14) == 0);
#line 1078 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1078 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Arity_10 == mercury__term_to_xml__V_15_15);
#line 1078 "term_to_xml.m"
              }
#line 1082 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1081 "term_to_xml.m"
              {
#line 1081 "term_to_xml.m"
                *mercury__term_to_xml__MaybeFieldNames_11 = mercury__term_to_xml__FoundFieldNames_13;
#line 1081 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 1081 "term_to_xml.m"
              }
#line 1082 "term_to_xml.m"
            else
#line 1083 "term_to_xml.m"
              {
#line 1083 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1083 "term_to_xml.m"
                {
#line 1083 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__FunctorNums_8;

#line 1083 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1083 "term_to_xml.m"
                }
#line 1083 "term_to_xml.m"
                continue;
#line 1083 "term_to_xml.m"
              }
#line 1075 "term_to_xml.m"
          }
#line 1076 "term_to_xml.m"
        return mercury__term_to_xml__succeeded;
#line 1076 "term_to_xml.m"
      }
#line 1076 "term_to_xml.m"
      break;
#line 1076 "term_to_xml.m"
    }
#line 1072 "term_to_xml.m"
}

#line 1055 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__get_field_names_3_f_0(
#line 1055 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 1055 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_6,
#line 1055 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_7)
#line 1055 "term_to_xml.m"
{
#line 1068 "term_to_xml.m"
  {
#line 1068 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1068 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFields_8;
#line 1068 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__NumFunctors_9;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_17;

#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__get_field_names_3_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13196 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_9  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__V_17_17 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_9 > mercury__term_to_xml__V_17_17);
#line 1042 "term_to_xml.m"
      }
#line 1068 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1059 "term_to_xml.m"
      {
#line 1059 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_10;
#line 1059 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_13_13 = (mercury__term_to_xml__NumFunctors_9 - (MR_Integer) 1);
#line 1059 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1065 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FoundMaybeFields_11;

#line 58 "list.opt"
        {
#line 58 "list.opt"
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_7_21, &mercury__term_to_xml__FunctorNums_10);
        }
#line 1061 "term_to_xml.m"
        {
#line 1061 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__find_field_names_5_p_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__FunctorNums_10, mercury__term_to_xml__Functor_6, mercury__term_to_xml__Arity_7, &mercury__term_to_xml__FoundMaybeFields_11);
        }
#line 1065 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1064 "term_to_xml.m"
          mercury__term_to_xml__MaybeFields_8 = mercury__term_to_xml__FoundMaybeFields_11;
#line 1065 "term_to_xml.m"
        else
#line 1066 "term_to_xml.m"
          mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1059 "term_to_xml.m"
      }
#line 1068 "term_to_xml.m"
    else
#line 1069 "term_to_xml.m"
      mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1068 "term_to_xml.m"
    return mercury__term_to_xml__MaybeFields_8;
#line 1068 "term_to_xml.m"
  }
#line 1055 "term_to_xml.m"
}

#line 1046 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
#line 1046 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1046 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgPseudoType_4)
#line 1046 "term_to_xml.m"
{
#line 1048 "term_to_xml.m"
  {
#line 1048 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1048 "term_to_xml.m"
    MR_Word mercury__term_to_xml__PseudoTypeDesc_5;
#line 1048 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtor_6;
#line 1048 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ArgPseudoTypes_7;
#line 1048 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;
#line 1048 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_9_9;
#line 1048 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_10_10;
#line 165 "type_desc.opt"
    MR_String mercury__term_to_xml__V_5_13;
#line 165 "type_desc.opt"
    MR_Integer mercury__term_to_xml__V_6_14;
#line 165 "type_desc.opt"
    MR_String mercury__term_to_xml__V_5_17;
#line 165 "type_desc.opt"
    MR_Integer mercury__term_to_xml__V_6_18;

#line 195 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_3 ;
		{
#line 195 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 13307 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_5  = PseudoTypeDesc;
#line 195 "type_desc.opt"
}
#line 106 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_5 ;
		{
#line 106 "type_desc.opt"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}
#line 13339 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_6  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_7  = ArgPseudoTypeInfos;
#line 106 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1048 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
      {
#line 1051 "term_to_xml.m"
        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_7)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1051 "term_to_xml.m"
          {
#line 1051 "term_to_xml.m"
            *mercury__term_to_xml__ArgPseudoType_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 0)));
#line 1051 "term_to_xml.m"
            mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 1)));
#line 1051 "term_to_xml.m"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1048 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
              {
#line 165 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
		{
#line 165 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 13411 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_5_13  = TypeCtorModuleName;
	 mercury__term_to_xml__V_9_9  = TypeCtorName;
	 mercury__term_to_xml__V_6_14  = TypeCtorArity;
#line 165 "type_desc.opt"
}
#line 1052 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
                  {
#line 165 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
		{
#line 165 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 13467 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_10_10  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_17  = TypeCtorName;
	 mercury__term_to_xml__V_6_18  = TypeCtorArity;
#line 165 "type_desc.opt"
}
#line 1053 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_10_10, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                  }
#line 1048 "term_to_xml.m"
              }
#line 1051 "term_to_xml.m"
          }
#line 1048 "term_to_xml.m"
      }
#line 1048 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1048 "term_to_xml.m"
  }
#line 1046 "term_to_xml.m"
}

#line 1040 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__is_discriminated_union_2_p_0(
#line 1040 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1040 "term_to_xml.m"
  MR_Integer * mercury__term_to_xml__NumFunctors_4)
#line 1040 "term_to_xml.m"
{
#line 1042 "term_to_xml.m"
  {
#line 1042 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_5_5;

#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_discriminated_union_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_3 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13526 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_to_xml__NumFunctors_4  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__V_5_5 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (*mercury__term_to_xml__NumFunctors_4 > mercury__term_to_xml__V_5_5);
#line 1042 "term_to_xml.m"
      }
#line 1042 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1042 "term_to_xml.m"
  }
#line 1040 "term_to_xml.m"
}

#line 993 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_3(
#line 993 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 993 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 993 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 993 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 993 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 993 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 993 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 993 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 993 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 993 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 993 "term_to_xml.m"
{
#line 997 "term_to_xml.m"
  {
#line 997 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 997 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 997 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 199 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1013 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1018 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1000 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "term_to_xml.m"
      {
#line 1002 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1003 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "term_to_xml.m"
      }
#line 1000 "term_to_xml.m"
    else
#line 999 "term_to_xml.m"
      {
#line 999 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 999 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 999 "term_to_xml.m"
      }
#line 22 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 22 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_3(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 13672 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13696 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1042 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1009 "term_to_xml.m"
      {
#line 1009 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1009 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    else
#line 1011 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1013 "term_to_xml.m"
    {
#line 1013 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1018 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1015 "term_to_xml.m"
      {
#line 1015 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1015 "term_to_xml.m"
        {
#line 1015 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1016 "term_to_xml.m"
          return;
        }
#line 1015 "term_to_xml.m"
      }
#line 1018 "term_to_xml.m"
    else
#line 1025 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "term_to_xml.m"
      {
#line 1020 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1021 "term_to_xml.m"
        {
#line 1021 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1023 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1023 "term_to_xml.m"
        }
#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1022 "term_to_xml.m"
          return;
        }
#line 1020 "term_to_xml.m"
      }
#line 1025 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
      {
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1026 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 13838 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13840 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13842 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13844 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1027 "term_to_xml.m"
        {
#line 1027 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1030 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1030 "term_to_xml.m"
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1033 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1032 "term_to_xml.m"
        {
#line 1032 "term_to_xml.m"
          mercury__term_to_xml__write_child_xml_elements_8_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__NonCanon_11, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1034 "term_to_xml.m"
        {
#line 1034 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 13890 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13892 "term_to_xml.c"
        {
#line 13894 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 13897 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13899 "term_to_xml.c"
        {
#line 13901 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 13904 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13906 "term_to_xml.c"
        {
#line 13908 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 13911 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13913 "term_to_xml.c"
        {
#line 13915 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 13917 "term_to_xml.c"
          return;
        }
#line 1026 "term_to_xml.m"
      }
#line 997 "term_to_xml.m"
  }
#line 993 "term_to_xml.m"
}

#line 991 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_2(
#line 991 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 991 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 991 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 991 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 991 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 991 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 991 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 991 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 991 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 991 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 991 "term_to_xml.m"
{
#line 997 "term_to_xml.m"
  {
#line 997 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 997 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 997 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 199 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1013 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1018 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1000 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "term_to_xml.m"
      {
#line 1002 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1003 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "term_to_xml.m"
      }
#line 1000 "term_to_xml.m"
    else
#line 999 "term_to_xml.m"
      {
#line 999 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 999 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 999 "term_to_xml.m"
      }
#line 22 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 22 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 14046 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14070 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1042 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1009 "term_to_xml.m"
      {
#line 1009 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1009 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    else
#line 1011 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1013 "term_to_xml.m"
    {
#line 1013 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1018 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1015 "term_to_xml.m"
      {
#line 1015 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1015 "term_to_xml.m"
        {
#line 1015 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1016 "term_to_xml.m"
          return;
        }
#line 1015 "term_to_xml.m"
      }
#line 1018 "term_to_xml.m"
    else
#line 1025 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "term_to_xml.m"
      {
#line 1020 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1021 "term_to_xml.m"
        {
#line 1021 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1023 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1023 "term_to_xml.m"
        }
#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1022 "term_to_xml.m"
          return;
        }
#line 1020 "term_to_xml.m"
      }
#line 1025 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
      {
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1026 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 14212 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14214 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14216 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14218 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1027 "term_to_xml.m"
        {
#line 1027 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1030 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1030 "term_to_xml.m"
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1033 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1032 "term_to_xml.m"
        {
#line 1032 "term_to_xml.m"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1034 "term_to_xml.m"
        {
#line 1034 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 14264 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14266 "term_to_xml.c"
        {
#line 14268 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 14271 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14273 "term_to_xml.c"
        {
#line 14275 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14278 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14280 "term_to_xml.c"
        {
#line 14282 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14285 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14287 "term_to_xml.c"
        {
#line 14289 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14291 "term_to_xml.c"
          return;
        }
#line 1026 "term_to_xml.m"
      }
#line 997 "term_to_xml.m"
  }
#line 991 "term_to_xml.m"
}

#line 989 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_1(
#line 989 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 989 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 989 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 989 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 989 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 989 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 989 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 989 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 989 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 989 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 989 "term_to_xml.m"
{
#line 997 "term_to_xml.m"
  {
#line 997 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 997 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 997 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 199 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1013 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1018 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1000 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "term_to_xml.m"
      {
#line 1002 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1003 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "term_to_xml.m"
      }
#line 1000 "term_to_xml.m"
    else
#line 999 "term_to_xml.m"
      {
#line 999 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 999 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 999 "term_to_xml.m"
      }
#line 22 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 22 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 14420 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14444 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1042 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1009 "term_to_xml.m"
      {
#line 1009 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1009 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    else
#line 1011 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1013 "term_to_xml.m"
    {
#line 1013 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1018 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1015 "term_to_xml.m"
      {
#line 1015 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1015 "term_to_xml.m"
        {
#line 1015 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1016 "term_to_xml.m"
          return;
        }
#line 1015 "term_to_xml.m"
      }
#line 1018 "term_to_xml.m"
    else
#line 1025 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "term_to_xml.m"
      {
#line 1020 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1021 "term_to_xml.m"
        {
#line 1021 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1023 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1023 "term_to_xml.m"
        }
#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1022 "term_to_xml.m"
          return;
        }
#line 1020 "term_to_xml.m"
      }
#line 1025 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
      {
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1026 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 14586 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14588 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14590 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14592 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1027 "term_to_xml.m"
        {
#line 1027 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1030 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1030 "term_to_xml.m"
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1033 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1032 "term_to_xml.m"
        {
#line 1032 "term_to_xml.m"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1034 "term_to_xml.m"
        {
#line 1034 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 14638 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14640 "term_to_xml.c"
        {
#line 14642 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 14645 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14647 "term_to_xml.c"
        {
#line 14649 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14652 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14654 "term_to_xml.c"
        {
#line 14656 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14659 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14661 "term_to_xml.c"
        {
#line 14663 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14665 "term_to_xml.c"
          return;
        }
#line 1026 "term_to_xml.m"
      }
#line 997 "term_to_xml.m"
  }
#line 989 "term_to_xml.m"
}

#line 987 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_0(
#line 987 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 987 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 987 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 987 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 987 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 987 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 987 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 987 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 987 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 987 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 987 "term_to_xml.m"
{
#line 997 "term_to_xml.m"
  {
#line 997 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 997 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 997 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 997 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 997 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 199 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1013 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1013 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1018 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1000 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "term_to_xml.m"
      {
#line 1002 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1003 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "term_to_xml.m"
      }
#line 1000 "term_to_xml.m"
    else
#line 999 "term_to_xml.m"
      {
#line 999 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 999 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 999 "term_to_xml.m"
      }
#line 22 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 22 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_0(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 14794 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14818 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1042 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1009 "term_to_xml.m"
      {
#line 1009 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1009 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1009 "term_to_xml.m"
      }
#line 1010 "term_to_xml.m"
    else
#line 1011 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1013 "term_to_xml.m"
    {
#line 1013 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1013 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1018 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1015 "term_to_xml.m"
      {
#line 1015 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1015 "term_to_xml.m"
        {
#line 1015 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1016 "term_to_xml.m"
          return;
        }
#line 1015 "term_to_xml.m"
      }
#line 1018 "term_to_xml.m"
    else
#line 1025 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "term_to_xml.m"
      {
#line 1020 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1020 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1021 "term_to_xml.m"
        {
#line 1021 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1023 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1023 "term_to_xml.m"
        }
#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1022 "term_to_xml.m"
          return;
        }
#line 1020 "term_to_xml.m"
      }
#line 1025 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
      {
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1026 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1026 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1026 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 14960 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14962 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14964 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14966 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1027 "term_to_xml.m"
        {
#line 1027 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1030 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1030 "term_to_xml.m"
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1033 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1032 "term_to_xml.m"
        {
#line 1032 "term_to_xml.m"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1034 "term_to_xml.m"
        {
#line 1034 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 15012 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15014 "term_to_xml.c"
        {
#line 15016 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 15019 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15021 "term_to_xml.c"
        {
#line 15023 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 15026 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15028 "term_to_xml.c"
        {
#line 15030 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 15033 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15035 "term_to_xml.c"
        {
#line 15037 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 15039 "term_to_xml.c"
          return;
        }
#line 1026 "term_to_xml.m"
      }
#line 997 "term_to_xml.m"
  }
#line 987 "term_to_xml.m"
}

#line 962 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
#line 962 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
#line 962 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 962 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_7,
#line 962 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_8,
#line 962 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 962 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 962 "term_to_xml.m"
{
#line 968 "term_to_xml.m"
  {
#line 968 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 968 "term_to_xml.m"
#line 968 "term_to_xml.m"
    switch (mercury__term_to_xml__Format_7) {
#line 968 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 968 "term_to_xml.m"
      case (MR_Integer) 0:
#line 969 "term_to_xml.m"
        {
#line 969 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_13, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Indent_8, mercury__term_to_xml__STATE_VARIABLE_State_0_10, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 969 "term_to_xml.m"
          return;
        }
#line 968 "term_to_xml.m"
        break;
#line 968 "term_to_xml.m"
      case (MR_Integer) 1:
#line 971 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_11 = mercury__term_to_xml__STATE_VARIABLE_State_0_10;
#line 968 "term_to_xml.m"
        break;
#line 968 "term_to_xml.m"
    }
#line 968 "term_to_xml.m"
  }
#line 962 "term_to_xml.m"
}

#line 955 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
#line 955 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 955 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1,
#line 955 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 955 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
#line 955 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4)
#line 955 "term_to_xml.m"
{
#line 958 "term_to_xml.m"
  {
#line 958 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 958 "term_to_xml.m"
#line 958 "term_to_xml.m"
    switch (mercury__term_to_xml__HeadVar__2_2) {
#line 958 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 958 "term_to_xml.m"
      case (MR_Integer) 0:
#line 959 "term_to_xml.m"
        {
#line 15129 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15132 "term_to_xml.c"
          {
#line 15134 "term_to_xml.c"
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_0_3, mercury__term_to_xml__STATE_VARIABLE_State_4);
#line 15136 "term_to_xml.c"
            return;
          }
#line 959 "term_to_xml.m"
        }
#line 958 "term_to_xml.m"
        break;
#line 958 "term_to_xml.m"
      case (MR_Integer) 1:
#line 958 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_4 = mercury__term_to_xml__STATE_VARIABLE_State_0_3;
#line 958 "term_to_xml.m"
        break;
#line 958 "term_to_xml.m"
    }
#line 958 "term_to_xml.m"
  }
#line 955 "term_to_xml.m"
}

#line 946 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__contains_noformat_xml_1_p_0(
#line 946 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1)
#line 946 "term_to_xml.m"
{
#line 948 "term_to_xml.m"
  while (MR_TRUE)
#line 948 "term_to_xml.m"
    {
#line 948 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 948 "term_to_xml.m"
      {
#line 948 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 948 "term_to_xml.m"
        MR_Word mercury__term_to_xml__XML_2;
#line 948 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Rest_3;

#line 948 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 948 "term_to_xml.m"
          {
#line 948 "term_to_xml.m"
            mercury__term_to_xml__XML_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 948 "term_to_xml.m"
            mercury__term_to_xml__Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 950 "term_to_xml.m"
            {
#line 950 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_4_4;

#line 939 "term_to_xml.m"
#line 939 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__XML_2)) {
#line 939 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 939 "term_to_xml.m"
                case (MR_Integer) 0:
#line 939 "term_to_xml.m"
                  mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 939 "term_to_xml.m"
                  break;
#line 939 "term_to_xml.m"
                case (MR_Integer) 1:
#line 940 "term_to_xml.m"
                  mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 939 "term_to_xml.m"
                  break;
#line 939 "term_to_xml.m"
                case (MR_Integer) 2:
#line 941 "term_to_xml.m"
                  mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 939 "term_to_xml.m"
                  break;
#line 939 "term_to_xml.m"
                case (MR_Integer) 3:
#line 939 "term_to_xml.m"
#line 939 "term_to_xml.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_2, (MR_Integer) 0)))) {
#line 939 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 939 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 942 "term_to_xml.m"
                      mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 939 "term_to_xml.m"
                      break;
#line 939 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 944 "term_to_xml.m"
                      mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 939 "term_to_xml.m"
                      break;
#line 939 "term_to_xml.m"
                    case (MR_Integer) 2:
#line 943 "term_to_xml.m"
                      mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 939 "term_to_xml.m"
                      break;
#line 939 "term_to_xml.m"
                  }
#line 939 "term_to_xml.m"
                  break;
#line 939 "term_to_xml.m"
              }
#line 950 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_4_4 == (MR_Integer) 0);
#line 950 "term_to_xml.m"
            }
#line 951 "term_to_xml.m"
            if (!(mercury__term_to_xml__succeeded))
#line 952 "term_to_xml.m"
              {
#line 952 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 952 "term_to_xml.m"
                {
#line 952 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__1__tmp_copy_1 = mercury__term_to_xml__Rest_3;

#line 952 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__HeadVar__1__tmp_copy_1;
#line 952 "term_to_xml.m"
                }
#line 952 "term_to_xml.m"
                continue;
#line 952 "term_to_xml.m"
              }
#line 948 "term_to_xml.m"
          }
#line 948 "term_to_xml.m"
        return mercury__term_to_xml__succeeded;
#line 948 "term_to_xml.m"
      }
#line 948 "term_to_xml.m"
      break;
#line 948 "term_to_xml.m"
    }
#line 946 "term_to_xml.m"
}

#line 937 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__can_format_siblings_1_f_0(
#line 937 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1)
#line 937 "term_to_xml.m"
{
#line 939 "term_to_xml.m"
  {
#line 939 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 939 "term_to_xml.m"
    MR_Word mercury__term_to_xml__HeadVar__2_2;

#line 939 "term_to_xml.m"
#line 939 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 939 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 939 "term_to_xml.m"
      case (MR_Integer) 0:
#line 939 "term_to_xml.m"
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 939 "term_to_xml.m"
        break;
#line 939 "term_to_xml.m"
      case (MR_Integer) 1:
#line 940 "term_to_xml.m"
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 939 "term_to_xml.m"
        break;
#line 939 "term_to_xml.m"
      case (MR_Integer) 2:
#line 941 "term_to_xml.m"
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 939 "term_to_xml.m"
        break;
#line 939 "term_to_xml.m"
      case (MR_Integer) 3:
#line 939 "term_to_xml.m"
#line 939 "term_to_xml.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) {
#line 939 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 939 "term_to_xml.m"
          case (MR_Integer) 0:
#line 942 "term_to_xml.m"
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 939 "term_to_xml.m"
            break;
#line 939 "term_to_xml.m"
          case (MR_Integer) 1:
#line 944 "term_to_xml.m"
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 939 "term_to_xml.m"
            break;
#line 939 "term_to_xml.m"
          case (MR_Integer) 2:
#line 943 "term_to_xml.m"
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 939 "term_to_xml.m"
            break;
#line 939 "term_to_xml.m"
        }
#line 939 "term_to_xml.m"
        break;
#line 939 "term_to_xml.m"
    }
#line 939 "term_to_xml.m"
    return mercury__term_to_xml__HeadVar__2_2;
#line 939 "term_to_xml.m"
  }
#line 937 "term_to_xml.m"
}

#line 882 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_format_6_p_0(
#line 882 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_62,
#line 882 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 882 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_8,
#line 882 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_9,
#line 882 "term_to_xml.m"
  MR_Word mercury__term_to_xml__XML_10,
#line 882 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_24,
#line 882 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_25)
#line 882 "term_to_xml.m"
{
#line 888 "term_to_xml.m"
  {
#line 888 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 888 "term_to_xml.m"
#line 888 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__XML_10)) {
#line 888 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 888 "term_to_xml.m"
      case (MR_Integer) 0:
#line 888 "term_to_xml.m"
        {
#line 888 "term_to_xml.m"
          MR_String mercury__term_to_xml__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 0)));
#line 888 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 888 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 2)));
#line 888 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_49_49;

#line 889 "term_to_xml.m"
          {
#line 889 "term_to_xml.m"
            mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_49_49);
          }
#line 894 "term_to_xml.m"
          if ((mercury__term_to_xml__Children_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "term_to_xml.m"
            {
#line 891 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_60_60;

#line 892 "term_to_xml.m"
              {
#line 892 "term_to_xml.m"
                mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__Attrs_13, mercury__term_to_xml__STATE_VARIABLE_State_49_49, &mercury__term_to_xml__STATE_VARIABLE_State_60_60);
              }
#line 893 "term_to_xml.m"
              {
#line 893 "term_to_xml.m"
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_60_60, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 893 "term_to_xml.m"
                return;
              }
#line 891 "term_to_xml.m"
            }
#line 894 "term_to_xml.m"
          else
#line 895 "term_to_xml.m"
            {
#line 895 "term_to_xml.m"
              MR_Word mercury__term_to_xml__ChildrenFormat_17;
#line 895 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_50_50;
#line 895 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;
#line 895 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_54_54;
#line 895 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__V_55_55;
#line 895 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_57;
#line 895 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_58_58;

#line 896 "term_to_xml.m"
              {
#line 896 "term_to_xml.m"
                mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__Attrs_13, mercury__term_to_xml__STATE_VARIABLE_State_49_49, &mercury__term_to_xml__STATE_VARIABLE_State_50_50);
              }
#line 897 "term_to_xml.m"
              {
#line 897 "term_to_xml.m"
                mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_14);
              }
#line 899 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 898 "term_to_xml.m"
                {
#line 898 "term_to_xml.m"
                  mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 1;
#line 898 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_52_52 = mercury__term_to_xml__STATE_VARIABLE_State_50_50;
#line 898 "term_to_xml.m"
                }
#line 899 "term_to_xml.m"
              else
#line 900 "term_to_xml.m"
                {
#line 15467 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 900 "term_to_xml.m"
                  mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
#line 15472 "term_to_xml.c"
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15474 "term_to_xml.c"
                  {
#line 15476 "term_to_xml.c"
                    mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_50_50, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
                  }
#line 900 "term_to_xml.m"
                }
#line 904 "term_to_xml.m"
              mercury__term_to_xml__V_55_55 = (mercury__term_to_xml__IndentLevel_9 + (MR_Integer) 1);
#line 903 "term_to_xml.m"
              {
#line 903 "term_to_xml.m"
                mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, mercury__term_to_xml__V_55_55, mercury__term_to_xml__Children_14, mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_54_54);
              }
#line 905 "term_to_xml.m"
              {
#line 905 "term_to_xml.m"
                mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_54_54, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
              }
#line 906 "term_to_xml.m"
              {
#line 906 "term_to_xml.m"
                mercury__term_to_xml__write_element_end_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_58_58);
              }
#line 907 "term_to_xml.m"
              {
#line 907 "term_to_xml.m"
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_58_58, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 907 "term_to_xml.m"
                return;
              }
#line 895 "term_to_xml.m"
            }
#line 888 "term_to_xml.m"
        }
#line 888 "term_to_xml.m"
        break;
#line 888 "term_to_xml.m"
      case (MR_Integer) 1:
#line 910 "term_to_xml.m"
        {
#line 910 "term_to_xml.m"
          MR_String mercury__term_to_xml__Data_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__XML_10, (MR_Integer) 0)));

#line 911 "term_to_xml.m"
          {
#line 911 "term_to_xml.m"
            mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Data_18, mercury__term_to_xml__STATE_VARIABLE_State_0_24, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 911 "term_to_xml.m"
            return;
          }
#line 910 "term_to_xml.m"
        }
#line 888 "term_to_xml.m"
        break;
#line 888 "term_to_xml.m"
      case (MR_Integer) 2:
#line 913 "term_to_xml.m"
        {
#line 913 "term_to_xml.m"
          MR_String mercury__term_to_xml__CData_19 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__XML_10, (MR_Integer) 0)));
#line 913 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 913 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 913 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 913 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_46_46;
#line 15543 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15545 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15547 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 968 "term_to_xml.m"
#line 968 "term_to_xml.m"
          switch (mercury__term_to_xml__Format_8) {
#line 968 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 968 "term_to_xml.m"
            case (MR_Integer) 0:
#line 969 "term_to_xml.m"
              {
#line 969 "term_to_xml.m"
                mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
              }
#line 968 "term_to_xml.m"
              break;
#line 968 "term_to_xml.m"
            case (MR_Integer) 1:
#line 971 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_41_41 = mercury__term_to_xml__STATE_VARIABLE_State_0_24;
#line 968 "term_to_xml.m"
              break;
#line 968 "term_to_xml.m"
          }
#line 15572 "term_to_xml.c"
          mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15574 "term_to_xml.c"
          {
#line 15576 "term_to_xml.c"
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<![CDATA[")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
#line 15579 "term_to_xml.c"
          mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15581 "term_to_xml.c"
          {
#line 15583 "term_to_xml.c"
            mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__CData_19)), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
#line 15586 "term_to_xml.c"
          mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15588 "term_to_xml.c"
          {
#line 15590 "term_to_xml.c"
            mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "]]>")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, &mercury__term_to_xml__STATE_VARIABLE_State_46_46);
          }
#line 958 "term_to_xml.m"
#line 958 "term_to_xml.m"
          switch (mercury__term_to_xml__Format_8) {
#line 958 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 958 "term_to_xml.m"
            case (MR_Integer) 0:
#line 959 "term_to_xml.m"
              {
#line 15602 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15605 "term_to_xml.c"
                {
#line 15607 "term_to_xml.c"
                  mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_46_46, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15609 "term_to_xml.c"
                  return;
                }
#line 959 "term_to_xml.m"
              }
#line 958 "term_to_xml.m"
              break;
#line 958 "term_to_xml.m"
            case (MR_Integer) 1:
#line 958 "term_to_xml.m"
              *mercury__term_to_xml__STATE_VARIABLE_State_25 = mercury__term_to_xml__STATE_VARIABLE_State_46_46;
#line 958 "term_to_xml.m"
              break;
#line 958 "term_to_xml.m"
          }
#line 913 "term_to_xml.m"
        }
#line 888 "term_to_xml.m"
        break;
#line 888 "term_to_xml.m"
      case (MR_Integer) 3:
#line 888 "term_to_xml.m"
#line 888 "term_to_xml.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 0)))) {
#line 888 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 888 "term_to_xml.m"
          case (MR_Integer) 0:
#line 920 "term_to_xml.m"
            {
#line 920 "term_to_xml.m"
              MR_String mercury__term_to_xml__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 920 "term_to_xml.m"
              MR_String mercury__term_to_xml__EscapedComment_21;
#line 920 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_32_32;
#line 920 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;
#line 920 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_37_37;
#line 920 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 15651 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15653 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15655 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 968 "term_to_xml.m"
#line 968 "term_to_xml.m"
              switch (mercury__term_to_xml__Format_8) {
#line 968 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 968 "term_to_xml.m"
                case (MR_Integer) 0:
#line 969 "term_to_xml.m"
                  {
#line 969 "term_to_xml.m"
                    mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_32_32);
                  }
#line 968 "term_to_xml.m"
                  break;
#line 968 "term_to_xml.m"
                case (MR_Integer) 1:
#line 971 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_32_32 = mercury__term_to_xml__STATE_VARIABLE_State_0_24;
#line 968 "term_to_xml.m"
                  break;
#line 968 "term_to_xml.m"
              }
#line 15680 "term_to_xml.c"
              mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15682 "term_to_xml.c"
              {
#line 15684 "term_to_xml.c"
                mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!-- ")), mercury__term_to_xml__STATE_VARIABLE_State_32_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
              }
#line 924 "term_to_xml.m"
              {
#line 924 "term_to_xml.m"
                mercury__string__replace_all_4_p_0(mercury__term_to_xml__Comment_20, (MR_String) "--", (MR_String) " - ", &mercury__term_to_xml__EscapedComment_21);
              }
#line 15692 "term_to_xml.c"
              mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15694 "term_to_xml.c"
              {
#line 15696 "term_to_xml.c"
                mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__EscapedComment_21)), mercury__term_to_xml__STATE_VARIABLE_State_34_34, &mercury__term_to_xml__STATE_VARIABLE_State_37_37);
              }
#line 15699 "term_to_xml.c"
              mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15701 "term_to_xml.c"
              {
#line 15703 "term_to_xml.c"
                mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " -->")), mercury__term_to_xml__STATE_VARIABLE_State_37_37, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
              }
#line 927 "term_to_xml.m"
              {
#line 927 "term_to_xml.m"
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_39_39, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 927 "term_to_xml.m"
                return;
              }
#line 920 "term_to_xml.m"
            }
#line 888 "term_to_xml.m"
            break;
#line 888 "term_to_xml.m"
          case (MR_Integer) 1:
#line 929 "term_to_xml.m"
            {
#line 929 "term_to_xml.m"
              MR_String mercury__term_to_xml__EntityName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 929 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 929 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_29_29;
#line 15727 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15729 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 15732 "term_to_xml.c"
              {
#line 15734 "term_to_xml.c"
                mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "&")), mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
#line 931 "term_to_xml.m"
              {
#line 931 "term_to_xml.m"
                mercury__term_to_xml__V_29_29 = mercury__string__f_43_43_2_f_0(mercury__term_to_xml__EntityName_22, (MR_String) ";");
              }
#line 15742 "term_to_xml.c"
              mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15744 "term_to_xml.c"
              {
#line 15746 "term_to_xml.c"
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__V_29_29)), mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15748 "term_to_xml.c"
                return;
              }
#line 929 "term_to_xml.m"
            }
#line 888 "term_to_xml.m"
            break;
#line 888 "term_to_xml.m"
          case (MR_Integer) 2:
#line 933 "term_to_xml.m"
            {
#line 933 "term_to_xml.m"
              MR_String mercury__term_to_xml__RawString_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 15761 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15764 "term_to_xml.c"
              {
#line 15766 "term_to_xml.c"
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RawString_23)), mercury__term_to_xml__STATE_VARIABLE_State_0_24, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15768 "term_to_xml.c"
                return;
              }
#line 933 "term_to_xml.m"
            }
#line 888 "term_to_xml.m"
            break;
#line 888 "term_to_xml.m"
        }
#line 888 "term_to_xml.m"
        break;
#line 888 "term_to_xml.m"
    }
#line 888 "term_to_xml.m"
  }
#line 882 "term_to_xml.m"
}

#line 854 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__primitive_value_2_p_0(
#line 854 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_3,
#line 854 "term_to_xml.m"
  MR_String * mercury__term_to_xml__PrimValue_4)
#line 854 "term_to_xml.m"
{
#line 859 "term_to_xml.m"
  {
#line 859 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 859 "term_to_xml.m"
    MR_String mercury__term_to_xml__String_5;
#line 857 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16 "univ.opt"
    MR_Box mercury__term_to_xml__conv0_String_5;

#line 16 "univ.opt"
    {
#line 16 "univ.opt"
      mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_9_9, &mercury__term_to_xml__conv0_String_5, mercury__term_to_xml__Univ_3);
    }
#line 16 "univ.opt"
    if (mercury__term_to_xml__succeeded)
#line 16 "univ.opt"
      {
#line 16 "univ.opt"
        mercury__term_to_xml__String_5 = ((MR_String) mercury__term_to_xml__conv0_String_5);
#line 16 "univ.opt"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 16 "univ.opt"
      }
#line 859 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 858 "term_to_xml.m"
      {
#line 858 "term_to_xml.m"
        *mercury__term_to_xml__PrimValue_4 = mercury__term_to_xml__String_5;
#line 858 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 858 "term_to_xml.m"
      }
#line 859 "term_to_xml.m"
    else
#line 861 "term_to_xml.m"
      {
#line 861 "term_to_xml.m"
        MR_Char mercury__term_to_xml__Char_6;
#line 859 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 16 "univ.opt"
        MR_Box mercury__term_to_xml__conv1_Char_6;

#line 16 "univ.opt"
        {
#line 16 "univ.opt"
          mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_10_10, &mercury__term_to_xml__conv1_Char_6, mercury__term_to_xml__Univ_3);
        }
#line 16 "univ.opt"
        if (mercury__term_to_xml__succeeded)
#line 16 "univ.opt"
          {
#line 16 "univ.opt"
            mercury__term_to_xml__Char_6 = ((MR_Char) (MR_Word) mercury__term_to_xml__conv1_Char_6);
#line 16 "univ.opt"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 16 "univ.opt"
          }
#line 861 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 216 "string.opt"
          {
#line 216 "string.opt"
            MR_Word mercury__term_to_xml__V_5_21;
#line 216 "string.opt"
            MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 217 "string.opt"
            {
#line 217 "string.opt"
              mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Char_6));
#line 217 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 217 "string.opt"
            }
#line 219 "string.opt"
            {
#line 219 "string.opt"
              mercury__string__to_char_list_2_p_1(mercury__term_to_xml__PrimValue_4, mercury__term_to_xml__V_5_21);
            }
#line 216 "string.opt"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 216 "string.opt"
          }
#line 861 "term_to_xml.m"
        else
#line 863 "term_to_xml.m"
          {
#line 863 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Int_7;
#line 861 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 16 "univ.opt"
            MR_Box mercury__term_to_xml__conv2_Int_7;

#line 16 "univ.opt"
            {
#line 16 "univ.opt"
              mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_11_11, &mercury__term_to_xml__conv2_Int_7, mercury__term_to_xml__Univ_3);
            }
#line 16 "univ.opt"
            if (mercury__term_to_xml__succeeded)
#line 16 "univ.opt"
              {
#line 16 "univ.opt"
                mercury__term_to_xml__Int_7 = ((MR_Integer) mercury__term_to_xml__conv2_Int_7);
#line 16 "univ.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 16 "univ.opt"
              }
#line 863 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 552 "string.opt"
              {
#line 554 "string.opt"
                {
#line 554 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Int_7, (MR_Integer) 10, mercury__term_to_xml__PrimValue_4);
                }
#line 552 "string.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 552 "string.opt"
              }
#line 863 "term_to_xml.m"
            else
#line 864 "term_to_xml.m"
              {
#line 864 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 864 "term_to_xml.m"
                MR_Float mercury__term_to_xml__Float_8;
#line 16 "univ.opt"
                MR_Box mercury__term_to_xml__conv3_Float_8;

#line 16 "univ.opt"
                {
#line 16 "univ.opt"
                  mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_12_12, &mercury__term_to_xml__conv3_Float_8, mercury__term_to_xml__Univ_3);
                }
#line 16 "univ.opt"
                if (mercury__term_to_xml__succeeded)
#line 16 "univ.opt"
                  {
#line 16 "univ.opt"
                    mercury__term_to_xml__Float_8 = MR_unbox_float(mercury__term_to_xml__conv3_Float_8);
#line 16 "univ.opt"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 16 "univ.opt"
                  }
#line 864 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 864 "term_to_xml.m"
                  {
#line 337 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_to_xml__Float_8 ;
		{
#line 337 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15971 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__term_to_xml__PrimValue_4  = Str;
#line 337 "string.opt"
}
#line 337 "string.opt"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 864 "term_to_xml.m"
                  }
#line 864 "term_to_xml.m"
              }
#line 863 "term_to_xml.m"
          }
#line 861 "term_to_xml.m"
      }
#line 859 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 859 "term_to_xml.m"
  }
#line 854 "term_to_xml.m"
}

#line 812 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
#line 812 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_8,
#line 812 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__Elements_10,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeArities_12,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
#line 812 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttributeLists_14)
#line 812 "term_to_xml.m"
{
#line 837 "term_to_xml.m"
  {
#line 837 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 837 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__NumFunctors_15;
#line 1042 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_81_81;

#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_9 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 16040 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_15  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__V_81_81 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_15 > mercury__term_to_xml__V_81_81);
#line 1042 "term_to_xml.m"
      }
#line 837 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 820 "term_to_xml.m"
      {
#line 820 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_16;
#line 820 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_30_30 = (mercury__term_to_xml__NumFunctors_15 - (MR_Integer) 1);
#line 820 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Functors_17;
#line 833 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Arities_18;
#line 833 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgTypeLists0_19;

#line 58 "list.opt"
        {
#line 58 "list.opt"
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__V_30_30, mercury__term_to_xml__V_7_85, &mercury__term_to_xml__FunctorNums_16);
        }
#line 822 "term_to_xml.m"
        {
#line 822 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__FunctorNums_16, &mercury__term_to_xml__Functors_17, &mercury__term_to_xml__Arities_18, &mercury__term_to_xml__ArgTypeLists0_19);
        }
#line 833 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 825 "term_to_xml.m"
          {
#line 825 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Requests_21;

#line 825 "term_to_xml.m"
            {
#line 825 "term_to_xml.m"
              *mercury__term_to_xml__MaybeFunctors_11 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__Functors_17);
            }
#line 826 "term_to_xml.m"
            {
#line 826 "term_to_xml.m"
              *mercury__term_to_xml__MaybeArities_12 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__Arities_18);
            }
#line 827 "term_to_xml.m"
            *mercury__term_to_xml__ArgTypeLists_13 = mercury__term_to_xml__ArgTypeLists0_19;
#line 828 "term_to_xml.m"
            {
#line 828 "term_to_xml.m"
              mercury__term_to_xml__Requests_21 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__Functors_17, mercury__term_to_xml__Arities_18);
            }
#line 832 "term_to_xml.m"
            {
#line 832 "term_to_xml.m"
              mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__MakeElement_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__Requests_21, mercury__term_to_xml__Elements_10, mercury__term_to_xml__AttributeLists_14);
#line 832 "term_to_xml.m"
              return;
            }
#line 825 "term_to_xml.m"
          }
#line 833 "term_to_xml.m"
        else
#line 834 "term_to_xml.m"
          {
#line 834 "term_to_xml.m"
            {
#line 834 "term_to_xml.m"
              mercury__require__unexpected_3_p_0((MR_String) "term_to_xml", (MR_String) "predicate \140term_to_xml.get_elements_and_args\'/7", (MR_String) "get_functor failed for discriminated union");
#line 834 "term_to_xml.m"
              return;
            }
#line 834 "term_to_xml.m"
          }
#line 820 "term_to_xml.m"
      }
#line 837 "term_to_xml.m"
    else
#line 838 "term_to_xml.m"
      {
#line 838 "term_to_xml.m"
        MR_String mercury__term_to_xml__Element_26;
#line 838 "term_to_xml.m"
        MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 838 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_47_47;
#line 838 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 838 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;
#line 838 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_50_50;
#line 838 "term_to_xml.m"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_8, (MR_Integer) 1)));
#line 838 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv2_Element_26;
#line 838 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 845 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgType_28;

#line 838 "term_to_xml.m"
        {
#line 838 "term_to_xml.m"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_8), ((MR_Box) (mercury__term_to_xml__TypeDesc_9)), ((MR_Box) (mercury__term_to_xml__V_46_46)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
        }
#line 838 "term_to_xml.m"
        mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 838 "term_to_xml.m"
        mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 839 "term_to_xml.m"
        mercury__term_to_xml__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "term_to_xml.m"
        {
#line 839 "term_to_xml.m"
          MR_Word base;
#line 839 "term_to_xml.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "term_to_xml.m"
          *mercury__term_to_xml__Elements_10 = base;
#line 839 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__Element_26));
#line 839 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_47_47));
#line 839 "term_to_xml.m"
        }
#line 840 "term_to_xml.m"
        mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "term_to_xml.m"
        {
#line 840 "term_to_xml.m"
          MR_Word base;
#line 840 "term_to_xml.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "term_to_xml.m"
          *mercury__term_to_xml__AttributeLists_14 = base;
#line 840 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__AttrFromSources_27));
#line 840 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_48_48));
#line 840 "term_to_xml.m"
        }
#line 841 "term_to_xml.m"
        mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "term_to_xml.m"
        mercury__term_to_xml__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "term_to_xml.m"
        *mercury__term_to_xml__MaybeFunctors_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[19]);
#line 842 "term_to_xml.m"
        *mercury__term_to_xml__MaybeArities_12 = (MR_Word) *mercury__term_to_xml__MaybeFunctors_11;
#line 843 "term_to_xml.m"
        {
#line 843 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_9, &mercury__term_to_xml__ArgType_28);
        }
#line 845 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 844 "term_to_xml.m"
          {
#line 844 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_53_53;
#line 844 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_55_55;

#line 844 "term_to_xml.m"
            {
#line 844 "term_to_xml.m"
              mercury__term_to_xml__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, 0) = ((MR_Box) (mercury__term_to_xml__ArgType_28));
#line 844 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, 1) = ((MR_Box) (mercury__term_to_xml__V_54_54));
#line 844 "term_to_xml.m"
            }
#line 844 "term_to_xml.m"
            mercury__term_to_xml__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "term_to_xml.m"
            {
#line 844 "term_to_xml.m"
              MR_Word base;
#line 844 "term_to_xml.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "term_to_xml.m"
              *mercury__term_to_xml__ArgTypeLists_13 = base;
#line 844 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_53_53));
#line 844 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_55_55));
#line 844 "term_to_xml.m"
            }
#line 844 "term_to_xml.m"
          }
#line 845 "term_to_xml.m"
        else
#line 846 "term_to_xml.m"
          {
#line 846 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 846 "term_to_xml.m"
            *mercury__term_to_xml__ArgTypeLists_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[20]);
#line 846 "term_to_xml.m"
          }
#line 838 "term_to_xml.m"
      }
#line 837 "term_to_xml.m"
  }
#line 812 "term_to_xml.m"
}

#line 794 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
#line 794 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_4,
#line 794 "term_to_xml.m"
  MR_Word mercury__term_to_xml__PrevChrs_5,
#line 794 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 794 "term_to_xml.m"
{
#line 796 "term_to_xml.m"
  {
#line 796 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 796 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 796 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Chrs_6;

#line 798 "term_to_xml.m"
    {
#line 798 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__term_to_xml__Chr_4);
    }
#line 800 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 799 "term_to_xml.m"
      {
#line 799 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 799 "term_to_xml.m"
        {
#line 799 "term_to_xml.m"
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_4));
#line 799 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__V_7_7));
#line 799 "term_to_xml.m"
        }
#line 799 "term_to_xml.m"
      }
#line 800 "term_to_xml.m"
    else
#line 801 "term_to_xml.m"
      {
#line 801 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_9_9;
#line 801 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_10_10;
#line 801 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_11_11;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_to_xml__Chr_4 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 16343 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_11_11  = Int;
#line 111 "char.opt"
}
#line 554 "string.opt"
        {
#line 554 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__V_11_11, (MR_Integer) 10, &mercury__term_to_xml__V_10_10);
        }
#line 958 "string.opt"
        {
#line 958 "string.opt"
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_9_9);
        }
#line 801 "term_to_xml.m"
        {
#line 801 "term_to_xml.m"
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 801 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 801 "term_to_xml.m"
        }
#line 801 "term_to_xml.m"
      }
#line 113 "list.opt"
    {
#line 113 "list.opt"
      mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_12_12, mercury__term_to_xml__PrevChrs_5, mercury__term_to_xml__Chrs_6, mercury__term_to_xml__HeadVar__3_3);
#line 113 "list.opt"
      return;
    }
#line 796 "term_to_xml.m"
  }
#line 794 "term_to_xml.m"
}

#line 777 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
#line 777 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_3)
#line 777 "term_to_xml.m"
{
#line 779 "term_to_xml.m"
  {
#line 779 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 779 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_4;
#line 779 "term_to_xml.m"
    MR_String mercury__term_to_xml__Head_5;
#line 779 "term_to_xml.m"
    MR_String mercury__term_to_xml__Tail_6;
#line 779 "term_to_xml.m"
    MR_String mercury__term_to_xml__First_7;
#line 779 "term_to_xml.m"
    MR_String mercury__term_to_xml__Rest_8;
#line 779 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ElementChrs_9;
#line 779 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;
#line 779 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_13_13;
#line 779 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_8_36;
#line 779 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_13_48;
#line 779 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_49;
#line 782 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_18_18;
#line 782 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_5_23;
#line 782 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_6_24;

#line 780 "term_to_xml.m"
    {
#line 780 "term_to_xml.m"
      mercury__string__split_4_p_0(mercury__term_to_xml__Functor_3, (MR_Integer) 1, &mercury__term_to_xml__Head_5, &mercury__term_to_xml__Tail_6);
    }
#line 606 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__Head_5 ;
		{
#line 606 "string.opt"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 16466 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 606 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 782 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 782 "term_to_xml.m"
      {
#line 997 "string.opt"
        {
#line 997 "string.opt"
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__Head_5, &mercury__term_to_xml__V_5_23);
        }
#line 998 "string.opt"
        {
#line 998 "string.opt"
          mercury__string__char_list_to_lower_2_p_0(mercury__term_to_xml__V_5_23, &mercury__term_to_xml__V_6_24);
        }
#line 999 "string.opt"
        {
#line 999 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__term_to_xml__V_6_24, &mercury__term_to_xml__V_18_18);
        }
#line 783 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Head_5, mercury__term_to_xml__V_18_18) == 0);
#line 782 "term_to_xml.m"
      }
#line 787 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 785 "term_to_xml.m"
      {
#line 785 "term_to_xml.m"
        mercury__term_to_xml__First_7 = mercury__term_to_xml__Head_5;
#line 786 "term_to_xml.m"
        mercury__term_to_xml__Rest_8 = mercury__term_to_xml__Tail_6;
#line 785 "term_to_xml.m"
      }
#line 787 "term_to_xml.m"
    else
#line 788 "term_to_xml.m"
      {
#line 720 "term_to_xml.m"
        mercury__term_to_xml__First_7 = (MR_String) "Tag_";
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__Head_5, mercury__term_to_xml__Tail_6, &mercury__term_to_xml__Rest_8);
        }
#line 788 "term_to_xml.m"
      }
#line 791 "term_to_xml.m"
    mercury__term_to_xml__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 16536 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_8_36  = Length;
#line 703 "string.opt"
}
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 16556 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_49  = Length;
#line 703 "string.opt"
}
#line 242 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_36 < mercury__term_to_xml__V_17_49);
#line 245 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 244 "int.opt"
      mercury__term_to_xml__V_13_48 = mercury__term_to_xml__V_8_36;
#line 245 "int.opt"
    else
#line 246 "int.opt"
      mercury__term_to_xml__V_13_48 = mercury__term_to_xml__V_17_49;
#line 399 "string.opt"
    {
#line 399 "string.opt"
      mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(mercury__term_to_xml__Rest_8, (MR_Integer) 0, mercury__term_to_xml__V_13_48, mercury__term_to_xml__V_12_12, &mercury__term_to_xml__ElementChrs_9);
    }
#line 502 "string.opt"
    {
#line 502 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__term_to_xml__ElementChrs_9, &mercury__term_to_xml__V_13_13);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
      mercury__string__append_3_p_2(mercury__term_to_xml__First_7, mercury__term_to_xml__V_13_13, &mercury__term_to_xml__Element_4);
    }
#line 779 "term_to_xml.m"
    return mercury__term_to_xml__Element_4;
#line 779 "term_to_xml.m"
  }
#line 777 "term_to_xml.m"
}

#line 744 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
#line 744 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 744 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_4)
#line 744 "term_to_xml.m"
{
#line 749 "term_to_xml.m"
  {
#line 749 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 747 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 747 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_13_13;
#line 199 "type_desc.opt"
    MR_String mercury__term_to_xml__V_5_5;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_9 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 16641 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_13_13  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 747 "term_to_xml.m"
    {
#line 747 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_13_13);
    }
#line 749 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 748 "term_to_xml.m"
      {
#line 748 "term_to_xml.m"
        *mercury__term_to_xml__Element_4 = (MR_String) "String";
#line 748 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 748 "term_to_xml.m"
      }
#line 749 "term_to_xml.m"
    else
#line 751 "term_to_xml.m"
      {
#line 749 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 749 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_14_14;
#line 199 "type_desc.opt"
        MR_Char mercury__term_to_xml__V_6_6;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_10 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 16700 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_14_14  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 749 "term_to_xml.m"
        {
#line 749 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_14_14);
        }
#line 751 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 750 "term_to_xml.m"
          {
#line 750 "term_to_xml.m"
            *mercury__term_to_xml__Element_4 = (MR_String) "Char";
#line 750 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 750 "term_to_xml.m"
          }
#line 751 "term_to_xml.m"
        else
#line 753 "term_to_xml.m"
          {
#line 751 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 751 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_15_15;
#line 199 "type_desc.opt"
            MR_Integer mercury__term_to_xml__V_7_7;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_11 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 16759 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_15_15  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 751 "term_to_xml.m"
            {
#line 751 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_15_15);
            }
#line 753 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 752 "term_to_xml.m"
              {
#line 752 "term_to_xml.m"
                *mercury__term_to_xml__Element_4 = (MR_String) "Int";
#line 752 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 752 "term_to_xml.m"
              }
#line 753 "term_to_xml.m"
            else
#line 755 "term_to_xml.m"
              {
#line 755 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 755 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_16_16;
#line 199 "type_desc.opt"
                MR_Float mercury__term_to_xml__V_8_8;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_12 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 16818 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_16_16  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 753 "term_to_xml.m"
                {
#line 753 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_16_16);
                }
#line 755 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 755 "term_to_xml.m"
                  {
#line 754 "term_to_xml.m"
                    *mercury__term_to_xml__Element_4 = (MR_String) "Float";
#line 754 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 755 "term_to_xml.m"
                  }
#line 755 "term_to_xml.m"
              }
#line 753 "term_to_xml.m"
          }
#line 751 "term_to_xml.m"
      }
#line 749 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 749 "term_to_xml.m"
  }
#line 744 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 702 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0(
#line 702 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 702 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__2_2)
#line 702 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 705 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
      case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
#line 705 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
          case (MR_Integer) 0:
#line 705 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[21];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
          case (MR_Integer) 1:
#line 706 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[22];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
        }
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
      case (MR_Integer) 1:
#line 707 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
    }
#line 705 "term_to_xml.m"
  }
#line 702 "term_to_xml.m"
}

#line 692 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void)
#line 692 "term_to_xml.m"
{
#line 694 "term_to_xml.m"
  {
#line 694 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 694 "term_to_xml.m"
    MR_Word mercury__term_to_xml__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);

#line 694 "term_to_xml.m"
    return mercury__term_to_xml__HeadVar__1_1;
#line 694 "term_to_xml.m"
  }
#line 692 "term_to_xml.m"
}

#line 669 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
#line 669 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 669 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 669 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 669 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8)
#line 669 "term_to_xml.m"
{
#line 674 "term_to_xml.m"
  {
#line 674 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 674 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFunctorInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 683 "term_to_xml.m"
      {
#line 683 "term_to_xml.m"
        MR_String mercury__term_to_xml__PrimitiveElement_11;
#line 747 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_9_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 747 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_50_50;
#line 199 "type_desc.opt"
        MR_String mercury__term_to_xml__V_42_42;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_46 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 17060 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_50_50  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 747 "term_to_xml.m"
        {
#line 747 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_50_50);
        }
#line 749 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 748 "term_to_xml.m"
          {
#line 748 "term_to_xml.m"
            mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "String";
#line 748 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 748 "term_to_xml.m"
          }
#line 749 "term_to_xml.m"
        else
#line 751 "term_to_xml.m"
          {
#line 749 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_10_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 749 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_51_51;
#line 199 "type_desc.opt"
            MR_Char mercury__term_to_xml__V_43_43;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_47 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 17119 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_51_51  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 749 "term_to_xml.m"
            {
#line 749 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_51_51);
            }
#line 751 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 750 "term_to_xml.m"
              {
#line 750 "term_to_xml.m"
                mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Char";
#line 750 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 750 "term_to_xml.m"
              }
#line 751 "term_to_xml.m"
            else
#line 753 "term_to_xml.m"
              {
#line 751 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_11_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 751 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_52_52;
#line 199 "type_desc.opt"
                MR_Integer mercury__term_to_xml__V_44_44;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_48 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 17178 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_52_52  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 751 "term_to_xml.m"
                {
#line 751 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_52_52);
                }
#line 753 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 752 "term_to_xml.m"
                  {
#line 752 "term_to_xml.m"
                    mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Int";
#line 752 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 752 "term_to_xml.m"
                  }
#line 753 "term_to_xml.m"
                else
#line 755 "term_to_xml.m"
                  {
#line 755 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 755 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__V_53_53;
#line 199 "type_desc.opt"
                    MR_Float mercury__term_to_xml__V_45_45;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_49 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 17237 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_53_53  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 753 "term_to_xml.m"
                    {
#line 753 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_53_53);
                    }
#line 755 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 755 "term_to_xml.m"
                      {
#line 754 "term_to_xml.m"
                        mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Float";
#line 754 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = MR_TRUE;
#line 755 "term_to_xml.m"
                      }
#line 755 "term_to_xml.m"
                  }
#line 753 "term_to_xml.m"
              }
#line 751 "term_to_xml.m"
          }
#line 683 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 680 "term_to_xml.m"
          {
#line 680 "term_to_xml.m"
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__PrimitiveElement_11;
#line 681 "term_to_xml.m"
            *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
#line 680 "term_to_xml.m"
          }
#line 683 "term_to_xml.m"
        else
#line 686 "term_to_xml.m"
          {
#line 1048 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDesc_60;
#line 1048 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtor_61;
#line 1048 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgPseudoTypes_62;
#line 1048 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_63_63;
#line 1048 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_64_64;
#line 1048 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_65_65;
#line 1051 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_12_12;
#line 165 "type_desc.opt"
            MR_String mercury__term_to_xml__V_5_68;
#line 165 "type_desc.opt"
            MR_Integer mercury__term_to_xml__V_6_69;
#line 165 "type_desc.opt"
            MR_String mercury__term_to_xml__V_5_72;
#line 165 "type_desc.opt"
            MR_Integer mercury__term_to_xml__V_6_73;

#line 195 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 195 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 17315 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_60  = PseudoTypeDesc;
#line 195 "type_desc.opt"
}
#line 106 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_60 ;
		{
#line 106 "type_desc.opt"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}
#line 17347 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_61  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_62  = ArgPseudoTypeInfos;
#line 106 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1048 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
              {
#line 1051 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_62)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1051 "term_to_xml.m"
                  {
#line 1051 "term_to_xml.m"
                    mercury__term_to_xml__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_62, (MR_Integer) 0)));
#line 1051 "term_to_xml.m"
                    mercury__term_to_xml__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_62, (MR_Integer) 1)));
#line 1051 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1048 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
                      {
#line 165 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_61 ;
		{
#line 165 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 17419 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_5_68  = TypeCtorModuleName;
	 mercury__term_to_xml__V_64_64  = TypeCtorName;
	 mercury__term_to_xml__V_6_69  = TypeCtorArity;
#line 165 "type_desc.opt"
}
#line 1052 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_64_64, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
                          {
#line 165 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_61 ;
		{
#line 165 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 17475 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_65_65  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_72  = TypeCtorName;
	 mercury__term_to_xml__V_6_73  = TypeCtorArity;
#line 165 "type_desc.opt"
}
#line 1053 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_65_65, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                          }
#line 1048 "term_to_xml.m"
                      }
#line 1051 "term_to_xml.m"
                  }
#line 1048 "term_to_xml.m"
              }
#line 686 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 684 "term_to_xml.m"
              {
#line 742 "term_to_xml.m"
                *mercury__term_to_xml__Element_7 = (MR_String) "Array";
#line 694 "term_to_xml.m"
                *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 684 "term_to_xml.m"
              }
#line 686 "term_to_xml.m"
            else
#line 687 "term_to_xml.m"
              {
#line 687 "term_to_xml.m"
                *mercury__term_to_xml__Element_7 = (MR_String) "Unknown";
#line 688 "term_to_xml.m"
                {
#line 688 "term_to_xml.m"
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 687 "term_to_xml.m"
              }
#line 686 "term_to_xml.m"
          }
#line 683 "term_to_xml.m"
      }
#line 674 "term_to_xml.m"
    else
#line 674 "term_to_xml.m"
      {
#line 674 "term_to_xml.m"
        MR_String mercury__term_to_xml__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 0)));
#line 674 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 1)));
#line 736 "term_to_xml.m"
        MR_String mercury__term_to_xml__ReservedElement_23;

#line 727 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[]") == 0))
#line 728 "term_to_xml.m"
          {
#line 728 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "Nil";
#line 728 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 728 "term_to_xml.m"
          }
#line 727 "term_to_xml.m"
        else
#line 727 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "{}") == 0))
#line 729 "term_to_xml.m"
          {
#line 729 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "Tuple";
#line 729 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 729 "term_to_xml.m"
          }
#line 727 "term_to_xml.m"
        else
#line 727 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[|]") == 0))
#line 727 "term_to_xml.m"
          {
#line 727 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "List";
#line 727 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 727 "term_to_xml.m"
          }
#line 727 "term_to_xml.m"
        else
#line 727 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_FALSE;
#line 736 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 735 "term_to_xml.m"
          *mercury__term_to_xml__Element_7 = mercury__term_to_xml__ReservedElement_23;
#line 736 "term_to_xml.m"
        else
#line 737 "term_to_xml.m"
          {
#line 737 "term_to_xml.m"
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_9);
          }
#line 694 "term_to_xml.m"
        *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 674 "term_to_xml.m"
      }
#line 674 "term_to_xml.m"
  }
#line 669 "term_to_xml.m"
}

#line 641 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
#line 641 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 641 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 641 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 641 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8)
#line 641 "term_to_xml.m"
{
#line 646 "term_to_xml.m"
  {
#line 646 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 646 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFunctorInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "term_to_xml.m"
      {
#line 657 "term_to_xml.m"
        MR_String mercury__term_to_xml__PrimitiveElement_12;

#line 653 "term_to_xml.m"
        {
#line 653 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__PrimitiveElement_12);
        }
#line 657 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 654 "term_to_xml.m"
          {
#line 654 "term_to_xml.m"
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__PrimitiveElement_12;
#line 655 "term_to_xml.m"
            *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
#line 654 "term_to_xml.m"
          }
#line 657 "term_to_xml.m"
        else
#line 661 "term_to_xml.m"
          {
#line 657 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_13_13;

#line 657 "term_to_xml.m"
            {
#line 657 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__V_13_13);
            }
#line 661 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 659 "term_to_xml.m"
              {
#line 659 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_23_23;
#line 659 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_25_25;
#line 659 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_26_26;

#line 659 "term_to_xml.m"
                {
#line 659 "term_to_xml.m"
                  mercury__term_to_xml__V_26_26 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
                }
#line 659 "term_to_xml.m"
                {
#line 659 "term_to_xml.m"
                  mercury__term_to_xml__V_25_25 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_26_26);
                }
#line 159 "string.opt"
                {
#line 159 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_25_25, &mercury__term_to_xml__V_23_23);
                }
#line 159 "string.opt"
                {
#line 159 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "Array", mercury__term_to_xml__V_23_23, mercury__term_to_xml__Element_7);
                }
#line 660 "term_to_xml.m"
                {
#line 660 "term_to_xml.m"
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 659 "term_to_xml.m"
              }
#line 661 "term_to_xml.m"
            else
#line 662 "term_to_xml.m"
              {
#line 662 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_27_27;

#line 662 "term_to_xml.m"
                {
#line 662 "term_to_xml.m"
                  mercury__term_to_xml__V_27_27 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
                }
#line 662 "term_to_xml.m"
                {
#line 662 "term_to_xml.m"
                  *mercury__term_to_xml__Element_7 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_27_27);
                }
#line 663 "term_to_xml.m"
                {
#line 663 "term_to_xml.m"
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 662 "term_to_xml.m"
              }
#line 661 "term_to_xml.m"
          }
#line 657 "term_to_xml.m"
      }
#line 646 "term_to_xml.m"
    else
#line 646 "term_to_xml.m"
      {
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 0)));
#line 646 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 1)));
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__MangledElement_11;
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_28_28;
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_30_30;
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_31_31;
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_32_32;
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_34_34;
#line 646 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_35_35;
#line 736 "term_to_xml.m"
        MR_String mercury__term_to_xml__ReservedElement_38;

#line 727 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[]") == 0))
#line 728 "term_to_xml.m"
          {
#line 728 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "Nil";
#line 728 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 728 "term_to_xml.m"
          }
#line 727 "term_to_xml.m"
        else
#line 727 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "{}") == 0))
#line 729 "term_to_xml.m"
          {
#line 729 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "Tuple";
#line 729 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 729 "term_to_xml.m"
          }
#line 727 "term_to_xml.m"
        else
#line 727 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[|]") == 0))
#line 727 "term_to_xml.m"
          {
#line 727 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "List";
#line 727 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 727 "term_to_xml.m"
          }
#line 727 "term_to_xml.m"
        else
#line 727 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_FALSE;
#line 736 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 735 "term_to_xml.m"
          mercury__term_to_xml__MangledElement_11 = mercury__term_to_xml__ReservedElement_38;
#line 736 "term_to_xml.m"
        else
#line 737 "term_to_xml.m"
          {
#line 737 "term_to_xml.m"
            mercury__term_to_xml__MangledElement_11 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_9);
          }
#line 554 "string.opt"
        {
#line 554 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_10, (MR_Integer) 10, &mercury__term_to_xml__V_31_31);
        }
#line 649 "term_to_xml.m"
        {
#line 649 "term_to_xml.m"
          mercury__term_to_xml__V_35_35 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
        }
#line 649 "term_to_xml.m"
        {
#line 649 "term_to_xml.m"
          mercury__term_to_xml__V_34_34 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_35_35);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_34_34, &mercury__term_to_xml__V_32_32);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__V_31_31, mercury__term_to_xml__V_32_32, &mercury__term_to_xml__V_30_30);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_30_30, &mercury__term_to_xml__V_28_28);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__MangledElement_11, mercury__term_to_xml__V_28_28, mercury__term_to_xml__Element_7);
        }
#line 694 "term_to_xml.m"
        *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 646 "term_to_xml.m"
      }
#line 646 "term_to_xml.m"
  }
#line 641 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv4_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv3_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_7, &mercury__term_to_xml__conv3_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv2_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv1_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_7, &mercury__term_to_xml__conv1_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 587 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 587 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 587 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 587 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 587 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 587 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 587 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27)
#line 587 "term_to_xml.m"
{
#line 597 "term_to_xml.m"
  {
#line 597 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 597 "term_to_xml.m"
#line 597 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 597 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 597 "term_to_xml.m"
      case (MR_Integer) 0:
#line 597 "term_to_xml.m"
#line 597 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 597 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "term_to_xml.m"
          case (MR_Integer) 0:
#line 598 "term_to_xml.m"
            {
#line 598 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_29_29;
#line 598 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeDesc_43;
#line 199 "type_desc.opt"
              MR_Box mercury__term_to_xml__V_34_34;
#line 17954 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 17983 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 551 "term_to_xml.m"
              {
#line 551 "term_to_xml.m"
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
#line 17995 "term_to_xml.c"
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17997 "term_to_xml.c"
              {
#line 17999 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
#line 18001 "term_to_xml.c"
                return;
              }
#line 598 "term_to_xml.m"
            }
#line 597 "term_to_xml.m"
            break;
#line 597 "term_to_xml.m"
          case (MR_Integer) 1:
#line 595 "term_to_xml.m"
            {
#line 596 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "term_to_xml.m"
              *mercury__term_to_xml__STATE_VARIABLE_State_27 = mercury__term_to_xml__STATE_VARIABLE_State_0_26;
#line 595 "term_to_xml.m"
            }
#line 597 "term_to_xml.m"
            break;
#line 597 "term_to_xml.m"
        }
#line 597 "term_to_xml.m"
        break;
#line 597 "term_to_xml.m"
      case (MR_Integer) 1:
#line 602 "term_to_xml.m"
        {
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_13, (MR_Integer) 0)));
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_17;
#line 602 "term_to_xml.m"
          MR_String mercury__term_to_xml__Functor_18;
#line 602 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_19;
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeOfTerm_21;
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Request_23;
#line 602 "term_to_xml.m"
          MR_String mercury__term_to_xml__Root_24;
#line 602 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_66;
#line 602 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_67;
#line 602 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_79;
#line 604 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_20_20;
#line 199 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_35_35;
#line 1042 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_22_22;
#line 1042 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_56_56;
#line 611 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_25_25;
#line 611 "term_to_xml.m"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 611 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv7_Root_24;
#line 611 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv6_V_25_25;
#line 18064 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18066 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18068 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_12)) {
#line 705 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
            case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
              switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_12)) {
#line 705 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                case (MR_Integer) 0:
#line 705 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[19];
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
                case (MR_Integer) 1:
#line 706 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[20];
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
              }
#line 705 "term_to_xml.m"
              break;
#line 705 "term_to_xml.m"
            case (MR_Integer) 1:
#line 707 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_12, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
              break;
#line 705 "term_to_xml.m"
          }
#line 604 "term_to_xml.m"
          {
#line 604 "term_to_xml.m"
            mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_11, mercury__term_to_xml__NonCanon_10, &mercury__term_to_xml__Functor_18, &mercury__term_to_xml__Arity_19, &mercury__term_to_xml__V_20_20);
          }
#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 18138 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeOfTerm_21  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeOfTerm_21 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 18162 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_22_22  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
            {
#line 1044 "term_to_xml.m"
              mercury__term_to_xml__V_56_56 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_22_22 > mercury__term_to_xml__V_56_56);
#line 1042 "term_to_xml.m"
            }
#line 608 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 607 "term_to_xml.m"
            {
#line 607 "term_to_xml.m"
              mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 0) = ((MR_Box) (mercury__term_to_xml__Functor_18));
#line 607 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 1) = ((MR_Box) (mercury__term_to_xml__Arity_19));
#line 607 "term_to_xml.m"
            }
#line 608 "term_to_xml.m"
          else
#line 609 "term_to_xml.m"
            mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "term_to_xml.m"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_17, (MR_Integer) 1)));
#line 611 "term_to_xml.m"
          {
#line 611 "term_to_xml.m"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_17), ((MR_Box) (mercury__term_to_xml__TypeOfTerm_21)), ((MR_Box) (mercury__term_to_xml__Request_23)), &mercury__term_to_xml__conv7_Root_24, &mercury__term_to_xml__conv6_V_25_25);
          }
#line 611 "term_to_xml.m"
          mercury__term_to_xml__Root_24 = ((MR_String) mercury__term_to_xml__conv7_Root_24);
#line 611 "term_to_xml.m"
          mercury__term_to_xml__V_25_25 = ((MR_Word) mercury__term_to_xml__conv6_V_25_25);
#line 18209 "term_to_xml.c"
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18211 "term_to_xml.c"
          {
#line 18213 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
#line 18216 "term_to_xml.c"
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18218 "term_to_xml.c"
          {
#line 18220 "term_to_xml.c"
            mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Root_24)), mercury__term_to_xml__STATE_VARIABLE_State_15_66, &mercury__term_to_xml__STATE_VARIABLE_State_16_67);
          }
#line 626 "term_to_xml.m"
#line 626 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
#line 626 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 626 "term_to_xml.m"
            case (MR_Integer) 0:
#line 623 "term_to_xml.m"
              {
#line 623 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 623 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_78;
#line 18236 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18238 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18241 "term_to_xml.c"
                {
#line 18243 "term_to_xml.c"
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
#line 18246 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18248 "term_to_xml.c"
                {
#line 18250 "term_to_xml.c"
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_63)), mercury__term_to_xml__STATE_VARIABLE_State_27_78, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 623 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
            case (MR_Integer) 1:
#line 627 "term_to_xml.m"
              {
#line 627 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
#line 627 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_72;
#line 627 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_73;
#line 627 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_75;
#line 627 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_82 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18271 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18273 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18275 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18277 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18280 "term_to_xml.c"
                {
#line 18282 "term_to_xml.c"
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
#line 18285 "term_to_xml.c"
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18287 "term_to_xml.c"
                {
#line 18289 "term_to_xml.c"
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
#line 18292 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18294 "term_to_xml.c"
                {
#line 18296 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
#line 18299 "term_to_xml.c"
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18301 "term_to_xml.c"
                {
#line 18303 "term_to_xml.c"
                  mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_64)), mercury__term_to_xml__STATE_VARIABLE_State_24_75, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 627 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
            case (MR_Integer) 2:
#line 633 "term_to_xml.m"
              {
#line 633 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_69;
#line 633 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_83 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18318 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18320 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18323 "term_to_xml.c"
                {
#line 18325 "term_to_xml.c"
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
#line 18328 "term_to_xml.c"
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18330 "term_to_xml.c"
                {
#line 18332 "term_to_xml.c"
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 633 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
          }
#line 18341 "term_to_xml.c"
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18343 "term_to_xml.c"
          {
#line 18345 "term_to_xml.c"
            mercury__term_to_xml__func_18(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_79, mercury__term_to_xml__STATE_VARIABLE_State_27);
          }
#line 613 "term_to_xml.m"
          *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "term_to_xml.m"
        }
#line 597 "term_to_xml.m"
        break;
#line 597 "term_to_xml.m"
    }
#line 597 "term_to_xml.m"
  }
#line 587 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv4_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv3_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_7, &mercury__term_to_xml__conv3_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv2_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv1_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_7, &mercury__term_to_xml__conv1_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 583 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 583 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 583 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 583 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 583 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 583 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 583 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27)
#line 583 "term_to_xml.m"
{
#line 597 "term_to_xml.m"
  {
#line 597 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 597 "term_to_xml.m"
#line 597 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 597 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 597 "term_to_xml.m"
      case (MR_Integer) 0:
#line 597 "term_to_xml.m"
#line 597 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 597 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "term_to_xml.m"
          case (MR_Integer) 0:
#line 598 "term_to_xml.m"
            {
#line 598 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_29_29;
#line 598 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeDesc_43;
#line 199 "type_desc.opt"
              MR_Box mercury__term_to_xml__V_34_34;
#line 18489 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 18518 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 551 "term_to_xml.m"
              {
#line 551 "term_to_xml.m"
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
#line 18530 "term_to_xml.c"
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18532 "term_to_xml.c"
              {
#line 18534 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
#line 18536 "term_to_xml.c"
                return;
              }
#line 598 "term_to_xml.m"
            }
#line 597 "term_to_xml.m"
            break;
#line 597 "term_to_xml.m"
          case (MR_Integer) 1:
#line 595 "term_to_xml.m"
            {
#line 596 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "term_to_xml.m"
              *mercury__term_to_xml__STATE_VARIABLE_State_27 = mercury__term_to_xml__STATE_VARIABLE_State_0_26;
#line 595 "term_to_xml.m"
            }
#line 597 "term_to_xml.m"
            break;
#line 597 "term_to_xml.m"
        }
#line 597 "term_to_xml.m"
        break;
#line 597 "term_to_xml.m"
      case (MR_Integer) 1:
#line 602 "term_to_xml.m"
        {
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_13, (MR_Integer) 0)));
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_17;
#line 602 "term_to_xml.m"
          MR_String mercury__term_to_xml__Functor_18;
#line 602 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_19;
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeOfTerm_21;
#line 602 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Request_23;
#line 602 "term_to_xml.m"
          MR_String mercury__term_to_xml__Root_24;
#line 602 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_66;
#line 602 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_67;
#line 602 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_79;
#line 604 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_20_20;
#line 199 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_35_35;
#line 1042 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_22_22;
#line 1042 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_56_56;
#line 611 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_25_25;
#line 611 "term_to_xml.m"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 611 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv7_Root_24;
#line 611 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv6_V_25_25;
#line 18599 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18601 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18603 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_12)) {
#line 705 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
            case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
              switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_12)) {
#line 705 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                case (MR_Integer) 0:
#line 705 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[17];
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
                case (MR_Integer) 1:
#line 706 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[18];
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
              }
#line 705 "term_to_xml.m"
              break;
#line 705 "term_to_xml.m"
            case (MR_Integer) 1:
#line 707 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_12, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
              break;
#line 705 "term_to_xml.m"
          }
#line 604 "term_to_xml.m"
          {
#line 604 "term_to_xml.m"
            mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_11, mercury__term_to_xml__NonCanon_10, &mercury__term_to_xml__Functor_18, &mercury__term_to_xml__Arity_19, &mercury__term_to_xml__V_20_20);
          }
#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 18673 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeOfTerm_21  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 203 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeOfTerm_21 ;
		{
#line 203 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 18697 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_22_22  = Functors;
#line 203 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1042 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 1042 "term_to_xml.m"
            {
#line 1044 "term_to_xml.m"
              mercury__term_to_xml__V_56_56 = (MR_Integer) -1;
#line 1044 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_22_22 > mercury__term_to_xml__V_56_56);
#line 1042 "term_to_xml.m"
            }
#line 608 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 607 "term_to_xml.m"
            {
#line 607 "term_to_xml.m"
              mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 0) = ((MR_Box) (mercury__term_to_xml__Functor_18));
#line 607 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 1) = ((MR_Box) (mercury__term_to_xml__Arity_19));
#line 607 "term_to_xml.m"
            }
#line 608 "term_to_xml.m"
          else
#line 609 "term_to_xml.m"
            mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "term_to_xml.m"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_17, (MR_Integer) 1)));
#line 611 "term_to_xml.m"
          {
#line 611 "term_to_xml.m"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_17), ((MR_Box) (mercury__term_to_xml__TypeOfTerm_21)), ((MR_Box) (mercury__term_to_xml__Request_23)), &mercury__term_to_xml__conv7_Root_24, &mercury__term_to_xml__conv6_V_25_25);
          }
#line 611 "term_to_xml.m"
          mercury__term_to_xml__Root_24 = ((MR_String) mercury__term_to_xml__conv7_Root_24);
#line 611 "term_to_xml.m"
          mercury__term_to_xml__V_25_25 = ((MR_Word) mercury__term_to_xml__conv6_V_25_25);
#line 18744 "term_to_xml.c"
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18746 "term_to_xml.c"
          {
#line 18748 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
#line 18751 "term_to_xml.c"
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18753 "term_to_xml.c"
          {
#line 18755 "term_to_xml.c"
            mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Root_24)), mercury__term_to_xml__STATE_VARIABLE_State_15_66, &mercury__term_to_xml__STATE_VARIABLE_State_16_67);
          }
#line 626 "term_to_xml.m"
#line 626 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
#line 626 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 626 "term_to_xml.m"
            case (MR_Integer) 0:
#line 623 "term_to_xml.m"
              {
#line 623 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 623 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_78;
#line 18771 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18773 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18776 "term_to_xml.c"
                {
#line 18778 "term_to_xml.c"
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
#line 18781 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18783 "term_to_xml.c"
                {
#line 18785 "term_to_xml.c"
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_63)), mercury__term_to_xml__STATE_VARIABLE_State_27_78, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 623 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
            case (MR_Integer) 1:
#line 627 "term_to_xml.m"
              {
#line 627 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
#line 627 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_72;
#line 627 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_73;
#line 627 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_75;
#line 627 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_82 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18806 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18808 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18810 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18812 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18815 "term_to_xml.c"
                {
#line 18817 "term_to_xml.c"
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
#line 18820 "term_to_xml.c"
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18822 "term_to_xml.c"
                {
#line 18824 "term_to_xml.c"
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
#line 18827 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18829 "term_to_xml.c"
                {
#line 18831 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
#line 18834 "term_to_xml.c"
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18836 "term_to_xml.c"
                {
#line 18838 "term_to_xml.c"
                  mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_64)), mercury__term_to_xml__STATE_VARIABLE_State_24_75, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 627 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
            case (MR_Integer) 2:
#line 633 "term_to_xml.m"
              {
#line 633 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_69;
#line 633 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_83 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18853 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18855 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18858 "term_to_xml.c"
                {
#line 18860 "term_to_xml.c"
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
#line 18863 "term_to_xml.c"
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18865 "term_to_xml.c"
                {
#line 18867 "term_to_xml.c"
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 633 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
          }
#line 18876 "term_to_xml.c"
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18878 "term_to_xml.c"
          {
#line 18880 "term_to_xml.c"
            mercury__term_to_xml__func_18(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_79, mercury__term_to_xml__STATE_VARIABLE_State_27);
          }
#line 613 "term_to_xml.m"
          *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "term_to_xml.m"
        }
#line 597 "term_to_xml.m"
        break;
#line 597 "term_to_xml.m"
    }
#line 597 "term_to_xml.m"
  }
#line 583 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 453 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3(
#line 453 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 453 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 453 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 453 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 453 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 453 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 453 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 453 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 453 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 453 "term_to_xml.m"
{
#line 543 "term_to_xml.m"
  {
#line 543 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 546 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 544 "term_to_xml.m"
    {
#line 544 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
      case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
          case (MR_Integer) 0:
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[15];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
          case (MR_Integer) 1:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[16];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
        }
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
      case (MR_Integer) 1:
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
    }
#line 547 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "term_to_xml.m"
    {
#line 546 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 543 "term_to_xml.m"
  }
#line 453 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 451 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2(
#line 451 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 451 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 451 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 451 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 451 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 451 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 451 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 451 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 451 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 451 "term_to_xml.m"
{
#line 543 "term_to_xml.m"
  {
#line 543 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 546 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 544 "term_to_xml.m"
    {
#line 544 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
      case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
          case (MR_Integer) 0:
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[13];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
          case (MR_Integer) 1:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[14];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
        }
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
      case (MR_Integer) 1:
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
    }
#line 547 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "term_to_xml.m"
    {
#line 546 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 543 "term_to_xml.m"
  }
#line 451 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 449 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1(
#line 449 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 449 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 449 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 449 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 449 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 449 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 449 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 449 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 449 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 449 "term_to_xml.m"
{
#line 543 "term_to_xml.m"
  {
#line 543 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 546 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 544 "term_to_xml.m"
    {
#line 544 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
      case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
          case (MR_Integer) 0:
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[11];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
          case (MR_Integer) 1:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[12];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
        }
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
      case (MR_Integer) 1:
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
    }
#line 547 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "term_to_xml.m"
    {
#line 546 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 543 "term_to_xml.m"
  }
#line 449 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 447 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0(
#line 447 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 447 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 447 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 447 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 447 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 447 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 447 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 447 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 447 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 447 "term_to_xml.m"
{
#line 543 "term_to_xml.m"
  {
#line 543 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 543 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 546 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 544 "term_to_xml.m"
    {
#line 544 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
      case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 705 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
          case (MR_Integer) 0:
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[9];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
          case (MR_Integer) 1:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[10];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
        }
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
      case (MR_Integer) 1:
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
    }
#line 547 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "term_to_xml.m"
    {
#line 546 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 543 "term_to_xml.m"
  }
#line 447 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 429 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0(
#line 429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_47,
#line 429 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_8,
#line 429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_9,
#line 429 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_10,
#line 429 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_23,
#line 429 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_24)
#line 429 "term_to_xml.m"
{
#line 1331 "term_to_xml.m"
  {
#line 1331 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1332 "term_to_xml.m"
    {
#line 1332 "term_to_xml.m"
      *mercury__term_to_xml__DTDResult_10 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__TypeDesc_8);
    }
#line 1352 "term_to_xml.m"
#line 1352 "term_to_xml.m"
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_10)) {
#line 1352 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1352 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1352 "term_to_xml.m"
#line 1352 "term_to_xml.m"
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_10)) {
#line 1352 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1352 "term_to_xml.m"
          case (MR_Integer) 0:
#line 1334 "term_to_xml.m"
            {
#line 1334 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MakeElement_12;
#line 1349 "term_to_xml.m"
              MR_String mercury__term_to_xml__RootElement_13;
#line 1349 "term_to_xml.m"
              MR_Word mercury__term_to_xml__PseudoArgTypes_16;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_57_57;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_58_58;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_59_59;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_60_60;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_25_25;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_26_26;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_27_27;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_28_28;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_29_29;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_30_30;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_31_31;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_32_32;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_53_53;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_54_54;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_55_55;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_56_56;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_73_73;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_74_74;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_75_75;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_83_83;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_84_84;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_85_85;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_14_14;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_15_15;
#line 1337 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_17_17;

#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_9)) {
#line 705 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_9)) {
#line 705 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 705 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[7];
#line 705 "term_to_xml.m"
                      break;
#line 705 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 706 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[8];
#line 705 "term_to_xml.m"
                      break;
#line 705 "term_to_xml.m"
                  }
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
                case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_9, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
              }
#line 1338 "term_to_xml.m"
              mercury__term_to_xml__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1338 "term_to_xml.m"
              mercury__term_to_xml__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1338 "term_to_xml.m"
              {
#line 1338 "term_to_xml.m"
                mercury__term_to_xml__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, 0) = NULL;
#line 1338 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, 1) = ((MR_Box) (mercury__term_to_xml__V_30_30));
#line 1338 "term_to_xml.m"
              }
#line 1338 "term_to_xml.m"
              mercury__term_to_xml__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1338 "term_to_xml.m"
              {
#line 1338 "term_to_xml.m"
                mercury__term_to_xml__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, 0) = NULL;
#line 1338 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, 1) = ((MR_Box) (mercury__term_to_xml__V_31_31));
#line 1338 "term_to_xml.m"
              }
#line 1338 "term_to_xml.m"
              mercury__term_to_xml__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1337 "term_to_xml.m"
              {
#line 1337 "term_to_xml.m"
                mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__TypeDesc_8, &mercury__term_to_xml__V_25_25, &mercury__term_to_xml__V_53_53, &mercury__term_to_xml__V_54_54, &mercury__term_to_xml__V_28_28, &mercury__term_to_xml__V_17_17);
              }
#line 19803 "term_to_xml.c"
              mercury__term_to_xml__TypeInfo_57_57 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1363 "term_to_xml.m"
              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
                {
#line 1363 "term_to_xml.m"
                  mercury__term_to_xml__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, (MR_Integer) 0)));
#line 1363 "term_to_xml.m"
                  mercury__term_to_xml__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                  (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_74_74));
#line 1363 "term_to_xml.m"
                  mercury__term_to_xml__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                  {
#line 1363 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_57_57, mercury__term_to_xml__V_73_73, mercury__term_to_xml__V_75_75);
                  }
#line 1337 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1337 "term_to_xml.m"
                    {
#line 19828 "term_to_xml.c"
                      mercury__term_to_xml__TypeInfo_58_58 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1363 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
                        {
#line 1363 "term_to_xml.m"
                          mercury__term_to_xml__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_54_54, (MR_Integer) 0)));
#line 1363 "term_to_xml.m"
                          mercury__term_to_xml__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_54_54, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                          (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_84_84));
#line 1363 "term_to_xml.m"
                          mercury__term_to_xml__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                          {
#line 1363 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_58_58, mercury__term_to_xml__V_83_83, mercury__term_to_xml__V_85_85);
                          }
#line 1337 "term_to_xml.m"
                          if (mercury__term_to_xml__succeeded)
#line 1337 "term_to_xml.m"
                            {
#line 1338 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1338 "term_to_xml.m"
                              if (mercury__term_to_xml__succeeded)
#line 1338 "term_to_xml.m"
                                {
#line 1338 "term_to_xml.m"
                                  mercury__term_to_xml__RootElement_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_25_25, (MR_Integer) 0)));
#line 1338 "term_to_xml.m"
                                  mercury__term_to_xml__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_25_25, (MR_Integer) 1)));
#line 19863 "term_to_xml.c"
                                  mercury__term_to_xml__TypeInfo_59_59 = (MR_Word) &mercury__term_to_xml_scalar_common_1[7];
#line 1338 "term_to_xml.m"
                                  {
#line 1338 "term_to_xml.m"
                                    mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_59_59, ((MR_Box) (mercury__term_to_xml__V_29_29)), ((MR_Box) (mercury__term_to_xml__V_55_55)));
                                  }
#line 1337 "term_to_xml.m"
                                  if (mercury__term_to_xml__succeeded)
#line 1337 "term_to_xml.m"
                                    {
#line 1338 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1338 "term_to_xml.m"
                                      if (mercury__term_to_xml__succeeded)
#line 1338 "term_to_xml.m"
                                        {
#line 1338 "term_to_xml.m"
                                          mercury__term_to_xml__PseudoArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_28_28, (MR_Integer) 0)));
#line 1338 "term_to_xml.m"
                                          mercury__term_to_xml__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_28_28, (MR_Integer) 1)));
#line 19884 "term_to_xml.c"
                                          mercury__term_to_xml__TypeInfo_60_60 = (MR_Word) &mercury__term_to_xml_scalar_common_1[8];
#line 1338 "term_to_xml.m"
                                          {
#line 1338 "term_to_xml.m"
                                            mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_60_60, ((MR_Box) (mercury__term_to_xml__V_32_32)), ((MR_Box) (mercury__term_to_xml__V_56_56)));
                                          }
#line 1338 "term_to_xml.m"
                                        }
#line 1337 "term_to_xml.m"
                                    }
#line 1338 "term_to_xml.m"
                                }
#line 1337 "term_to_xml.m"
                            }
#line 1363 "term_to_xml.m"
                        }
#line 1337 "term_to_xml.m"
                    }
#line 1363 "term_to_xml.m"
                }
#line 1349 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 1341 "term_to_xml.m"
                {
#line 1341 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__ArgTypes_18;
#line 1341 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_35_35;
#line 1341 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1341 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_38_38;
#line 1341 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_39_39;
#line 1341 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_40_40;
#line 1341 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 19923 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 19925 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 19927 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 19929 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1340 "term_to_xml.m"
                  {
#line 1340 "term_to_xml.m"
                    mercury__term_to_xml__ArgTypes_18 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__PseudoArgTypes_16);
                  }
#line 19937 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19939 "term_to_xml.c"
                  {
#line 19941 "term_to_xml.c"
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_23, &mercury__term_to_xml__STATE_VARIABLE_State_35_35);
                  }
#line 19944 "term_to_xml.c"
                  mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19946 "term_to_xml.c"
                  {
#line 19948 "term_to_xml.c"
                    mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootElement_13)), mercury__term_to_xml__STATE_VARIABLE_State_35_35, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
                  }
#line 19951 "term_to_xml.c"
                  mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19953 "term_to_xml.c"
                  {
#line 19955 "term_to_xml.c"
                    mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " [\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_38_38);
                  }
#line 1345 "term_to_xml.m"
                  {
#line 1345 "term_to_xml.m"
                    mercury__term_to_xml__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "term_to_xml.m"
                    MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_39_39, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_8));
#line 1345 "term_to_xml.m"
                    MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_39_39, 1) = ((MR_Box) (mercury__term_to_xml__ArgTypes_18));
#line 1345 "term_to_xml.m"
                  }
#line 243 "tree234.opt"
                  mercury__term_to_xml__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1345 "term_to_xml.m"
                  {
#line 1345 "term_to_xml.m"
                    mercury__term_to_xml__write_dtd_types_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_47, mercury__term_to_xml__Stream_7, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_39_39, mercury__term_to_xml__V_40_40, mercury__term_to_xml__STATE_VARIABLE_State_38_38, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
                  }
#line 19975 "term_to_xml.c"
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19977 "term_to_xml.c"
                  {
#line 19979 "term_to_xml.c"
                    mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n]>")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, mercury__term_to_xml__STATE_VARIABLE_State_24);
#line 19981 "term_to_xml.c"
                    return;
                  }
#line 1341 "term_to_xml.m"
                }
#line 1349 "term_to_xml.m"
              else
#line 1350 "term_to_xml.m"
                {
#line 1350 "term_to_xml.m"
                  {
#line 1350 "term_to_xml.m"
                    mercury__require__unexpected_3_p_0((MR_String) "term_to_xml", (MR_String) "predicate \140term_to_xml.write_dtd_from_type\'/6", (MR_String) "not ok to generate DTD");
#line 1350 "term_to_xml.m"
                    return;
                  }
#line 1350 "term_to_xml.m"
                }
#line 1334 "term_to_xml.m"
            }
#line 1352 "term_to_xml.m"
            break;
#line 1352 "term_to_xml.m"
          case (MR_Integer) 1:
#line 1353 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1352 "term_to_xml.m"
            break;
#line 1352 "term_to_xml.m"
        }
#line 1352 "term_to_xml.m"
        break;
#line 1352 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1354 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1352 "term_to_xml.m"
        break;
#line 1352 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1355 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1352 "term_to_xml.m"
        break;
#line 1352 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1356 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1352 "term_to_xml.m"
        break;
#line 1352 "term_to_xml.m"
    }
#line 1331 "term_to_xml.m"
  }
#line 429 "term_to_xml.m"
}

#line 416 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_dtd_6_p_0(
#line 416 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_17,
#line 416 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_16,
#line 416 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 416 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_9,
#line 416 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_10,
#line 416 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_13,
#line 416 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_14)
#line 416 "term_to_xml.m"
{
#line 549 "term_to_xml.m"
  {
#line 549 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 549 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_12;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_17 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 20090 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_12  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 551 "term_to_xml.m"
    {
#line 551 "term_to_xml.m"
      mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_16, mercury__term_to_xml__Stream_7, mercury__term_to_xml__TypeDesc_12, mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__DTDResult_10, mercury__term_to_xml__STATE_VARIABLE_State_0_13, mercury__term_to_xml__STATE_VARIABLE_State_14);
#line 551 "term_to_xml.m"
      return;
    }
#line 549 "term_to_xml.m"
  }
#line 416 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 405 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0(
#line 405 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_4,
#line 405 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5)
#line 405 "term_to_xml.m"
{
#line 1360 "term_to_xml.m"
  {
#line 1360 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1360 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Result_6;
#line 1360 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_7;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_36_36;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_37_37;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_38_38;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_39_39;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_40_40;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_14_14;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_15_15;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_17_17;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_18_18;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_20_20;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_21_21;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_22_22;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_31_31;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_32_32;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_33_33;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_34_34;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_35_35;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_53_53;
#line 1363 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_54_54;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_55_55;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_63_63;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_64_64;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_65_65;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_73_73;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_74_74;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_75_75;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_83_83;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_84_84;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_85_85;
#line 1363 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_8_8;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_9_9;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11;
#line 1363 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;

#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_4)) {
#line 705 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
      case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_4)) {
#line 705 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
          case (MR_Integer) 0:
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[5];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
          case (MR_Integer) 1:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[6];
#line 705 "term_to_xml.m"
            break;
#line 705 "term_to_xml.m"
        }
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
      case (MR_Integer) 1:
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_4, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
        break;
#line 705 "term_to_xml.m"
    }
#line 1363 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1363 "term_to_xml.m"
    {
#line 1363 "term_to_xml.m"
      mercury__term_to_xml__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, 0) = NULL;
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, 1) = ((MR_Box) (mercury__term_to_xml__V_19_19));
#line 1363 "term_to_xml.m"
    }
#line 1363 "term_to_xml.m"
    mercury__term_to_xml__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1363 "term_to_xml.m"
    {
#line 1363 "term_to_xml.m"
      mercury__term_to_xml__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, 0) = NULL;
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, 1) = ((MR_Box) (mercury__term_to_xml__V_20_20));
#line 1363 "term_to_xml.m"
    }
#line 1363 "term_to_xml.m"
    mercury__term_to_xml__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1363 "term_to_xml.m"
    {
#line 1363 "term_to_xml.m"
      mercury__term_to_xml__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, 0) = NULL;
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, 1) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1363 "term_to_xml.m"
    }
#line 1363 "term_to_xml.m"
    mercury__term_to_xml__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1363 "term_to_xml.m"
    {
#line 1363 "term_to_xml.m"
      mercury__term_to_xml__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, 0) = NULL;
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, 1) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1363 "term_to_xml.m"
    }
#line 1363 "term_to_xml.m"
    mercury__term_to_xml__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1363 "term_to_xml.m"
    {
#line 1363 "term_to_xml.m"
      mercury__term_to_xml__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_18_18, 0) = NULL;
#line 1363 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_18_18, 1) = ((MR_Box) (mercury__term_to_xml__V_23_23));
#line 1363 "term_to_xml.m"
    }
#line 1363 "term_to_xml.m"
    {
#line 1363 "term_to_xml.m"
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__V_31_31, &mercury__term_to_xml__V_32_32, &mercury__term_to_xml__V_33_33, &mercury__term_to_xml__V_34_34, &mercury__term_to_xml__V_35_35);
    }
#line 20378 "term_to_xml.c"
    mercury__term_to_xml__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1363 "term_to_xml.m"
    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
      {
#line 1363 "term_to_xml.m"
        mercury__term_to_xml__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_31_31, (MR_Integer) 0)));
#line 1363 "term_to_xml.m"
        mercury__term_to_xml__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_31_31, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_54_54));
#line 1363 "term_to_xml.m"
        mercury__term_to_xml__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
        {
#line 1363 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeCtorInfo_36_36, mercury__term_to_xml__V_53_53, mercury__term_to_xml__V_55_55);
        }
#line 1363 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
          {
#line 20403 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_37_37 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1363 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
              {
#line 1363 "term_to_xml.m"
                mercury__term_to_xml__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_32_32, (MR_Integer) 0)));
#line 1363 "term_to_xml.m"
                mercury__term_to_xml__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_32_32, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_64_64));
#line 1363 "term_to_xml.m"
                mercury__term_to_xml__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                {
#line 1363 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_37_37, mercury__term_to_xml__V_63_63, mercury__term_to_xml__V_65_65);
                }
#line 1363 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
                  {
#line 20428 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_38_38 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1363 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
                      {
#line 1363 "term_to_xml.m"
                        mercury__term_to_xml__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_33_33, (MR_Integer) 0)));
#line 1363 "term_to_xml.m"
                        mercury__term_to_xml__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_33_33, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_74_74));
#line 1363 "term_to_xml.m"
                        mercury__term_to_xml__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                        {
#line 1363 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_38_38, mercury__term_to_xml__V_73_73, mercury__term_to_xml__V_75_75);
                        }
#line 1363 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
                          {
#line 20453 "term_to_xml.c"
                            mercury__term_to_xml__TypeInfo_39_39 = (MR_Word) &mercury__term_to_xml_scalar_common_1[0];
#line 1363 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                            if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
                              {
#line 1363 "term_to_xml.m"
                                mercury__term_to_xml__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_34_34, (MR_Integer) 0)));
#line 1363 "term_to_xml.m"
                                mercury__term_to_xml__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_34_34, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_84_84));
#line 1363 "term_to_xml.m"
                                mercury__term_to_xml__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, (MR_Integer) 1)));
#line 1363 "term_to_xml.m"
                                {
#line 1363 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_39_39, mercury__term_to_xml__V_83_83, mercury__term_to_xml__V_85_85);
                                }
#line 1363 "term_to_xml.m"
                                if (mercury__term_to_xml__succeeded)
#line 1363 "term_to_xml.m"
                                  {
#line 20478 "term_to_xml.c"
                                    mercury__term_to_xml__TypeInfo_40_40 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
#line 1363 "term_to_xml.m"
                                    {
#line 1363 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____list__list_1_1(mercury__term_to_xml__TypeInfo_40_40, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_35_35);
                                    }
#line 1363 "term_to_xml.m"
                                  }
#line 1363 "term_to_xml.m"
                              }
#line 1363 "term_to_xml.m"
                          }
#line 1363 "term_to_xml.m"
                      }
#line 1363 "term_to_xml.m"
                  }
#line 1363 "term_to_xml.m"
              }
#line 1363 "term_to_xml.m"
          }
#line 1363 "term_to_xml.m"
      }
#line 1368 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1365 "term_to_xml.m"
      {
#line 1365 "term_to_xml.m"
        MR_Word mercury__term_to_xml__PseudoTypeDesc_13;
#line 1365 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_24_24;
#line 1365 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_25_25;
#line 1365 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_26_26;
#line 1365 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_27_27;

#line 195 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_2_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 195 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 20529 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_13  = PseudoTypeDesc;
#line 195 "type_desc.opt"
}
#line 1366 "term_to_xml.m"
        mercury__term_to_xml__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1366 "term_to_xml.m"
        {
#line 1366 "term_to_xml.m"
          mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_24_24, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_13));
#line 1366 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_24_24, 1) = ((MR_Box) (mercury__term_to_xml__V_25_25));
#line 1366 "term_to_xml.m"
        }
#line 243 "tree234.opt"
        mercury__term_to_xml__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "tree234.opt"
        mercury__term_to_xml__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1366 "term_to_xml.m"
        {
#line 1366 "term_to_xml.m"
          return mercury__term_to_xml__Result_6 = mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27);
        }
#line 1365 "term_to_xml.m"
      }
#line 1368 "term_to_xml.m"
    else
#line 1369 "term_to_xml.m"
      mercury__term_to_xml__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1360 "term_to_xml.m"
    return mercury__term_to_xml__Result_6;
#line 1360 "term_to_xml.m"
  }
#line 405 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv8_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv7_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_7, &mercury__term_to_xml__conv7_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv6_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv5_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_7, &mercury__term_to_xml__conv5_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 392 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(
#line 392 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 392 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 392 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 392 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_10,
#line 392 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_11,
#line 392 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeStyleSheet_12,
#line 392 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 392 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 392 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_21,
#line 392 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_22)
#line 392 "term_to_xml.m"
{
#line 524 "term_to_xml.m"
  {
#line 524 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 524 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 199 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_34_34;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 20706 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 1375 "term_to_xml.m"
#line 1375 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 1375 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1375 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1375 "term_to_xml.m"
#line 1375 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 1375 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1375 "term_to_xml.m"
          case (MR_Integer) 0:
#line 1378 "term_to_xml.m"
            {
#line 1378 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__V_23_23);
            }
#line 1375 "term_to_xml.m"
            break;
#line 1375 "term_to_xml.m"
          case (MR_Integer) 1:
#line 1375 "term_to_xml.m"
            *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "term_to_xml.m"
            break;
#line 1375 "term_to_xml.m"
        }
#line 1375 "term_to_xml.m"
        break;
#line 1375 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1376 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "term_to_xml.m"
        break;
#line 1375 "term_to_xml.m"
    }
#line 534 "term_to_xml.m"
#line 534 "term_to_xml.m"
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) {
#line 534 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 534 "term_to_xml.m"
      case (MR_Integer) 0:
#line 534 "term_to_xml.m"
#line 534 "term_to_xml.m"
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_14)) {
#line 534 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 534 "term_to_xml.m"
          case (MR_Integer) 0:
#line 527 "term_to_xml.m"
            {
#line 527 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 527 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
#line 527 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 527 "term_to_xml.m"
              MR_Word mercury__term_to_xml__Univ_65;
#line 527 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MakeElement_66;
#line 527 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_68_68;
#line 530 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_16_16;
#line 546 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_67_67;

#line 528 "term_to_xml.m"
              {
#line 528 "term_to_xml.m"
                mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__V_24_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
              }
#line 570 "term_to_xml.m"
              if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "term_to_xml.m"
                mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 570 "term_to_xml.m"
              else
#line 572 "term_to_xml.m"
                {
#line 572 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
#line 572 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_50;
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_51;
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
#line 20812 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20814 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20816 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20818 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20820 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20823 "term_to_xml.c"
                  {
#line 20825 "term_to_xml.c"
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
#line 20828 "term_to_xml.c"
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20830 "term_to_xml.c"
                  {
#line 20832 "term_to_xml.c"
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
#line 20835 "term_to_xml.c"
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20837 "term_to_xml.c"
                  {
#line 20839 "term_to_xml.c"
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
#line 20842 "term_to_xml.c"
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20844 "term_to_xml.c"
                  {
#line 20846 "term_to_xml.c"
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
#line 20849 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20851 "term_to_xml.c"
                  {
#line 20853 "term_to_xml.c"
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
                  }
#line 572 "term_to_xml.m"
                }
#line 530 "term_to_xml.m"
              {
#line 530 "term_to_xml.m"
                mercury__term_to_xml__write_doctype_8_p_2(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
#line 544 "term_to_xml.m"
              {
#line 544 "term_to_xml.m"
                mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_65);
              }
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_11)) {
#line 705 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_11)) {
#line 705 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 705 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[3];
#line 705 "term_to_xml.m"
                      break;
#line 705 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 706 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[4];
#line 705 "term_to_xml.m"
                      break;
#line 705 "term_to_xml.m"
                  }
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
                case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
              }
#line 547 "term_to_xml.m"
              mercury__term_to_xml__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "term_to_xml.m"
              {
#line 546 "term_to_xml.m"
                mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_66, (MR_Integer) 0, mercury__term_to_xml__Univ_65, mercury__term_to_xml__V_68_68, &mercury__term_to_xml__V_67_67, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
              }
#line 527 "term_to_xml.m"
            }
#line 534 "term_to_xml.m"
            break;
#line 534 "term_to_xml.m"
          case (MR_Integer) 1:
#line 535 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 534 "term_to_xml.m"
            break;
#line 534 "term_to_xml.m"
        }
#line 534 "term_to_xml.m"
        break;
#line 534 "term_to_xml.m"
      case (MR_Integer) 1:
#line 536 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 534 "term_to_xml.m"
        break;
#line 534 "term_to_xml.m"
      case (MR_Integer) 2:
#line 537 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 534 "term_to_xml.m"
        break;
#line 534 "term_to_xml.m"
      case (MR_Integer) 3:
#line 538 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 534 "term_to_xml.m"
        break;
#line 534 "term_to_xml.m"
    }
#line 524 "term_to_xml.m"
  }
#line 392 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 706 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 706 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 706 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 706 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv8_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv7_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_7, &mercury__term_to_xml__conv7_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 705 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 705 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 705 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 705 "term_to_xml.m"
{
#line 705 "term_to_xml.m"
  {
#line 705 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 705 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv6_Element_7;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv5_AttrFromSources_8;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_7, &mercury__term_to_xml__conv5_AttrFromSources_8);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_7));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_AttrFromSources_8));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 374 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0(
#line 374 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 374 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 374 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 374 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_10,
#line 374 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_11,
#line 374 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeStyleSheet_12,
#line 374 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 374 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 374 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_21,
#line 374 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_22)
#line 374 "term_to_xml.m"
{
#line 505 "term_to_xml.m"
  {
#line 505 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 505 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 199 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_34_34;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 199 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 21086 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 1375 "term_to_xml.m"
#line 1375 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 1375 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1375 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1375 "term_to_xml.m"
#line 1375 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 1375 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1375 "term_to_xml.m"
          case (MR_Integer) 0:
#line 1378 "term_to_xml.m"
            {
#line 1378 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__V_23_23);
            }
#line 1375 "term_to_xml.m"
            break;
#line 1375 "term_to_xml.m"
          case (MR_Integer) 1:
#line 1375 "term_to_xml.m"
            *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "term_to_xml.m"
            break;
#line 1375 "term_to_xml.m"
        }
#line 1375 "term_to_xml.m"
        break;
#line 1375 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1376 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "term_to_xml.m"
        break;
#line 1375 "term_to_xml.m"
    }
#line 515 "term_to_xml.m"
#line 515 "term_to_xml.m"
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) {
#line 515 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 515 "term_to_xml.m"
      case (MR_Integer) 0:
#line 515 "term_to_xml.m"
#line 515 "term_to_xml.m"
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_14)) {
#line 515 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 515 "term_to_xml.m"
          case (MR_Integer) 0:
#line 508 "term_to_xml.m"
            {
#line 508 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 508 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
#line 508 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 508 "term_to_xml.m"
              MR_Word mercury__term_to_xml__Univ_65;
#line 508 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MakeElement_66;
#line 508 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_68_68;
#line 511 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_16_16;
#line 546 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_67_67;

#line 509 "term_to_xml.m"
              {
#line 509 "term_to_xml.m"
                mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__V_24_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
              }
#line 570 "term_to_xml.m"
              if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "term_to_xml.m"
                mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 570 "term_to_xml.m"
              else
#line 572 "term_to_xml.m"
                {
#line 572 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
#line 572 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_50;
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_51;
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 572 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
#line 21192 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21194 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21196 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21198 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21200 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21203 "term_to_xml.c"
                  {
#line 21205 "term_to_xml.c"
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
#line 21208 "term_to_xml.c"
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21210 "term_to_xml.c"
                  {
#line 21212 "term_to_xml.c"
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
#line 21215 "term_to_xml.c"
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21217 "term_to_xml.c"
                  {
#line 21219 "term_to_xml.c"
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
#line 21222 "term_to_xml.c"
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21224 "term_to_xml.c"
                  {
#line 21226 "term_to_xml.c"
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
#line 21229 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21231 "term_to_xml.c"
                  {
#line 21233 "term_to_xml.c"
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
                  }
#line 572 "term_to_xml.m"
                }
#line 511 "term_to_xml.m"
              {
#line 511 "term_to_xml.m"
                mercury__term_to_xml__write_doctype_8_p_0(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
#line 544 "term_to_xml.m"
              {
#line 544 "term_to_xml.m"
                mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_65);
              }
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_11)) {
#line 705 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                case (MR_Integer) 0:
#line 705 "term_to_xml.m"
#line 705 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_11)) {
#line 705 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 705 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 705 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[1];
#line 705 "term_to_xml.m"
                      break;
#line 705 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 706 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[2];
#line 705 "term_to_xml.m"
                      break;
#line 705 "term_to_xml.m"
                  }
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
                case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
                  break;
#line 705 "term_to_xml.m"
              }
#line 547 "term_to_xml.m"
              mercury__term_to_xml__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "term_to_xml.m"
              {
#line 546 "term_to_xml.m"
                mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_66, (MR_Integer) 0, mercury__term_to_xml__Univ_65, mercury__term_to_xml__V_68_68, &mercury__term_to_xml__V_67_67, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
              }
#line 508 "term_to_xml.m"
            }
#line 515 "term_to_xml.m"
            break;
#line 515 "term_to_xml.m"
          case (MR_Integer) 1:
#line 516 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 515 "term_to_xml.m"
            break;
#line 515 "term_to_xml.m"
        }
#line 515 "term_to_xml.m"
        break;
#line 515 "term_to_xml.m"
      case (MR_Integer) 1:
#line 517 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 515 "term_to_xml.m"
        break;
#line 515 "term_to_xml.m"
      case (MR_Integer) 2:
#line 518 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 515 "term_to_xml.m"
        break;
#line 515 "term_to_xml.m"
      case (MR_Integer) 3:
#line 519 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 515 "term_to_xml.m"
        break;
#line 515 "term_to_xml.m"
    }
#line 505 "term_to_xml.m"
  }
#line 374 "term_to_xml.m"
}

#line 197 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_header_4_p_0(
#line 197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 197 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeEncoding_6,
#line 197 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 197 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 197 "term_to_xml.m"
{
#line 553 "term_to_xml.m"
  {
#line 553 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 553 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 21351 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 21354 "term_to_xml.c"
    {
#line 21356 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "<\?xml version=\"1.0\"")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 560 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeEncoding_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "term_to_xml.m"
      {
#line 21363 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 21366 "term_to_xml.c"
        {
#line 21368 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 21370 "term_to_xml.c"
          return;
        }
#line 561 "term_to_xml.m"
      }
#line 560 "term_to_xml.m"
    else
#line 556 "term_to_xml.m"
      {
#line 556 "term_to_xml.m"
        MR_String mercury__term_to_xml__Encoding_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeEncoding_6, (MR_Integer) 0)));
#line 556 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 556 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_17;
#line 21385 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21387 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21389 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21392 "term_to_xml.c"
        {
#line 21394 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " encoding=\"")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
        }
#line 21397 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21399 "term_to_xml.c"
        {
#line 21401 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Encoding_8)), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_17_17);
        }
#line 21404 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21406 "term_to_xml.c"
        {
#line 21408 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_17, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 21410 "term_to_xml.c"
          return;
        }
#line 556 "term_to_xml.m"
      }
#line 553 "term_to_xml.m"
  }
#line 197 "term_to_xml.m"
}

#line 186 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_5_p_0(
#line 186 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_18,
#line 186 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 186 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 186 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_7,
#line 186 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_8,
#line 186 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_15,
#line 186 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_16)
#line 186 "term_to_xml.m"
{
#line 494 "term_to_xml.m"
  {
#line 494 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 494 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Root_10;
#line 494 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Children_13;
#line 494 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ChildrenFormat_14;
#line 21449 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21451 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_Root_10;
#line 496 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_11_11;
#line 496 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;

#line 21458 "term_to_xml.c"
    {
#line 21460 "term_to_xml.c"
      mercury__term_to_xml__conv1_Root_10 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_18), mercury__term_to_xml__Term_8);
    }
#line 21463 "term_to_xml.c"
    mercury__term_to_xml__Root_10 = ((MR_Word) mercury__term_to_xml__conv1_Root_10);
#line 496 "term_to_xml.m"
    mercury__term_to_xml__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 0)));
#line 496 "term_to_xml.m"
    mercury__term_to_xml__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 1)));
#line 496 "term_to_xml.m"
    mercury__term_to_xml__Children_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 2)));
#line 497 "term_to_xml.m"
    {
#line 497 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_13);
    }
#line 499 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 498 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 1;
#line 499 "term_to_xml.m"
    else
#line 500 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 0;
#line 502 "term_to_xml.m"
    {
#line 502 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__ChildrenFormat_14, mercury__term_to_xml__Indent_7, mercury__term_to_xml__Root_10, mercury__term_to_xml__STATE_VARIABLE_State_0_15, mercury__term_to_xml__STATE_VARIABLE_State_16);
#line 502 "term_to_xml.m"
      return;
    }
#line 494 "term_to_xml.m"
  }
#line 186 "term_to_xml.m"
}

#line 175 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(
#line 175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_26,
#line 175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 175 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 175 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_8,
#line 175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeStyleSheet_9,
#line 175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_10,
#line 175 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_18,
#line 175 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_19)
#line 175 "term_to_xml.m"
{
#line 476 "term_to_xml.m"
  {
#line 476 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 476 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Root_12;
#line 476 "term_to_xml.m"
    MR_String mercury__term_to_xml__RootName_13;
#line 476 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Children_15;
#line 476 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ChildrenFormat_17;
#line 476 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 476 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 476 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_23;
#line 21537 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box);
#line 21539 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv6_Root_12;
#line 480 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_14_14;

#line 477 "term_to_xml.m"
    {
#line 477 "term_to_xml.m"
      mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__V_20_20, mercury__term_to_xml__STATE_VARIABLE_State_0_18, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 570 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeStyleSheet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "term_to_xml.m"
      mercury__term_to_xml__STATE_VARIABLE_State_22_22 = mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 570 "term_to_xml.m"
    else
#line 572 "term_to_xml.m"
      {
#line 572 "term_to_xml.m"
        MR_String mercury__term_to_xml__Type_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 0)));
#line 572 "term_to_xml.m"
        MR_String mercury__term_to_xml__Href_34 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 1)));
#line 572 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_36;
#line 572 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_37;
#line 572 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_39;
#line 572 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_40;
#line 21569 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21571 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21573 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21575 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21577 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21580 "term_to_xml.c"
        {
#line 21582 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_13_36);
        }
#line 21585 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21587 "term_to_xml.c"
        {
#line 21589 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Type_33)), mercury__term_to_xml__STATE_VARIABLE_State_13_36, &mercury__term_to_xml__STATE_VARIABLE_State_14_37);
        }
#line 21592 "term_to_xml.c"
        mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21594 "term_to_xml.c"
        {
#line 21596 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_37, &mercury__term_to_xml__STATE_VARIABLE_State_16_39);
        }
#line 21599 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21601 "term_to_xml.c"
        {
#line 21603 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Href_34)), mercury__term_to_xml__STATE_VARIABLE_State_16_39, &mercury__term_to_xml__STATE_VARIABLE_State_17_40);
        }
#line 21606 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21608 "term_to_xml.c"
        {
#line 21610 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_40, &mercury__term_to_xml__STATE_VARIABLE_State_22_22);
        }
#line 572 "term_to_xml.m"
      }
#line 21615 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21617 "term_to_xml.c"
    {
#line 21619 "term_to_xml.c"
      mercury__term_to_xml__conv6_Root_12 = mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_26), mercury__term_to_xml__Term_8);
    }
#line 21622 "term_to_xml.c"
    mercury__term_to_xml__Root_12 = ((MR_Word) mercury__term_to_xml__conv6_Root_12);
#line 480 "term_to_xml.m"
    mercury__term_to_xml__RootName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 0)));
#line 480 "term_to_xml.m"
    mercury__term_to_xml__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 1)));
#line 480 "term_to_xml.m"
    mercury__term_to_xml__Children_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 2)));
#line 483 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeDTD_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 482 "term_to_xml.m"
      mercury__term_to_xml__STATE_VARIABLE_State_23_23 = mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 483 "term_to_xml.m"
    else
#line 484 "term_to_xml.m"
      {
#line 484 "term_to_xml.m"
        MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_10, (MR_Integer) 0)));
#line 484 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_52;
#line 484 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 484 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_65;
#line 21646 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21648 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21650 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21653 "term_to_xml.c"
        {
#line 21655 "term_to_xml.c"
          mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_22_22, &mercury__term_to_xml__STATE_VARIABLE_State_15_52);
        }
#line 21658 "term_to_xml.c"
        mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21660 "term_to_xml.c"
        {
#line 21662 "term_to_xml.c"
          mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootName_13)), mercury__term_to_xml__STATE_VARIABLE_State_15_52, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
        }
#line 626 "term_to_xml.m"
#line 626 "term_to_xml.m"
        switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
#line 626 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 626 "term_to_xml.m"
          case (MR_Integer) 0:
#line 623 "term_to_xml.m"
            {
#line 623 "term_to_xml.m"
              MR_String mercury__term_to_xml__PUBLIC_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 623 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_64;
#line 21678 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21680 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21683 "term_to_xml.c"
              {
#line 21685 "term_to_xml.c"
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_27_64);
              }
#line 21688 "term_to_xml.c"
              mercury__term_to_xml__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21690 "term_to_xml.c"
              {
#line 21692 "term_to_xml.c"
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_49)), mercury__term_to_xml__STATE_VARIABLE_State_27_64, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
#line 623 "term_to_xml.m"
            }
#line 626 "term_to_xml.m"
            break;
#line 626 "term_to_xml.m"
          case (MR_Integer) 1:
#line 627 "term_to_xml.m"
            {
#line 627 "term_to_xml.m"
              MR_String mercury__term_to_xml__SYSTEM_50 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
#line 627 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_58;
#line 627 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_59;
#line 627 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_61;
#line 627 "term_to_xml.m"
              MR_String mercury__term_to_xml__PUBLIC_68 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 21713 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21715 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21717 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21719 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21722 "term_to_xml.c"
              {
#line 21724 "term_to_xml.c"
                mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_21_58);
              }
#line 21727 "term_to_xml.c"
              mercury__term_to_xml__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21729 "term_to_xml.c"
              {
#line 21731 "term_to_xml.c"
                mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_68)), mercury__term_to_xml__STATE_VARIABLE_State_21_58, &mercury__term_to_xml__STATE_VARIABLE_State_22_59);
              }
#line 21734 "term_to_xml.c"
              mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21736 "term_to_xml.c"
              {
#line 21738 "term_to_xml.c"
                mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_59, &mercury__term_to_xml__STATE_VARIABLE_State_24_61);
              }
#line 21741 "term_to_xml.c"
              mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21743 "term_to_xml.c"
              {
#line 21745 "term_to_xml.c"
                mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_50)), mercury__term_to_xml__STATE_VARIABLE_State_24_61, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
#line 627 "term_to_xml.m"
            }
#line 626 "term_to_xml.m"
            break;
#line 626 "term_to_xml.m"
          case (MR_Integer) 2:
#line 633 "term_to_xml.m"
            {
#line 633 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_55;
#line 633 "term_to_xml.m"
              MR_String mercury__term_to_xml__SYSTEM_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 21760 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21762 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21765 "term_to_xml.c"
              {
#line 21767 "term_to_xml.c"
                mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_18_55);
              }
#line 21770 "term_to_xml.c"
              mercury__term_to_xml__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21772 "term_to_xml.c"
              {
#line 21774 "term_to_xml.c"
                mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_69)), mercury__term_to_xml__STATE_VARIABLE_State_18_55, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
#line 633 "term_to_xml.m"
            }
#line 626 "term_to_xml.m"
            break;
#line 626 "term_to_xml.m"
        }
#line 21783 "term_to_xml.c"
        mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21785 "term_to_xml.c"
        {
#line 21787 "term_to_xml.c"
          mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_65, &mercury__term_to_xml__STATE_VARIABLE_State_23_23);
        }
#line 484 "term_to_xml.m"
      }
#line 487 "term_to_xml.m"
    {
#line 487 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_15);
    }
#line 489 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 488 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 1;
#line 489 "term_to_xml.m"
    else
#line 490 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
#line 492 "term_to_xml.m"
    {
#line 492 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, (MR_Integer) 0, mercury__term_to_xml__Root_12, mercury__term_to_xml__STATE_VARIABLE_State_23_23, mercury__term_to_xml__STATE_VARIABLE_State_19);
#line 492 "term_to_xml.m"
      return;
    }
#line 476 "term_to_xml.m"
  }
#line 175 "term_to_xml.m"
}

#line 163 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_4_p_0(
#line 163 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_13,
#line 163 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 163 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 163 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_6,
#line 163 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 163 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 163 "term_to_xml.m"
{
#line 473 "term_to_xml.m"
  {
#line 473 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 473 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 473 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 474 "term_to_xml.m"
    {
#line 474 "term_to_xml.m"
      mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(mercury__term_to_xml__TypeClassInfo_for_xmlable_13, mercury__term_to_xml__TypeClassInfo_for_writer_14, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Term_6, mercury__term_to_xml__V_10_10, mercury__term_to_xml__V_11_11, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 474 "term_to_xml.m"
      return;
    }
#line 473 "term_to_xml.m"
  }
#line 163 "term_to_xml.m"
}

#line 69 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__to_xml_1_f_0(
#line 69 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_3,
#line 69 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1)
#line 69 "term_to_xml.m"
{
#line 21864 "term_to_xml.c"
  {
#line 21866 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;
#line 21868 "term_to_xml.c"
    MR_Word mercury__term_to_xml__HeadVar__2_2;
#line 21870 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21872 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_HeadVar__2_2;

#line 21875 "term_to_xml.c"
    {
#line 21877 "term_to_xml.c"
      mercury__term_to_xml__conv1_HeadVar__2_2 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_3), mercury__term_to_xml__HeadVar__1_1);
    }
#line 21880 "term_to_xml.c"
    mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) mercury__term_to_xml__conv1_HeadVar__2_2);
#line 21882 "term_to_xml.c"
    return mercury__term_to_xml__HeadVar__2_2;
#line 21884 "term_to_xml.c"
  }
#line 69 "term_to_xml.m"
}

void mercury__term_to_xml__init(void)
{
}

void mercury__term_to_xml__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_dtd_generation_result_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_element_mapping_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_element_pred_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_dtd_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_format_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_stylesheet_0);
	MR_register_type_ctor_info(&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0);
}

void mercury__term_to_xml__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module term_to_xml. */
