/*
** Automatically generated from `term_to_xml.m'
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

#line 468 "string.int0"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
#line 468 "string.int0"
  MR_Word mercury__term_to_xml__V_17_17,
#line 468 "string.int0"
  MR_Box mercury__term_to_xml__V_18_18,
#line 468 "string.int0"
  MR_String mercury__term_to_xml__String_8_8,
#line 468 "string.int0"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 468 "string.int0"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 468 "string.int0"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 468 "string.int0"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12);

#line 318 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 318 "list.int"
  MR_Word mercury__term_to_xml__V_17_17,
#line 318 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 318 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4);

#line 359 "list.int"
static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
#line 359 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 359 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 359 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 359 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 359 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__5_5);

#line 128 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_18_18,
#line 128 "list.int"
  MR_Integer mercury__term_to_xml__V_19_19,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 128 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 140 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 140 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 140 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 140 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 140 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 140 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 140 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 140 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 149 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 149 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 149 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 149 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 149 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 149 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 149 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 149 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 149 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 149 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 128 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 128 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_13_13,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_14_14,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_15_15,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 93 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
#line 93 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 93 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 93 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 128 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 128 "list.int"
  MR_String mercury__term_to_xml__V_18_18,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_19_19,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_21_21,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 128 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 469 "string.int0"
static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
#line 469 "string.int0"
  MR_String mercury__term_to_xml__String_8_8,
#line 469 "string.int0"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 469 "string.int0"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 469 "string.int0"
  MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 469 "string.int0"
  MR_Word * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 427 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
#line 427 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 427 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3);

#line 99 "list.int"
static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
#line 99 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 99 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 1364 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
#line 1364 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
#line 1364 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1364 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 1632 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
#line 1632 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_4,
#line 1632 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5);

#line 1547 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
#line 1547 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__4_4,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArityList_6,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttributeListList_8,
#line 1547 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1547 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

#line 1518 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1518 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1518 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_13,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1518 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1518 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17);

#line 1485 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1485 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1485 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_12,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_13,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__6_6,
#line 1485 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1485 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20);

#line 1439 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
#line 1439 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AlreadyDone_4,
#line 1439 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
#line 1439 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6);

#line 1387 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_1,
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Done_3,
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementsSoFar_4);

#line 1309 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
#line 1309 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 1309 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1309 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_6,
#line 1309 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1309 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

#line 1303 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
#line 1303 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
#line 1303 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1303 "term_to_xml.m"
  MR_String mercury__term_to_xml__Str_6,
#line 1303 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1303 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9);

#line 1073 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
#line 1073 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_6,
#line 1073 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1073 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_9,
#line 1073 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_10,
#line 1073 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11);

#line 1047 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
#line 1047 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1047 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgPseudoType_4);

#line 963 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
#line 963 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
#line 963 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 963 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_7,
#line 963 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_8,
#line 963 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 963 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11);

#line 956 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
#line 956 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 956 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1,
#line 956 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 956 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
#line 956 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4);

#line 813 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
#line 813 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_8,
#line 813 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__Elements_10,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeArities_12,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttributeLists_14);

#line 795 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
#line 795 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_4,
#line 795 "term_to_xml.m"
  MR_Word mercury__term_to_xml__PrevChrs_5,
#line 795 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 778 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
#line 778 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_3);

#line 745 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
#line 745 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 745 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_4);

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
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

#line 693 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void);

#line 670 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
#line 670 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 670 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 670 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 670 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8);

#line 642 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
#line 642 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 642 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 642 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 642 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8);

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
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

#line 588 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 588 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 588 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 588 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 588 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 588 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27);

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
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

#line 584 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 584 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 584 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 584 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 584 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 584 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27);

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
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

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
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

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
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

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
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

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
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

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
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

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
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

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4);

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 1995 "term_to_xml.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2003 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2009 "term_to_xml.c"
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

#line 2024 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 2029 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0
  }
};

#line 2038 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 2043 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1] = {
  (MR_Integer) 0
};

#line 2048 "term_to_xml.c"
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

#line 2065 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0
};

#line 2071 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2] = {
  (MR_String) "attr_name",
  (MR_String) "attr_source"
};

#line 2077 "term_to_xml.c"
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

#line 2092 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 2097 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0
  }
};

#line 2106 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 2111 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1] = {
  (MR_Integer) 0
};

#line 2116 "term_to_xml.c"
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

#line 2133 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0 = {
  (MR_String) "functor",
  (MR_Integer) 0
};

#line 2139 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1 = {
  (MR_String) "field_name",
  (MR_Integer) 1
};

#line 2145 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2 = {
  (MR_String) "type_name",
  (MR_Integer) 2
};

#line 2151 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3 = {
  (MR_String) "arity",
  (MR_Integer) 3
};

#line 2157 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3
};

#line 2165 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2
};

#line 2173 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2181 "term_to_xml.c"
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

#line 2198 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2203 "term_to_xml.c"
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

#line 2218 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2224 "term_to_xml.c"
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

#line 2239 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2244 "term_to_xml.c"
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

#line 2259 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0
};

#line 2264 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1
};

#line 2269 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2274 "term_to_xml.c"
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

#line 2293 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2300 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2307 "term_to_xml.c"
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

#line 2324 "term_to_xml.c"
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

#line 2339 "term_to_xml.c"
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

#line 2354 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 2362 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0
};

#line 2368 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2] = {
  (MR_String) "duplicate_element",
  (MR_String) "duplicate_types"
};

#line 2374 "term_to_xml.c"
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

#line 2389 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
};

#line 2394 "term_to_xml.c"
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

#line 2409 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0
};

#line 2414 "term_to_xml.c"
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

#line 2429 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1
};

#line 2435 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2
};

#line 2440 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2445 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4
};

#line 2450 "term_to_xml.c"
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

#line 2474 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2483 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2492 "term_to_xml.c"
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

#line 2509 "term_to_xml.c"
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

#line 2524 "term_to_xml.c"
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

#line 2539 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2547 "term_to_xml.c"
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

#line 2559 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
};

#line 2564 "term_to_xml.c"
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

#line 2579 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2585 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2
};

#line 2590 "term_to_xml.c"
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

#line 2604 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2611 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2618 "term_to_xml.c"
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

#line 2635 "term_to_xml.c"
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

#line 2652 "term_to_xml.c"
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

#line 2667 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0
};

#line 2672 "term_to_xml.c"
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

#line 2687 "term_to_xml.c"
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

#line 2702 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2708 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1
};

#line 2713 "term_to_xml.c"
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

#line 2727 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2734 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2741 "term_to_xml.c"
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

#line 2758 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0 = {
  (MR_String) "format",
  (MR_Integer) 0
};

#line 2764 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1 = {
  (MR_String) "no_format",
  (MR_Integer) 1
};

#line 2770 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 2776 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 2782 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2788 "term_to_xml.c"
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

#line 2805 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2811 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2] = {
  (MR_String) "functor_name",
  (MR_String) "functor_arity"
};

#line 2817 "term_to_xml.c"
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

#line 2832 "term_to_xml.c"
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

#line 2847 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 2852 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0
};

#line 2857 "term_to_xml.c"
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

#line 2871 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 2877 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2883 "term_to_xml.c"
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

#line 2900 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2906 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2] = {
  (MR_String) "stylesheet_type",
  (MR_String) "stylesheet_href"
};

#line 2912 "term_to_xml.c"
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

#line 2927 "term_to_xml.c"
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

#line 2942 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1
};

#line 2947 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 2952 "term_to_xml.c"
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

#line 2966 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 2972 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2978 "term_to_xml.c"
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

#line 2995 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0
  }
};

#line 3003 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

#line 3011 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0
};

#line 3018 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3] = {
  (MR_String) "element_name",
  (MR_String) "attributes",
  (MR_String) "children"
};

#line 3025 "term_to_xml.c"
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

#line 3040 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3045 "term_to_xml.c"
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

#line 3060 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3065 "term_to_xml.c"
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

#line 3080 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3085 "term_to_xml.c"
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

#line 3100 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3105 "term_to_xml.c"
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

#line 3120 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3125 "term_to_xml.c"
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

#line 3140 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0
};

#line 3145 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1
};

#line 3150 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2
};

#line 3155 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3162 "term_to_xml.c"
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

#line 3186 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3196 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 3206 "term_to_xml.c"
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

#line 3223 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1] = {
  (MR_String) "T"
};

#line 3228 "term_to_xml.c"
static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1] = {
  {
    (MR_String) "to_xml",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 3237 "term_to_xml.c"
static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1 = {
  (MR_String) "term_to_xml",
  (MR_String) "xmlable",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1,
  mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1
};

#line 3248 "term_to_xml.c"
const MR_TypeClassDeclStruct mercury__term_to_xml__term_to_xml__type_class_decl_xmlable_1 = {
  &mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3256 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
#line 3259 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3261 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3263 "term_to_xml.c"
{
#line 3265 "term_to_xml.c"
  {
#line 3267 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3270 "term_to_xml.c"
    {
#line 3272 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3275 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3277 "term_to_xml.c"
  }
#line 3279 "term_to_xml.c"
}

#line 3282 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
#line 3285 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3287 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3289 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3291 "term_to_xml.c"
{
#line 3293 "term_to_xml.c"
  {
#line 3295 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3298 "term_to_xml.c"
    {
#line 3300 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3303 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3305 "term_to_xml.c"
  }
#line 3307 "term_to_xml.c"
}

#line 3310 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
#line 3313 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3315 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3317 "term_to_xml.c"
{
#line 3319 "term_to_xml.c"
  {
#line 3321 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3324 "term_to_xml.c"
    {
#line 3326 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_from_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3329 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3331 "term_to_xml.c"
  }
#line 3333 "term_to_xml.c"
}

#line 3336 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
#line 3339 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3341 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3343 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3345 "term_to_xml.c"
{
#line 3347 "term_to_xml.c"
  {
#line 3349 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3352 "term_to_xml.c"
    {
#line 3354 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_from_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3357 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3359 "term_to_xml.c"
  }
#line 3361 "term_to_xml.c"
}

#line 3364 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
#line 3367 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3369 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3371 "term_to_xml.c"
{
#line 3373 "term_to_xml.c"
  {
#line 3375 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3378 "term_to_xml.c"
    {
#line 3380 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3383 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3385 "term_to_xml.c"
  }
#line 3387 "term_to_xml.c"
}

#line 3390 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
#line 3393 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3395 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3397 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3399 "term_to_xml.c"
{
#line 3401 "term_to_xml.c"
  {
#line 3403 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3406 "term_to_xml.c"
    {
#line 3408 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3411 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3413 "term_to_xml.c"
  }
#line 3415 "term_to_xml.c"
}

#line 3418 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
#line 3421 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3423 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3425 "term_to_xml.c"
{
#line 3427 "term_to_xml.c"
  {
#line 3429 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3432 "term_to_xml.c"
    {
#line 3434 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3437 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3439 "term_to_xml.c"
  }
#line 3441 "term_to_xml.c"
}

#line 3444 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
#line 3447 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3449 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3451 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3453 "term_to_xml.c"
{
#line 3455 "term_to_xml.c"
  {
#line 3457 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3460 "term_to_xml.c"
    {
#line 3462 "term_to_xml.c"
      mercury__term_to_xml____Compare____doctype_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3465 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3467 "term_to_xml.c"
  }
#line 3469 "term_to_xml.c"
}

#line 3472 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
#line 3475 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3477 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3479 "term_to_xml.c"
{
#line 3481 "term_to_xml.c"
  {
#line 3483 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3486 "term_to_xml.c"
    {
#line 3488 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____dtd_generation_result_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3491 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3493 "term_to_xml.c"
  }
#line 3495 "term_to_xml.c"
}

#line 3498 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
#line 3501 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3503 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3505 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3507 "term_to_xml.c"
{
#line 3509 "term_to_xml.c"
  {
#line 3511 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3514 "term_to_xml.c"
    {
#line 3516 "term_to_xml.c"
      mercury__term_to_xml____Compare____dtd_generation_result_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3519 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3521 "term_to_xml.c"
  }
#line 3523 "term_to_xml.c"
}

#line 3526 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
#line 3529 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3531 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3533 "term_to_xml.c"
{
#line 3535 "term_to_xml.c"
  {
#line 3537 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3540 "term_to_xml.c"
    {
#line 3542 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_mapping_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3545 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3547 "term_to_xml.c"
  }
#line 3549 "term_to_xml.c"
}

#line 3552 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
#line 3555 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3557 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3559 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3561 "term_to_xml.c"
{
#line 3563 "term_to_xml.c"
  {
#line 3565 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3568 "term_to_xml.c"
    {
#line 3570 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_mapping_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3573 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3575 "term_to_xml.c"
  }
#line 3577 "term_to_xml.c"
}

#line 3580 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
#line 3583 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3585 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3587 "term_to_xml.c"
{
#line 3589 "term_to_xml.c"
  {
#line 3591 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3594 "term_to_xml.c"
    {
#line 3596 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_pred_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3599 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3601 "term_to_xml.c"
  }
#line 3603 "term_to_xml.c"
}

#line 3606 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
#line 3609 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3611 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3613 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3615 "term_to_xml.c"
{
#line 3617 "term_to_xml.c"
  {
#line 3619 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3622 "term_to_xml.c"
    {
#line 3624 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_pred_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3627 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3629 "term_to_xml.c"
  }
#line 3631 "term_to_xml.c"
}

#line 3634 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
#line 3637 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3639 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3641 "term_to_xml.c"
{
#line 3643 "term_to_xml.c"
  {
#line 3645 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3648 "term_to_xml.c"
    {
#line 3650 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_dtd_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3653 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3655 "term_to_xml.c"
  }
#line 3657 "term_to_xml.c"
}

#line 3660 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
#line 3663 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3665 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3667 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3669 "term_to_xml.c"
{
#line 3671 "term_to_xml.c"
  {
#line 3673 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3676 "term_to_xml.c"
    {
#line 3678 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_dtd_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3681 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3683 "term_to_xml.c"
  }
#line 3685 "term_to_xml.c"
}

#line 3688 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
#line 3691 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3693 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3695 "term_to_xml.c"
{
#line 3697 "term_to_xml.c"
  {
#line 3699 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3702 "term_to_xml.c"
    {
#line 3704 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_format_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3707 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3709 "term_to_xml.c"
  }
#line 3711 "term_to_xml.c"
}

#line 3714 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
#line 3717 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3719 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3721 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3723 "term_to_xml.c"
{
#line 3725 "term_to_xml.c"
  {
#line 3727 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3730 "term_to_xml.c"
    {
#line 3732 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_format_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3735 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3737 "term_to_xml.c"
  }
#line 3739 "term_to_xml.c"
}

#line 3742 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
#line 3745 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3747 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3749 "term_to_xml.c"
{
#line 3751 "term_to_xml.c"
  {
#line 3753 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3756 "term_to_xml.c"
    {
#line 3758 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_functor_info_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3761 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3763 "term_to_xml.c"
  }
#line 3765 "term_to_xml.c"
}

#line 3768 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
#line 3771 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3773 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3775 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3777 "term_to_xml.c"
{
#line 3779 "term_to_xml.c"
  {
#line 3781 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3784 "term_to_xml.c"
    {
#line 3786 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_functor_info_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3789 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3791 "term_to_xml.c"
  }
#line 3793 "term_to_xml.c"
}

#line 3796 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
#line 3799 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3801 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3803 "term_to_xml.c"
{
#line 3805 "term_to_xml.c"
  {
#line 3807 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3810 "term_to_xml.c"
    {
#line 3812 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_stylesheet_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3815 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3817 "term_to_xml.c"
  }
#line 3819 "term_to_xml.c"
}

#line 3822 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
#line 3825 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3827 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3829 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3831 "term_to_xml.c"
{
#line 3833 "term_to_xml.c"
  {
#line 3835 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3838 "term_to_xml.c"
    {
#line 3840 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_stylesheet_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3843 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3845 "term_to_xml.c"
  }
#line 3847 "term_to_xml.c"
}

#line 3850 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
#line 3853 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3855 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3857 "term_to_xml.c"
{
#line 3859 "term_to_xml.c"
  {
#line 3861 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3864 "term_to_xml.c"
    {
#line 3866 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____xml_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3869 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3871 "term_to_xml.c"
  }
#line 3873 "term_to_xml.c"
}

#line 3876 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
#line 3879 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3881 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3883 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3885 "term_to_xml.c"
{
#line 3887 "term_to_xml.c"
  {
#line 3889 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3892 "term_to_xml.c"
    {
#line 3894 "term_to_xml.c"
      mercury__term_to_xml____Compare____xml_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3897 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3899 "term_to_xml.c"
  }
#line 3901 "term_to_xml.c"
}

#line 468 "string.int0"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
#line 468 "string.int0"
  MR_Word mercury__term_to_xml__V_17_17,
#line 468 "string.int0"
  MR_Box mercury__term_to_xml__V_18_18,
#line 468 "string.int0"
  MR_String mercury__term_to_xml__String_8_8,
#line 468 "string.int0"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 468 "string.int0"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 468 "string.int0"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 468 "string.int0"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12)
#line 468 "string.int0"
{
#line 965 "string.opt"
  while (MR_TRUE)
#line 965 "string.opt"
    {
#line 965 "string.opt"
      /* tailcall optimized into a loop */
#line 965 "string.opt"
      {
#line 965 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__I_9_9 < mercury__term_to_xml__End_10_10);
#line 965 "string.opt"
        MR_Integer mercury__term_to_xml__J_12_13;
#line 965 "string.opt"
        MR_Char mercury__term_to_xml__Char_13_14;

#line 959 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 959 "string.opt"
          {
#line 195 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_to_xml__String_8_8 ;
	Index =  mercury__term_to_xml__I_9_9 ;
		{
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3967 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__J_12_13  = NextIndex;
	 mercury__term_to_xml__Char_13_14  = Ch;
#line 195 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 959 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 961 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__J_12_13 <= mercury__term_to_xml__End_10_10);
#line 959 "string.opt"
          }
#line 965 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 963 "string.opt"
          {
#line 963 "string.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 963 "string.opt"
            {
#line 963 "string.opt"
              mercury__term_to_xml__write_xml_escaped_char_4_p_0(mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__Char_13_14, mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11, &mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15);
            }
#line 964 "string.opt"
            /* direct tailcall eliminated */
#line 964 "string.opt"
            {
#line 964 "string.opt"
              MR_Integer mercury__term_to_xml__I_9__tmp_copy_9 = mercury__term_to_xml__J_12_13;
#line 964 "string.opt"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 964 "string.opt"
              mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 964 "string.opt"
              mercury__term_to_xml__I_9_9 = mercury__term_to_xml__I_9__tmp_copy_9;
#line 964 "string.opt"
            }
#line 964 "string.opt"
            continue;
#line 963 "string.opt"
          }
#line 965 "string.opt"
        else
#line 966 "string.opt"
          *mercury__term_to_xml__STATE_VARIABLE_Acc_15_12 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11;
#line 965 "string.opt"
      }
#line 965 "string.opt"
      break;
#line 965 "string.opt"
    }
#line 468 "string.int0"
}

#line 318 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 318 "list.int"
  MR_Word mercury__term_to_xml__V_17_17,
#line 318 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 318 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4)
#line 318 "list.int"
{
#line 189 "list.opt"
  {
#line 189 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 189 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "list.opt"
      {
#line 189 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "list.opt"
      }
#line 189 "list.opt"
    else
#line 190 "list.opt"
      {
#line 190 "list.opt"
        MR_Word mercury__term_to_xml__H0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 190 "list.opt"
        MR_Word mercury__term_to_xml__T0_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 190 "list.opt"
        MR_String mercury__term_to_xml__H1_9_9;
#line 190 "list.opt"
        MR_Word mercury__term_to_xml__T1_10_10;
#line 190 "list.opt"
        MR_Word mercury__term_to_xml__H2_11_11;
#line 190 "list.opt"
        MR_Word mercury__term_to_xml__T2_12_12;
#line 832 "term_to_xml.m"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_16_16, (MR_Integer) 1)));
#line 832 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv2_H1_9_9;
#line 832 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv1_H2_11_11;

#line 832 "term_to_xml.m"
        {
#line 832 "term_to_xml.m"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__V_16_16), ((MR_Box) (mercury__term_to_xml__V_17_17)), ((MR_Box) (mercury__term_to_xml__H0_7_7)), &mercury__term_to_xml__conv2_H1_9_9, &mercury__term_to_xml__conv1_H2_11_11);
        }
#line 832 "term_to_xml.m"
        mercury__term_to_xml__H1_9_9 = ((MR_String) mercury__term_to_xml__conv2_H1_9_9);
#line 832 "term_to_xml.m"
        mercury__term_to_xml__H2_11_11 = ((MR_Word) mercury__term_to_xml__conv1_H2_11_11);
#line 192 "list.opt"
        {
#line 192 "list.opt"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__T0_8_8, &mercury__term_to_xml__T1_10_10, &mercury__term_to_xml__T2_12_12);
        }
#line 190 "list.opt"
        {
#line 190 "list.opt"
          MR_Word base;
#line 190 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = base;
#line 190 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H1_9_9));
#line 190 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T1_10_10));
#line 190 "list.opt"
        }
#line 190 "list.opt"
        {
#line 190 "list.opt"
          MR_Word base;
#line 190 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = base;
#line 190 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H2_11_11));
#line 190 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T2_12_12));
#line 190 "list.opt"
        }
#line 190 "list.opt"
      }
#line 189 "list.opt"
  }
#line 318 "list.int"
}

#line 359 "list.int"
static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
#line 359 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 359 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 359 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 359 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 359 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__5_5)
#line 359 "list.int"
{
#line 193 "list.opt"
  {
#line 193 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 193 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "list.opt"
      {
#line 193 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "list.opt"
        *mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "list.opt"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 193 "list.opt"
      }
#line 193 "list.opt"
    else
#line 194 "list.opt"
      {
#line 194 "list.opt"
        MR_Integer mercury__term_to_xml__H0_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "list.opt"
        MR_Word mercury__term_to_xml__T0_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "list.opt"
        MR_String mercury__term_to_xml__H1_10_10;
#line 194 "list.opt"
        MR_Word mercury__term_to_xml__T1_11_11;
#line 194 "list.opt"
        MR_Integer mercury__term_to_xml__H2_12_12;
#line 194 "list.opt"
        MR_Word mercury__term_to_xml__T2_13_13;
#line 194 "list.opt"
        MR_Word mercury__term_to_xml__H3_14_14;
#line 194 "list.opt"
        MR_Word mercury__term_to_xml__T3_15_15;

#line 54 "construct.opt"
        {
#line 54 "construct.opt"
          mercury__term_to_xml__succeeded = mercury__construct__get_functor_internal_5_p_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__H0_8_8, &mercury__term_to_xml__H1_10_10, &mercury__term_to_xml__H2_12_12, &mercury__term_to_xml__H3_14_14);
        }
#line 194 "list.opt"
        if (mercury__term_to_xml__succeeded)
#line 194 "list.opt"
          {
#line 196 "list.opt"
            {
#line 196 "list.opt"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__T0_9_9, &mercury__term_to_xml__T1_11_11, &mercury__term_to_xml__T2_13_13, &mercury__term_to_xml__T3_15_15);
            }
#line 194 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 194 "list.opt"
              {
#line 194 "list.opt"
                {
#line 194 "list.opt"
                  MR_Word base;
#line 194 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 194 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H1_10_10));
#line 194 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T1_11_11));
#line 194 "list.opt"
                }
#line 194 "list.opt"
                {
#line 194 "list.opt"
                  MR_Word base;
#line 194 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "list.opt"
                  *mercury__term_to_xml__HeadVar__4_4 = base;
#line 194 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H2_12_12));
#line 194 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T2_13_13));
#line 194 "list.opt"
                }
#line 194 "list.opt"
                {
#line 194 "list.opt"
                  MR_Word base;
#line 194 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "list.opt"
                  *mercury__term_to_xml__HeadVar__5_5 = base;
#line 194 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H3_14_14));
#line 194 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T3_15_15));
#line 194 "list.opt"
                }
#line 194 "list.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 194 "list.opt"
              }
#line 194 "list.opt"
          }
#line 194 "list.opt"
      }
#line 193 "list.opt"
    return mercury__term_to_xml__succeeded;
#line 193 "list.opt"
  }
#line 359 "list.int"
}

#line 128 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_18_18,
#line 128 "list.int"
  MR_Integer mercury__term_to_xml__V_19_19,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 128 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 128 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 395 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Word mercury__term_to_xml__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "list.opt"
            MR_Word mercury__term_to_xml__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 398 "list.opt"
            {
#line 398 "list.opt"
              mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__H_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_15_15_13);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_11_10;
#line 399 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 128 "list.int"
}

#line 140 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 140 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 140 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 140 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 140 "list.int"
{
#line 411 "list.opt"
  while (MR_TRUE)
#line 411 "list.opt"
    {
#line 411 "list.opt"
      /* tailcall optimized into a loop */
#line 411 "list.opt"
      {
#line 411 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 411 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "list.opt"
          {
#line 411 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 411 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 411 "list.opt"
          }
#line 411 "list.opt"
        else
#line 414 "list.opt"
          {
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 414 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 1134 "term_to_xml.m"
            {
#line 1134 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 0, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__H_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_23_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__STATE_VARIABLE_B_24_24_20);
            }
#line 416 "list.opt"
            /* direct tailcall eliminated */
#line 416 "list.opt"
            {
#line 416 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_16_14;
#line 416 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 416 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 416 "list.opt"
            }
#line 416 "list.opt"
            continue;
#line 414 "list.opt"
          }
#line 411 "list.opt"
      }
#line 411 "list.opt"
      break;
#line 411 "list.opt"
    }
#line 140 "list.int"
}

#line 140 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 140 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 140 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 140 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 140 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 140 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 140 "list.int"
{
#line 411 "list.opt"
  while (MR_TRUE)
#line 411 "list.opt"
    {
#line 411 "list.opt"
      /* tailcall optimized into a loop */
#line 411 "list.opt"
      {
#line 411 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 411 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "list.opt"
          {
#line 411 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 411 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 411 "list.opt"
          }
#line 411 "list.opt"
        else
#line 414 "list.opt"
          {
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 414 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 1144 "term_to_xml.m"
            {
#line 1144 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 1, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__H_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_23_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__STATE_VARIABLE_B_24_24_20);
            }
#line 416 "list.opt"
            /* direct tailcall eliminated */
#line 416 "list.opt"
            {
#line 416 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_16_14;
#line 416 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 416 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 416 "list.opt"
            }
#line 416 "list.opt"
            continue;
#line 414 "list.opt"
          }
#line 411 "list.opt"
      }
#line 411 "list.opt"
      break;
#line 411 "list.opt"
    }
#line 140 "list.int"
}

#line 149 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 149 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 149 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 149 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 149 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 149 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 149 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 149 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 149 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 149 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 149 "list.int"
{
#line 411 "list.opt"
  while (MR_TRUE)
#line 411 "list.opt"
    {
#line 411 "list.opt"
      /* tailcall optimized into a loop */
#line 411 "list.opt"
      {
#line 411 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 411 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "list.opt"
          {
#line 411 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 411 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 411 "list.opt"
          }
#line 411 "list.opt"
        else
#line 414 "list.opt"
          {
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 414 "list.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 414 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 1154 "term_to_xml.m"
            {
#line 1154 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 2, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__H_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_23_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__STATE_VARIABLE_B_24_24_20);
            }
#line 416 "list.opt"
            /* direct tailcall eliminated */
#line 416 "list.opt"
            {
#line 416 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_16_14;
#line 416 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 416 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 416 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 416 "list.opt"
            }
#line 416 "list.opt"
            continue;
#line 414 "list.opt"
          }
#line 411 "list.opt"
      }
#line 411 "list.opt"
      break;
#line 411 "list.opt"
    }
#line 149 "list.int"
}

#line 128 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 128 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 128 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 395 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Word mercury__term_to_xml__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "list.opt"
            MR_Word mercury__term_to_xml__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 398 "list.opt"
            {
#line 398 "list.opt"
              mercury__term_to_xml__write_attribute_4_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__H_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_15_15_13);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_11_10;
#line 399 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 128 "list.int"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_13_13,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_14_14,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_15_15,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 185 "list.opt"
  {
#line 185 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 185 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 185 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "list.opt"
    else
#line 186 "list.opt"
      {
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__H_6_6);
        }
#line 188 "list.opt"
        {
#line 188 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__T_7_7);
        }
#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 186 "list.opt"
        }
#line 186 "list.opt"
      }
#line 185 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 185 "list.opt"
  }
#line 310 "list.int"
}

#line 93 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
#line 93 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 93 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 93 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 93 "list.int"
{
#line 676 "list.opt"
  while (MR_TRUE)
#line 676 "list.opt"
    {
#line 676 "list.opt"
      /* tailcall optimized into a loop */
#line 676 "list.opt"
      {
#line 676 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 676 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 676 "list.opt"
        else
#line 677 "list.opt"
          {
#line 677 "list.opt"
            MR_String mercury__term_to_xml__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "list.opt"
            MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1408 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_42_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1408 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_43_53 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 51 "map.opt"
            MR_Word mercury__term_to_xml__V_5_61;
#line 51 "map.opt"
            MR_Box mercury__term_to_xml__conv0_V_5_61;

#line 51 "map.opt"
            {
#line 51 "map.opt"
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_42_52, mercury__term_to_xml__TypeCtorInfo_43_53, mercury__term_to_xml__V_12_12, ((MR_Box) (mercury__term_to_xml__H_6_6)), &mercury__term_to_xml__conv0_V_5_61);
            }
#line 51 "map.opt"
            if (mercury__term_to_xml__succeeded)
#line 51 "map.opt"
              {
#line 51 "map.opt"
                mercury__term_to_xml__V_5_61 = ((MR_Word) mercury__term_to_xml__conv0_V_5_61);
#line 51 "map.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 51 "map.opt"
              }
#line 683 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 681 "list.opt"
              {
#line 681 "list.opt"
                MR_Word mercury__term_to_xml__TrueTail_9_9;

#line 681 "list.opt"
                {
#line 681 "list.opt"
                  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__T_7_7, &mercury__term_to_xml__TrueTail_9_9);
                }
#line 682 "list.opt"
                {
#line 682 "list.opt"
                  MR_Word base;
#line 682 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 682 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 682 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__TrueTail_9_9));
#line 682 "list.opt"
                }
#line 681 "list.opt"
              }
#line 683 "list.opt"
            else
#line 684 "list.opt"
              {
#line 684 "list.opt"
                /* direct tailcall eliminated */
#line 684 "list.opt"
                {
#line 684 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_7_7;

#line 684 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 684 "list.opt"
                }
#line 684 "list.opt"
                continue;
#line 684 "list.opt"
              }
#line 677 "list.opt"
          }
#line 676 "list.opt"
      }
#line 676 "list.opt"
      break;
#line 676 "list.opt"
    }
#line 93 "list.int"
}

#line 128 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 128 "list.int"
  MR_String mercury__term_to_xml__V_18_18,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_19_19,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__V_21_21,
#line 128 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 128 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 128 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 128 "list.int"
{
#line 395 "list.opt"
  while (MR_TRUE)
#line 395 "list.opt"
    {
#line 395 "list.opt"
      /* tailcall optimized into a loop */
#line 395 "list.opt"
      {
#line 395 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 395 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 395 "list.opt"
        else
#line 397 "list.opt"
          {
#line 397 "list.opt"
            MR_Word mercury__term_to_xml__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "list.opt"
            MR_Word mercury__term_to_xml__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 398 "list.opt"
            {
#line 398 "list.opt"
              mercury__term_to_xml__write_dtd_attlist_8_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_21_21, mercury__term_to_xml__H_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_15_15_13);
            }
#line 399 "list.opt"
            /* direct tailcall eliminated */
#line 399 "list.opt"
            {
#line 399 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_11_10;
#line 399 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 399 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 399 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 399 "list.opt"
            }
#line 399 "list.opt"
            continue;
#line 397 "list.opt"
          }
#line 395 "list.opt"
      }
#line 395 "list.opt"
      break;
#line 395 "list.opt"
    }
#line 128 "list.int"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 185 "list.opt"
  {
#line 185 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 185 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 185 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "list.opt"
    else
#line 186 "list.opt"
      {
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "list.opt"
        MR_String mercury__term_to_xml__V_8_8;
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__H_6_6);
        }
#line 188 "list.opt"
        {
#line 188 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__T_7_7);
        }
#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 186 "list.opt"
        }
#line 186 "list.opt"
      }
#line 185 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 185 "list.opt"
  }
#line 310 "list.int"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 1097 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1097 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1097 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1097 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1097 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1097 "term_to_xml.m"
{
#line 1121 "term_to_xml.m"
  {
#line 1121 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1121 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_18_18;

#line 1121 "term_to_xml.m"
    {
#line 1121 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_18_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1121 "term_to_xml.m"
  }
#line 1097 "term_to_xml.m"
}

#line 1095 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1095 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1095 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1095 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1095 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1095 "term_to_xml.m"
{
#line 1115 "term_to_xml.m"
  {
#line 1115 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1115 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_17_17;

#line 1115 "term_to_xml.m"
    {
#line 1115 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_17_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1115 "term_to_xml.m"
  }
#line 1095 "term_to_xml.m"
}

#line 1093 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1093 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1093 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1093 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1093 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1093 "term_to_xml.m"
{
#line 1109 "term_to_xml.m"
  {
#line 1109 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1109 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 1109 "term_to_xml.m"
    {
#line 1109 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1109 "term_to_xml.m"
  }
#line 1093 "term_to_xml.m"
}

#line 469 "string.int0"
static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
#line 469 "string.int0"
  MR_String mercury__term_to_xml__String_8_8,
#line 469 "string.int0"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 469 "string.int0"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 469 "string.int0"
  MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 469 "string.int0"
  MR_Word * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12)
#line 469 "string.int0"
{
#line 965 "string.opt"
  while (MR_TRUE)
#line 965 "string.opt"
    {
#line 965 "string.opt"
      /* tailcall optimized into a loop */
#line 965 "string.opt"
      {
#line 965 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__I_9_9 < mercury__term_to_xml__End_10_10);
#line 965 "string.opt"
        MR_Integer mercury__term_to_xml__J_12_13;
#line 965 "string.opt"
        MR_Char mercury__term_to_xml__Char_13_14;

#line 959 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 959 "string.opt"
          {
#line 195 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_to_xml__String_8_8 ;
	Index =  mercury__term_to_xml__I_9_9 ;
		{
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 5212 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__J_12_13  = NextIndex;
	 mercury__term_to_xml__Char_13_14  = Ch;
#line 195 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 959 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 961 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__J_12_13 <= mercury__term_to_xml__End_10_10);
#line 959 "string.opt"
          }
#line 965 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 963 "string.opt"
          {
#line 963 "string.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 963 "string.opt"
            {
#line 963 "string.opt"
              mercury__term_to_xml__mangle_char_3_p_0(mercury__term_to_xml__Char_13_14, mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11, &mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15);
            }
#line 964 "string.opt"
            /* direct tailcall eliminated */
#line 964 "string.opt"
            {
#line 964 "string.opt"
              MR_Integer mercury__term_to_xml__I_9__tmp_copy_9 = mercury__term_to_xml__J_12_13;
#line 964 "string.opt"
              MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 964 "string.opt"
              mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 964 "string.opt"
              mercury__term_to_xml__I_9_9 = mercury__term_to_xml__I_9__tmp_copy_9;
#line 964 "string.opt"
            }
#line 964 "string.opt"
            continue;
#line 963 "string.opt"
          }
#line 965 "string.opt"
        else
#line 966 "string.opt"
          *mercury__term_to_xml__STATE_VARIABLE_Acc_15_12 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11;
#line 965 "string.opt"
      }
#line 965 "string.opt"
      break;
#line 965 "string.opt"
    }
#line 469 "string.int0"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 185 "list.opt"
  {
#line 185 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 185 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 185 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "list.opt"
    else
#line 186 "list.opt"
      {
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(mercury__term_to_xml__H_6_6);
        }
#line 188 "list.opt"
        {
#line 188 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 186 "list.opt"
        }
#line 186 "list.opt"
      }
#line 185 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 185 "list.opt"
  }
#line 310 "list.int"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 185 "list.opt"
  {
#line 185 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 185 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 185 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "list.opt"
    else
#line 186 "list.opt"
      {
#line 186 "list.opt"
        MR_String mercury__term_to_xml__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 826 "term_to_xml.m"
        {
#line 826 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 826 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 826 "term_to_xml.m"
        }
#line 188 "list.opt"
        {
#line 188 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 186 "list.opt"
        }
#line 186 "list.opt"
      }
#line 185 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 185 "list.opt"
  }
#line 310 "list.int"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 185 "list.opt"
  {
#line 185 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 185 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 185 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "list.opt"
    else
#line 186 "list.opt"
      {
#line 186 "list.opt"
        MR_Integer mercury__term_to_xml__H_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 827 "term_to_xml.m"
        {
#line 827 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 827 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 827 "term_to_xml.m"
        }
#line 188 "list.opt"
        {
#line 188 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 186 "list.opt"
        }
#line 186 "list.opt"
      }
#line 185 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 185 "list.opt"
  }
#line 310 "list.int"
}

#line 427 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
#line 427 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 427 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 427 "list.int"
{
#line 217 "list.opt"
  {
#line 217 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 217 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__4_4;

#line 217 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "list.opt"
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "list.opt"
        mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 217 "list.opt"
      else
#line 218 "list.opt"
        {
#line 17 "require.opt"
          {
#line 17 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 218 "list.opt"
        }
#line 217 "list.opt"
    else
#line 217 "list.opt"
      {
#line 217 "list.opt"
        MR_Word mercury__term_to_xml__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "list.opt"
        MR_String mercury__term_to_xml__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 217 "list.opt"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "list.opt"
          {
#line 17 "require.opt"
            {
#line 17 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 223 "list.opt"
          }
#line 217 "list.opt"
        else
#line 228 "list.opt"
          {
#line 228 "list.opt"
            MR_Integer mercury__term_to_xml__HB_21_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 228 "list.opt"
            MR_Word mercury__term_to_xml__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 228 "list.opt"
            MR_Word mercury__term_to_xml__V_23_25;
#line 228 "list.opt"
            MR_Word mercury__term_to_xml__V_24_26;

#line 853 "term_to_xml.m"
            {
#line 853 "term_to_xml.m"
              mercury__term_to_xml__V_23_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 0) = ((MR_Box) (mercury__term_to_xml__V_35_35));
#line 853 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 1) = ((MR_Box) (mercury__term_to_xml__HB_21_23));
#line 853 "term_to_xml.m"
            }
#line 230 "list.opt"
            {
#line 230 "list.opt"
              mercury__term_to_xml__V_24_26 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__V_34_34, mercury__term_to_xml__TBs_22_24);
            }
#line 228 "list.opt"
            {
#line 228 "list.opt"
              mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 0) = ((MR_Box) (mercury__term_to_xml__V_23_25));
#line 228 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 1) = ((MR_Box) (mercury__term_to_xml__V_24_26));
#line 228 "list.opt"
            }
#line 228 "list.opt"
          }
#line 217 "list.opt"
      }
#line 217 "list.opt"
    return mercury__term_to_xml__HeadVar__4_4;
#line 217 "list.opt"
  }
#line 427 "list.int"
}

#line 99 "list.int"
static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
#line 99 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 99 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 99 "list.int"
{
#line 711 "list.opt"
  while (MR_TRUE)
#line 711 "list.opt"
    {
#line 711 "list.opt"
      /* tailcall optimized into a loop */
#line 711 "list.opt"
      {
#line 711 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 711 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "list.opt"
        else
#line 712 "list.opt"
          {
#line 712 "list.opt"
            MR_Word mercury__term_to_xml__H0_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 712 "list.opt"
            MR_Word mercury__term_to_xml__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 718 "list.opt"
            MR_Word mercury__term_to_xml__H_9_9;

#line 1291 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__H0_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 1291 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1291 "term_to_xml.m"
              {
#line 1291 "term_to_xml.m"
                mercury__term_to_xml__H_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__H0_6_6, (MR_Integer) 0)));
#line 716 "list.opt"
                {
#line 716 "list.opt"
                  MR_Word mercury__term_to_xml__TrueTail_10_10;

#line 716 "list.opt"
                  {
#line 716 "list.opt"
                    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__T0_7_7, &mercury__term_to_xml__TrueTail_10_10);
                  }
#line 717 "list.opt"
                  {
#line 717 "list.opt"
                    MR_Word base;
#line 717 "list.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "list.opt"
                    *mercury__term_to_xml__HeadVar__3_3 = base;
#line 717 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H_9_9));
#line 717 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__TrueTail_10_10));
#line 717 "list.opt"
                  }
#line 716 "list.opt"
                }
#line 1291 "term_to_xml.m"
              }
#line 1291 "term_to_xml.m"
            else
#line 719 "list.opt"
              {
#line 719 "list.opt"
                /* direct tailcall eliminated */
#line 719 "list.opt"
                {
#line 719 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T0_7_7;

#line 719 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 719 "list.opt"
                }
#line 719 "list.opt"
                continue;
#line 719 "list.opt"
              }
#line 712 "list.opt"
          }
#line 711 "list.opt"
      }
#line 711 "list.opt"
      break;
#line 711 "list.opt"
    }
#line 99 "list.int"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 185 "list.opt"
  {
#line 185 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 185 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 185 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "list.opt"
    else
#line 186 "list.opt"
      {
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 1538 "term_to_xml.m"
        {
#line 1538 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__H_6_6);
        }
#line 188 "list.opt"
        {
#line 188 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 186 "list.opt"
        }
#line 186 "list.opt"
      }
#line 185 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 185 "list.opt"
  }
#line 310 "list.int"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 185 "list.opt"
  {
#line 185 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 185 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 185 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "list.opt"
    else
#line 186 "list.opt"
      {
#line 186 "list.opt"
        MR_String mercury__term_to_xml__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 186 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 193 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__map__ho3_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__H_6_6 ;
		{
#line 193 "construct.opt"

    SUCCESS_INDICATOR = (S == NULL);

#line 5766 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 190 "construct.opt"
        if (mercury__term_to_xml__succeeded)
#line 189 "construct.opt"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "construct.opt"
        else
#line 191 "construct.opt"
          {
#line 191 "construct.opt"
            mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "construct.opt"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 191 "construct.opt"
          }
#line 188 "list.opt"
        {
#line 188 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 186 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 186 "list.opt"
        }
#line 186 "list.opt"
      }
#line 185 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 185 "list.opt"
  }
#line 310 "list.int"
}

#line 1364 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
#line 1364 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
#line 1364 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1364 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 1364 "term_to_xml.m"
{
#line 1364 "term_to_xml.m"
  {
#line 1364 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_6_6;
#line 1364 "term_to_xml.m"
    MR_Box mercury__term_to_xml__V_7_7;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;

#line 1364 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
      {
#line 1364 "term_to_xml.m"
        mercury__term_to_xml__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0));
#line 1364 "term_to_xml.m"
        mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)) = mercury__term_to_xml__V_7_7;
#line 1364 "term_to_xml.m"
        mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
        {
#line 1364 "term_to_xml.m"
          return mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_for_T_11, mercury__term_to_xml__V_6_6, mercury__term_to_xml__V_8_8);
        }
#line 1364 "term_to_xml.m"
      }
#line 1364 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1364 "term_to_xml.m"
  }
#line 1364 "term_to_xml.m"
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
#line 5885 "term_to_xml.c"
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
                  MR_Integer mercury__term_to_xml__Res_7_138;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_117_117 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5940 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_138  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_138 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                    mercury__term_to_xml__V_10_10 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_138 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
                        mercury__term_to_xml__V_10_10 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                      else
#line 80 "private_builtin.opt"
                        mercury__term_to_xml__V_10_10 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                    }
#line 5969 "term_to_xml.c"
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
#line 5991 "term_to_xml.c"
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
#line 6023 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 2:
#line 6029 "term_to_xml.c"
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
#line 6042 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6048 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6054 "term_to_xml.c"
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
#line 6082 "term_to_xml.c"
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
                  MR_Integer mercury__term_to_xml__Res_7_133;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_114_114 ;
	S2 =  mercury__term_to_xml__V_37_37 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6110 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_133  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_133 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_133 == (MR_Integer) 0);
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
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 2:
#line 6145 "term_to_xml.c"
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
#line 6158 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6164 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6170 "term_to_xml.c"
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
#line 6198 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 1:
#line 6204 "term_to_xml.c"
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
                  MR_Integer mercury__term_to_xml__Res_7_123;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_112_112 ;
	S2 =  mercury__term_to_xml__V_53_53 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6232 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_123  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_123 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_123 == (MR_Integer) 0);
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
#line 6274 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6280 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6286 "term_to_xml.c"
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
#line 6321 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6327 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6333 "term_to_xml.c"
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
                          MR_Integer mercury__term_to_xml__Res_7_128;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_113_113 ;
	S2 =  mercury__term_to_xml__V_69_69 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6368 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_128  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_128 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                          else
#line 79 "private_builtin.opt"
                            {
#line 76 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_128 == (MR_Integer) 0);
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
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 1:
#line 6403 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 2:
#line 6409 "term_to_xml.c"
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
#line 6437 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6443 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6449 "term_to_xml.c"
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
#line 6462 "term_to_xml.c"
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
                          MR_Integer mercury__term_to_xml__Res_7_143;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_118_118 ;
	S2 =  mercury__term_to_xml__V_85_85 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6490 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_143  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_143 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                          else
#line 79 "private_builtin.opt"
                            {
#line 76 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_143 == (MR_Integer) 0);
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
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 2:
#line 6525 "term_to_xml.c"
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
#line 6553 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6559 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6565 "term_to_xml.c"
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
#line 6578 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 1:
#line 6584 "term_to_xml.c"
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
                          MR_Integer mercury__term_to_xml__Res_7_148;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_119_119 ;
	S2 =  mercury__term_to_xml__V_101_101 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6612 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_148  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_148 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                          else
#line 79 "private_builtin.opt"
                            {
#line 76 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_148 == (MR_Integer) 0);
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
#line 6730 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_6_6) == 0);
#line 75 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                  {
#line 6736 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_21_21 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];
#line 6738 "term_to_xml.c"
                    {
#line 6740 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_21_21, ((MR_Box) (mercury__term_to_xml__V_4_4)), ((MR_Box) (mercury__term_to_xml__V_7_7)));
                    }
#line 75 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                      {
#line 6747 "term_to_xml.c"
                        mercury__term_to_xml__TypeInfo_22_22 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];
#line 6749 "term_to_xml.c"
                        {
#line 6751 "term_to_xml.c"
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
#line 6781 "term_to_xml.c"
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
#line 6806 "term_to_xml.c"
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
#line 6838 "term_to_xml.c"
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
#line 6863 "term_to_xml.c"
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
#line 6888 "term_to_xml.c"
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
#line 6933 "term_to_xml.c"
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
#line 6945 "term_to_xml.c"
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
#line 6958 "term_to_xml.c"
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
            MR_Integer mercury__term_to_xml__Res_7_22;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6988 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_22  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              {
#line 76 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                else
#line 80 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
              }
#line 7017 "term_to_xml.c"
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
                MR_Integer mercury__term_to_xml__Res_7_27;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_17_17 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7047 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_27  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_27 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                else
#line 79 "private_builtin.opt"
                  {
#line 76 "private_builtin.opt"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_27 == (MR_Integer) 0);
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
#line 7149 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 151 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 7153 "term_to_xml.c"
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
#line 7190 "term_to_xml.c"
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
#line 7202 "term_to_xml.c"
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
#line 7215 "term_to_xml.c"
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
            MR_Integer mercury__term_to_xml__Res_7_22;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_functor_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7245 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_22  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              {
#line 76 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                else
#line 80 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
              }
#line 7274 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 269 "term_to_xml.m"
            mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 269 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 269 "term_to_xml.m"
              *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 269 "term_to_xml.m"
            else
#line 38 "private_builtin.opt"
              {
#line 35 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 < mercury__term_to_xml__V_7_7);
#line 38 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 37 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                else
#line 43 "private_builtin.opt"
                  {
#line 40 "private_builtin.opt"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 == mercury__term_to_xml__V_7_7);
#line 43 "private_builtin.opt"
                    if (mercury__term_to_xml__succeeded)
#line 42 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                    else
#line 44 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                  }
#line 38 "private_builtin.opt"
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
#line 7381 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 269 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 7385 "term_to_xml.c"
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

#line 879 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0(
#line 879 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 879 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 879 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 879 "term_to_xml.m"
{
#line 879 "term_to_xml.m"
  {
#line 879 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 879 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar1_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 879 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar2_5 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 35 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 38 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 37 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
    else
#line 43 "private_builtin.opt"
      {
#line 40 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 43 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 42 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
        else
#line 44 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
      }
#line 879 "term_to_xml.m"
  }
#line 879 "term_to_xml.m"
}

#line 879 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0(
#line 879 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_1,
#line 879 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 879 "term_to_xml.m"
{
#line 7454 "term_to_xml.c"
  {
#line 7456 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 7459 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 7461 "term_to_xml.c"
  }
#line 879 "term_to_xml.m"
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
#line 7490 "term_to_xml.c"
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
#line 7538 "term_to_xml.c"
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
#line 7578 "term_to_xml.c"
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
#line 7611 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 133 "term_to_xml.m"
                    break;
#line 133 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 7617 "term_to_xml.c"
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
#line 7745 "term_to_xml.c"
                {
#line 7747 "term_to_xml.c"
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
#line 7853 "term_to_xml.c"
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
#line 7901 "term_to_xml.c"
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
#line 7941 "term_to_xml.c"
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
#line 7974 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 241 "term_to_xml.m"
                    break;
#line 241 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 7980 "term_to_xml.c"
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
#line 8110 "term_to_xml.c"
                {
#line 8112 "term_to_xml.c"
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
#line 8154 "term_to_xml.c"
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
#line 8202 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 2:
#line 8208 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 3:
#line 8214 "term_to_xml.c"
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
#line 8254 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 2:
#line 8260 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 3:
#line 8266 "term_to_xml.c"
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
#line 8301 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8307 "term_to_xml.c"
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
                  MR_Integer mercury__term_to_xml__Res_7_58;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____dtd_generation_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_52_52 ;
	S2 =  mercury__term_to_xml__V_18_18 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8343 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_58  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_58 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                    mercury__term_to_xml__V_20_20 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_58 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
                        mercury__term_to_xml__V_20_20 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                      else
#line 80 "private_builtin.opt"
                        mercury__term_to_xml__V_20_20 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                    }
#line 8372 "term_to_xml.c"
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
#line 8402 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 3:
#line 8408 "term_to_xml.c"
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
#line 8439 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8445 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8455 "term_to_xml.c"
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
#line 8479 "term_to_xml.c"
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
#line 8510 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8516 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8526 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8532 "term_to_xml.c"
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
#line 8664 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_7_7, mercury__term_to_xml__V_9_9) == 0);
#line 332 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
                  {
#line 8670 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_17_17 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 8672 "term_to_xml.c"
                    {
#line 8674 "term_to_xml.c"
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
#line 8702 "term_to_xml.c"
                {
#line 8704 "term_to_xml.c"
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
#line 8730 "term_to_xml.c"
                {
#line 8732 "term_to_xml.c"
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
#line 8774 "term_to_xml.c"
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
                  MR_Integer mercury__term_to_xml__Res_7_42;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_35_35 ;
	S2 =  mercury__term_to_xml__V_5_5 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8819 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_42  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_42 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_42 == (MR_Integer) 0);
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
#line 125 "term_to_xml.m"
                }
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8854 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8860 "term_to_xml.c"
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
#line 8886 "term_to_xml.c"
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
                  MR_Integer mercury__term_to_xml__Res_7_47;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_37_37 ;
	S2 =  mercury__term_to_xml__V_16_16 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8918 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_47  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_47 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                    mercury__term_to_xml__V_18_18 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_47 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                      else
#line 80 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                    }
#line 8947 "term_to_xml.c"
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
                      MR_Integer mercury__term_to_xml__Res_7_52;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_36_36 ;
	S2 =  mercury__term_to_xml__V_17_17 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8977 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_52  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_52 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        {
#line 76 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_52 == (MR_Integer) 0);
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
#line 125 "term_to_xml.m"
                    }
#line 125 "term_to_xml.m"
                }
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 2:
#line 9014 "term_to_xml.c"
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
#line 9038 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 1:
#line 9044 "term_to_xml.c"
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
                  MR_Integer mercury__term_to_xml__Res_7_57;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_38_38 ;
	S2 =  mercury__term_to_xml__V_28_28 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9072 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_57  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_57 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_57 == (MR_Integer) 0);
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
#line 9166 "term_to_xml.c"
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
#line 9197 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_5_5, mercury__term_to_xml__V_7_7) == 0);
#line 125 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 9201 "term_to_xml.c"
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
#line 9226 "term_to_xml.c"
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

#line 35 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 38 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 37 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
    else
#line 43 "private_builtin.opt"
      {
#line 40 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 43 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 42 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
        else
#line 44 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
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
#line 9299 "term_to_xml.c"
  {
#line 9301 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 9304 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 9306 "term_to_xml.c"
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
#line 9335 "term_to_xml.c"
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
        MR_Integer mercury__term_to_xml__Res_7_18;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_from_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9369 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_18  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_18 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_18 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
          }
#line 9398 "term_to_xml.c"
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

#line 35 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 < mercury__term_to_xml__V_14_14);
#line 38 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 37 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
            else
#line 43 "private_builtin.opt"
              {
#line 40 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 == mercury__term_to_xml__V_14_14);
#line 43 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 42 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                else
#line 44 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
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

#line 9483 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 284 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9487 "term_to_xml.c"
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
#line 9522 "term_to_xml.c"
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
        MR_Integer mercury__term_to_xml__Res_7_16;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9556 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_16  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_16 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_16 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 78 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
          }
#line 9585 "term_to_xml.c"
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
            MR_Integer mercury__term_to_xml__Res_7_21;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_5_5 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9615 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_21  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_21 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              {
#line 76 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_21 == (MR_Integer) 0);
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

#line 9690 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 119 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9694 "term_to_xml.c"
          mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_4_4, mercury__term_to_xml__V_6_6) == 0);
#line 119 "term_to_xml.m"
      }
#line 119 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 119 "term_to_xml.m"
  }
#line 119 "term_to_xml.m"
}

#line 1632 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
#line 1632 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_4,
#line 1632 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5)
#line 1632 "term_to_xml.m"
{
#line 1635 "term_to_xml.m"
  {
#line 1635 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1635 "term_to_xml.m"
    MR_String mercury__term_to_xml__Regex_6;
#line 1635 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Elements_7;
#line 1635 "term_to_xml.m"
    MR_String mercury__term_to_xml__ElementsStr_12;
#line 1636 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;
#line 1636 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_9_9;
#line 1636 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10;
#line 1636 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11;
#line 1638 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_19_19;
#line 1638 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_14_14;

#line 1636 "term_to_xml.m"
    {
#line 1636 "term_to_xml.m"
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_4, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__Elements_7, &mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_9_9, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_11_11);
    }
#line 1637 "term_to_xml.m"
    {
#line 1637 "term_to_xml.m"
      mercury__term_to_xml__ElementsStr_12 = mercury__string__join_list_2_f_0((MR_String) "|", mercury__term_to_xml__Elements_7);
    }
#line 9747 "term_to_xml.c"
    mercury__term_to_xml__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 93 "list.opt"
    {
#line 93 "list.opt"
      mercury__list__length_2_3_p_0(mercury__term_to_xml__TypeCtorInfo_19_19, mercury__term_to_xml__Elements_7, (MR_Integer) 0, &mercury__term_to_xml__V_14_14);
    }
#line 1638 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_14_14 > (MR_Integer) 1);
#line 1640 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1639 "term_to_xml.m"
      {
#line 1639 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_17_17;

#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__ElementsStr_12, (MR_String) ")", &mercury__term_to_xml__V_17_17);
        }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2((MR_String) "(", mercury__term_to_xml__V_17_17, &mercury__term_to_xml__Regex_6);
        }
#line 1639 "term_to_xml.m"
      }
#line 1640 "term_to_xml.m"
    else
#line 1641 "term_to_xml.m"
      mercury__term_to_xml__Regex_6 = mercury__term_to_xml__ElementsStr_12;
#line 1635 "term_to_xml.m"
    return mercury__term_to_xml__Regex_6;
#line 1635 "term_to_xml.m"
  }
#line 1632 "term_to_xml.m"
}

#line 1547 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
#line 1547 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__4_4,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArityList_6,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
#line 1547 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttributeListList_8,
#line 1547 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1547 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1547 "term_to_xml.m"
{
#line 1555 "term_to_xml.m"
  while (MR_TRUE)
#line 1555 "term_to_xml.m"
    {
#line 1555 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1555 "term_to_xml.m"
      {
#line 1555 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;

#line 1555 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_10 = mercury__term_to_xml__STATE_VARIABLE_State_0_9;
#line 1555 "term_to_xml.m"
        else
#line 1558 "term_to_xml.m"
          {
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_80_80 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_81_81;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_82_82;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_83_83;
#line 1558 "term_to_xml.m"
            MR_String mercury__term_to_xml__Element_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)));
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Elements_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeFunctor_31;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeFunctors_32;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeArity_33;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeArities_34;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgTypeList_35;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgTypeLists_36;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__AttributeList_37;
#line 1558 "term_to_xml.m"
            MR_Word mercury__term_to_xml__AttributeLists_38;
#line 1558 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;
#line 1558 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_53_53;
#line 1558 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_55_55;
#line 1558 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_57;
#line 1558 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_75_75;
#line 1558 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_77_77;
#line 1559 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv0_MaybeFunctor_31;
#line 1561 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv1_MaybeArity_33;
#line 1563 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv2_ArgTypeList_35;
#line 1565 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv3_AttributeList_37;
#line 9880 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9882 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9884 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1571 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_39_39;
#line 9888 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1559 "term_to_xml.m"
            {
#line 1559 "term_to_xml.m"
              mercury__term_to_xml__conv0_MaybeFunctor_31 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
#line 1559 "term_to_xml.m"
            mercury__term_to_xml__MaybeFunctor_31 = ((MR_Word) mercury__term_to_xml__conv0_MaybeFunctor_31);
#line 1560 "term_to_xml.m"
            {
#line 1560 "term_to_xml.m"
              mercury__term_to_xml__MaybeFunctors_32 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
#line 9903 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_81_81 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1561 "term_to_xml.m"
            {
#line 1561 "term_to_xml.m"
              mercury__term_to_xml__conv1_MaybeArity_33 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
#line 1561 "term_to_xml.m"
            mercury__term_to_xml__MaybeArity_33 = ((MR_Word) mercury__term_to_xml__conv1_MaybeArity_33);
#line 1562 "term_to_xml.m"
            {
#line 1562 "term_to_xml.m"
              mercury__term_to_xml__MaybeArities_34 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
#line 9917 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_82_82 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 1563 "term_to_xml.m"
            {
#line 1563 "term_to_xml.m"
              mercury__term_to_xml__conv2_ArgTypeList_35 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
#line 1563 "term_to_xml.m"
            mercury__term_to_xml__ArgTypeList_35 = ((MR_Word) mercury__term_to_xml__conv2_ArgTypeList_35);
#line 1564 "term_to_xml.m"
            {
#line 1564 "term_to_xml.m"
              mercury__term_to_xml__ArgTypeLists_36 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
#line 9931 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_83_83 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
#line 1565 "term_to_xml.m"
            {
#line 1565 "term_to_xml.m"
              mercury__term_to_xml__conv3_AttributeList_37 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
#line 1565 "term_to_xml.m"
            mercury__term_to_xml__AttributeList_37 = ((MR_Word) mercury__term_to_xml__conv3_AttributeList_37);
#line 1566 "term_to_xml.m"
            {
#line 1566 "term_to_xml.m"
              mercury__term_to_xml__AttributeLists_38 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
#line 9945 "term_to_xml.c"
            mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9947 "term_to_xml.c"
            {
#line 9949 "term_to_xml.c"
              mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!ELEMENT ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
            }
#line 9952 "term_to_xml.c"
            mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9954 "term_to_xml.c"
            {
#line 9956 "term_to_xml.c"
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__Element_24)), mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_53_53);
            }
#line 9959 "term_to_xml.c"
            mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9961 "term_to_xml.c"
            {
#line 9963 "term_to_xml.c"
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_53_53, &mercury__term_to_xml__STATE_VARIABLE_State_55_55);
            }
#line 1571 "term_to_xml.m"
            {
#line 1571 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_39_39);
            }
#line 1573 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1572 "term_to_xml.m"
              {
#line 9975 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9978 "term_to_xml.c"
                {
#line 9980 "term_to_xml.c"
                  mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(#PCDATA)>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1572 "term_to_xml.m"
              }
#line 1573 "term_to_xml.m"
            else
#line 1577 "term_to_xml.m"
            if ((mercury__term_to_xml__ArgTypeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1575 "term_to_xml.m"
              {
#line 9991 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9994 "term_to_xml.c"
                {
#line 9996 "term_to_xml.c"
                  mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "EMPTY>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1575 "term_to_xml.m"
              }
#line 1577 "term_to_xml.m"
            else
#line 1578 "term_to_xml.m"
              {
#line 1578 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Head_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 0)));
#line 1578 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Tail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 1)));
#line 1578 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Braces_44;
#line 1578 "term_to_xml.m"
                MR_Word mercury__term_to_xml__AllowedFunctorsRegexs_46;
#line 1578 "term_to_xml.m"
                MR_String mercury__term_to_xml__AllowedFunctorsRegex_47;
#line 1578 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_61_61;
#line 1578 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_63_63;
#line 1578 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_66_66;
#line 1578 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_68_68;
#line 1578 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_70_70;
#line 1592 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_45_45;
#line 10027 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1614 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_48_48;
#line 10031 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1582 "term_to_xml.m"
                if ((mercury__term_to_xml__Tail_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1586 "term_to_xml.m"
                  {
#line 1584 "term_to_xml.m"
                    MR_Integer mercury__term_to_xml__V_58_58;
#line 1584 "term_to_xml.m"
                    MR_Integer mercury__term_to_xml__V_59_59;

#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__Head_40 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 10060 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_58_58  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1584 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1584 "term_to_xml.m"
                      {
#line 1584 "term_to_xml.m"
                        mercury__term_to_xml__V_59_59 = (MR_Integer) 1;
#line 1584 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_58_58 > mercury__term_to_xml__V_59_59);
#line 1584 "term_to_xml.m"
                      }
#line 1586 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1585 "term_to_xml.m"
                      mercury__term_to_xml__Braces_44 = (MR_Integer) 0;
#line 1586 "term_to_xml.m"
                    else
#line 1587 "term_to_xml.m"
                      mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
#line 1586 "term_to_xml.m"
                  }
#line 1582 "term_to_xml.m"
                else
#line 1581 "term_to_xml.m"
                  mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
#line 1592 "term_to_xml.m"
                {
#line 1592 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_45_45);
                }
#line 1594 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1593 "term_to_xml.m"
                  {
#line 10103 "term_to_xml.c"
                    void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10106 "term_to_xml.c"
                    {
#line 10108 "term_to_xml.c"
                      mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_61_61);
                    }
#line 1593 "term_to_xml.m"
                  }
#line 1594 "term_to_xml.m"
                else
#line 1594 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_61_61 = mercury__term_to_xml__STATE_VARIABLE_State_55_55;
#line 1600 "term_to_xml.m"
#line 1600 "term_to_xml.m"
                switch (mercury__term_to_xml__Braces_44) {
#line 1600 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1600 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 1601 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_63_63 = mercury__term_to_xml__STATE_VARIABLE_State_61_61;
#line 1600 "term_to_xml.m"
                    break;
#line 1600 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 1598 "term_to_xml.m"
                    {
#line 10132 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10135 "term_to_xml.c"
                      {
#line 10137 "term_to_xml.c"
                        mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_61_61, &mercury__term_to_xml__STATE_VARIABLE_State_63_63);
                      }
#line 1598 "term_to_xml.m"
                    }
#line 1600 "term_to_xml.m"
                    break;
#line 1600 "term_to_xml.m"
                }
#line 1603 "term_to_xml.m"
                {
#line 1603 "term_to_xml.m"
                  mercury__term_to_xml__AllowedFunctorsRegexs_46 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__ArgTypeList_35);
                }
#line 1606 "term_to_xml.m"
                {
#line 1606 "term_to_xml.m"
                  mercury__term_to_xml__AllowedFunctorsRegex_47 = mercury__string__join_list_2_f_0((MR_String) ",", mercury__term_to_xml__AllowedFunctorsRegexs_46);
                }
#line 10156 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10158 "term_to_xml.c"
                {
#line 10160 "term_to_xml.c"
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__AllowedFunctorsRegex_47)), mercury__term_to_xml__STATE_VARIABLE_State_63_63, &mercury__term_to_xml__STATE_VARIABLE_State_66_66);
                }
#line 1611 "term_to_xml.m"
#line 1611 "term_to_xml.m"
                switch (mercury__term_to_xml__Braces_44) {
#line 1611 "term_to_xml.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "term_to_xml.m"
                  case (MR_Integer) 0:
#line 1612 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_68_68 = mercury__term_to_xml__STATE_VARIABLE_State_66_66;
#line 1611 "term_to_xml.m"
                    break;
#line 1611 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 1609 "term_to_xml.m"
                    {
#line 10178 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10181 "term_to_xml.c"
                      {
#line 10183 "term_to_xml.c"
                        mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ")")), mercury__term_to_xml__STATE_VARIABLE_State_66_66, &mercury__term_to_xml__STATE_VARIABLE_State_68_68);
                      }
#line 1609 "term_to_xml.m"
                    }
#line 1611 "term_to_xml.m"
                    break;
#line 1611 "term_to_xml.m"
                }
#line 1614 "term_to_xml.m"
                {
#line 1614 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_48_48);
                }
#line 1616 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1615 "term_to_xml.m"
                  {
#line 10201 "term_to_xml.c"
                    void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10204 "term_to_xml.c"
                    {
#line 10206 "term_to_xml.c"
                      mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "*)")), mercury__term_to_xml__STATE_VARIABLE_State_68_68, &mercury__term_to_xml__STATE_VARIABLE_State_70_70);
                    }
#line 1615 "term_to_xml.m"
                  }
#line 1616 "term_to_xml.m"
                else
#line 1616 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_70_70 = mercury__term_to_xml__STATE_VARIABLE_State_68_68;
#line 10215 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10217 "term_to_xml.c"
                {
#line 10219 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_70_70, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1578 "term_to_xml.m"
              }
#line 1623 "term_to_xml.m"
            {
#line 1623 "term_to_xml.m"
              mercury__term_to_xml__write_dtd_attlists_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_79, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Element_24, mercury__term_to_xml__AttributeList_37, mercury__term_to_xml__MaybeFunctor_31, mercury__term_to_xml__MaybeArity_33, mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_75_75);
            }
#line 10229 "term_to_xml.c"
            mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10231 "term_to_xml.c"
            {
#line 10233 "term_to_xml.c"
              mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_75_75, &mercury__term_to_xml__STATE_VARIABLE_State_77_77);
            }
#line 1626 "term_to_xml.m"
            /* direct tailcall eliminated */
#line 1626 "term_to_xml.m"
            {
#line 1626 "term_to_xml.m"
              MR_Word mercury__term_to_xml__HeadVar__4__tmp_copy_4 = mercury__term_to_xml__Elements_25;
#line 1626 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MaybeFunctorList__tmp_copy_5 = mercury__term_to_xml__MaybeFunctors_32;
#line 1626 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MaybeArityList__tmp_copy_6 = mercury__term_to_xml__MaybeArities_34;
#line 1626 "term_to_xml.m"
              MR_Word mercury__term_to_xml__ArgTypeListList__tmp_copy_7 = mercury__term_to_xml__ArgTypeLists_36;
#line 1626 "term_to_xml.m"
              MR_Word mercury__term_to_xml__AttributeListList__tmp_copy_8 = mercury__term_to_xml__AttributeLists_38;
#line 1626 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_9 = mercury__term_to_xml__STATE_VARIABLE_State_77_77;

#line 1626 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_0_9 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_9;
#line 1626 "term_to_xml.m"
              mercury__term_to_xml__AttributeListList_8 = mercury__term_to_xml__AttributeListList__tmp_copy_8;
#line 1626 "term_to_xml.m"
              mercury__term_to_xml__ArgTypeListList_7 = mercury__term_to_xml__ArgTypeListList__tmp_copy_7;
#line 1626 "term_to_xml.m"
              mercury__term_to_xml__MaybeArityList_6 = mercury__term_to_xml__MaybeArityList__tmp_copy_6;
#line 1626 "term_to_xml.m"
              mercury__term_to_xml__MaybeFunctorList_5 = mercury__term_to_xml__MaybeFunctorList__tmp_copy_5;
#line 1626 "term_to_xml.m"
              mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__4__tmp_copy_4;
#line 1626 "term_to_xml.m"
            }
#line 1626 "term_to_xml.m"
            continue;
#line 1558 "term_to_xml.m"
          }
#line 1555 "term_to_xml.m"
      }
#line 1555 "term_to_xml.m"
      break;
#line 1555 "term_to_xml.m"
    }
#line 1547 "term_to_xml.m"
}

#line 1518 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1518 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1518 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_13,
#line 1518 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1518 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1518 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1518 "term_to_xml.m"
{
#line 1524 "term_to_xml.m"
  {
#line 1524 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1524 "term_to_xml.m"
    {
#line 1524 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Element_10, mercury__term_to_xml__MaybeFunctor_12, mercury__term_to_xml__MaybeArity_13, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__AttrFromSources_11, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1524 "term_to_xml.m"
      return;
    }
#line 1524 "term_to_xml.m"
  }
#line 1518 "term_to_xml.m"
}

#line 1485 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1485 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1485 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_12,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_13,
#line 1485 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__6_6,
#line 1485 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1485 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1485 "term_to_xml.m"
{
#line 1490 "term_to_xml.m"
  {
#line 1490 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1490 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 0)));
#line 1490 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Source_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 1)));
#line 1490 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeValue_17;
#line 1490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
#line 1490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 1490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 1490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
#line 1490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
#line 10365 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10367 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10369 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10371 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10373 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10375 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1494 "term_to_xml.m"
#line 1494 "term_to_xml.m"
    switch (mercury__term_to_xml__Source_15) {
#line 1494 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1494 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1499 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeArity_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1501 "term_to_xml.m"
          mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "term_to_xml.m"
        else
#line 1497 "term_to_xml.m"
          {
#line 1497 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_12, (MR_Integer) 0)));
#line 1497 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_22_22;

#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_18, (MR_Integer) 10, &mercury__term_to_xml__V_22_22);
            }
#line 1498 "term_to_xml.m"
            {
#line 1498 "term_to_xml.m"
              mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1498 "term_to_xml.m"
            }
#line 1497 "term_to_xml.m"
          }
#line 1494 "term_to_xml.m"
        break;
#line 1494 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1508 "term_to_xml.m"
        mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1494 "term_to_xml.m"
        break;
#line 1494 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1493 "term_to_xml.m"
        mercury__term_to_xml__MaybeValue_17 = mercury__term_to_xml__MaybeFunctor_11;
#line 1494 "term_to_xml.m"
        break;
#line 1494 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1504 "term_to_xml.m"
        {
#line 1504 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_21_21;

#line 1505 "term_to_xml.m"
          {
#line 1505 "term_to_xml.m"
            mercury__term_to_xml__V_21_21 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_13);
          }
#line 1505 "term_to_xml.m"
          {
#line 1505 "term_to_xml.m"
            mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1505 "term_to_xml.m"
          }
#line 1504 "term_to_xml.m"
        }
#line 1494 "term_to_xml.m"
        break;
#line 1494 "term_to_xml.m"
    }
#line 10453 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10455 "term_to_xml.c"
    {
#line 10457 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!ATTLIST ")), mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
    }
#line 10460 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10462 "term_to_xml.c"
    {
#line 10464 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_24_24, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
#line 10467 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10469 "term_to_xml.c"
    {
#line 10471 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 10474 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10476 "term_to_xml.c"
    {
#line 10478 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Name_14)), mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 10481 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10483 "term_to_xml.c"
    {
#line 10485 "term_to_xml.c"
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " CDATA ")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
#line 1462 "term_to_xml.m"
#line 1462 "term_to_xml.m"
    switch (mercury__term_to_xml__Source_15) {
#line 1462 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1462 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1462 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1476 "term_to_xml.m"
          {
#line 10499 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10502 "term_to_xml.c"
            {
#line 10504 "term_to_xml.c"
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1476 "term_to_xml.m"
          }
#line 1462 "term_to_xml.m"
        else
#line 1478 "term_to_xml.m"
          {
#line 1478 "term_to_xml.m"
            MR_String mercury__term_to_xml__Value_86 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1478 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_91;
#line 1478 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_58_92;
#line 10519 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10521 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10524 "term_to_xml.c"
            {
#line 10526 "term_to_xml.c"
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_57_91);
            }
#line 1480 "term_to_xml.m"
            {
#line 1480 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_86, mercury__term_to_xml__STATE_VARIABLE_State_57_91, &mercury__term_to_xml__STATE_VARIABLE_State_58_92);
            }
#line 10534 "term_to_xml.c"
            mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10536 "term_to_xml.c"
            {
#line 10538 "term_to_xml.c"
              mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_58_92, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1478 "term_to_xml.m"
          }
#line 1462 "term_to_xml.m"
        break;
#line 1462 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1468 "term_to_xml.m"
        {
#line 10549 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10552 "term_to_xml.c"
          {
#line 10554 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
          }
#line 1468 "term_to_xml.m"
        }
#line 1462 "term_to_xml.m"
        break;
#line 1462 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1462 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1462 "term_to_xml.m"
          {
#line 10567 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10570 "term_to_xml.c"
            {
#line 10572 "term_to_xml.c"
              mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1462 "term_to_xml.m"
          }
#line 1462 "term_to_xml.m"
        else
#line 1464 "term_to_xml.m"
          {
#line 1464 "term_to_xml.m"
            MR_String mercury__term_to_xml__Value_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1464 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_52;
#line 1464 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_53;
#line 10587 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10589 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10592 "term_to_xml.c"
            {
#line 10594 "term_to_xml.c"
              mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_18_52);
            }
#line 1466 "term_to_xml.m"
            {
#line 1466 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_47, mercury__term_to_xml__STATE_VARIABLE_State_18_52, &mercury__term_to_xml__STATE_VARIABLE_State_19_53);
            }
#line 10602 "term_to_xml.c"
            mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10604 "term_to_xml.c"
            {
#line 10606 "term_to_xml.c"
              mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_19_53, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1464 "term_to_xml.m"
          }
#line 1462 "term_to_xml.m"
        break;
#line 1462 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1462 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1470 "term_to_xml.m"
          {
#line 10619 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10622 "term_to_xml.c"
            {
#line 10624 "term_to_xml.c"
              mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#REQUIRED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1470 "term_to_xml.m"
          }
#line 1462 "term_to_xml.m"
        else
#line 1472 "term_to_xml.m"
          {
#line 1472 "term_to_xml.m"
            MR_String mercury__term_to_xml__Value_70 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1472 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_75;
#line 1472 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_42_76;
#line 10639 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10641 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10644 "term_to_xml.c"
            {
#line 10646 "term_to_xml.c"
              mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_41_75);
            }
#line 1474 "term_to_xml.m"
            {
#line 1474 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_70, mercury__term_to_xml__STATE_VARIABLE_State_41_75, &mercury__term_to_xml__STATE_VARIABLE_State_42_76);
            }
#line 10654 "term_to_xml.c"
            mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10656 "term_to_xml.c"
            {
#line 10658 "term_to_xml.c"
              mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_42_76, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1472 "term_to_xml.m"
          }
#line 1462 "term_to_xml.m"
        break;
#line 1462 "term_to_xml.m"
    }
#line 10667 "term_to_xml.c"
    mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10669 "term_to_xml.c"
    {
#line 10671 "term_to_xml.c"
      mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 10673 "term_to_xml.c"
      return;
    }
#line 1490 "term_to_xml.m"
  }
#line 1485 "term_to_xml.m"
}

#line 1439 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
#line 1439 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 1439 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AlreadyDone_4,
#line 1439 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
#line 1439 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6)
#line 1439 "term_to_xml.m"
{
#line 1443 "term_to_xml.m"
  while (MR_TRUE)
#line 1443 "term_to_xml.m"
    {
#line 1443 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1443 "term_to_xml.m"
      {
#line 1443 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;

#line 1443 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1443 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_6 = mercury__term_to_xml__STATE_VARIABLE_State_0_5;
#line 1443 "term_to_xml.m"
        else
#line 1445 "term_to_xml.m"
          {
#line 1445 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 1445 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDescs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 1446 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_30_30 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1446 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_31_31 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 51 "map.opt"
            MR_Box mercury__term_to_xml__conv0_V_19_19;

#line 51 "map.opt"
            {
#line 51 "map.opt"
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_30_30, mercury__term_to_xml__TypeCtorInfo_31_31, mercury__term_to_xml__AlreadyDone_4, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_V_19_19);
            }
#line 51 "map.opt"
            if (mercury__term_to_xml__succeeded)
#line 51 "map.opt"
              mercury__term_to_xml__succeeded = MR_TRUE;
#line 1448 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1447 "term_to_xml.m"
              {
#line 1447 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1447 "term_to_xml.m"
                {
#line 1447 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__TypeDescs_16;

#line 1447 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 1447 "term_to_xml.m"
                }
#line 1447 "term_to_xml.m"
                continue;
#line 1447 "term_to_xml.m"
              }
#line 1448 "term_to_xml.m"
            else
#line 1450 "term_to_xml.m"
              {
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_32_32;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_33_33;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_38_67;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_9_73;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeInfo_10_74;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ChildArgTypes_20;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__NewAlreadyDone_21;
#line 1450 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_27_27;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Elements_44;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__MaybeFunctors_45;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__MaybeArities_46;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ArgPseudoTypeLists_47;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__AttributeLists_48;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ArgTypeLists_49;
#line 1450 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_53;
#line 1450 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_54_54;
#line 1450 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_55;
#line 1450 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_57;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__RevXss_5_70;
#line 1450 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_6_71;
#line 10804 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10806 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1535 "term_to_xml.m"
                {
#line 1535 "term_to_xml.m"
                  mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_44, &mercury__term_to_xml__MaybeFunctors_45, &mercury__term_to_xml__MaybeArities_46, &mercury__term_to_xml__ArgPseudoTypeLists_47, &mercury__term_to_xml__AttributeLists_48);
                }
#line 1538 "term_to_xml.m"
                {
#line 1538 "term_to_xml.m"
                  mercury__term_to_xml__ArgTypeLists_49 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__ArgPseudoTypeLists_47);
                }
#line 10819 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_38_67 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10821 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_9_73 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10823 "term_to_xml.c"
                mercury__term_to_xml__TypeInfo_10_74 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 165 "list.opt"
                {
#line 165 "list.opt"
                  mercury__list__reverse_2_p_0(mercury__term_to_xml__TypeInfo_10_74, mercury__term_to_xml__ArgTypeLists_49, &mercury__term_to_xml__RevXss_5_70);
                }
#line 166 "list.opt"
                mercury__term_to_xml__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 167 "list.opt"
                {
#line 167 "list.opt"
                  mercury__list__condense_2_3_p_0(mercury__term_to_xml__TypeCtorInfo_38_67, mercury__term_to_xml__RevXss_5_70, mercury__term_to_xml__V_6_71, &mercury__term_to_xml__ChildArgTypes_20);
                }
#line 10837 "term_to_xml.c"
                mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10839 "term_to_xml.c"
                {
#line 10841 "term_to_xml.c"
                  mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!-- Elements for functors of type \"")), mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_23_53);
                }
#line 1542 "term_to_xml.m"
                {
#line 1542 "term_to_xml.m"
                  mercury__term_to_xml__V_54_54 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_15);
                }
#line 1542 "term_to_xml.m"
                {
#line 1542 "term_to_xml.m"
                  mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__V_54_54, mercury__term_to_xml__STATE_VARIABLE_State_23_53, &mercury__term_to_xml__STATE_VARIABLE_State_25_55);
                }
#line 10854 "term_to_xml.c"
                mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10856 "term_to_xml.c"
                {
#line 10858 "term_to_xml.c"
                  mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\" -->\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_25_55, &mercury__term_to_xml__STATE_VARIABLE_State_27_57);
                }
#line 1544 "term_to_xml.m"
                {
#line 1544 "term_to_xml.m"
                  mercury__term_to_xml__write_dtd_entries_10_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Elements_44, mercury__term_to_xml__MaybeFunctors_45, mercury__term_to_xml__MaybeArities_46, mercury__term_to_xml__ArgTypeLists_49, mercury__term_to_xml__AttributeLists_48, mercury__term_to_xml__STATE_VARIABLE_State_27_57, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
                }
#line 1451 "term_to_xml.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10868 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10870 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_33_33 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 129 "map.opt"
                {
#line 129 "map.opt"
                  mercury__tree234__set_4_p_0(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__TypeCtorInfo_33_33, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__AlreadyDone_4, &mercury__term_to_xml__NewAlreadyDone_21);
                }
#line 58 "list.opt"
                {
#line 58 "list.opt"
                  mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__ChildArgTypes_20, mercury__term_to_xml__TypeDescs_16, &mercury__term_to_xml__V_27_27);
                }
#line 1452 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1452 "term_to_xml.m"
                {
#line 1452 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_27_27;
#line 1452 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__AlreadyDone__tmp_copy_4 = mercury__term_to_xml__NewAlreadyDone_21;
#line 1452 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;

#line 1452 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_0_5 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_5;
#line 1452 "term_to_xml.m"
                  mercury__term_to_xml__AlreadyDone_4 = mercury__term_to_xml__AlreadyDone__tmp_copy_4;
#line 1452 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 1452 "term_to_xml.m"
                }
#line 1452 "term_to_xml.m"
                continue;
#line 1450 "term_to_xml.m"
              }
#line 1445 "term_to_xml.m"
          }
#line 1443 "term_to_xml.m"
      }
#line 1443 "term_to_xml.m"
      break;
#line 1443 "term_to_xml.m"
    }
#line 1439 "term_to_xml.m"
}

#line 1387 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_1,
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Done_3,
#line 1387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementsSoFar_4)
#line 1387 "term_to_xml.m"
{
#line 1392 "term_to_xml.m"
  while (MR_TRUE)
#line 1392 "term_to_xml.m"
    {
#line 1392 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1392 "term_to_xml.m"
      {
#line 1392 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;
#line 1392 "term_to_xml.m"
        MR_Word mercury__term_to_xml__HeadVar__5_5;

#line 1392 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "term_to_xml.m"
          mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1392 "term_to_xml.m"
        else
#line 1394 "term_to_xml.m"
          {
#line 1394 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDesc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1394 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDescs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1430 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDesc_15;

#line 36 "type_desc.opt"
            {
#line 36 "type_desc.opt"
              mercury__term_to_xml__succeeded = mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0(mercury__term_to_xml__PseudoTypeDesc_10, &mercury__term_to_xml__TypeDesc_15);
            }
#line 1430 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1427 "term_to_xml.m"
              {
#line 1043 "term_to_xml.m"
                {
#line 1043 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_16_16;
#line 1043 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_53_53;

#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_15 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 10990 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_16_16  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
                    {
#line 1045 "term_to_xml.m"
                      mercury__term_to_xml__V_53_53 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_16_16 > mercury__term_to_xml__V_53_53);
#line 1043 "term_to_xml.m"
                    }
#line 1043 "term_to_xml.m"
                }
#line 1398 "term_to_xml.m"
                if (!(mercury__term_to_xml__succeeded))
#line 1398 "term_to_xml.m"
                  {
#line 1049 "term_to_xml.m"
                    {
#line 1049 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__PseudoTypeDesc_56;
#line 1049 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__TypeCtor_57;
#line 1049 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__ArgPseudoTypes_58;
#line 1049 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_59_59;
#line 1049 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_60_60;
#line 1049 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_61_61;
#line 1052 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_17_17;
#line 123 "type_desc.opt"
                      MR_String mercury__term_to_xml___ModuleName_5_64;
#line 123 "type_desc.opt"
                      MR_Integer mercury__term_to_xml___Arity_6_65;
#line 123 "type_desc.opt"
                      MR_String mercury__term_to_xml___Name_5_68;
#line 123 "type_desc.opt"
                      MR_Integer mercury__term_to_xml___Arity_6_69;

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_15 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 11054 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_56  = PseudoTypeDesc;
#line 32 "type_desc.opt"
}
#line 69 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_56 ;
		{
#line 69 "type_desc.opt"
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
#line 11086 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_57  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_58  = ArgPseudoTypeInfos;
#line 69 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1049 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
                        {
#line 1052 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_58)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "term_to_xml.m"
                          if (mercury__term_to_xml__succeeded)
#line 1052 "term_to_xml.m"
                            {
#line 1052 "term_to_xml.m"
                              mercury__term_to_xml__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_58, (MR_Integer) 0)));
#line 1052 "term_to_xml.m"
                              mercury__term_to_xml__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_58, (MR_Integer) 1)));
#line 1052 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "term_to_xml.m"
                              if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
                                {
#line 123 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_57 ;
		{
#line 123 "type_desc.opt"
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
#line 11158 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml___ModuleName_5_64  = TypeCtorModuleName;
	 mercury__term_to_xml__V_60_60  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_65  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1053 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_60_60, (MR_String) "array") == 0);
#line 1049 "term_to_xml.m"
                                  if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
                                    {
#line 123 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_57 ;
		{
#line 123 "type_desc.opt"
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
#line 11214 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_61_61  = TypeCtorModuleName;
	 mercury__term_to_xml___Name_5_68  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_69  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1054 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_61_61, (MR_String) "array") == 0);
#line 1049 "term_to_xml.m"
                                    }
#line 1049 "term_to_xml.m"
                                }
#line 1052 "term_to_xml.m"
                            }
#line 1049 "term_to_xml.m"
                        }
#line 1049 "term_to_xml.m"
                    }
#line 1398 "term_to_xml.m"
                    if (!(mercury__term_to_xml__succeeded))
#line 750 "term_to_xml.m"
                      {
#line 748 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__TypeCtorInfo_9_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 748 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_80_80;
#line 37 "type_desc.opt"
                        MR_String mercury__term_to_xml__V_72_72;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_76 ;
		{
#line 37 "type_desc.opt"
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
#line 11272 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_80_80  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 748 "term_to_xml.m"
                        {
#line 748 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_80_80);
                        }
#line 750 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 749 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = MR_TRUE;
#line 750 "term_to_xml.m"
                        else
#line 752 "term_to_xml.m"
                          {
#line 750 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_10_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 750 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_81_81;
#line 37 "type_desc.opt"
                            MR_Char mercury__term_to_xml__V_73_73;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_77 ;
		{
#line 37 "type_desc.opt"
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
#line 11325 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_81_81  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 750 "term_to_xml.m"
                            {
#line 750 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_81_81);
                            }
#line 752 "term_to_xml.m"
                            if (mercury__term_to_xml__succeeded)
#line 751 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = MR_TRUE;
#line 752 "term_to_xml.m"
                            else
#line 754 "term_to_xml.m"
                              {
#line 752 "term_to_xml.m"
                                MR_Word mercury__term_to_xml__TypeCtorInfo_11_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 752 "term_to_xml.m"
                                MR_Word mercury__term_to_xml__V_82_82;
#line 37 "type_desc.opt"
                                MR_Integer mercury__term_to_xml__V_74_74;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_78 ;
		{
#line 37 "type_desc.opt"
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
#line 11378 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_82_82  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 752 "term_to_xml.m"
                                {
#line 752 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_82_82);
                                }
#line 754 "term_to_xml.m"
                                if (mercury__term_to_xml__succeeded)
#line 753 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = MR_TRUE;
#line 754 "term_to_xml.m"
                                else
#line 756 "term_to_xml.m"
                                  {
#line 756 "term_to_xml.m"
                                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 756 "term_to_xml.m"
                                    MR_Word mercury__term_to_xml__V_83_83;
#line 37 "type_desc.opt"
                                    MR_Float mercury__term_to_xml__V_75_75;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_79 ;
		{
#line 37 "type_desc.opt"
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
#line 11431 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_83_83  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 754 "term_to_xml.m"
                                    {
#line 754 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_83_83);
                                    }
#line 756 "term_to_xml.m"
                                  }
#line 754 "term_to_xml.m"
                              }
#line 752 "term_to_xml.m"
                          }
#line 750 "term_to_xml.m"
                      }
#line 1398 "term_to_xml.m"
                  }
#line 1427 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1405 "term_to_xml.m"
                  {
#line 1402 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_39_39 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1402 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_40_40 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 51 "map.opt"
                    MR_Box mercury__term_to_xml__conv0_V_5_90;

#line 51 "map.opt"
                    {
#line 51 "map.opt"
                      mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_39_39, mercury__term_to_xml__TypeCtorInfo_40_40, mercury__term_to_xml__Done_3, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_V_5_90);
                    }
#line 51 "map.opt"
                    if (mercury__term_to_xml__succeeded)
#line 51 "map.opt"
                      mercury__term_to_xml__succeeded = MR_TRUE;
#line 1405 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1403 "term_to_xml.m"
                      {
#line 1403 "term_to_xml.m"
                        /* direct tailcall eliminated */
#line 1403 "term_to_xml.m"
                        {
#line 1403 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__PseudoTypeDescs_11;

#line 1403 "term_to_xml.m"
                          mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1403 "term_to_xml.m"
                        }
#line 1403 "term_to_xml.m"
                        continue;
#line 1403 "term_to_xml.m"
                      }
#line 1405 "term_to_xml.m"
                    else
#line 1407 "term_to_xml.m"
                      {
#line 1407 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__TypeCtorInfo_44_44;
#line 1407 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__Elements_19;
#line 1407 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__ArgLists_22;
#line 1407 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__DupElements_24;
#line 1406 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_20_20;
#line 1406 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_21_21;
#line 1406 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_23_23;

#line 1406 "term_to_xml.m"
                        {
#line 1406 "term_to_xml.m"
                          mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_1, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_19, &mercury__term_to_xml__V_20_20, &mercury__term_to_xml__V_21_21, &mercury__term_to_xml__ArgLists_22, &mercury__term_to_xml__V_23_23);
                        }
#line 11516 "term_to_xml.c"
                        mercury__term_to_xml__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1408 "term_to_xml.m"
                        {
#line 1408 "term_to_xml.m"
                          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__ElementsSoFar_4, mercury__term_to_xml__Elements_19, &mercury__term_to_xml__DupElements_24);
                        }
#line 1415 "term_to_xml.m"
                        if ((mercury__term_to_xml__DupElements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1416 "term_to_xml.m"
                          {
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_46_46 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0;
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_47_47;
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_48_48;
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewPseudoTypeDescs_29;
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeDescList_30;
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewElementsSoFar_31;
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewDone_32;
#line 1416 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_34_34;
#line 1416 "term_to_xml.m"
                            MR_Integer mercury__term_to_xml__V_35_35;

#line 1417 "term_to_xml.m"
                            {
#line 1417 "term_to_xml.m"
                              mercury__term_to_xml__V_34_34 = mercury__list__condense_1_f_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__ArgLists_22);
                            }
#line 1417 "term_to_xml.m"
                            {
#line 1417 "term_to_xml.m"
                              mercury__list__merge_and_remove_dups_3_p_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__V_34_34, mercury__term_to_xml__PseudoTypeDescs_11, &mercury__term_to_xml__NewPseudoTypeDescs_29);
                            }
#line 1419 "term_to_xml.m"
                            {
#line 1419 "term_to_xml.m"
                              mercury__term_to_xml__V_35_35 = mercury__list__length_1_f_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__Elements_19);
                            }
#line 11561 "term_to_xml.c"
                            mercury__term_to_xml__TypeCtorInfo_47_47 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1419 "term_to_xml.m"
                            {
#line 1419 "term_to_xml.m"
                              mercury__list__duplicate_3_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__V_35_35, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__TypeDescList_30);
                            }
#line 1420 "term_to_xml.m"
                            {
#line 1420 "term_to_xml.m"
                              mercury__map__det_insert_from_corresponding_lists_4_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__Elements_19, mercury__term_to_xml__TypeDescList_30, mercury__term_to_xml__ElementsSoFar_4, &mercury__term_to_xml__NewElementsSoFar_31);
                            }
#line 1422 "term_to_xml.m"
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 11575 "term_to_xml.c"
                            mercury__term_to_xml__TypeCtorInfo_48_48 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1422 "term_to_xml.m"
                            {
#line 1422 "term_to_xml.m"
                              mercury__map__det_insert_4_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__TypeCtorInfo_48_48, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__Done_3, &mercury__term_to_xml__NewDone_32);
                            }
#line 1423 "term_to_xml.m"
                            /* direct tailcall eliminated */
#line 1423 "term_to_xml.m"
                            {
#line 1423 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__NewPseudoTypeDescs_29;
#line 1423 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__Done__tmp_copy_3 = mercury__term_to_xml__NewDone_32;
#line 1423 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__ElementsSoFar__tmp_copy_4 = mercury__term_to_xml__NewElementsSoFar_31;

#line 1423 "term_to_xml.m"
                              mercury__term_to_xml__ElementsSoFar_4 = mercury__term_to_xml__ElementsSoFar__tmp_copy_4;
#line 1423 "term_to_xml.m"
                              mercury__term_to_xml__Done_3 = mercury__term_to_xml__Done__tmp_copy_3;
#line 1423 "term_to_xml.m"
                              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1423 "term_to_xml.m"
                            }
#line 1423 "term_to_xml.m"
                            continue;
#line 1416 "term_to_xml.m"
                          }
#line 1415 "term_to_xml.m"
                        else
#line 1411 "term_to_xml.m"
                          {
#line 1411 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_45_45 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1411 "term_to_xml.m"
                            MR_String mercury__term_to_xml__DupElement_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 0)));
#line 1411 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__DupTypeDesc_27;
#line 1411 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__DupTypes_28;
#line 1411 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_37_37;
#line 1411 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_38_38;
#line 1411 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 1)));
#line 1412 "term_to_xml.m"
                            MR_Box mercury__term_to_xml__conv1_DupTypeDesc_27;

#line 1412 "term_to_xml.m"
                            {
#line 1412 "term_to_xml.m"
                              mercury__map__lookup_3_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_45_45, mercury__term_to_xml__ElementsSoFar_4, ((MR_Box) (mercury__term_to_xml__DupElement_25)), &mercury__term_to_xml__conv1_DupTypeDesc_27);
                            }
#line 1412 "term_to_xml.m"
                            mercury__term_to_xml__DupTypeDesc_27 = ((MR_Word) mercury__term_to_xml__conv1_DupTypeDesc_27);
#line 1413 "term_to_xml.m"
                            mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1413 "term_to_xml.m"
                            {
#line 1413 "term_to_xml.m"
                              mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__DupTypeDesc_27));
#line 1413 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 1) = ((MR_Box) (mercury__term_to_xml__V_38_38));
#line 1413 "term_to_xml.m"
                            }
#line 1413 "term_to_xml.m"
                            {
#line 1413 "term_to_xml.m"
                              mercury__term_to_xml__DupTypes_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
#line 1413 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 1) = ((MR_Box) (mercury__term_to_xml__V_37_37));
#line 1413 "term_to_xml.m"
                            }
#line 1414 "term_to_xml.m"
                            {
#line 1414 "term_to_xml.m"
                              mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__DupElement_25));
#line 1414 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 1) = ((MR_Box) (mercury__term_to_xml__DupTypes_28));
#line 1414 "term_to_xml.m"
                            }
#line 1411 "term_to_xml.m"
                          }
#line 1407 "term_to_xml.m"
                      }
#line 1405 "term_to_xml.m"
                  }
#line 1427 "term_to_xml.m"
                else
#line 1428 "term_to_xml.m"
                  {
#line 1428 "term_to_xml.m"
                    mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "term_to_xml.m"
                    MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
#line 1428 "term_to_xml.m"
                  }
#line 1427 "term_to_xml.m"
              }
#line 1430 "term_to_xml.m"
            else
#line 1431 "term_to_xml.m"
              {
#line 1431 "term_to_xml.m"
                mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "term_to_xml.m"
                MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_10));
#line 1431 "term_to_xml.m"
              }
#line 1394 "term_to_xml.m"
          }
#line 1392 "term_to_xml.m"
        return mercury__term_to_xml__HeadVar__5_5;
#line 1392 "term_to_xml.m"
      }
#line 1392 "term_to_xml.m"
      break;
#line 1392 "term_to_xml.m"
    }
#line 1387 "term_to_xml.m"
}

#line 1309 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
#line 1309 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 1309 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1309 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_6,
#line 1309 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1309 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1309 "term_to_xml.m"
{
#line 1315 "term_to_xml.m"
  {
#line 1315 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1315 "term_to_xml.m"
    MR_String mercury__term_to_xml__Str_8;

#line 1321 "term_to_xml.m"
#line 1321 "term_to_xml.m"
    switch (mercury__term_to_xml__Chr_6) {
#line 1321 "term_to_xml.m"
      default:
#line 1321 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_FALSE;
#line 1321 "term_to_xml.m"
        break;
#line 1321 "term_to_xml.m"
      case (MR_Char) 34:
#line 1325 "term_to_xml.m"
        {
#line 1325 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&quot;";
#line 1325 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1325 "term_to_xml.m"
        }
#line 1321 "term_to_xml.m"
        break;
#line 1321 "term_to_xml.m"
      case (MR_Char) 38:
#line 1323 "term_to_xml.m"
        {
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&amp;";
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1323 "term_to_xml.m"
        }
#line 1321 "term_to_xml.m"
        break;
#line 1321 "term_to_xml.m"
      case (MR_Char) 39:
#line 1324 "term_to_xml.m"
        {
#line 1324 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&apos;";
#line 1324 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1324 "term_to_xml.m"
        }
#line 1321 "term_to_xml.m"
        break;
#line 1321 "term_to_xml.m"
      case (MR_Char) 60:
#line 1321 "term_to_xml.m"
        {
#line 1321 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&lt;";
#line 1321 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1321 "term_to_xml.m"
        }
#line 1321 "term_to_xml.m"
        break;
#line 1321 "term_to_xml.m"
      case (MR_Char) 62:
#line 1322 "term_to_xml.m"
        {
#line 1322 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&gt;";
#line 1322 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1322 "term_to_xml.m"
        }
#line 1321 "term_to_xml.m"
        break;
#line 1321 "term_to_xml.m"
    }
#line 1315 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 11801 "term_to_xml.c"
      {
#line 11803 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11806 "term_to_xml.c"
        {
#line 11808 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Str_8)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11810 "term_to_xml.c"
          return;
        }
#line 11813 "term_to_xml.c"
      }
#line 1315 "term_to_xml.m"
    else
#line 1316 "term_to_xml.m"
      {
#line 1316 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_12_12;
#line 1316 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_5_21;
#line 1316 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11825 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 701 "string.opt"
        {
#line 701 "string.opt"
          mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_6));
#line 701 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 701 "string.opt"
        }
#line 703 "string.opt"
        {
#line 703 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_5_21);
        }
#line 11843 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11845 "term_to_xml.c"
        {
#line 11847 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__V_12_12)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11849 "term_to_xml.c"
          return;
        }
#line 1316 "term_to_xml.m"
      }
#line 1315 "term_to_xml.m"
  }
#line 1309 "term_to_xml.m"
}

#line 1303 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
#line 1303 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
#line 1303 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1303 "term_to_xml.m"
  MR_String mercury__term_to_xml__Str_6,
#line 1303 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1303 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1303 "term_to_xml.m"
{
#line 1306 "term_to_xml.m"
  {
#line 1306 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1306 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Length_8_22;
#line 1306 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__End_13_32;
#line 1306 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_33;

#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 11898 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Length_8_22  = Length;
#line 246 "string.opt"
}
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 11918 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_33  = Length;
#line 246 "string.opt"
}
#line 46 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Length_8_22 < mercury__term_to_xml__V_17_33);
#line 49 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 48 "int.opt"
      mercury__term_to_xml__End_13_32 = mercury__term_to_xml__Length_8_22;
#line 49 "int.opt"
    else
#line 50 "int.opt"
      mercury__term_to_xml__End_13_32 = mercury__term_to_xml__V_17_33;
#line 617 "string.opt"
    {
#line 617 "string.opt"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(mercury__term_to_xml__TypeClassInfo_for_writer_12, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Str_6, (MR_Integer) 0, mercury__term_to_xml__End_13_32, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 617 "string.opt"
      return;
    }
#line 1306 "term_to_xml.m"
  }
#line 1303 "term_to_xml.m"
}

#line 1293 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_attribute_4_p_0(
#line 1293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1293 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1293 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1293 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1293 "term_to_xml.m"
{
#line 1296 "term_to_xml.m"
  {
#line 1296 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1296 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1296 "term_to_xml.m"
    MR_String mercury__term_to_xml__Value_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1296 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 1296 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1296 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_15;
#line 1296 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 11978 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11980 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11982 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11984 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 11987 "term_to_xml.c"
    {
#line 11989 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 11992 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11994 "term_to_xml.c"
    {
#line 11996 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Name_6)), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 11999 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12001 "term_to_xml.c"
    {
#line 12003 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "=\"")), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_15_15);
    }
#line 1300 "term_to_xml.m"
    {
#line 1300 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Value_7, mercury__term_to_xml__STATE_VARIABLE_State_15_15, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12011 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12013 "term_to_xml.c"
    {
#line 12015 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 12017 "term_to_xml.c"
      return;
    }
#line 1296 "term_to_xml.m"
  }
#line 1293 "term_to_xml.m"
}

#line 1289 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__is_maybe_yes_2_p_0(
#line 1289 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_4,
#line 1289 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1289 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__X_3)
#line 1289 "term_to_xml.m"
{
#line 1291 "term_to_xml.m"
  {
#line 1291 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 1291 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1291 "term_to_xml.m"
      *mercury__term_to_xml__X_3 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0));
#line 1291 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1291 "term_to_xml.m"
  }
#line 1289 "term_to_xml.m"
}

#line 1280 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__make_attrs_from_sources_5_f_0(
#line 1280 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
#line 1280 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_8,
#line 1280 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 1280 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_10,
#line 1280 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11)
#line 1280 "term_to_xml.m"
{
#line 1284 "term_to_xml.m"
  {
#line 1284 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1284 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_12;
#line 1284 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_13;

#line 1285 "term_to_xml.m"
    {
#line 1285 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_13 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_7, mercury__term_to_xml__MaybeArity_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__MaybeField_10, mercury__term_to_xml__AttrFromSources_11);
    }
#line 1287 "term_to_xml.m"
    {
#line 1287 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_13, &mercury__term_to_xml__Attrs_12);
    }
#line 1284 "term_to_xml.m"
    return mercury__term_to_xml__Attrs_12;
#line 1284 "term_to_xml.m"
  }
#line 1280 "term_to_xml.m"
}

#line 1242 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(
#line 1242 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
#line 1242 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_8,
#line 1242 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 1242 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldName_10,
#line 1242 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__5_5)
#line 1242 "term_to_xml.m"
{
#line 1246 "term_to_xml.m"
  {
#line 1246 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1246 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttr_13;
#line 1246 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 0)));
#line 1246 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 1)));

#line 1256 "term_to_xml.m"
#line 1256 "term_to_xml.m"
    switch (mercury__term_to_xml__Source_12) {
#line 1256 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1256 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1262 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeArity_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1264 "term_to_xml.m"
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1262 "term_to_xml.m"
        else
#line 1259 "term_to_xml.m"
          {
#line 1259 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_8, (MR_Integer) 0)));
#line 1259 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_20_20;
#line 1259 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_21_21;

#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_15, (MR_Integer) 10, &mercury__term_to_xml__V_21_21);
            }
#line 1260 "term_to_xml.m"
            {
#line 1260 "term_to_xml.m"
              mercury__term_to_xml__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_20_20, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1260 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_20_20, 1) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1260 "term_to_xml.m"
            }
#line 1260 "term_to_xml.m"
            {
#line 1260 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_20_20));
#line 1260 "term_to_xml.m"
            }
#line 1259 "term_to_xml.m"
          }
#line 1256 "term_to_xml.m"
        break;
#line 1256 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1274 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeFieldName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1276 "term_to_xml.m"
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1274 "term_to_xml.m"
        else
#line 1272 "term_to_xml.m"
          {
#line 1272 "term_to_xml.m"
            MR_String mercury__term_to_xml__FieldName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldName_10, (MR_Integer) 0)));
#line 1272 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_17_17;

#line 1273 "term_to_xml.m"
            {
#line 1273 "term_to_xml.m"
              mercury__term_to_xml__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_17_17, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1273 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_17_17, 1) = ((MR_Box) (mercury__term_to_xml__FieldName_16));
#line 1273 "term_to_xml.m"
            }
#line 1273 "term_to_xml.m"
            {
#line 1273 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_17_17));
#line 1273 "term_to_xml.m"
            }
#line 1272 "term_to_xml.m"
          }
#line 1256 "term_to_xml.m"
        break;
#line 1256 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1252 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeFunctor_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1254 "term_to_xml.m"
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1252 "term_to_xml.m"
        else
#line 1250 "term_to_xml.m"
          {
#line 1250 "term_to_xml.m"
            MR_String mercury__term_to_xml__Functor_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctor_7, (MR_Integer) 0)));
#line 1250 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_22_22;

#line 1251 "term_to_xml.m"
            {
#line 1251 "term_to_xml.m"
              mercury__term_to_xml__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_22_22, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1251 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_22_22, 1) = ((MR_Box) (mercury__term_to_xml__Functor_14));
#line 1251 "term_to_xml.m"
            }
#line 1251 "term_to_xml.m"
            {
#line 1251 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1251 "term_to_xml.m"
            }
#line 1250 "term_to_xml.m"
          }
#line 1256 "term_to_xml.m"
        break;
#line 1256 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1267 "term_to_xml.m"
        {
#line 1267 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_18_18;
#line 1267 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_19_19;

#line 1268 "term_to_xml.m"
          {
#line 1268 "term_to_xml.m"
            mercury__term_to_xml__V_19_19 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_9);
          }
#line 1268 "term_to_xml.m"
          {
#line 1268 "term_to_xml.m"
            mercury__term_to_xml__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "term_to_xml.m"
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_18_18, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1268 "term_to_xml.m"
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_18_18, 1) = ((MR_Box) (mercury__term_to_xml__V_19_19));
#line 1268 "term_to_xml.m"
          }
#line 1268 "term_to_xml.m"
          {
#line 1268 "term_to_xml.m"
            mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_18_18));
#line 1268 "term_to_xml.m"
          }
#line 1267 "term_to_xml.m"
        }
#line 1256 "term_to_xml.m"
        break;
#line 1256 "term_to_xml.m"
    }
#line 1246 "term_to_xml.m"
    return mercury__term_to_xml__MaybeAttr_13;
#line 1246 "term_to_xml.m"
  }
#line 1242 "term_to_xml.m"
}

#line 1234 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_end_4_p_0(
#line 1234 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 1234 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1234 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_6,
#line 1234 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1234 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1234 "term_to_xml.m"
{
#line 1237 "term_to_xml.m"
  {
#line 1237 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1237 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_11;
#line 1237 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 12310 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12312 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12314 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12317 "term_to_xml.c"
    {
#line 12319 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_11_11);
    }
#line 12322 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12324 "term_to_xml.c"
    {
#line 12326 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Element_6)), mercury__term_to_xml__STATE_VARIABLE_State_11_11, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 12329 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12331 "term_to_xml.c"
    {
#line 12333 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 12335 "term_to_xml.c"
      return;
    }
#line 1237 "term_to_xml.m"
  }
#line 1234 "term_to_xml.m"
}

#line 1225 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_empty_element_5_p_0(
#line 1225 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1225 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 1225 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_7,
#line 1225 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Attributes_8,
#line 1225 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 1225 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 1225 "term_to_xml.m"
{
#line 1228 "term_to_xml.m"
  {
#line 1228 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1228 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1228 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
#line 1228 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 12370 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12372 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12374 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12377 "term_to_xml.c"
    {
#line 12379 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 12382 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12384 "term_to_xml.c"
    {
#line 12386 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1231 "term_to_xml.m"
    {
#line 1231 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12394 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12396 "term_to_xml.c"
    {
#line 12398 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " />")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 12400 "term_to_xml.c"
      return;
    }
#line 1228 "term_to_xml.m"
  }
#line 1225 "term_to_xml.m"
}

#line 1213 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(
#line 1213 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
#line 1213 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 1213 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_11,
#line 1213 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_12,
#line 1213 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
#line 1213 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_14,
#line 1213 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_15,
#line 1213 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_16,
#line 1213 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1213 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1213 "term_to_xml.m"
{
#line 1219 "term_to_xml.m"
  {
#line 1219 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1219 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_18;
#line 1219 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1219 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
#line 12443 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1285 "term_to_xml.m"
    {
#line 1285 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
#line 1287 "term_to_xml.m"
    {
#line 1287 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
#line 1222 "term_to_xml.m"
    {
#line 1222 "term_to_xml.m"
      mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 12461 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12463 "term_to_xml.c"
    {
#line 12465 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12467 "term_to_xml.c"
      return;
    }
#line 1219 "term_to_xml.m"
  }
#line 1213 "term_to_xml.m"
}

#line 1204 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_start_5_p_0(
#line 1204 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1204 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 1204 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_7,
#line 1204 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Attributes_8,
#line 1204 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 1204 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 1204 "term_to_xml.m"
{
#line 1207 "term_to_xml.m"
  {
#line 1207 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1207 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1207 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
#line 1207 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 12502 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12504 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12506 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12509 "term_to_xml.c"
    {
#line 12511 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 12514 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12516 "term_to_xml.c"
    {
#line 12518 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1210 "term_to_xml.m"
    {
#line 1210 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12526 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12528 "term_to_xml.c"
    {
#line 12530 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 12532 "term_to_xml.c"
      return;
    }
#line 1207 "term_to_xml.m"
  }
#line 1204 "term_to_xml.m"
}

#line 1191 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(
#line 1191 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
#line 1191 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 1191 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_11,
#line 1191 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_12,
#line 1191 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
#line 1191 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_14,
#line 1191 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_15,
#line 1191 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_16,
#line 1191 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1191 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1191 "term_to_xml.m"
{
#line 1198 "term_to_xml.m"
  {
#line 1198 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1198 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_18;
#line 1198 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1198 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
#line 12575 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1285 "term_to_xml.m"
    {
#line 1285 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
#line 1287 "term_to_xml.m"
    {
#line 1287 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
#line 1201 "term_to_xml.m"
    {
#line 1201 "term_to_xml.m"
      mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 12593 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12595 "term_to_xml.c"
    {
#line 12597 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12599 "term_to_xml.c"
      return;
    }
#line 1198 "term_to_xml.m"
  }
#line 1191 "term_to_xml.m"
}

#line 1173 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(
#line 1173 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1173 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1173 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1173 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1173 "term_to_xml.m"
  MR_String mercury__term_to_xml__Value_12,
#line 1173 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_13,
#line 1173 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1173 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 1173 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 1173 "term_to_xml.m"
{
#line 1179 "term_to_xml.m"
  {
#line 1179 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1179 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_16;
#line 1179 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_20;
#line 1179 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1179 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_22_22;
#line 1179 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 1179 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1179 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 1179 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 1179 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
#line 1179 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
#line 1179 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_47;
#line 12656 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12658 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12660 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12662 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12664 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12666 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12669 "term_to_xml.c"
    {
#line 12671 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_17, &mercury__term_to_xml__STATE_VARIABLE_State_20_20);
    }
#line 12674 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12676 "term_to_xml.c"
    {
#line 12678 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_20_20, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 1182 "term_to_xml.m"
    mercury__term_to_xml__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "term_to_xml.m"
    mercury__term_to_xml__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1285 "term_to_xml.m"
    {
#line 1285 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_47 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_22_22, mercury__term_to_xml__V_23_23, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__MaybeField_13, mercury__term_to_xml__AttrFromSources_11);
    }
#line 1287 "term_to_xml.m"
    {
#line 1287 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_47, &mercury__term_to_xml__Attrs_16);
    }
#line 1184 "term_to_xml.m"
    {
#line 1184 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Attrs_16, mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
#line 12700 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12702 "term_to_xml.c"
    {
#line 12704 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 1186 "term_to_xml.m"
    {
#line 1186 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_12, mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 12712 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12714 "term_to_xml.c"
    {
#line 12716 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
#line 12719 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12721 "term_to_xml.c"
    {
#line 12723 "term_to_xml.c"
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
    }
#line 12726 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12728 "term_to_xml.c"
    {
#line 12730 "term_to_xml.c"
      mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_18);
#line 12732 "term_to_xml.c"
      return;
    }
#line 1179 "term_to_xml.m"
  }
#line 1173 "term_to_xml.m"
}

#line 1162 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__indent_4_p_0(
#line 1162 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_16,
#line 1162 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1162 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_6,
#line 1162 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1162 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1162 "term_to_xml.m"
{
#line 1169 "term_to_xml.m"
  while (MR_TRUE)
#line 1169 "term_to_xml.m"
    {
#line 1169 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1169 "term_to_xml.m"
      {
#line 1169 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__IndentLevel_6 > (MR_Integer) 0);

#line 1169 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1167 "term_to_xml.m"
          {
#line 1167 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 1167 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_13_13;
#line 12774 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12777 "term_to_xml.c"
            {
#line 12779 "term_to_xml.c"
              mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_16), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\t")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
            }
#line 1168 "term_to_xml.m"
            mercury__term_to_xml__V_13_13 = (mercury__term_to_xml__IndentLevel_6 - (MR_Integer) 1);
#line 1168 "term_to_xml.m"
            /* direct tailcall eliminated */
#line 1168 "term_to_xml.m"
            {
#line 1168 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__IndentLevel__tmp_copy_6 = mercury__term_to_xml__V_13_13;
#line 1168 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_8 = mercury__term_to_xml__STATE_VARIABLE_State_12_12;

#line 1168 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_0_8 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_8;
#line 1168 "term_to_xml.m"
              mercury__term_to_xml__IndentLevel_6 = mercury__term_to_xml__IndentLevel__tmp_copy_6;
#line 1168 "term_to_xml.m"
            }
#line 1168 "term_to_xml.m"
            continue;
#line 1167 "term_to_xml.m"
          }
#line 1169 "term_to_xml.m"
        else
#line 1169 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_9 = mercury__term_to_xml__STATE_VARIABLE_State_0_8;
#line 1169 "term_to_xml.m"
      }
#line 1169 "term_to_xml.m"
      break;
#line 1169 "term_to_xml.m"
    }
#line 1162 "term_to_xml.m"
}

#line 1147 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_include_details_cc_8_p_0(
#line 1147 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1147 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1147 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1147 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1147 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1147 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1147 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1147 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1147 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1147 "term_to_xml.m"
{
#line 1153 "term_to_xml.m"
  {
#line 1153 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1154 "term_to_xml.m"
    {
#line 1154 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1154 "term_to_xml.m"
      return;
    }
#line 1153 "term_to_xml.m"
  }
#line 1147 "term_to_xml.m"
}

#line 1137 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_canonicalize_8_p_0(
#line 1137 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1137 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1137 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1137 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1137 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1137 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1137 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1137 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1137 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1137 "term_to_xml.m"
{
#line 1143 "term_to_xml.m"
  {
#line 1143 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1144 "term_to_xml.m"
    {
#line 1144 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1144 "term_to_xml.m"
      return;
    }
#line 1143 "term_to_xml.m"
  }
#line 1137 "term_to_xml.m"
}

#line 1127 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_do_not_allow_8_p_0(
#line 1127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1127 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1127 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1127 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1127 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1127 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1127 "term_to_xml.m"
{
#line 1133 "term_to_xml.m"
  {
#line 1133 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1134 "term_to_xml.m"
    {
#line 1134 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 0, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1134 "term_to_xml.m"
      return;
    }
#line 1133 "term_to_xml.m"
  }
#line 1127 "term_to_xml.m"
}

#line 1099 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_3(
#line 1099 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1099 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1099 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1099 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1099 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1099 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1099 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1099 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1099 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1099 "term_to_xml.m"
{
#line 1108 "term_to_xml.m"
  {
#line 1108 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1108 "term_to_xml.m"
#line 1108 "term_to_xml.m"
    switch (mercury__term_to_xml__NonCanon_10) {
#line 1108 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1115 "term_to_xml.m"
        {
#line 1115 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_17_17;

#line 1115 "term_to_xml.m"
          {
#line 1115 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_17_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1115 "term_to_xml.m"
        }
#line 1108 "term_to_xml.m"
        break;
#line 1108 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1109 "term_to_xml.m"
        {
#line 1109 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_16_16;

#line 1109 "term_to_xml.m"
          {
#line 1109 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1109 "term_to_xml.m"
        }
#line 1108 "term_to_xml.m"
        break;
#line 1108 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1121 "term_to_xml.m"
        {
#line 1121 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_18_18;

#line 1121 "term_to_xml.m"
          {
#line 1121 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_18_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1121 "term_to_xml.m"
        }
#line 1108 "term_to_xml.m"
        break;
#line 1108 "term_to_xml.m"
    }
#line 1108 "term_to_xml.m"
  }
#line 1099 "term_to_xml.m"
}

#line 1097 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_2(
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1097 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1097 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1097 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1097 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1097 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1097 "term_to_xml.m"
{
#line 1108 "term_to_xml.m"
  {
#line 1108 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1108 "term_to_xml.m"
    {
#line 1108 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1108 "term_to_xml.m"
      return;
    }
#line 1108 "term_to_xml.m"
  }
#line 1097 "term_to_xml.m"
}

#line 1095 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_1(
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1095 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1095 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1095 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1095 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1095 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1095 "term_to_xml.m"
{
#line 1108 "term_to_xml.m"
  {
#line 1108 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1108 "term_to_xml.m"
    {
#line 1108 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1108 "term_to_xml.m"
      return;
    }
#line 1108 "term_to_xml.m"
  }
#line 1095 "term_to_xml.m"
}

#line 1093 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_0(
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1093 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1093 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1093 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1093 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1093 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1093 "term_to_xml.m"
{
#line 1108 "term_to_xml.m"
  {
#line 1108 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1108 "term_to_xml.m"
    {
#line 1108 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1108 "term_to_xml.m"
      return;
    }
#line 1108 "term_to_xml.m"
  }
#line 1093 "term_to_xml.m"
}

#line 1073 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
#line 1073 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_6,
#line 1073 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1073 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_9,
#line 1073 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_10,
#line 1073 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11)
#line 1073 "term_to_xml.m"
{
#line 1077 "term_to_xml.m"
  while (MR_TRUE)
#line 1077 "term_to_xml.m"
    {
#line 1077 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1077 "term_to_xml.m"
      {
#line 1077 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1077 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__FunctorNum_7;
#line 1077 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_8;
#line 1083 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FoundFieldNames_13;
#line 1079 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_14_14;
#line 1079 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_15_15;
#line 1079 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgNameList0_13_22;
#line 56 "construct.opt"
        MR_Word mercury__term_to_xml__V_12_12;

#line 1076 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1076 "term_to_xml.m"
          {
#line 1076 "term_to_xml.m"
            mercury__term_to_xml__FunctorNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1076 "term_to_xml.m"
            mercury__term_to_xml__FunctorNums_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "construct.opt"
            {
#line 56 "construct.opt"
              mercury__term_to_xml__succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(mercury__term_to_xml__TypeDesc_6, mercury__term_to_xml__FunctorNum_7, &mercury__term_to_xml__V_14_14, &mercury__term_to_xml__V_15_15, &mercury__term_to_xml__V_12_12, &mercury__term_to_xml__ArgNameList0_13_22);
            }
#line 1079 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1079 "term_to_xml.m"
              {
#line 57 "construct.opt"
                {
#line 57 "construct.opt"
                  mercury__term_to_xml__FoundFieldNames_13 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__ArgNameList0_13_22);
                }
#line 1079 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Functor_9, mercury__term_to_xml__V_14_14) == 0);
#line 1079 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1079 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Arity_10 == mercury__term_to_xml__V_15_15);
#line 1079 "term_to_xml.m"
              }
#line 1083 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1082 "term_to_xml.m"
              {
#line 1082 "term_to_xml.m"
                *mercury__term_to_xml__MaybeFieldNames_11 = mercury__term_to_xml__FoundFieldNames_13;
#line 1082 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 1082 "term_to_xml.m"
              }
#line 1083 "term_to_xml.m"
            else
#line 1084 "term_to_xml.m"
              {
#line 1084 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1084 "term_to_xml.m"
                {
#line 1084 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__FunctorNums_8;

#line 1084 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1084 "term_to_xml.m"
                }
#line 1084 "term_to_xml.m"
                continue;
#line 1084 "term_to_xml.m"
              }
#line 1076 "term_to_xml.m"
          }
#line 1077 "term_to_xml.m"
        return mercury__term_to_xml__succeeded;
#line 1077 "term_to_xml.m"
      }
#line 1077 "term_to_xml.m"
      break;
#line 1077 "term_to_xml.m"
    }
#line 1073 "term_to_xml.m"
}

#line 1056 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__get_field_names_3_f_0(
#line 1056 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 1056 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_6,
#line 1056 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_7)
#line 1056 "term_to_xml.m"
{
#line 1069 "term_to_xml.m"
  {
#line 1069 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1069 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFields_8;
#line 1069 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__NumFunctors_9;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_17;

#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__get_field_names_3_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13295 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_9  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
      {
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__V_17_17 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_9 > mercury__term_to_xml__V_17_17);
#line 1043 "term_to_xml.m"
      }
#line 1069 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1060 "term_to_xml.m"
      {
#line 1060 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_10;
#line 1060 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_13_13 = (mercury__term_to_xml__NumFunctors_9 - (MR_Integer) 1);
#line 1060 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1066 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FoundMaybeFields_11;

#line 890 "list.opt"
        {
#line 890 "list.opt"
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_7_21, &mercury__term_to_xml__FunctorNums_10);
        }
#line 1062 "term_to_xml.m"
        {
#line 1062 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__find_field_names_5_p_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__FunctorNums_10, mercury__term_to_xml__Functor_6, mercury__term_to_xml__Arity_7, &mercury__term_to_xml__FoundMaybeFields_11);
        }
#line 1066 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1065 "term_to_xml.m"
          mercury__term_to_xml__MaybeFields_8 = mercury__term_to_xml__FoundMaybeFields_11;
#line 1066 "term_to_xml.m"
        else
#line 1067 "term_to_xml.m"
          mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1060 "term_to_xml.m"
      }
#line 1069 "term_to_xml.m"
    else
#line 1070 "term_to_xml.m"
      mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1069 "term_to_xml.m"
    return mercury__term_to_xml__MaybeFields_8;
#line 1069 "term_to_xml.m"
  }
#line 1056 "term_to_xml.m"
}

#line 1047 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
#line 1047 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1047 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgPseudoType_4)
#line 1047 "term_to_xml.m"
{
#line 1049 "term_to_xml.m"
  {
#line 1049 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1049 "term_to_xml.m"
    MR_Word mercury__term_to_xml__PseudoTypeDesc_5;
#line 1049 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtor_6;
#line 1049 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ArgPseudoTypes_7;
#line 1049 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;
#line 1049 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_9_9;
#line 1049 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_10_10;
#line 123 "type_desc.opt"
    MR_String mercury__term_to_xml___ModuleName_5_13;
#line 123 "type_desc.opt"
    MR_Integer mercury__term_to_xml___Arity_6_14;
#line 123 "type_desc.opt"
    MR_String mercury__term_to_xml___Name_5_17;
#line 123 "type_desc.opt"
    MR_Integer mercury__term_to_xml___Arity_6_18;

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_3 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 13406 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_5  = PseudoTypeDesc;
#line 32 "type_desc.opt"
}
#line 69 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_5 ;
		{
#line 69 "type_desc.opt"
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
#line 13438 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_6  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_7  = ArgPseudoTypeInfos;
#line 69 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1049 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
      {
#line 1052 "term_to_xml.m"
        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_7)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1052 "term_to_xml.m"
          {
#line 1052 "term_to_xml.m"
            *mercury__term_to_xml__ArgPseudoType_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 0)));
#line 1052 "term_to_xml.m"
            mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 1)));
#line 1052 "term_to_xml.m"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
              {
#line 123 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
		{
#line 123 "type_desc.opt"
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
#line 13510 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml___ModuleName_5_13  = TypeCtorModuleName;
	 mercury__term_to_xml__V_9_9  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_14  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1053 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, (MR_String) "array") == 0);
#line 1049 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
                  {
#line 123 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
		{
#line 123 "type_desc.opt"
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
#line 13566 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_10_10  = TypeCtorModuleName;
	 mercury__term_to_xml___Name_5_17  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_18  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1054 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_10_10, (MR_String) "array") == 0);
#line 1049 "term_to_xml.m"
                  }
#line 1049 "term_to_xml.m"
              }
#line 1052 "term_to_xml.m"
          }
#line 1049 "term_to_xml.m"
      }
#line 1049 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1049 "term_to_xml.m"
  }
#line 1047 "term_to_xml.m"
}

#line 1041 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__is_discriminated_union_2_p_0(
#line 1041 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1041 "term_to_xml.m"
  MR_Integer * mercury__term_to_xml__NumFunctors_4)
#line 1041 "term_to_xml.m"
{
#line 1043 "term_to_xml.m"
  {
#line 1043 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_5_5;

#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_discriminated_union_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_3 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13625 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_to_xml__NumFunctors_4  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
      {
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__V_5_5 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (*mercury__term_to_xml__NumFunctors_4 > mercury__term_to_xml__V_5_5);
#line 1043 "term_to_xml.m"
      }
#line 1043 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1043 "term_to_xml.m"
  }
#line 1041 "term_to_xml.m"
}

#line 994 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_3(
#line 994 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 994 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 994 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 994 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 994 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 994 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 994 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 994 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 994 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 994 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 994 "term_to_xml.m"
{
#line 998 "term_to_xml.m"
  {
#line 998 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 998 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 37 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1014 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1019 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1001 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "term_to_xml.m"
      {
#line 1003 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "term_to_xml.m"
      }
#line 1001 "term_to_xml.m"
    else
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 1000 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 1000 "term_to_xml.m"
      }
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1006 "term_to_xml.m"
    {
#line 1006 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_3(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 37 "type_desc.opt"
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
#line 13771 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13795 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
      {
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1043 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1010 "term_to_xml.m"
      {
#line 1010 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1010 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    else
#line 1012 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1015 "term_to_xml.m"
    {
#line 1015 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1019 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1016 "term_to_xml.m"
      {
#line 1016 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1017 "term_to_xml.m"
        {
#line 1017 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1017 "term_to_xml.m"
          return;
        }
#line 1016 "term_to_xml.m"
      }
#line 1019 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "term_to_xml.m"
      {
#line 1021 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1024 "term_to_xml.m"
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1024 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1023 "term_to_xml.m"
          return;
        }
#line 1021 "term_to_xml.m"
      }
#line 1026 "term_to_xml.m"
    else
#line 1027 "term_to_xml.m"
      {
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1027 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 13937 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13939 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13941 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13943 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1031 "term_to_xml.m"
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1031 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1034 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1033 "term_to_xml.m"
        {
#line 1033 "term_to_xml.m"
          mercury__term_to_xml__write_child_xml_elements_8_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__NonCanon_11, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1035 "term_to_xml.m"
        {
#line 1035 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 13989 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13991 "term_to_xml.c"
        {
#line 13993 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 13996 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13998 "term_to_xml.c"
        {
#line 14000 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14003 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14005 "term_to_xml.c"
        {
#line 14007 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14010 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14012 "term_to_xml.c"
        {
#line 14014 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14016 "term_to_xml.c"
          return;
        }
#line 1027 "term_to_xml.m"
      }
#line 998 "term_to_xml.m"
  }
#line 994 "term_to_xml.m"
}

#line 992 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_2(
#line 992 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 992 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 992 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 992 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 992 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 992 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 992 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 992 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 992 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 992 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 992 "term_to_xml.m"
{
#line 998 "term_to_xml.m"
  {
#line 998 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 998 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 37 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1014 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1019 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1001 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "term_to_xml.m"
      {
#line 1003 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "term_to_xml.m"
      }
#line 1001 "term_to_xml.m"
    else
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 1000 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 1000 "term_to_xml.m"
      }
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1006 "term_to_xml.m"
    {
#line 1006 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 37 "type_desc.opt"
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
#line 14145 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14169 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
      {
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1043 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1010 "term_to_xml.m"
      {
#line 1010 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1010 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    else
#line 1012 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1015 "term_to_xml.m"
    {
#line 1015 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1019 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1016 "term_to_xml.m"
      {
#line 1016 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1017 "term_to_xml.m"
        {
#line 1017 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1017 "term_to_xml.m"
          return;
        }
#line 1016 "term_to_xml.m"
      }
#line 1019 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "term_to_xml.m"
      {
#line 1021 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1024 "term_to_xml.m"
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1024 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1023 "term_to_xml.m"
          return;
        }
#line 1021 "term_to_xml.m"
      }
#line 1026 "term_to_xml.m"
    else
#line 1027 "term_to_xml.m"
      {
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1027 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 14311 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14313 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14315 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14317 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1031 "term_to_xml.m"
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1031 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1034 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1033 "term_to_xml.m"
        {
#line 1033 "term_to_xml.m"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1035 "term_to_xml.m"
        {
#line 1035 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 14363 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14365 "term_to_xml.c"
        {
#line 14367 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 14370 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14372 "term_to_xml.c"
        {
#line 14374 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14377 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14379 "term_to_xml.c"
        {
#line 14381 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14384 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14386 "term_to_xml.c"
        {
#line 14388 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14390 "term_to_xml.c"
          return;
        }
#line 1027 "term_to_xml.m"
      }
#line 998 "term_to_xml.m"
  }
#line 992 "term_to_xml.m"
}

#line 990 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_1(
#line 990 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 990 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 990 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 990 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 990 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 990 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 990 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 990 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 990 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 990 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 990 "term_to_xml.m"
{
#line 998 "term_to_xml.m"
  {
#line 998 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 998 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 37 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1014 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1019 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1001 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "term_to_xml.m"
      {
#line 1003 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "term_to_xml.m"
      }
#line 1001 "term_to_xml.m"
    else
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 1000 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 1000 "term_to_xml.m"
      }
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1006 "term_to_xml.m"
    {
#line 1006 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 37 "type_desc.opt"
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
#line 14519 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14543 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
      {
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1043 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1010 "term_to_xml.m"
      {
#line 1010 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1010 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    else
#line 1012 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1015 "term_to_xml.m"
    {
#line 1015 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1019 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1016 "term_to_xml.m"
      {
#line 1016 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1017 "term_to_xml.m"
        {
#line 1017 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1017 "term_to_xml.m"
          return;
        }
#line 1016 "term_to_xml.m"
      }
#line 1019 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "term_to_xml.m"
      {
#line 1021 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1024 "term_to_xml.m"
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1024 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1023 "term_to_xml.m"
          return;
        }
#line 1021 "term_to_xml.m"
      }
#line 1026 "term_to_xml.m"
    else
#line 1027 "term_to_xml.m"
      {
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1027 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 14685 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14687 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14689 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14691 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1031 "term_to_xml.m"
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1031 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1034 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1033 "term_to_xml.m"
        {
#line 1033 "term_to_xml.m"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1035 "term_to_xml.m"
        {
#line 1035 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 14737 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14739 "term_to_xml.c"
        {
#line 14741 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 14744 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14746 "term_to_xml.c"
        {
#line 14748 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14751 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14753 "term_to_xml.c"
        {
#line 14755 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14758 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14760 "term_to_xml.c"
        {
#line 14762 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14764 "term_to_xml.c"
          return;
        }
#line 1027 "term_to_xml.m"
      }
#line 998 "term_to_xml.m"
  }
#line 990 "term_to_xml.m"
}

#line 988 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_0(
#line 988 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 988 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 988 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 988 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 988 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 988 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 988 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 988 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 988 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 988 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 988 "term_to_xml.m"
{
#line 998 "term_to_xml.m"
  {
#line 998 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 998 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 998 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 998 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 37 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 1014 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 1014 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1019 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 1001 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "term_to_xml.m"
      {
#line 1003 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "term_to_xml.m"
      }
#line 1001 "term_to_xml.m"
    else
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 1000 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 1000 "term_to_xml.m"
      }
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1006 "term_to_xml.m"
    {
#line 1006 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_0(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 37 "type_desc.opt"
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
#line 14893 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14917 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
      {
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1043 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1010 "term_to_xml.m"
      {
#line 1010 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1010 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1010 "term_to_xml.m"
      }
#line 1011 "term_to_xml.m"
    else
#line 1012 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 1014 "term_to_xml.m"
    {
#line 1014 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 1014 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 1015 "term_to_xml.m"
    {
#line 1015 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1019 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1016 "term_to_xml.m"
      {
#line 1016 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1016 "term_to_xml.m"
        {
#line 1016 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1017 "term_to_xml.m"
        {
#line 1017 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1017 "term_to_xml.m"
          return;
        }
#line 1016 "term_to_xml.m"
      }
#line 1019 "term_to_xml.m"
    else
#line 1026 "term_to_xml.m"
    if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "term_to_xml.m"
      {
#line 1021 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 1021 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;

#line 1022 "term_to_xml.m"
        {
#line 1022 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1024 "term_to_xml.m"
        }
#line 1024 "term_to_xml.m"
        {
#line 1024 "term_to_xml.m"
          mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1024 "term_to_xml.m"
        }
#line 1023 "term_to_xml.m"
        {
#line 1023 "term_to_xml.m"
          mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1023 "term_to_xml.m"
          return;
        }
#line 1021 "term_to_xml.m"
      }
#line 1026 "term_to_xml.m"
    else
#line 1027 "term_to_xml.m"
      {
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_37_37;
#line 1027 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_38_38;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1027 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_40_40;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1027 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 15059 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15061 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15063 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15065 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1028 "term_to_xml.m"
        {
#line 1028 "term_to_xml.m"
          mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
        }
#line 1029 "term_to_xml.m"
        {
#line 1029 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1031 "term_to_xml.m"
        }
#line 1031 "term_to_xml.m"
        {
#line 1031 "term_to_xml.m"
          mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1031 "term_to_xml.m"
        }
#line 1030 "term_to_xml.m"
        {
#line 1030 "term_to_xml.m"
          mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
        }
#line 1034 "term_to_xml.m"
        mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1033 "term_to_xml.m"
        {
#line 1033 "term_to_xml.m"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
        }
#line 1035 "term_to_xml.m"
        {
#line 1035 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
        }
#line 15111 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15113 "term_to_xml.c"
        {
#line 15115 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 15118 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15120 "term_to_xml.c"
        {
#line 15122 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 15125 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15127 "term_to_xml.c"
        {
#line 15129 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 15132 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15134 "term_to_xml.c"
        {
#line 15136 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 15138 "term_to_xml.c"
          return;
        }
#line 1027 "term_to_xml.m"
      }
#line 998 "term_to_xml.m"
  }
#line 988 "term_to_xml.m"
}

#line 963 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
#line 963 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
#line 963 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 963 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_7,
#line 963 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_8,
#line 963 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 963 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 963 "term_to_xml.m"
{
#line 969 "term_to_xml.m"
  {
#line 969 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 969 "term_to_xml.m"
#line 969 "term_to_xml.m"
    switch (mercury__term_to_xml__Format_7) {
#line 969 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 969 "term_to_xml.m"
      case (MR_Integer) 0:
#line 970 "term_to_xml.m"
        {
#line 970 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_13, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Indent_8, mercury__term_to_xml__STATE_VARIABLE_State_0_10, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 970 "term_to_xml.m"
          return;
        }
#line 969 "term_to_xml.m"
        break;
#line 969 "term_to_xml.m"
      case (MR_Integer) 1:
#line 972 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_11 = mercury__term_to_xml__STATE_VARIABLE_State_0_10;
#line 969 "term_to_xml.m"
        break;
#line 969 "term_to_xml.m"
    }
#line 969 "term_to_xml.m"
  }
#line 963 "term_to_xml.m"
}

#line 956 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
#line 956 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 956 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1,
#line 956 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 956 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
#line 956 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4)
#line 956 "term_to_xml.m"
{
#line 959 "term_to_xml.m"
  {
#line 959 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 959 "term_to_xml.m"
#line 959 "term_to_xml.m"
    switch (mercury__term_to_xml__HeadVar__2_2) {
#line 959 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 959 "term_to_xml.m"
      case (MR_Integer) 0:
#line 960 "term_to_xml.m"
        {
#line 15228 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15231 "term_to_xml.c"
          {
#line 15233 "term_to_xml.c"
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_0_3, mercury__term_to_xml__STATE_VARIABLE_State_4);
#line 15235 "term_to_xml.c"
            return;
          }
#line 960 "term_to_xml.m"
        }
#line 959 "term_to_xml.m"
        break;
#line 959 "term_to_xml.m"
      case (MR_Integer) 1:
#line 959 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_4 = mercury__term_to_xml__STATE_VARIABLE_State_0_3;
#line 959 "term_to_xml.m"
        break;
#line 959 "term_to_xml.m"
    }
#line 959 "term_to_xml.m"
  }
#line 956 "term_to_xml.m"
}

#line 947 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__contains_noformat_xml_1_p_0(
#line 947 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1)
#line 947 "term_to_xml.m"
{
#line 949 "term_to_xml.m"
  while (MR_TRUE)
#line 949 "term_to_xml.m"
    {
#line 949 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 949 "term_to_xml.m"
      {
#line 949 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 949 "term_to_xml.m"
        MR_Word mercury__term_to_xml__XML_2;
#line 949 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Rest_3;

#line 949 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 949 "term_to_xml.m"
          {
#line 949 "term_to_xml.m"
            mercury__term_to_xml__XML_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 949 "term_to_xml.m"
            mercury__term_to_xml__Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 951 "term_to_xml.m"
            {
#line 951 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_4_4;

#line 940 "term_to_xml.m"
#line 940 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__XML_2)) {
#line 940 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 940 "term_to_xml.m"
                case (MR_Integer) 0:
#line 940 "term_to_xml.m"
                  mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 940 "term_to_xml.m"
                  break;
#line 940 "term_to_xml.m"
                case (MR_Integer) 1:
#line 941 "term_to_xml.m"
                  mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 940 "term_to_xml.m"
                  break;
#line 940 "term_to_xml.m"
                case (MR_Integer) 2:
#line 942 "term_to_xml.m"
                  mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 940 "term_to_xml.m"
                  break;
#line 940 "term_to_xml.m"
                case (MR_Integer) 3:
#line 940 "term_to_xml.m"
#line 940 "term_to_xml.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_2, (MR_Integer) 0)))) {
#line 940 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 940 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 943 "term_to_xml.m"
                      mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 940 "term_to_xml.m"
                      break;
#line 940 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 945 "term_to_xml.m"
                      mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 940 "term_to_xml.m"
                      break;
#line 940 "term_to_xml.m"
                    case (MR_Integer) 2:
#line 944 "term_to_xml.m"
                      mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 940 "term_to_xml.m"
                      break;
#line 940 "term_to_xml.m"
                  }
#line 940 "term_to_xml.m"
                  break;
#line 940 "term_to_xml.m"
              }
#line 951 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_4_4 == (MR_Integer) 0);
#line 951 "term_to_xml.m"
            }
#line 952 "term_to_xml.m"
            if (!(mercury__term_to_xml__succeeded))
#line 953 "term_to_xml.m"
              {
#line 953 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 953 "term_to_xml.m"
                {
#line 953 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__1__tmp_copy_1 = mercury__term_to_xml__Rest_3;

#line 953 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__HeadVar__1__tmp_copy_1;
#line 953 "term_to_xml.m"
                }
#line 953 "term_to_xml.m"
                continue;
#line 953 "term_to_xml.m"
              }
#line 949 "term_to_xml.m"
          }
#line 949 "term_to_xml.m"
        return mercury__term_to_xml__succeeded;
#line 949 "term_to_xml.m"
      }
#line 949 "term_to_xml.m"
      break;
#line 949 "term_to_xml.m"
    }
#line 947 "term_to_xml.m"
}

#line 938 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__can_format_siblings_1_f_0(
#line 938 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1)
#line 938 "term_to_xml.m"
{
#line 940 "term_to_xml.m"
  {
#line 940 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 940 "term_to_xml.m"
    MR_Word mercury__term_to_xml__HeadVar__2_2;

#line 940 "term_to_xml.m"
#line 940 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 940 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 940 "term_to_xml.m"
      case (MR_Integer) 0:
#line 940 "term_to_xml.m"
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 940 "term_to_xml.m"
        break;
#line 940 "term_to_xml.m"
      case (MR_Integer) 1:
#line 941 "term_to_xml.m"
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 940 "term_to_xml.m"
        break;
#line 940 "term_to_xml.m"
      case (MR_Integer) 2:
#line 942 "term_to_xml.m"
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 940 "term_to_xml.m"
        break;
#line 940 "term_to_xml.m"
      case (MR_Integer) 3:
#line 940 "term_to_xml.m"
#line 940 "term_to_xml.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) {
#line 940 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 940 "term_to_xml.m"
          case (MR_Integer) 0:
#line 943 "term_to_xml.m"
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 940 "term_to_xml.m"
            break;
#line 940 "term_to_xml.m"
          case (MR_Integer) 1:
#line 945 "term_to_xml.m"
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 940 "term_to_xml.m"
            break;
#line 940 "term_to_xml.m"
          case (MR_Integer) 2:
#line 944 "term_to_xml.m"
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 940 "term_to_xml.m"
            break;
#line 940 "term_to_xml.m"
        }
#line 940 "term_to_xml.m"
        break;
#line 940 "term_to_xml.m"
    }
#line 940 "term_to_xml.m"
    return mercury__term_to_xml__HeadVar__2_2;
#line 940 "term_to_xml.m"
  }
#line 938 "term_to_xml.m"
}

#line 883 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_format_6_p_0(
#line 883 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_62,
#line 883 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 883 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_8,
#line 883 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_9,
#line 883 "term_to_xml.m"
  MR_Word mercury__term_to_xml__XML_10,
#line 883 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_24,
#line 883 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_25)
#line 883 "term_to_xml.m"
{
#line 889 "term_to_xml.m"
  {
#line 889 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 889 "term_to_xml.m"
#line 889 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__XML_10)) {
#line 889 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 889 "term_to_xml.m"
      case (MR_Integer) 0:
#line 889 "term_to_xml.m"
        {
#line 889 "term_to_xml.m"
          MR_String mercury__term_to_xml__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 0)));
#line 889 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 889 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__XML_10, (MR_Integer) 2)));
#line 889 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_49_49;

#line 890 "term_to_xml.m"
          {
#line 890 "term_to_xml.m"
            mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_49_49);
          }
#line 895 "term_to_xml.m"
          if ((mercury__term_to_xml__Children_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 892 "term_to_xml.m"
            {
#line 892 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_60_60;

#line 893 "term_to_xml.m"
              {
#line 893 "term_to_xml.m"
                mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__Attrs_13, mercury__term_to_xml__STATE_VARIABLE_State_49_49, &mercury__term_to_xml__STATE_VARIABLE_State_60_60);
              }
#line 894 "term_to_xml.m"
              {
#line 894 "term_to_xml.m"
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_60_60, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 894 "term_to_xml.m"
                return;
              }
#line 892 "term_to_xml.m"
            }
#line 895 "term_to_xml.m"
          else
#line 896 "term_to_xml.m"
            {
#line 896 "term_to_xml.m"
              MR_Word mercury__term_to_xml__ChildrenFormat_17;
#line 896 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_50_50;
#line 896 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;
#line 896 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_54_54;
#line 896 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__V_55_55;
#line 896 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_57;
#line 896 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_58_58;

#line 897 "term_to_xml.m"
              {
#line 897 "term_to_xml.m"
                mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__Attrs_13, mercury__term_to_xml__STATE_VARIABLE_State_49_49, &mercury__term_to_xml__STATE_VARIABLE_State_50_50);
              }
#line 898 "term_to_xml.m"
              {
#line 898 "term_to_xml.m"
                mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_14);
              }
#line 900 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 899 "term_to_xml.m"
                {
#line 899 "term_to_xml.m"
                  mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 1;
#line 899 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_52_52 = mercury__term_to_xml__STATE_VARIABLE_State_50_50;
#line 899 "term_to_xml.m"
                }
#line 900 "term_to_xml.m"
              else
#line 901 "term_to_xml.m"
                {
#line 15566 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 901 "term_to_xml.m"
                  mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
#line 15571 "term_to_xml.c"
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15573 "term_to_xml.c"
                  {
#line 15575 "term_to_xml.c"
                    mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_50_50, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
                  }
#line 901 "term_to_xml.m"
                }
#line 905 "term_to_xml.m"
              mercury__term_to_xml__V_55_55 = (mercury__term_to_xml__IndentLevel_9 + (MR_Integer) 1);
#line 904 "term_to_xml.m"
              {
#line 904 "term_to_xml.m"
                mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, mercury__term_to_xml__V_55_55, mercury__term_to_xml__Children_14, mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_54_54);
              }
#line 906 "term_to_xml.m"
              {
#line 906 "term_to_xml.m"
                mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_54_54, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
              }
#line 907 "term_to_xml.m"
              {
#line 907 "term_to_xml.m"
                mercury__term_to_xml__write_element_end_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Name_12, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_58_58);
              }
#line 908 "term_to_xml.m"
              {
#line 908 "term_to_xml.m"
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_58_58, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 908 "term_to_xml.m"
                return;
              }
#line 896 "term_to_xml.m"
            }
#line 889 "term_to_xml.m"
        }
#line 889 "term_to_xml.m"
        break;
#line 889 "term_to_xml.m"
      case (MR_Integer) 1:
#line 911 "term_to_xml.m"
        {
#line 911 "term_to_xml.m"
          MR_String mercury__term_to_xml__Data_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__XML_10, (MR_Integer) 0)));

#line 912 "term_to_xml.m"
          {
#line 912 "term_to_xml.m"
            mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Data_18, mercury__term_to_xml__STATE_VARIABLE_State_0_24, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 912 "term_to_xml.m"
            return;
          }
#line 911 "term_to_xml.m"
        }
#line 889 "term_to_xml.m"
        break;
#line 889 "term_to_xml.m"
      case (MR_Integer) 2:
#line 914 "term_to_xml.m"
        {
#line 914 "term_to_xml.m"
          MR_String mercury__term_to_xml__CData_19 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__XML_10, (MR_Integer) 0)));
#line 914 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 914 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 914 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 914 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_46_46;
#line 15642 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15644 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15646 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 969 "term_to_xml.m"
#line 969 "term_to_xml.m"
          switch (mercury__term_to_xml__Format_8) {
#line 969 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 969 "term_to_xml.m"
            case (MR_Integer) 0:
#line 970 "term_to_xml.m"
              {
#line 970 "term_to_xml.m"
                mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
              }
#line 969 "term_to_xml.m"
              break;
#line 969 "term_to_xml.m"
            case (MR_Integer) 1:
#line 972 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_41_41 = mercury__term_to_xml__STATE_VARIABLE_State_0_24;
#line 969 "term_to_xml.m"
              break;
#line 969 "term_to_xml.m"
          }
#line 15671 "term_to_xml.c"
          mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15673 "term_to_xml.c"
          {
#line 15675 "term_to_xml.c"
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<![CDATA[")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
#line 15678 "term_to_xml.c"
          mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15680 "term_to_xml.c"
          {
#line 15682 "term_to_xml.c"
            mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__CData_19)), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
#line 15685 "term_to_xml.c"
          mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15687 "term_to_xml.c"
          {
#line 15689 "term_to_xml.c"
            mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "]]>")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, &mercury__term_to_xml__STATE_VARIABLE_State_46_46);
          }
#line 959 "term_to_xml.m"
#line 959 "term_to_xml.m"
          switch (mercury__term_to_xml__Format_8) {
#line 959 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 959 "term_to_xml.m"
            case (MR_Integer) 0:
#line 960 "term_to_xml.m"
              {
#line 15701 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15704 "term_to_xml.c"
                {
#line 15706 "term_to_xml.c"
                  mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_46_46, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15708 "term_to_xml.c"
                  return;
                }
#line 960 "term_to_xml.m"
              }
#line 959 "term_to_xml.m"
              break;
#line 959 "term_to_xml.m"
            case (MR_Integer) 1:
#line 959 "term_to_xml.m"
              *mercury__term_to_xml__STATE_VARIABLE_State_25 = mercury__term_to_xml__STATE_VARIABLE_State_46_46;
#line 959 "term_to_xml.m"
              break;
#line 959 "term_to_xml.m"
          }
#line 914 "term_to_xml.m"
        }
#line 889 "term_to_xml.m"
        break;
#line 889 "term_to_xml.m"
      case (MR_Integer) 3:
#line 889 "term_to_xml.m"
#line 889 "term_to_xml.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 0)))) {
#line 889 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 889 "term_to_xml.m"
          case (MR_Integer) 0:
#line 921 "term_to_xml.m"
            {
#line 921 "term_to_xml.m"
              MR_String mercury__term_to_xml__Comment_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 921 "term_to_xml.m"
              MR_String mercury__term_to_xml__EscapedComment_21;
#line 921 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_32_32;
#line 921 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;
#line 921 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_37_37;
#line 921 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 15750 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15752 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15754 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 969 "term_to_xml.m"
#line 969 "term_to_xml.m"
              switch (mercury__term_to_xml__Format_8) {
#line 969 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 969 "term_to_xml.m"
                case (MR_Integer) 0:
#line 970 "term_to_xml.m"
                  {
#line 970 "term_to_xml.m"
                    mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__IndentLevel_9, mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_32_32);
                  }
#line 969 "term_to_xml.m"
                  break;
#line 969 "term_to_xml.m"
                case (MR_Integer) 1:
#line 972 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_32_32 = mercury__term_to_xml__STATE_VARIABLE_State_0_24;
#line 969 "term_to_xml.m"
                  break;
#line 969 "term_to_xml.m"
              }
#line 15779 "term_to_xml.c"
              mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15781 "term_to_xml.c"
              {
#line 15783 "term_to_xml.c"
                mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!-- ")), mercury__term_to_xml__STATE_VARIABLE_State_32_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
              }
#line 925 "term_to_xml.m"
              {
#line 925 "term_to_xml.m"
                mercury__string__replace_all_4_p_0(mercury__term_to_xml__Comment_20, (MR_String) "--", (MR_String) " - ", &mercury__term_to_xml__EscapedComment_21);
              }
#line 15791 "term_to_xml.c"
              mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15793 "term_to_xml.c"
              {
#line 15795 "term_to_xml.c"
                mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__EscapedComment_21)), mercury__term_to_xml__STATE_VARIABLE_State_34_34, &mercury__term_to_xml__STATE_VARIABLE_State_37_37);
              }
#line 15798 "term_to_xml.c"
              mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15800 "term_to_xml.c"
              {
#line 15802 "term_to_xml.c"
                mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " -->")), mercury__term_to_xml__STATE_VARIABLE_State_37_37, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
              }
#line 928 "term_to_xml.m"
              {
#line 928 "term_to_xml.m"
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_62, mercury__term_to_xml__Stream_7, mercury__term_to_xml__Format_8, mercury__term_to_xml__STATE_VARIABLE_State_39_39, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 928 "term_to_xml.m"
                return;
              }
#line 921 "term_to_xml.m"
            }
#line 889 "term_to_xml.m"
            break;
#line 889 "term_to_xml.m"
          case (MR_Integer) 1:
#line 930 "term_to_xml.m"
            {
#line 930 "term_to_xml.m"
              MR_String mercury__term_to_xml__EntityName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 930 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 930 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_29_29;
#line 15826 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15828 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 15831 "term_to_xml.c"
              {
#line 15833 "term_to_xml.c"
                mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "&")), mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
#line 932 "term_to_xml.m"
              {
#line 932 "term_to_xml.m"
                mercury__term_to_xml__V_29_29 = mercury__string__f_43_43_2_f_0(mercury__term_to_xml__EntityName_22, (MR_String) ";");
              }
#line 15841 "term_to_xml.c"
              mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15843 "term_to_xml.c"
              {
#line 15845 "term_to_xml.c"
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__V_29_29)), mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15847 "term_to_xml.c"
                return;
              }
#line 930 "term_to_xml.m"
            }
#line 889 "term_to_xml.m"
            break;
#line 889 "term_to_xml.m"
          case (MR_Integer) 2:
#line 934 "term_to_xml.m"
            {
#line 934 "term_to_xml.m"
              MR_String mercury__term_to_xml__RawString_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_10, (MR_Integer) 1)));
#line 15860 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15863 "term_to_xml.c"
              {
#line 15865 "term_to_xml.c"
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RawString_23)), mercury__term_to_xml__STATE_VARIABLE_State_0_24, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15867 "term_to_xml.c"
                return;
              }
#line 934 "term_to_xml.m"
            }
#line 889 "term_to_xml.m"
            break;
#line 889 "term_to_xml.m"
        }
#line 889 "term_to_xml.m"
        break;
#line 889 "term_to_xml.m"
    }
#line 889 "term_to_xml.m"
  }
#line 883 "term_to_xml.m"
}

#line 855 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__primitive_value_2_p_0(
#line 855 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_3,
#line 855 "term_to_xml.m"
  MR_String * mercury__term_to_xml__PrimValue_4)
#line 855 "term_to_xml.m"
{
#line 860 "term_to_xml.m"
  {
#line 860 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 860 "term_to_xml.m"
    MR_String mercury__term_to_xml__String_5;
#line 858 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11 "univ.opt"
    MR_Box mercury__term_to_xml__conv0_String_5;

#line 11 "univ.opt"
    {
#line 11 "univ.opt"
      mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_9_9, &mercury__term_to_xml__conv0_String_5, mercury__term_to_xml__Univ_3);
    }
#line 11 "univ.opt"
    if (mercury__term_to_xml__succeeded)
#line 11 "univ.opt"
      {
#line 11 "univ.opt"
        mercury__term_to_xml__String_5 = ((MR_String) mercury__term_to_xml__conv0_String_5);
#line 11 "univ.opt"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 11 "univ.opt"
      }
#line 860 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 859 "term_to_xml.m"
      {
#line 859 "term_to_xml.m"
        *mercury__term_to_xml__PrimValue_4 = mercury__term_to_xml__String_5;
#line 859 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 859 "term_to_xml.m"
      }
#line 860 "term_to_xml.m"
    else
#line 862 "term_to_xml.m"
      {
#line 862 "term_to_xml.m"
        MR_Char mercury__term_to_xml__Char_6;
#line 860 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 11 "univ.opt"
        MR_Box mercury__term_to_xml__conv1_Char_6;

#line 11 "univ.opt"
        {
#line 11 "univ.opt"
          mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_10_10, &mercury__term_to_xml__conv1_Char_6, mercury__term_to_xml__Univ_3);
        }
#line 11 "univ.opt"
        if (mercury__term_to_xml__succeeded)
#line 11 "univ.opt"
          {
#line 11 "univ.opt"
            mercury__term_to_xml__Char_6 = ((MR_Char) (MR_Word) mercury__term_to_xml__conv1_Char_6);
#line 11 "univ.opt"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 11 "univ.opt"
          }
#line 862 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 700 "string.opt"
          {
#line 700 "string.opt"
            MR_Word mercury__term_to_xml__V_5_21;
#line 700 "string.opt"
            MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
            {
#line 701 "string.opt"
              mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Char_6));
#line 701 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 701 "string.opt"
            }
#line 703 "string.opt"
            {
#line 703 "string.opt"
              mercury__string__to_char_list_2_p_1(mercury__term_to_xml__PrimValue_4, mercury__term_to_xml__V_5_21);
            }
#line 700 "string.opt"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 700 "string.opt"
          }
#line 862 "term_to_xml.m"
        else
#line 864 "term_to_xml.m"
          {
#line 864 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Int_7;
#line 862 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 11 "univ.opt"
            MR_Box mercury__term_to_xml__conv2_Int_7;

#line 11 "univ.opt"
            {
#line 11 "univ.opt"
              mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_11_11, &mercury__term_to_xml__conv2_Int_7, mercury__term_to_xml__Univ_3);
            }
#line 11 "univ.opt"
            if (mercury__term_to_xml__succeeded)
#line 11 "univ.opt"
              {
#line 11 "univ.opt"
                mercury__term_to_xml__Int_7 = ((MR_Integer) mercury__term_to_xml__conv2_Int_7);
#line 11 "univ.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 11 "univ.opt"
              }
#line 864 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 708 "string.opt"
              {
#line 710 "string.opt"
                {
#line 710 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Int_7, (MR_Integer) 10, mercury__term_to_xml__PrimValue_4);
                }
#line 708 "string.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 708 "string.opt"
              }
#line 864 "term_to_xml.m"
            else
#line 865 "term_to_xml.m"
              {
#line 865 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 865 "term_to_xml.m"
                MR_Float mercury__term_to_xml__Float_8;
#line 11 "univ.opt"
                MR_Box mercury__term_to_xml__conv3_Float_8;

#line 11 "univ.opt"
                {
#line 11 "univ.opt"
                  mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_12_12, &mercury__term_to_xml__conv3_Float_8, mercury__term_to_xml__Univ_3);
                }
#line 11 "univ.opt"
                if (mercury__term_to_xml__succeeded)
#line 11 "univ.opt"
                  {
#line 11 "univ.opt"
                    mercury__term_to_xml__Float_8 = MR_unbox_float(mercury__term_to_xml__conv3_Float_8);
#line 11 "univ.opt"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 11 "univ.opt"
                  }
#line 865 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 865 "term_to_xml.m"
                  {
#line 722 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_to_xml__Float_8 ;
		{
#line 722 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 16070 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__term_to_xml__PrimValue_4  = Str;
#line 722 "string.opt"
}
#line 722 "string.opt"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 865 "term_to_xml.m"
                  }
#line 865 "term_to_xml.m"
              }
#line 864 "term_to_xml.m"
          }
#line 862 "term_to_xml.m"
      }
#line 860 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 860 "term_to_xml.m"
  }
#line 855 "term_to_xml.m"
}

#line 813 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
#line 813 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_8,
#line 813 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__Elements_10,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeArities_12,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
#line 813 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttributeLists_14)
#line 813 "term_to_xml.m"
{
#line 838 "term_to_xml.m"
  {
#line 838 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 838 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__NumFunctors_15;
#line 1043 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_81_81;

#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_9 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 16139 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_15  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
      {
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__V_81_81 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_15 > mercury__term_to_xml__V_81_81);
#line 1043 "term_to_xml.m"
      }
#line 838 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 821 "term_to_xml.m"
      {
#line 821 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_16;
#line 821 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_30_30 = (mercury__term_to_xml__NumFunctors_15 - (MR_Integer) 1);
#line 821 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 834 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Functors_17;
#line 834 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Arities_18;
#line 834 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgTypeLists0_19;

#line 890 "list.opt"
        {
#line 890 "list.opt"
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__V_30_30, mercury__term_to_xml__V_7_85, &mercury__term_to_xml__FunctorNums_16);
        }
#line 823 "term_to_xml.m"
        {
#line 823 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__FunctorNums_16, &mercury__term_to_xml__Functors_17, &mercury__term_to_xml__Arities_18, &mercury__term_to_xml__ArgTypeLists0_19);
        }
#line 834 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 826 "term_to_xml.m"
          {
#line 826 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Requests_21;

#line 826 "term_to_xml.m"
            {
#line 826 "term_to_xml.m"
              *mercury__term_to_xml__MaybeFunctors_11 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__Functors_17);
            }
#line 827 "term_to_xml.m"
            {
#line 827 "term_to_xml.m"
              *mercury__term_to_xml__MaybeArities_12 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__Arities_18);
            }
#line 828 "term_to_xml.m"
            *mercury__term_to_xml__ArgTypeLists_13 = mercury__term_to_xml__ArgTypeLists0_19;
#line 829 "term_to_xml.m"
            {
#line 829 "term_to_xml.m"
              mercury__term_to_xml__Requests_21 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__Functors_17, mercury__term_to_xml__Arities_18);
            }
#line 833 "term_to_xml.m"
            {
#line 833 "term_to_xml.m"
              mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__MakeElement_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__Requests_21, mercury__term_to_xml__Elements_10, mercury__term_to_xml__AttributeLists_14);
#line 833 "term_to_xml.m"
              return;
            }
#line 826 "term_to_xml.m"
          }
#line 834 "term_to_xml.m"
        else
#line 835 "term_to_xml.m"
          {
#line 835 "term_to_xml.m"
            {
#line 835 "term_to_xml.m"
              mercury__require__unexpected_3_p_0((MR_String) "term_to_xml", (MR_String) "predicate \140term_to_xml.get_elements_and_args\'/7", (MR_String) "get_functor failed for discriminated union");
#line 835 "term_to_xml.m"
              return;
            }
#line 835 "term_to_xml.m"
          }
#line 821 "term_to_xml.m"
      }
#line 838 "term_to_xml.m"
    else
#line 839 "term_to_xml.m"
      {
#line 839 "term_to_xml.m"
        MR_String mercury__term_to_xml__Element_26;
#line 839 "term_to_xml.m"
        MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 839 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_47_47;
#line 839 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 839 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;
#line 839 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_50_50;
#line 839 "term_to_xml.m"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_8, (MR_Integer) 1)));
#line 839 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv2_Element_26;
#line 839 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 846 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgType_28;

#line 839 "term_to_xml.m"
        {
#line 839 "term_to_xml.m"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_8), ((MR_Box) (mercury__term_to_xml__TypeDesc_9)), ((MR_Box) (mercury__term_to_xml__V_46_46)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
        }
#line 839 "term_to_xml.m"
        mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 839 "term_to_xml.m"
        mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 840 "term_to_xml.m"
        mercury__term_to_xml__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "term_to_xml.m"
        {
#line 840 "term_to_xml.m"
          MR_Word base;
#line 840 "term_to_xml.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "term_to_xml.m"
          *mercury__term_to_xml__Elements_10 = base;
#line 840 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__Element_26));
#line 840 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_47_47));
#line 840 "term_to_xml.m"
        }
#line 841 "term_to_xml.m"
        mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "term_to_xml.m"
        {
#line 841 "term_to_xml.m"
          MR_Word base;
#line 841 "term_to_xml.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "term_to_xml.m"
          *mercury__term_to_xml__AttributeLists_14 = base;
#line 841 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__AttrFromSources_27));
#line 841 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_48_48));
#line 841 "term_to_xml.m"
        }
#line 842 "term_to_xml.m"
        mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 842 "term_to_xml.m"
        mercury__term_to_xml__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 842 "term_to_xml.m"
        *mercury__term_to_xml__MaybeFunctors_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[19]);
#line 843 "term_to_xml.m"
        *mercury__term_to_xml__MaybeArities_12 = (MR_Word) *mercury__term_to_xml__MaybeFunctors_11;
#line 844 "term_to_xml.m"
        {
#line 844 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_9, &mercury__term_to_xml__ArgType_28);
        }
#line 846 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 845 "term_to_xml.m"
          {
#line 845 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_53_53;
#line 845 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_55_55;

#line 845 "term_to_xml.m"
            {
#line 845 "term_to_xml.m"
              mercury__term_to_xml__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, 0) = ((MR_Box) (mercury__term_to_xml__ArgType_28));
#line 845 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, 1) = ((MR_Box) (mercury__term_to_xml__V_54_54));
#line 845 "term_to_xml.m"
            }
#line 845 "term_to_xml.m"
            mercury__term_to_xml__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "term_to_xml.m"
            {
#line 845 "term_to_xml.m"
              MR_Word base;
#line 845 "term_to_xml.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "term_to_xml.m"
              *mercury__term_to_xml__ArgTypeLists_13 = base;
#line 845 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_53_53));
#line 845 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_55_55));
#line 845 "term_to_xml.m"
            }
#line 845 "term_to_xml.m"
          }
#line 846 "term_to_xml.m"
        else
#line 847 "term_to_xml.m"
          {
#line 847 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 847 "term_to_xml.m"
            *mercury__term_to_xml__ArgTypeLists_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[20]);
#line 847 "term_to_xml.m"
          }
#line 839 "term_to_xml.m"
      }
#line 838 "term_to_xml.m"
  }
#line 813 "term_to_xml.m"
}

#line 795 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
#line 795 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_4,
#line 795 "term_to_xml.m"
  MR_Word mercury__term_to_xml__PrevChrs_5,
#line 795 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 795 "term_to_xml.m"
{
#line 797 "term_to_xml.m"
  {
#line 797 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 797 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 797 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Chrs_6;

#line 799 "term_to_xml.m"
    {
#line 799 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__term_to_xml__Chr_4);
    }
#line 801 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 800 "term_to_xml.m"
      {
#line 800 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 800 "term_to_xml.m"
        {
#line 800 "term_to_xml.m"
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_4));
#line 800 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__V_7_7));
#line 800 "term_to_xml.m"
        }
#line 800 "term_to_xml.m"
      }
#line 801 "term_to_xml.m"
    else
#line 802 "term_to_xml.m"
      {
#line 802 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_9_9;
#line 802 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_10_10;
#line 802 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_11_11;

#line 34 "char.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_to_xml__Chr_4 ;
		{
#line 34 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 16442 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_11_11  = Int;
#line 34 "char.opt"
}
#line 710 "string.opt"
        {
#line 710 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__V_11_11, (MR_Integer) 10, &mercury__term_to_xml__V_10_10);
        }
#line 143 "string.opt"
        {
#line 143 "string.opt"
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_9_9);
        }
#line 802 "term_to_xml.m"
        {
#line 802 "term_to_xml.m"
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 802 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 802 "term_to_xml.m"
        }
#line 802 "term_to_xml.m"
      }
#line 58 "list.opt"
    {
#line 58 "list.opt"
      mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_12_12, mercury__term_to_xml__PrevChrs_5, mercury__term_to_xml__Chrs_6, mercury__term_to_xml__HeadVar__3_3);
#line 58 "list.opt"
      return;
    }
#line 797 "term_to_xml.m"
  }
#line 795 "term_to_xml.m"
}

#line 778 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
#line 778 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_3)
#line 778 "term_to_xml.m"
{
#line 780 "term_to_xml.m"
  {
#line 780 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 780 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_4;
#line 780 "term_to_xml.m"
    MR_String mercury__term_to_xml__Head_5;
#line 780 "term_to_xml.m"
    MR_String mercury__term_to_xml__Tail_6;
#line 780 "term_to_xml.m"
    MR_String mercury__term_to_xml__First_7;
#line 780 "term_to_xml.m"
    MR_String mercury__term_to_xml__Rest_8;
#line 780 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ElementChrs_9;
#line 780 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;
#line 780 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_13_13;
#line 780 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Length_8_36;
#line 780 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__End_13_48;
#line 780 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_49;
#line 783 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_18_18;
#line 783 "term_to_xml.m"
    MR_Word mercury__term_to_xml__List_5_23;
#line 783 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ListLow_6_24;

#line 781 "term_to_xml.m"
    {
#line 781 "term_to_xml.m"
      mercury__string__split_4_p_0(mercury__term_to_xml__Functor_3, (MR_Integer) 1, &mercury__term_to_xml__Head_5, &mercury__term_to_xml__Tail_6);
    }
#line 264 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__Head_5 ;
		{
#line 264 "string.opt"

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

#line 16565 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 264 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 783 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 783 "term_to_xml.m"
      {
#line 554 "string.opt"
        {
#line 554 "string.opt"
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__Head_5, &mercury__term_to_xml__List_5_23);
        }
#line 555 "string.opt"
        {
#line 555 "string.opt"
          mercury__string__char_list_to_lower_2_p_0(mercury__term_to_xml__List_5_23, &mercury__term_to_xml__ListLow_6_24);
        }
#line 556 "string.opt"
        {
#line 556 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__term_to_xml__ListLow_6_24, &mercury__term_to_xml__V_18_18);
        }
#line 784 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Head_5, mercury__term_to_xml__V_18_18) == 0);
#line 783 "term_to_xml.m"
      }
#line 788 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 786 "term_to_xml.m"
      {
#line 786 "term_to_xml.m"
        mercury__term_to_xml__First_7 = mercury__term_to_xml__Head_5;
#line 787 "term_to_xml.m"
        mercury__term_to_xml__Rest_8 = mercury__term_to_xml__Tail_6;
#line 786 "term_to_xml.m"
      }
#line 788 "term_to_xml.m"
    else
#line 789 "term_to_xml.m"
      {
#line 721 "term_to_xml.m"
        mercury__term_to_xml__First_7 = (MR_String) "Tag_";
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__Head_5, mercury__term_to_xml__Tail_6, &mercury__term_to_xml__Rest_8);
        }
#line 789 "term_to_xml.m"
      }
#line 792 "term_to_xml.m"
    mercury__term_to_xml__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 16635 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Length_8_36  = Length;
#line 246 "string.opt"
}
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 16655 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_49  = Length;
#line 246 "string.opt"
}
#line 46 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Length_8_36 < mercury__term_to_xml__V_17_49);
#line 49 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 48 "int.opt"
      mercury__term_to_xml__End_13_48 = mercury__term_to_xml__Length_8_36;
#line 49 "int.opt"
    else
#line 50 "int.opt"
      mercury__term_to_xml__End_13_48 = mercury__term_to_xml__V_17_49;
#line 617 "string.opt"
    {
#line 617 "string.opt"
      mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(mercury__term_to_xml__Rest_8, (MR_Integer) 0, mercury__term_to_xml__End_13_48, mercury__term_to_xml__V_12_12, &mercury__term_to_xml__ElementChrs_9);
    }
#line 145 "string.opt"
    {
#line 145 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__term_to_xml__ElementChrs_9, &mercury__term_to_xml__V_13_13);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__term_to_xml__First_7, mercury__term_to_xml__V_13_13, &mercury__term_to_xml__Element_4);
    }
#line 780 "term_to_xml.m"
    return mercury__term_to_xml__Element_4;
#line 780 "term_to_xml.m"
  }
#line 778 "term_to_xml.m"
}

#line 745 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
#line 745 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 745 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_4)
#line 745 "term_to_xml.m"
{
#line 750 "term_to_xml.m"
  {
#line 750 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 748 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 748 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_13_13;
#line 37 "type_desc.opt"
    MR_String mercury__term_to_xml__V_5_5;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_9 ;
		{
#line 37 "type_desc.opt"
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
#line 16740 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_13_13  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 748 "term_to_xml.m"
    {
#line 748 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_13_13);
    }
#line 750 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 749 "term_to_xml.m"
      {
#line 749 "term_to_xml.m"
        *mercury__term_to_xml__Element_4 = (MR_String) "String";
#line 749 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 749 "term_to_xml.m"
      }
#line 750 "term_to_xml.m"
    else
#line 752 "term_to_xml.m"
      {
#line 750 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 750 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_14_14;
#line 37 "type_desc.opt"
        MR_Char mercury__term_to_xml__V_6_6;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_10 ;
		{
#line 37 "type_desc.opt"
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
#line 16799 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_14_14  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 750 "term_to_xml.m"
        {
#line 750 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_14_14);
        }
#line 752 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 751 "term_to_xml.m"
          {
#line 751 "term_to_xml.m"
            *mercury__term_to_xml__Element_4 = (MR_String) "Char";
#line 751 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 751 "term_to_xml.m"
          }
#line 752 "term_to_xml.m"
        else
#line 754 "term_to_xml.m"
          {
#line 752 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 752 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_15_15;
#line 37 "type_desc.opt"
            MR_Integer mercury__term_to_xml__V_7_7;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_11 ;
		{
#line 37 "type_desc.opt"
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
#line 16858 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_15_15  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 752 "term_to_xml.m"
            {
#line 752 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_15_15);
            }
#line 754 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 753 "term_to_xml.m"
              {
#line 753 "term_to_xml.m"
                *mercury__term_to_xml__Element_4 = (MR_String) "Int";
#line 753 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 753 "term_to_xml.m"
              }
#line 754 "term_to_xml.m"
            else
#line 756 "term_to_xml.m"
              {
#line 756 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 756 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_16_16;
#line 37 "type_desc.opt"
                MR_Float mercury__term_to_xml__V_8_8;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_12 ;
		{
#line 37 "type_desc.opt"
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
#line 16917 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_16_16  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 754 "term_to_xml.m"
                {
#line 754 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_16_16);
                }
#line 756 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 756 "term_to_xml.m"
                  {
#line 755 "term_to_xml.m"
                    *mercury__term_to_xml__Element_4 = (MR_String) "Float";
#line 755 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 756 "term_to_xml.m"
                  }
#line 756 "term_to_xml.m"
              }
#line 754 "term_to_xml.m"
          }
#line 752 "term_to_xml.m"
      }
#line 750 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 750 "term_to_xml.m"
  }
#line 745 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0_1(
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
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 703 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__get_element_pred_2_p_0(
#line 703 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 703 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__2_2)
#line 703 "term_to_xml.m"
{
#line 706 "term_to_xml.m"
  {
#line 706 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) {
#line 706 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
      case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__HeadVar__1_1)) {
#line 706 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
          case (MR_Integer) 0:
#line 706 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[21];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
          case (MR_Integer) 1:
#line 707 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[22];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
        }
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
      case (MR_Integer) 1:
#line 708 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
    }
#line 706 "term_to_xml.m"
  }
#line 703 "term_to_xml.m"
}

#line 693 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void)
#line 693 "term_to_xml.m"
{
#line 695 "term_to_xml.m"
  {
#line 695 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 695 "term_to_xml.m"
    MR_Word mercury__term_to_xml__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);

#line 695 "term_to_xml.m"
    return mercury__term_to_xml__HeadVar__1_1;
#line 695 "term_to_xml.m"
  }
#line 693 "term_to_xml.m"
}

#line 670 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
#line 670 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 670 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 670 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 670 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8)
#line 670 "term_to_xml.m"
{
#line 675 "term_to_xml.m"
  {
#line 675 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 675 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFunctorInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "term_to_xml.m"
      {
#line 684 "term_to_xml.m"
        MR_String mercury__term_to_xml__PrimitiveElement_11;
#line 748 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_9_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 748 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_50_50;
#line 37 "type_desc.opt"
        MR_String mercury__term_to_xml__V_42_42;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_46 ;
		{
#line 37 "type_desc.opt"
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
#line 17159 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_50_50  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 748 "term_to_xml.m"
        {
#line 748 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_50_50);
        }
#line 750 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 749 "term_to_xml.m"
          {
#line 749 "term_to_xml.m"
            mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "String";
#line 749 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 749 "term_to_xml.m"
          }
#line 750 "term_to_xml.m"
        else
#line 752 "term_to_xml.m"
          {
#line 750 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_10_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 750 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_51_51;
#line 37 "type_desc.opt"
            MR_Char mercury__term_to_xml__V_43_43;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_47 ;
		{
#line 37 "type_desc.opt"
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
#line 17218 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_51_51  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 750 "term_to_xml.m"
            {
#line 750 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_51_51);
            }
#line 752 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 751 "term_to_xml.m"
              {
#line 751 "term_to_xml.m"
                mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Char";
#line 751 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 751 "term_to_xml.m"
              }
#line 752 "term_to_xml.m"
            else
#line 754 "term_to_xml.m"
              {
#line 752 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_11_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 752 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_52_52;
#line 37 "type_desc.opt"
                MR_Integer mercury__term_to_xml__V_44_44;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_48 ;
		{
#line 37 "type_desc.opt"
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
#line 17277 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_52_52  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 752 "term_to_xml.m"
                {
#line 752 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_52_52);
                }
#line 754 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 753 "term_to_xml.m"
                  {
#line 753 "term_to_xml.m"
                    mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Int";
#line 753 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 753 "term_to_xml.m"
                  }
#line 754 "term_to_xml.m"
                else
#line 756 "term_to_xml.m"
                  {
#line 756 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 756 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__V_53_53;
#line 37 "type_desc.opt"
                    MR_Float mercury__term_to_xml__V_45_45;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_49 ;
		{
#line 37 "type_desc.opt"
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
#line 17336 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_53_53  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 754 "term_to_xml.m"
                    {
#line 754 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__V_53_53);
                    }
#line 756 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 756 "term_to_xml.m"
                      {
#line 755 "term_to_xml.m"
                        mercury__term_to_xml__PrimitiveElement_11 = (MR_String) "Float";
#line 755 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = MR_TRUE;
#line 756 "term_to_xml.m"
                      }
#line 756 "term_to_xml.m"
                  }
#line 754 "term_to_xml.m"
              }
#line 752 "term_to_xml.m"
          }
#line 684 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 681 "term_to_xml.m"
          {
#line 681 "term_to_xml.m"
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__PrimitiveElement_11;
#line 682 "term_to_xml.m"
            *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
#line 681 "term_to_xml.m"
          }
#line 684 "term_to_xml.m"
        else
#line 687 "term_to_xml.m"
          {
#line 1049 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDesc_60;
#line 1049 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtor_61;
#line 1049 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgPseudoTypes_62;
#line 1049 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_63_63;
#line 1049 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_64_64;
#line 1049 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_65_65;
#line 1052 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_12_12;
#line 123 "type_desc.opt"
            MR_String mercury__term_to_xml___ModuleName_5_68;
#line 123 "type_desc.opt"
            MR_Integer mercury__term_to_xml___Arity_6_69;
#line 123 "type_desc.opt"
            MR_String mercury__term_to_xml___Name_5_72;
#line 123 "type_desc.opt"
            MR_Integer mercury__term_to_xml___Arity_6_73;

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 17414 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_60  = PseudoTypeDesc;
#line 32 "type_desc.opt"
}
#line 69 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_60 ;
		{
#line 69 "type_desc.opt"
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
#line 17446 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_61  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_62  = ArgPseudoTypeInfos;
#line 69 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1049 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
              {
#line 1052 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_62)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1052 "term_to_xml.m"
                  {
#line 1052 "term_to_xml.m"
                    mercury__term_to_xml__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_62, (MR_Integer) 0)));
#line 1052 "term_to_xml.m"
                    mercury__term_to_xml__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_62, (MR_Integer) 1)));
#line 1052 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
                      {
#line 123 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_61 ;
		{
#line 123 "type_desc.opt"
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
#line 17518 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml___ModuleName_5_68  = TypeCtorModuleName;
	 mercury__term_to_xml__V_64_64  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_69  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1053 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_64_64, (MR_String) "array") == 0);
#line 1049 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
                          {
#line 123 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_61 ;
		{
#line 123 "type_desc.opt"
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
#line 17574 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_65_65  = TypeCtorModuleName;
	 mercury__term_to_xml___Name_5_72  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_73  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1054 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_65_65, (MR_String) "array") == 0);
#line 1049 "term_to_xml.m"
                          }
#line 1049 "term_to_xml.m"
                      }
#line 1052 "term_to_xml.m"
                  }
#line 1049 "term_to_xml.m"
              }
#line 687 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 685 "term_to_xml.m"
              {
#line 743 "term_to_xml.m"
                *mercury__term_to_xml__Element_7 = (MR_String) "Array";
#line 695 "term_to_xml.m"
                *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 685 "term_to_xml.m"
              }
#line 687 "term_to_xml.m"
            else
#line 688 "term_to_xml.m"
              {
#line 688 "term_to_xml.m"
                *mercury__term_to_xml__Element_7 = (MR_String) "Unknown";
#line 689 "term_to_xml.m"
                {
#line 689 "term_to_xml.m"
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 688 "term_to_xml.m"
              }
#line 687 "term_to_xml.m"
          }
#line 684 "term_to_xml.m"
      }
#line 675 "term_to_xml.m"
    else
#line 675 "term_to_xml.m"
      {
#line 675 "term_to_xml.m"
        MR_String mercury__term_to_xml__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 0)));
#line 675 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 1)));
#line 737 "term_to_xml.m"
        MR_String mercury__term_to_xml__ReservedElement_23;

#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[]") == 0))
#line 729 "term_to_xml.m"
          {
#line 729 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "Nil";
#line 729 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 729 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "{}") == 0))
#line 730 "term_to_xml.m"
          {
#line 730 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "Tuple";
#line 730 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 730 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[|]") == 0))
#line 728 "term_to_xml.m"
          {
#line 728 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_23 = (MR_String) "List";
#line 728 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 728 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_FALSE;
#line 737 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 736 "term_to_xml.m"
          *mercury__term_to_xml__Element_7 = mercury__term_to_xml__ReservedElement_23;
#line 737 "term_to_xml.m"
        else
#line 738 "term_to_xml.m"
          {
#line 738 "term_to_xml.m"
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_9);
          }
#line 695 "term_to_xml.m"
        *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 675 "term_to_xml.m"
      }
#line 675 "term_to_xml.m"
  }
#line 670 "term_to_xml.m"
}

#line 642 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
#line 642 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 642 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorInfo_6,
#line 642 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_7,
#line 642 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttrFromSources_8)
#line 642 "term_to_xml.m"
{
#line 647 "term_to_xml.m"
  {
#line 647 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 647 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFunctorInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "term_to_xml.m"
      {
#line 658 "term_to_xml.m"
        MR_String mercury__term_to_xml__PrimitiveElement_12;

#line 654 "term_to_xml.m"
        {
#line 654 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__PrimitiveElement_12);
        }
#line 658 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 655 "term_to_xml.m"
          {
#line 655 "term_to_xml.m"
            *mercury__term_to_xml__Element_7 = mercury__term_to_xml__PrimitiveElement_12;
#line 656 "term_to_xml.m"
            *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
#line 655 "term_to_xml.m"
          }
#line 658 "term_to_xml.m"
        else
#line 662 "term_to_xml.m"
          {
#line 658 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_13_13;

#line 658 "term_to_xml.m"
            {
#line 658 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__V_13_13);
            }
#line 662 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 660 "term_to_xml.m"
              {
#line 660 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_23_23;
#line 660 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_25_25;
#line 660 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_26_26;

#line 660 "term_to_xml.m"
                {
#line 660 "term_to_xml.m"
                  mercury__term_to_xml__V_26_26 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
                }
#line 660 "term_to_xml.m"
                {
#line 660 "term_to_xml.m"
                  mercury__term_to_xml__V_25_25 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_26_26);
                }
#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_25_25, &mercury__term_to_xml__V_23_23);
                }
#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "Array", mercury__term_to_xml__V_23_23, mercury__term_to_xml__Element_7);
                }
#line 661 "term_to_xml.m"
                {
#line 661 "term_to_xml.m"
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 660 "term_to_xml.m"
              }
#line 662 "term_to_xml.m"
            else
#line 663 "term_to_xml.m"
              {
#line 663 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_27_27;

#line 663 "term_to_xml.m"
                {
#line 663 "term_to_xml.m"
                  mercury__term_to_xml__V_27_27 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
                }
#line 663 "term_to_xml.m"
                {
#line 663 "term_to_xml.m"
                  *mercury__term_to_xml__Element_7 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_27_27);
                }
#line 664 "term_to_xml.m"
                {
#line 664 "term_to_xml.m"
                  *mercury__term_to_xml__AttrFromSources_8 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 663 "term_to_xml.m"
              }
#line 662 "term_to_xml.m"
          }
#line 658 "term_to_xml.m"
      }
#line 647 "term_to_xml.m"
    else
#line 647 "term_to_xml.m"
      {
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 0)));
#line 647 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctorInfo_6, (MR_Integer) 1)));
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__MangledElement_11;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_28_28;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_30_30;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_31_31;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_32_32;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_34_34;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_35_35;
#line 737 "term_to_xml.m"
        MR_String mercury__term_to_xml__ReservedElement_38;

#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[]") == 0))
#line 729 "term_to_xml.m"
          {
#line 729 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "Nil";
#line 729 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 729 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "{}") == 0))
#line 730 "term_to_xml.m"
          {
#line 730 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "Tuple";
#line 730 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 730 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_9, (MR_String) "[|]") == 0))
#line 728 "term_to_xml.m"
          {
#line 728 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_38 = (MR_String) "List";
#line 728 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 728 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_FALSE;
#line 737 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 736 "term_to_xml.m"
          mercury__term_to_xml__MangledElement_11 = mercury__term_to_xml__ReservedElement_38;
#line 737 "term_to_xml.m"
        else
#line 738 "term_to_xml.m"
          {
#line 738 "term_to_xml.m"
            mercury__term_to_xml__MangledElement_11 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_9);
          }
#line 710 "string.opt"
        {
#line 710 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_10, (MR_Integer) 10, &mercury__term_to_xml__V_31_31);
        }
#line 650 "term_to_xml.m"
        {
#line 650 "term_to_xml.m"
          mercury__term_to_xml__V_35_35 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_5);
        }
#line 650 "term_to_xml.m"
        {
#line 650 "term_to_xml.m"
          mercury__term_to_xml__V_34_34 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_35_35);
        }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_34_34, &mercury__term_to_xml__V_32_32);
        }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__V_31_31, mercury__term_to_xml__V_32_32, &mercury__term_to_xml__V_30_30);
        }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_30_30, &mercury__term_to_xml__V_28_28);
        }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__MangledElement_11, mercury__term_to_xml__V_28_28, mercury__term_to_xml__Element_7);
        }
#line 695 "term_to_xml.m"
        *mercury__term_to_xml__AttrFromSources_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 647 "term_to_xml.m"
      }
#line 647 "term_to_xml.m"
  }
#line 642 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv4_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv3_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_7, &mercury__term_to_xml__conv3_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2_1(
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
    MR_String mercury__term_to_xml__conv2_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv1_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_7, &mercury__term_to_xml__conv1_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 588 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 588 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 588 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 588 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 588 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 588 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 588 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27)
#line 588 "term_to_xml.m"
{
#line 598 "term_to_xml.m"
  {
#line 598 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 598 "term_to_xml.m"
#line 598 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 598 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 598 "term_to_xml.m"
      case (MR_Integer) 0:
#line 598 "term_to_xml.m"
#line 598 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 598 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 598 "term_to_xml.m"
          case (MR_Integer) 0:
#line 599 "term_to_xml.m"
            {
#line 599 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_29_29;
#line 599 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeDesc_43;
#line 37 "type_desc.opt"
              MR_Box mercury__term_to_xml__V_34_34;
#line 18053 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 37 "type_desc.opt"
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
#line 18082 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 552 "term_to_xml.m"
              {
#line 552 "term_to_xml.m"
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
#line 18094 "term_to_xml.c"
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18096 "term_to_xml.c"
              {
#line 18098 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
#line 18100 "term_to_xml.c"
                return;
              }
#line 599 "term_to_xml.m"
            }
#line 598 "term_to_xml.m"
            break;
#line 598 "term_to_xml.m"
          case (MR_Integer) 1:
#line 596 "term_to_xml.m"
            {
#line 597 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "term_to_xml.m"
              *mercury__term_to_xml__STATE_VARIABLE_State_27 = mercury__term_to_xml__STATE_VARIABLE_State_0_26;
#line 596 "term_to_xml.m"
            }
#line 598 "term_to_xml.m"
            break;
#line 598 "term_to_xml.m"
        }
#line 598 "term_to_xml.m"
        break;
#line 598 "term_to_xml.m"
      case (MR_Integer) 1:
#line 603 "term_to_xml.m"
        {
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_13, (MR_Integer) 0)));
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_17;
#line 603 "term_to_xml.m"
          MR_String mercury__term_to_xml__Functor_18;
#line 603 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_19;
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeOfTerm_21;
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Request_23;
#line 603 "term_to_xml.m"
          MR_String mercury__term_to_xml__Root_24;
#line 603 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_66;
#line 603 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_67;
#line 603 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_79;
#line 605 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_20_20;
#line 37 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_35_35;
#line 1043 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_22_22;
#line 1043 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_56_56;
#line 612 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_25_25;
#line 612 "term_to_xml.m"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 612 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv7_Root_24;
#line 612 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv6_V_25_25;
#line 18163 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18165 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18167 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_12)) {
#line 706 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
            case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
              switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_12)) {
#line 706 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                case (MR_Integer) 0:
#line 706 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[19];
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
                case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[20];
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
              }
#line 706 "term_to_xml.m"
              break;
#line 706 "term_to_xml.m"
            case (MR_Integer) 1:
#line 708 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_12, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
              break;
#line 706 "term_to_xml.m"
          }
#line 605 "term_to_xml.m"
          {
#line 605 "term_to_xml.m"
            mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_11, mercury__term_to_xml__NonCanon_10, &mercury__term_to_xml__Functor_18, &mercury__term_to_xml__Arity_19, &mercury__term_to_xml__V_20_20);
          }
#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 37 "type_desc.opt"
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
#line 18237 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeOfTerm_21  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeOfTerm_21 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 18261 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_22_22  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
            {
#line 1045 "term_to_xml.m"
              mercury__term_to_xml__V_56_56 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_22_22 > mercury__term_to_xml__V_56_56);
#line 1043 "term_to_xml.m"
            }
#line 609 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 608 "term_to_xml.m"
            {
#line 608 "term_to_xml.m"
              mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 0) = ((MR_Box) (mercury__term_to_xml__Functor_18));
#line 608 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 1) = ((MR_Box) (mercury__term_to_xml__Arity_19));
#line 608 "term_to_xml.m"
            }
#line 609 "term_to_xml.m"
          else
#line 610 "term_to_xml.m"
            mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "term_to_xml.m"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_17, (MR_Integer) 1)));
#line 612 "term_to_xml.m"
          {
#line 612 "term_to_xml.m"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_17), ((MR_Box) (mercury__term_to_xml__TypeOfTerm_21)), ((MR_Box) (mercury__term_to_xml__Request_23)), &mercury__term_to_xml__conv7_Root_24, &mercury__term_to_xml__conv6_V_25_25);
          }
#line 612 "term_to_xml.m"
          mercury__term_to_xml__Root_24 = ((MR_String) mercury__term_to_xml__conv7_Root_24);
#line 612 "term_to_xml.m"
          mercury__term_to_xml__V_25_25 = ((MR_Word) mercury__term_to_xml__conv6_V_25_25);
#line 18308 "term_to_xml.c"
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18310 "term_to_xml.c"
          {
#line 18312 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
#line 18315 "term_to_xml.c"
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18317 "term_to_xml.c"
          {
#line 18319 "term_to_xml.c"
            mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Root_24)), mercury__term_to_xml__STATE_VARIABLE_State_15_66, &mercury__term_to_xml__STATE_VARIABLE_State_16_67);
          }
#line 627 "term_to_xml.m"
#line 627 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
#line 627 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 627 "term_to_xml.m"
            case (MR_Integer) 0:
#line 624 "term_to_xml.m"
              {
#line 624 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 624 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_78;
#line 18335 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18337 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18340 "term_to_xml.c"
                {
#line 18342 "term_to_xml.c"
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
#line 18345 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18347 "term_to_xml.c"
                {
#line 18349 "term_to_xml.c"
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_63)), mercury__term_to_xml__STATE_VARIABLE_State_27_78, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 624 "term_to_xml.m"
              }
#line 627 "term_to_xml.m"
              break;
#line 627 "term_to_xml.m"
            case (MR_Integer) 1:
#line 628 "term_to_xml.m"
              {
#line 628 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
#line 628 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_72;
#line 628 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_73;
#line 628 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_75;
#line 628 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_82 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18370 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18372 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18374 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18376 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18379 "term_to_xml.c"
                {
#line 18381 "term_to_xml.c"
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
#line 18384 "term_to_xml.c"
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18386 "term_to_xml.c"
                {
#line 18388 "term_to_xml.c"
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
#line 18391 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18393 "term_to_xml.c"
                {
#line 18395 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
#line 18398 "term_to_xml.c"
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18400 "term_to_xml.c"
                {
#line 18402 "term_to_xml.c"
                  mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_64)), mercury__term_to_xml__STATE_VARIABLE_State_24_75, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 628 "term_to_xml.m"
              }
#line 627 "term_to_xml.m"
              break;
#line 627 "term_to_xml.m"
            case (MR_Integer) 2:
#line 634 "term_to_xml.m"
              {
#line 634 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_69;
#line 634 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_83 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18417 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18419 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18422 "term_to_xml.c"
                {
#line 18424 "term_to_xml.c"
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
#line 18427 "term_to_xml.c"
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18429 "term_to_xml.c"
                {
#line 18431 "term_to_xml.c"
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 634 "term_to_xml.m"
              }
#line 627 "term_to_xml.m"
              break;
#line 627 "term_to_xml.m"
          }
#line 18440 "term_to_xml.c"
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18442 "term_to_xml.c"
          {
#line 18444 "term_to_xml.c"
            mercury__term_to_xml__func_18(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_79, mercury__term_to_xml__STATE_VARIABLE_State_27);
          }
#line 614 "term_to_xml.m"
          *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "term_to_xml.m"
        }
#line 598 "term_to_xml.m"
        break;
#line 598 "term_to_xml.m"
    }
#line 598 "term_to_xml.m"
  }
#line 588 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv4_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv3_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_7, &mercury__term_to_xml__conv3_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0_1(
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
    MR_String mercury__term_to_xml__conv2_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv1_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_7, &mercury__term_to_xml__conv1_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
}

#line 584 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 584 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 584 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_11,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_12,
#line 584 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 584 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 584 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_26,
#line 584 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_27)
#line 584 "term_to_xml.m"
{
#line 598 "term_to_xml.m"
  {
#line 598 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 598 "term_to_xml.m"
#line 598 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 598 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 598 "term_to_xml.m"
      case (MR_Integer) 0:
#line 598 "term_to_xml.m"
#line 598 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 598 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 598 "term_to_xml.m"
          case (MR_Integer) 0:
#line 599 "term_to_xml.m"
            {
#line 599 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_29_29;
#line 599 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeDesc_43;
#line 37 "type_desc.opt"
              MR_Box mercury__term_to_xml__V_34_34;
#line 18588 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 37 "type_desc.opt"
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
#line 18617 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 552 "term_to_xml.m"
              {
#line 552 "term_to_xml.m"
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
#line 18629 "term_to_xml.c"
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18631 "term_to_xml.c"
              {
#line 18633 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
#line 18635 "term_to_xml.c"
                return;
              }
#line 599 "term_to_xml.m"
            }
#line 598 "term_to_xml.m"
            break;
#line 598 "term_to_xml.m"
          case (MR_Integer) 1:
#line 596 "term_to_xml.m"
            {
#line 597 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "term_to_xml.m"
              *mercury__term_to_xml__STATE_VARIABLE_State_27 = mercury__term_to_xml__STATE_VARIABLE_State_0_26;
#line 596 "term_to_xml.m"
            }
#line 598 "term_to_xml.m"
            break;
#line 598 "term_to_xml.m"
        }
#line 598 "term_to_xml.m"
        break;
#line 598 "term_to_xml.m"
      case (MR_Integer) 1:
#line 603 "term_to_xml.m"
        {
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_13, (MR_Integer) 0)));
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_17;
#line 603 "term_to_xml.m"
          MR_String mercury__term_to_xml__Functor_18;
#line 603 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_19;
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeOfTerm_21;
#line 603 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Request_23;
#line 603 "term_to_xml.m"
          MR_String mercury__term_to_xml__Root_24;
#line 603 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_66;
#line 603 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_67;
#line 603 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_79;
#line 605 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_20_20;
#line 37 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_35_35;
#line 1043 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_22_22;
#line 1043 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_56_56;
#line 612 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_25_25;
#line 612 "term_to_xml.m"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 612 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv7_Root_24;
#line 612 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv6_V_25_25;
#line 18698 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18700 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18702 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_12)) {
#line 706 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
            case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
              switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_12)) {
#line 706 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                case (MR_Integer) 0:
#line 706 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[17];
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
                case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_17 = (MR_Word) &mercury__term_to_xml_scalar_common_3[18];
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
              }
#line 706 "term_to_xml.m"
              break;
#line 706 "term_to_xml.m"
            case (MR_Integer) 1:
#line 708 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_12, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
              break;
#line 706 "term_to_xml.m"
          }
#line 605 "term_to_xml.m"
          {
#line 605 "term_to_xml.m"
            mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_11, mercury__term_to_xml__NonCanon_10, &mercury__term_to_xml__Functor_18, &mercury__term_to_xml__Arity_19, &mercury__term_to_xml__V_20_20);
          }
#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 37 "type_desc.opt"
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
#line 18772 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeOfTerm_21  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 38 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeOfTerm_21 ;
		{
#line 38 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 18796 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_22_22  = Functors;
#line 38 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1043 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 1043 "term_to_xml.m"
            {
#line 1045 "term_to_xml.m"
              mercury__term_to_xml__V_56_56 = (MR_Integer) -1;
#line 1045 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_22_22 > mercury__term_to_xml__V_56_56);
#line 1043 "term_to_xml.m"
            }
#line 609 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 608 "term_to_xml.m"
            {
#line 608 "term_to_xml.m"
              mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 0) = ((MR_Box) (mercury__term_to_xml__Functor_18));
#line 608 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_23, 1) = ((MR_Box) (mercury__term_to_xml__Arity_19));
#line 608 "term_to_xml.m"
            }
#line 609 "term_to_xml.m"
          else
#line 610 "term_to_xml.m"
            mercury__term_to_xml__Request_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "term_to_xml.m"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_17, (MR_Integer) 1)));
#line 612 "term_to_xml.m"
          {
#line 612 "term_to_xml.m"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_17), ((MR_Box) (mercury__term_to_xml__TypeOfTerm_21)), ((MR_Box) (mercury__term_to_xml__Request_23)), &mercury__term_to_xml__conv7_Root_24, &mercury__term_to_xml__conv6_V_25_25);
          }
#line 612 "term_to_xml.m"
          mercury__term_to_xml__Root_24 = ((MR_String) mercury__term_to_xml__conv7_Root_24);
#line 612 "term_to_xml.m"
          mercury__term_to_xml__V_25_25 = ((MR_Word) mercury__term_to_xml__conv6_V_25_25);
#line 18843 "term_to_xml.c"
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18845 "term_to_xml.c"
          {
#line 18847 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
#line 18850 "term_to_xml.c"
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18852 "term_to_xml.c"
          {
#line 18854 "term_to_xml.c"
            mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Root_24)), mercury__term_to_xml__STATE_VARIABLE_State_15_66, &mercury__term_to_xml__STATE_VARIABLE_State_16_67);
          }
#line 627 "term_to_xml.m"
#line 627 "term_to_xml.m"
          switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
#line 627 "term_to_xml.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 627 "term_to_xml.m"
            case (MR_Integer) 0:
#line 624 "term_to_xml.m"
              {
#line 624 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 624 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_78;
#line 18870 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18872 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18875 "term_to_xml.c"
                {
#line 18877 "term_to_xml.c"
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
#line 18880 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18882 "term_to_xml.c"
                {
#line 18884 "term_to_xml.c"
                  mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_63)), mercury__term_to_xml__STATE_VARIABLE_State_27_78, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 624 "term_to_xml.m"
              }
#line 627 "term_to_xml.m"
              break;
#line 627 "term_to_xml.m"
            case (MR_Integer) 1:
#line 628 "term_to_xml.m"
              {
#line 628 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
#line 628 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_72;
#line 628 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_73;
#line 628 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_75;
#line 628 "term_to_xml.m"
                MR_String mercury__term_to_xml__PUBLIC_82 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18905 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18907 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18909 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18911 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18914 "term_to_xml.c"
                {
#line 18916 "term_to_xml.c"
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
#line 18919 "term_to_xml.c"
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18921 "term_to_xml.c"
                {
#line 18923 "term_to_xml.c"
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
#line 18926 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18928 "term_to_xml.c"
                {
#line 18930 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
#line 18933 "term_to_xml.c"
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18935 "term_to_xml.c"
                {
#line 18937 "term_to_xml.c"
                  mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_64)), mercury__term_to_xml__STATE_VARIABLE_State_24_75, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 628 "term_to_xml.m"
              }
#line 627 "term_to_xml.m"
              break;
#line 627 "term_to_xml.m"
            case (MR_Integer) 2:
#line 634 "term_to_xml.m"
              {
#line 634 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_69;
#line 634 "term_to_xml.m"
                MR_String mercury__term_to_xml__SYSTEM_83 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 18952 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18954 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18957 "term_to_xml.c"
                {
#line 18959 "term_to_xml.c"
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
#line 18962 "term_to_xml.c"
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18964 "term_to_xml.c"
                {
#line 18966 "term_to_xml.c"
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 634 "term_to_xml.m"
              }
#line 627 "term_to_xml.m"
              break;
#line 627 "term_to_xml.m"
          }
#line 18975 "term_to_xml.c"
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18977 "term_to_xml.c"
          {
#line 18979 "term_to_xml.c"
            mercury__term_to_xml__func_18(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_79, mercury__term_to_xml__STATE_VARIABLE_State_27);
          }
#line 614 "term_to_xml.m"
          *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "term_to_xml.m"
        }
#line 598 "term_to_xml.m"
        break;
#line 598 "term_to_xml.m"
    }
#line 598 "term_to_xml.m"
  }
#line 584 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3_1(
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
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 544 "term_to_xml.m"
  {
#line 544 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 547 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 545 "term_to_xml.m"
    {
#line 545 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
      case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
          case (MR_Integer) 0:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[15];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
          case (MR_Integer) 1:
#line 707 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[16];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
        }
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
      case (MR_Integer) 1:
#line 708 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
    }
#line 548 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "term_to_xml.m"
    {
#line 547 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 544 "term_to_xml.m"
  }
#line 453 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2_1(
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
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 544 "term_to_xml.m"
  {
#line 544 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 547 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 545 "term_to_xml.m"
    {
#line 545 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
      case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
          case (MR_Integer) 0:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[13];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
          case (MR_Integer) 1:
#line 707 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[14];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
        }
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
      case (MR_Integer) 1:
#line 708 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
    }
#line 548 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "term_to_xml.m"
    {
#line 547 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 544 "term_to_xml.m"
  }
#line 451 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1_1(
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
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 544 "term_to_xml.m"
  {
#line 544 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 547 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 545 "term_to_xml.m"
    {
#line 545 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
      case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
          case (MR_Integer) 0:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[11];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
          case (MR_Integer) 1:
#line 707 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[12];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
        }
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
      case (MR_Integer) 1:
#line 708 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
    }
#line 548 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "term_to_xml.m"
    {
#line 547 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 544 "term_to_xml.m"
  }
#line 449 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0_1(
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
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 544 "term_to_xml.m"
  {
#line 544 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 544 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 547 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 545 "term_to_xml.m"
    {
#line 545 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
      case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_10)) {
#line 706 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
          case (MR_Integer) 0:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[9];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
          case (MR_Integer) 1:
#line 707 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[10];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
        }
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
      case (MR_Integer) 1:
#line 708 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
    }
#line 548 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "term_to_xml.m"
    {
#line 547 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 544 "term_to_xml.m"
  }
#line 447 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0_1(
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
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 1332 "term_to_xml.m"
  {
#line 1332 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1333 "term_to_xml.m"
    {
#line 1333 "term_to_xml.m"
      *mercury__term_to_xml__DTDResult_10 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__TypeDesc_8);
    }
#line 1353 "term_to_xml.m"
#line 1353 "term_to_xml.m"
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_10)) {
#line 1353 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1353 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1353 "term_to_xml.m"
#line 1353 "term_to_xml.m"
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_10)) {
#line 1353 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1353 "term_to_xml.m"
          case (MR_Integer) 0:
#line 1335 "term_to_xml.m"
            {
#line 1335 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MakeElement_12;
#line 1350 "term_to_xml.m"
              MR_String mercury__term_to_xml__RootElement_13;
#line 1350 "term_to_xml.m"
              MR_Word mercury__term_to_xml__PseudoArgTypes_16;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_57_57;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_58_58;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_59_59;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_60_60;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_25_25;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_26_26;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_27_27;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_28_28;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_29_29;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_30_30;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_31_31;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_32_32;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_53_53;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_54_54;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_55_55;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_56_56;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_73_73;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_74_74;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_75_75;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_83_83;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_84_84;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_85_85;
#line 1339 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_14_14;
#line 1339 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_15_15;
#line 1338 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_17_17;

#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_9)) {
#line 706 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_9)) {
#line 706 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 706 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[7];
#line 706 "term_to_xml.m"
                      break;
#line 706 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[8];
#line 706 "term_to_xml.m"
                      break;
#line 706 "term_to_xml.m"
                  }
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
                case (MR_Integer) 1:
#line 708 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_9, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
              }
#line 1339 "term_to_xml.m"
              mercury__term_to_xml__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1339 "term_to_xml.m"
              mercury__term_to_xml__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1339 "term_to_xml.m"
              {
#line 1339 "term_to_xml.m"
                mercury__term_to_xml__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, 0) = NULL;
#line 1339 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, 1) = ((MR_Box) (mercury__term_to_xml__V_30_30));
#line 1339 "term_to_xml.m"
              }
#line 1339 "term_to_xml.m"
              mercury__term_to_xml__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1339 "term_to_xml.m"
              {
#line 1339 "term_to_xml.m"
                mercury__term_to_xml__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, 0) = NULL;
#line 1339 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, 1) = ((MR_Box) (mercury__term_to_xml__V_31_31));
#line 1339 "term_to_xml.m"
              }
#line 1339 "term_to_xml.m"
              mercury__term_to_xml__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1338 "term_to_xml.m"
              {
#line 1338 "term_to_xml.m"
                mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__TypeDesc_8, &mercury__term_to_xml__V_25_25, &mercury__term_to_xml__V_53_53, &mercury__term_to_xml__V_54_54, &mercury__term_to_xml__V_28_28, &mercury__term_to_xml__V_17_17);
              }
#line 19902 "term_to_xml.c"
              mercury__term_to_xml__TypeInfo_57_57 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1364 "term_to_xml.m"
              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
                {
#line 1364 "term_to_xml.m"
                  mercury__term_to_xml__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, (MR_Integer) 0)));
#line 1364 "term_to_xml.m"
                  mercury__term_to_xml__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_53_53, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                  (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_74_74));
#line 1364 "term_to_xml.m"
                  mercury__term_to_xml__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                  {
#line 1364 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_57_57, mercury__term_to_xml__V_73_73, mercury__term_to_xml__V_75_75);
                  }
#line 1338 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1338 "term_to_xml.m"
                    {
#line 19927 "term_to_xml.c"
                      mercury__term_to_xml__TypeInfo_58_58 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1364 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
                        {
#line 1364 "term_to_xml.m"
                          mercury__term_to_xml__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_54_54, (MR_Integer) 0)));
#line 1364 "term_to_xml.m"
                          mercury__term_to_xml__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_54_54, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                          (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_84_84));
#line 1364 "term_to_xml.m"
                          mercury__term_to_xml__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                          {
#line 1364 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_58_58, mercury__term_to_xml__V_83_83, mercury__term_to_xml__V_85_85);
                          }
#line 1338 "term_to_xml.m"
                          if (mercury__term_to_xml__succeeded)
#line 1338 "term_to_xml.m"
                            {
#line 1339 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1339 "term_to_xml.m"
                              if (mercury__term_to_xml__succeeded)
#line 1339 "term_to_xml.m"
                                {
#line 1339 "term_to_xml.m"
                                  mercury__term_to_xml__RootElement_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_25_25, (MR_Integer) 0)));
#line 1339 "term_to_xml.m"
                                  mercury__term_to_xml__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_25_25, (MR_Integer) 1)));
#line 19962 "term_to_xml.c"
                                  mercury__term_to_xml__TypeInfo_59_59 = (MR_Word) &mercury__term_to_xml_scalar_common_1[7];
#line 1339 "term_to_xml.m"
                                  {
#line 1339 "term_to_xml.m"
                                    mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_59_59, ((MR_Box) (mercury__term_to_xml__V_29_29)), ((MR_Box) (mercury__term_to_xml__V_55_55)));
                                  }
#line 1338 "term_to_xml.m"
                                  if (mercury__term_to_xml__succeeded)
#line 1338 "term_to_xml.m"
                                    {
#line 1339 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1339 "term_to_xml.m"
                                      if (mercury__term_to_xml__succeeded)
#line 1339 "term_to_xml.m"
                                        {
#line 1339 "term_to_xml.m"
                                          mercury__term_to_xml__PseudoArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_28_28, (MR_Integer) 0)));
#line 1339 "term_to_xml.m"
                                          mercury__term_to_xml__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_28_28, (MR_Integer) 1)));
#line 19983 "term_to_xml.c"
                                          mercury__term_to_xml__TypeInfo_60_60 = (MR_Word) &mercury__term_to_xml_scalar_common_1[8];
#line 1339 "term_to_xml.m"
                                          {
#line 1339 "term_to_xml.m"
                                            mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_60_60, ((MR_Box) (mercury__term_to_xml__V_32_32)), ((MR_Box) (mercury__term_to_xml__V_56_56)));
                                          }
#line 1339 "term_to_xml.m"
                                        }
#line 1338 "term_to_xml.m"
                                    }
#line 1339 "term_to_xml.m"
                                }
#line 1338 "term_to_xml.m"
                            }
#line 1364 "term_to_xml.m"
                        }
#line 1338 "term_to_xml.m"
                    }
#line 1364 "term_to_xml.m"
                }
#line 1350 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 1342 "term_to_xml.m"
                {
#line 1342 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__ArgTypes_18;
#line 1342 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_35_35;
#line 1342 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1342 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_38_38;
#line 1342 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_39_39;
#line 1342 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_40_40;
#line 1342 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 20022 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20024 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20026 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20028 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1341 "term_to_xml.m"
                  {
#line 1341 "term_to_xml.m"
                    mercury__term_to_xml__ArgTypes_18 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__PseudoArgTypes_16);
                  }
#line 20036 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20038 "term_to_xml.c"
                  {
#line 20040 "term_to_xml.c"
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_23, &mercury__term_to_xml__STATE_VARIABLE_State_35_35);
                  }
#line 20043 "term_to_xml.c"
                  mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20045 "term_to_xml.c"
                  {
#line 20047 "term_to_xml.c"
                    mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootElement_13)), mercury__term_to_xml__STATE_VARIABLE_State_35_35, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
                  }
#line 20050 "term_to_xml.c"
                  mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20052 "term_to_xml.c"
                  {
#line 20054 "term_to_xml.c"
                    mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " [\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_38_38);
                  }
#line 1346 "term_to_xml.m"
                  {
#line 1346 "term_to_xml.m"
                    mercury__term_to_xml__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "term_to_xml.m"
                    MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_39_39, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_8));
#line 1346 "term_to_xml.m"
                    MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_39_39, 1) = ((MR_Box) (mercury__term_to_xml__ArgTypes_18));
#line 1346 "term_to_xml.m"
                  }
#line 64 "tree234.opt"
                  mercury__term_to_xml__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1346 "term_to_xml.m"
                  {
#line 1346 "term_to_xml.m"
                    mercury__term_to_xml__write_dtd_types_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_47, mercury__term_to_xml__Stream_7, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_39_39, mercury__term_to_xml__V_40_40, mercury__term_to_xml__STATE_VARIABLE_State_38_38, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
                  }
#line 20074 "term_to_xml.c"
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20076 "term_to_xml.c"
                  {
#line 20078 "term_to_xml.c"
                    mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n]>")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, mercury__term_to_xml__STATE_VARIABLE_State_24);
#line 20080 "term_to_xml.c"
                    return;
                  }
#line 1342 "term_to_xml.m"
                }
#line 1350 "term_to_xml.m"
              else
#line 1351 "term_to_xml.m"
                {
#line 1351 "term_to_xml.m"
                  {
#line 1351 "term_to_xml.m"
                    mercury__require__unexpected_3_p_0((MR_String) "term_to_xml", (MR_String) "predicate \140term_to_xml.write_dtd_from_type\'/6", (MR_String) "not ok to generate DTD");
#line 1351 "term_to_xml.m"
                    return;
                  }
#line 1351 "term_to_xml.m"
                }
#line 1335 "term_to_xml.m"
            }
#line 1353 "term_to_xml.m"
            break;
#line 1353 "term_to_xml.m"
          case (MR_Integer) 1:
#line 1354 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1353 "term_to_xml.m"
            break;
#line 1353 "term_to_xml.m"
        }
#line 1353 "term_to_xml.m"
        break;
#line 1353 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1355 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1353 "term_to_xml.m"
        break;
#line 1353 "term_to_xml.m"
      case (MR_Integer) 2:
#line 1356 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1353 "term_to_xml.m"
        break;
#line 1353 "term_to_xml.m"
      case (MR_Integer) 3:
#line 1357 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1353 "term_to_xml.m"
        break;
#line 1353 "term_to_xml.m"
    }
#line 1332 "term_to_xml.m"
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
#line 550 "term_to_xml.m"
  {
#line 550 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 550 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_12;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_17 ;
		{
#line 37 "type_desc.opt"
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
#line 20189 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_12  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 552 "term_to_xml.m"
    {
#line 552 "term_to_xml.m"
      mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_16, mercury__term_to_xml__Stream_7, mercury__term_to_xml__TypeDesc_12, mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__DTDResult_10, mercury__term_to_xml__STATE_VARIABLE_State_0_13, mercury__term_to_xml__STATE_VARIABLE_State_14);
#line 552 "term_to_xml.m"
      return;
    }
#line 550 "term_to_xml.m"
  }
#line 416 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv3_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_7, &mercury__term_to_xml__conv2_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0_1(
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
    MR_String mercury__term_to_xml__conv1_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_7, &mercury__term_to_xml__conv0_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 1361 "term_to_xml.m"
  {
#line 1361 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1361 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Result_6;
#line 1361 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_7;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_36_36;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_37_37;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_38_38;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_39_39;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_40_40;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_14_14;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_15_15;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_17_17;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_18_18;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_20_20;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_21_21;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_22_22;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_31_31;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_32_32;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_33_33;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_34_34;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_35_35;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_53_53;
#line 1364 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_54_54;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_55_55;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_63_63;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_64_64;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_65_65;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_73_73;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_74_74;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_75_75;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_83_83;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_84_84;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_85_85;
#line 1364 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_8_8;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_9_9;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11;
#line 1364 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;

#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_4)) {
#line 706 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
      case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_4)) {
#line 706 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
          case (MR_Integer) 0:
#line 706 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[5];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
          case (MR_Integer) 1:
#line 707 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[6];
#line 706 "term_to_xml.m"
            break;
#line 706 "term_to_xml.m"
        }
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
      case (MR_Integer) 1:
#line 708 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_4, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
        break;
#line 706 "term_to_xml.m"
    }
#line 1364 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1364 "term_to_xml.m"
    {
#line 1364 "term_to_xml.m"
      mercury__term_to_xml__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, 0) = NULL;
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, 1) = ((MR_Box) (mercury__term_to_xml__V_19_19));
#line 1364 "term_to_xml.m"
    }
#line 1364 "term_to_xml.m"
    mercury__term_to_xml__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1364 "term_to_xml.m"
    {
#line 1364 "term_to_xml.m"
      mercury__term_to_xml__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, 0) = NULL;
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, 1) = ((MR_Box) (mercury__term_to_xml__V_20_20));
#line 1364 "term_to_xml.m"
    }
#line 1364 "term_to_xml.m"
    mercury__term_to_xml__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1364 "term_to_xml.m"
    {
#line 1364 "term_to_xml.m"
      mercury__term_to_xml__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, 0) = NULL;
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, 1) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1364 "term_to_xml.m"
    }
#line 1364 "term_to_xml.m"
    mercury__term_to_xml__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1364 "term_to_xml.m"
    {
#line 1364 "term_to_xml.m"
      mercury__term_to_xml__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, 0) = NULL;
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, 1) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1364 "term_to_xml.m"
    }
#line 1364 "term_to_xml.m"
    mercury__term_to_xml__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1364 "term_to_xml.m"
    {
#line 1364 "term_to_xml.m"
      mercury__term_to_xml__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_18_18, 0) = NULL;
#line 1364 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_18_18, 1) = ((MR_Box) (mercury__term_to_xml__V_23_23));
#line 1364 "term_to_xml.m"
    }
#line 1364 "term_to_xml.m"
    {
#line 1364 "term_to_xml.m"
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__V_31_31, &mercury__term_to_xml__V_32_32, &mercury__term_to_xml__V_33_33, &mercury__term_to_xml__V_34_34, &mercury__term_to_xml__V_35_35);
    }
#line 20477 "term_to_xml.c"
    mercury__term_to_xml__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1364 "term_to_xml.m"
    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
      {
#line 1364 "term_to_xml.m"
        mercury__term_to_xml__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_31_31, (MR_Integer) 0)));
#line 1364 "term_to_xml.m"
        mercury__term_to_xml__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_31_31, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_54_54));
#line 1364 "term_to_xml.m"
        mercury__term_to_xml__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
        {
#line 1364 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeCtorInfo_36_36, mercury__term_to_xml__V_53_53, mercury__term_to_xml__V_55_55);
        }
#line 1364 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
          {
#line 20502 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_37_37 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1364 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
              {
#line 1364 "term_to_xml.m"
                mercury__term_to_xml__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_32_32, (MR_Integer) 0)));
#line 1364 "term_to_xml.m"
                mercury__term_to_xml__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_32_32, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_64_64));
#line 1364 "term_to_xml.m"
                mercury__term_to_xml__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                {
#line 1364 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_37_37, mercury__term_to_xml__V_63_63, mercury__term_to_xml__V_65_65);
                }
#line 1364 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
                  {
#line 20527 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_38_38 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1364 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
                      {
#line 1364 "term_to_xml.m"
                        mercury__term_to_xml__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_33_33, (MR_Integer) 0)));
#line 1364 "term_to_xml.m"
                        mercury__term_to_xml__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_33_33, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_74_74));
#line 1364 "term_to_xml.m"
                        mercury__term_to_xml__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                        {
#line 1364 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_38_38, mercury__term_to_xml__V_73_73, mercury__term_to_xml__V_75_75);
                        }
#line 1364 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
                          {
#line 20552 "term_to_xml.c"
                            mercury__term_to_xml__TypeInfo_39_39 = (MR_Word) &mercury__term_to_xml_scalar_common_1[0];
#line 1364 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                            if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
                              {
#line 1364 "term_to_xml.m"
                                mercury__term_to_xml__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_34_34, (MR_Integer) 0)));
#line 1364 "term_to_xml.m"
                                mercury__term_to_xml__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_34_34, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_84_84));
#line 1364 "term_to_xml.m"
                                mercury__term_to_xml__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, (MR_Integer) 1)));
#line 1364 "term_to_xml.m"
                                {
#line 1364 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_39_39, mercury__term_to_xml__V_83_83, mercury__term_to_xml__V_85_85);
                                }
#line 1364 "term_to_xml.m"
                                if (mercury__term_to_xml__succeeded)
#line 1364 "term_to_xml.m"
                                  {
#line 20577 "term_to_xml.c"
                                    mercury__term_to_xml__TypeInfo_40_40 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
#line 1364 "term_to_xml.m"
                                    {
#line 1364 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____list__list_1_1(mercury__term_to_xml__TypeInfo_40_40, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_35_35);
                                    }
#line 1364 "term_to_xml.m"
                                  }
#line 1364 "term_to_xml.m"
                              }
#line 1364 "term_to_xml.m"
                          }
#line 1364 "term_to_xml.m"
                      }
#line 1364 "term_to_xml.m"
                  }
#line 1364 "term_to_xml.m"
              }
#line 1364 "term_to_xml.m"
          }
#line 1364 "term_to_xml.m"
      }
#line 1369 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1366 "term_to_xml.m"
      {
#line 1366 "term_to_xml.m"
        MR_Word mercury__term_to_xml__PseudoTypeDesc_13;
#line 1366 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_24_24;
#line 1366 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_25_25;
#line 1366 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_26_26;
#line 1366 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_27_27;

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_2_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 20628 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_13  = PseudoTypeDesc;
#line 32 "type_desc.opt"
}
#line 1367 "term_to_xml.m"
        mercury__term_to_xml__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1367 "term_to_xml.m"
        {
#line 1367 "term_to_xml.m"
          mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_24_24, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_13));
#line 1367 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_24_24, 1) = ((MR_Box) (mercury__term_to_xml__V_25_25));
#line 1367 "term_to_xml.m"
        }
#line 64 "tree234.opt"
        mercury__term_to_xml__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 64 "tree234.opt"
        mercury__term_to_xml__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1367 "term_to_xml.m"
        {
#line 1367 "term_to_xml.m"
          return mercury__term_to_xml__Result_6 = mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27);
        }
#line 1366 "term_to_xml.m"
      }
#line 1369 "term_to_xml.m"
    else
#line 1370 "term_to_xml.m"
      mercury__term_to_xml__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1361 "term_to_xml.m"
    return mercury__term_to_xml__Result_6;
#line 1361 "term_to_xml.m"
  }
#line 405 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv8_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv7_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_7, &mercury__term_to_xml__conv7_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0_1(
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
    MR_String mercury__term_to_xml__conv6_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv5_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_7, &mercury__term_to_xml__conv5_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 525 "term_to_xml.m"
  {
#line 525 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 525 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 37 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_34_34;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 37 "type_desc.opt"
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
#line 20805 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 1376 "term_to_xml.m"
#line 1376 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 1376 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1376 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1376 "term_to_xml.m"
#line 1376 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 1376 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1376 "term_to_xml.m"
          case (MR_Integer) 0:
#line 1379 "term_to_xml.m"
            {
#line 1379 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__V_23_23);
            }
#line 1376 "term_to_xml.m"
            break;
#line 1376 "term_to_xml.m"
          case (MR_Integer) 1:
#line 1376 "term_to_xml.m"
            *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "term_to_xml.m"
            break;
#line 1376 "term_to_xml.m"
        }
#line 1376 "term_to_xml.m"
        break;
#line 1376 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1377 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "term_to_xml.m"
        break;
#line 1376 "term_to_xml.m"
    }
#line 535 "term_to_xml.m"
#line 535 "term_to_xml.m"
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) {
#line 535 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 535 "term_to_xml.m"
      case (MR_Integer) 0:
#line 535 "term_to_xml.m"
#line 535 "term_to_xml.m"
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_14)) {
#line 535 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 535 "term_to_xml.m"
          case (MR_Integer) 0:
#line 528 "term_to_xml.m"
            {
#line 528 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 528 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
#line 528 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 528 "term_to_xml.m"
              MR_Word mercury__term_to_xml__Univ_65;
#line 528 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MakeElement_66;
#line 528 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_68_68;
#line 531 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_16_16;
#line 547 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_67_67;

#line 529 "term_to_xml.m"
              {
#line 529 "term_to_xml.m"
                mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__V_24_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
              }
#line 571 "term_to_xml.m"
              if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "term_to_xml.m"
                mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 571 "term_to_xml.m"
              else
#line 573 "term_to_xml.m"
                {
#line 573 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
#line 573 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_50;
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_51;
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
#line 20911 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20913 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20915 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20917 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20919 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20922 "term_to_xml.c"
                  {
#line 20924 "term_to_xml.c"
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
#line 20927 "term_to_xml.c"
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20929 "term_to_xml.c"
                  {
#line 20931 "term_to_xml.c"
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
#line 20934 "term_to_xml.c"
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20936 "term_to_xml.c"
                  {
#line 20938 "term_to_xml.c"
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
#line 20941 "term_to_xml.c"
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20943 "term_to_xml.c"
                  {
#line 20945 "term_to_xml.c"
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
#line 20948 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20950 "term_to_xml.c"
                  {
#line 20952 "term_to_xml.c"
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
                  }
#line 573 "term_to_xml.m"
                }
#line 531 "term_to_xml.m"
              {
#line 531 "term_to_xml.m"
                mercury__term_to_xml__write_doctype_8_p_2(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
#line 545 "term_to_xml.m"
              {
#line 545 "term_to_xml.m"
                mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_65);
              }
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_11)) {
#line 706 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_11)) {
#line 706 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 706 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[3];
#line 706 "term_to_xml.m"
                      break;
#line 706 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[4];
#line 706 "term_to_xml.m"
                      break;
#line 706 "term_to_xml.m"
                  }
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
                case (MR_Integer) 1:
#line 708 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
              }
#line 548 "term_to_xml.m"
              mercury__term_to_xml__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "term_to_xml.m"
              {
#line 547 "term_to_xml.m"
                mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_66, (MR_Integer) 0, mercury__term_to_xml__Univ_65, mercury__term_to_xml__V_68_68, &mercury__term_to_xml__V_67_67, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
              }
#line 528 "term_to_xml.m"
            }
#line 535 "term_to_xml.m"
            break;
#line 535 "term_to_xml.m"
          case (MR_Integer) 1:
#line 536 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 535 "term_to_xml.m"
            break;
#line 535 "term_to_xml.m"
        }
#line 535 "term_to_xml.m"
        break;
#line 535 "term_to_xml.m"
      case (MR_Integer) 1:
#line 537 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 535 "term_to_xml.m"
        break;
#line 535 "term_to_xml.m"
      case (MR_Integer) 2:
#line 538 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 535 "term_to_xml.m"
        break;
#line 535 "term_to_xml.m"
      case (MR_Integer) 3:
#line 539 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 535 "term_to_xml.m"
        break;
#line 535 "term_to_xml.m"
    }
#line 525 "term_to_xml.m"
  }
#line 392 "term_to_xml.m"
}

#line 707 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_2(
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__closure_arg,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 707 "term_to_xml.m"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_3,
#line 707 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__wrapper_arg_4)
#line 707 "term_to_xml.m"
{
#line 707 "term_to_xml.m"
  {
#line 707 "term_to_xml.m"
    MR_Box mercury__term_to_xml__closure = mercury__term_to_xml__closure_arg;
#line 707 "term_to_xml.m"
    MR_String mercury__term_to_xml__conv8_Element_7;
#line 707 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv7_AttrFromSources_8;

#line 707 "term_to_xml.m"
    {
#line 707 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_7, &mercury__term_to_xml__conv7_AttrFromSources_8);
    }
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_7));
#line 707 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_AttrFromSources_8));
#line 707 "term_to_xml.m"
  }
#line 707 "term_to_xml.m"
}

#line 706 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0_1(
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
    MR_String mercury__term_to_xml__conv6_Element_7;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv5_AttrFromSources_8;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_7, &mercury__term_to_xml__conv5_AttrFromSources_8);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_7));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_AttrFromSources_8));
#line 706 "term_to_xml.m"
  }
#line 706 "term_to_xml.m"
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
#line 506 "term_to_xml.m"
  {
#line 506 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 506 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 37 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_34_34;

#line 37 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 37 "type_desc.opt"
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
#line 21185 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 1376 "term_to_xml.m"
#line 1376 "term_to_xml.m"
    switch (MR_tag((MR_Word) mercury__term_to_xml__MaybeDTD_13)) {
#line 1376 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1376 "term_to_xml.m"
      case (MR_Integer) 0:
#line 1376 "term_to_xml.m"
#line 1376 "term_to_xml.m"
        switch (MR_unmkbody(mercury__term_to_xml__MaybeDTD_13)) {
#line 1376 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1376 "term_to_xml.m"
          case (MR_Integer) 0:
#line 1379 "term_to_xml.m"
            {
#line 1379 "term_to_xml.m"
              *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__V_23_23);
            }
#line 1376 "term_to_xml.m"
            break;
#line 1376 "term_to_xml.m"
          case (MR_Integer) 1:
#line 1376 "term_to_xml.m"
            *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "term_to_xml.m"
            break;
#line 1376 "term_to_xml.m"
        }
#line 1376 "term_to_xml.m"
        break;
#line 1376 "term_to_xml.m"
      case (MR_Integer) 1:
#line 1377 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "term_to_xml.m"
        break;
#line 1376 "term_to_xml.m"
    }
#line 516 "term_to_xml.m"
#line 516 "term_to_xml.m"
    switch (MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) {
#line 516 "term_to_xml.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 516 "term_to_xml.m"
      case (MR_Integer) 0:
#line 516 "term_to_xml.m"
#line 516 "term_to_xml.m"
        switch (MR_unmkbody(*mercury__term_to_xml__DTDResult_14)) {
#line 516 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 516 "term_to_xml.m"
          case (MR_Integer) 0:
#line 509 "term_to_xml.m"
            {
#line 509 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 509 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
#line 509 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 509 "term_to_xml.m"
              MR_Word mercury__term_to_xml__Univ_65;
#line 509 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MakeElement_66;
#line 509 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_68_68;
#line 512 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_16_16;
#line 547 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_67_67;

#line 510 "term_to_xml.m"
              {
#line 510 "term_to_xml.m"
                mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__V_24_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
              }
#line 571 "term_to_xml.m"
              if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "term_to_xml.m"
                mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 571 "term_to_xml.m"
              else
#line 573 "term_to_xml.m"
                {
#line 573 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
#line 573 "term_to_xml.m"
                  MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_50;
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_51;
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 573 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
#line 21291 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21293 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21295 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21297 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21299 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21302 "term_to_xml.c"
                  {
#line 21304 "term_to_xml.c"
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
#line 21307 "term_to_xml.c"
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21309 "term_to_xml.c"
                  {
#line 21311 "term_to_xml.c"
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
#line 21314 "term_to_xml.c"
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21316 "term_to_xml.c"
                  {
#line 21318 "term_to_xml.c"
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
#line 21321 "term_to_xml.c"
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21323 "term_to_xml.c"
                  {
#line 21325 "term_to_xml.c"
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
#line 21328 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21330 "term_to_xml.c"
                  {
#line 21332 "term_to_xml.c"
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
                  }
#line 573 "term_to_xml.m"
                }
#line 512 "term_to_xml.m"
              {
#line 512 "term_to_xml.m"
                mercury__term_to_xml__write_doctype_8_p_0(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
#line 545 "term_to_xml.m"
              {
#line 545 "term_to_xml.m"
                mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_65);
              }
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
              switch (MR_tag((MR_Word) mercury__term_to_xml__ElementMapping_11)) {
#line 706 "term_to_xml.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                case (MR_Integer) 0:
#line 706 "term_to_xml.m"
#line 706 "term_to_xml.m"
                  switch (MR_unmkbody(mercury__term_to_xml__ElementMapping_11)) {
#line 706 "term_to_xml.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 706 "term_to_xml.m"
                    case (MR_Integer) 0:
#line 706 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[1];
#line 706 "term_to_xml.m"
                      break;
#line 706 "term_to_xml.m"
                    case (MR_Integer) 1:
#line 707 "term_to_xml.m"
                      mercury__term_to_xml__MakeElement_66 = (MR_Word) &mercury__term_to_xml_scalar_common_3[2];
#line 706 "term_to_xml.m"
                      break;
#line 706 "term_to_xml.m"
                  }
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
                case (MR_Integer) 1:
#line 708 "term_to_xml.m"
                  mercury__term_to_xml__MakeElement_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
#line 706 "term_to_xml.m"
                  break;
#line 706 "term_to_xml.m"
              }
#line 548 "term_to_xml.m"
              mercury__term_to_xml__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "term_to_xml.m"
              {
#line 547 "term_to_xml.m"
                mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_66, (MR_Integer) 0, mercury__term_to_xml__Univ_65, mercury__term_to_xml__V_68_68, &mercury__term_to_xml__V_67_67, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
              }
#line 509 "term_to_xml.m"
            }
#line 516 "term_to_xml.m"
            break;
#line 516 "term_to_xml.m"
          case (MR_Integer) 1:
#line 517 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 516 "term_to_xml.m"
            break;
#line 516 "term_to_xml.m"
        }
#line 516 "term_to_xml.m"
        break;
#line 516 "term_to_xml.m"
      case (MR_Integer) 1:
#line 518 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 516 "term_to_xml.m"
        break;
#line 516 "term_to_xml.m"
      case (MR_Integer) 2:
#line 519 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 516 "term_to_xml.m"
        break;
#line 516 "term_to_xml.m"
      case (MR_Integer) 3:
#line 520 "term_to_xml.m"
        *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 516 "term_to_xml.m"
        break;
#line 516 "term_to_xml.m"
    }
#line 506 "term_to_xml.m"
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
#line 554 "term_to_xml.m"
  {
#line 554 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 554 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 21450 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 21453 "term_to_xml.c"
    {
#line 21455 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "<\?xml version=\"1.0\"")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 561 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeEncoding_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 562 "term_to_xml.m"
      {
#line 21462 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 21465 "term_to_xml.c"
        {
#line 21467 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 21469 "term_to_xml.c"
          return;
        }
#line 562 "term_to_xml.m"
      }
#line 561 "term_to_xml.m"
    else
#line 557 "term_to_xml.m"
      {
#line 557 "term_to_xml.m"
        MR_String mercury__term_to_xml__Encoding_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeEncoding_6, (MR_Integer) 0)));
#line 557 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 557 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_17;
#line 21484 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21486 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21488 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21491 "term_to_xml.c"
        {
#line 21493 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " encoding=\"")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
        }
#line 21496 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21498 "term_to_xml.c"
        {
#line 21500 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Encoding_8)), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_17_17);
        }
#line 21503 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21505 "term_to_xml.c"
        {
#line 21507 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_17, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 21509 "term_to_xml.c"
          return;
        }
#line 557 "term_to_xml.m"
      }
#line 554 "term_to_xml.m"
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
#line 495 "term_to_xml.m"
  {
#line 495 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 495 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Root_10;
#line 495 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Children_13;
#line 495 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ChildrenFormat_14;
#line 21548 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21550 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_Root_10;
#line 497 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_11_11;
#line 497 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;

#line 21557 "term_to_xml.c"
    {
#line 21559 "term_to_xml.c"
      mercury__term_to_xml__conv1_Root_10 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_18), mercury__term_to_xml__Term_8);
    }
#line 21562 "term_to_xml.c"
    mercury__term_to_xml__Root_10 = ((MR_Word) mercury__term_to_xml__conv1_Root_10);
#line 497 "term_to_xml.m"
    mercury__term_to_xml__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 0)));
#line 497 "term_to_xml.m"
    mercury__term_to_xml__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 1)));
#line 497 "term_to_xml.m"
    mercury__term_to_xml__Children_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 2)));
#line 498 "term_to_xml.m"
    {
#line 498 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_13);
    }
#line 500 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 499 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 1;
#line 500 "term_to_xml.m"
    else
#line 501 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 0;
#line 503 "term_to_xml.m"
    {
#line 503 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__ChildrenFormat_14, mercury__term_to_xml__Indent_7, mercury__term_to_xml__Root_10, mercury__term_to_xml__STATE_VARIABLE_State_0_15, mercury__term_to_xml__STATE_VARIABLE_State_16);
#line 503 "term_to_xml.m"
      return;
    }
#line 495 "term_to_xml.m"
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
#line 477 "term_to_xml.m"
  {
#line 477 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 477 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Root_12;
#line 477 "term_to_xml.m"
    MR_String mercury__term_to_xml__RootName_13;
#line 477 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Children_15;
#line 477 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ChildrenFormat_17;
#line 477 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 477 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 477 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_23;
#line 21636 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box);
#line 21638 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv6_Root_12;
#line 481 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_14_14;

#line 478 "term_to_xml.m"
    {
#line 478 "term_to_xml.m"
      mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__V_20_20, mercury__term_to_xml__STATE_VARIABLE_State_0_18, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 571 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeStyleSheet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "term_to_xml.m"
      mercury__term_to_xml__STATE_VARIABLE_State_22_22 = mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 571 "term_to_xml.m"
    else
#line 573 "term_to_xml.m"
      {
#line 573 "term_to_xml.m"
        MR_String mercury__term_to_xml__Type_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 0)));
#line 573 "term_to_xml.m"
        MR_String mercury__term_to_xml__Href_34 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 1)));
#line 573 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_36;
#line 573 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_37;
#line 573 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_39;
#line 573 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_40;
#line 21668 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21670 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21672 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21674 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21676 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21679 "term_to_xml.c"
        {
#line 21681 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_13_36);
        }
#line 21684 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21686 "term_to_xml.c"
        {
#line 21688 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Type_33)), mercury__term_to_xml__STATE_VARIABLE_State_13_36, &mercury__term_to_xml__STATE_VARIABLE_State_14_37);
        }
#line 21691 "term_to_xml.c"
        mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21693 "term_to_xml.c"
        {
#line 21695 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_37, &mercury__term_to_xml__STATE_VARIABLE_State_16_39);
        }
#line 21698 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21700 "term_to_xml.c"
        {
#line 21702 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Href_34)), mercury__term_to_xml__STATE_VARIABLE_State_16_39, &mercury__term_to_xml__STATE_VARIABLE_State_17_40);
        }
#line 21705 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21707 "term_to_xml.c"
        {
#line 21709 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_40, &mercury__term_to_xml__STATE_VARIABLE_State_22_22);
        }
#line 573 "term_to_xml.m"
      }
#line 21714 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21716 "term_to_xml.c"
    {
#line 21718 "term_to_xml.c"
      mercury__term_to_xml__conv6_Root_12 = mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_26), mercury__term_to_xml__Term_8);
    }
#line 21721 "term_to_xml.c"
    mercury__term_to_xml__Root_12 = ((MR_Word) mercury__term_to_xml__conv6_Root_12);
#line 481 "term_to_xml.m"
    mercury__term_to_xml__RootName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 0)));
#line 481 "term_to_xml.m"
    mercury__term_to_xml__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 1)));
#line 481 "term_to_xml.m"
    mercury__term_to_xml__Children_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 2)));
#line 484 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeDTD_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 483 "term_to_xml.m"
      mercury__term_to_xml__STATE_VARIABLE_State_23_23 = mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 484 "term_to_xml.m"
    else
#line 485 "term_to_xml.m"
      {
#line 485 "term_to_xml.m"
        MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_10, (MR_Integer) 0)));
#line 485 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_52;
#line 485 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 485 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_65;
#line 21745 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21747 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21749 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21752 "term_to_xml.c"
        {
#line 21754 "term_to_xml.c"
          mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_22_22, &mercury__term_to_xml__STATE_VARIABLE_State_15_52);
        }
#line 21757 "term_to_xml.c"
        mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21759 "term_to_xml.c"
        {
#line 21761 "term_to_xml.c"
          mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootName_13)), mercury__term_to_xml__STATE_VARIABLE_State_15_52, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
        }
#line 627 "term_to_xml.m"
#line 627 "term_to_xml.m"
        switch (MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) {
#line 627 "term_to_xml.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 627 "term_to_xml.m"
          case (MR_Integer) 0:
#line 624 "term_to_xml.m"
            {
#line 624 "term_to_xml.m"
              MR_String mercury__term_to_xml__PUBLIC_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 624 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_64;
#line 21777 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21779 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21782 "term_to_xml.c"
              {
#line 21784 "term_to_xml.c"
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_27_64);
              }
#line 21787 "term_to_xml.c"
              mercury__term_to_xml__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21789 "term_to_xml.c"
              {
#line 21791 "term_to_xml.c"
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_49)), mercury__term_to_xml__STATE_VARIABLE_State_27_64, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
#line 624 "term_to_xml.m"
            }
#line 627 "term_to_xml.m"
            break;
#line 627 "term_to_xml.m"
          case (MR_Integer) 1:
#line 628 "term_to_xml.m"
            {
#line 628 "term_to_xml.m"
              MR_String mercury__term_to_xml__SYSTEM_50 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
#line 628 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_58;
#line 628 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_59;
#line 628 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_61;
#line 628 "term_to_xml.m"
              MR_String mercury__term_to_xml__PUBLIC_68 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 21812 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21814 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21816 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21818 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21821 "term_to_xml.c"
              {
#line 21823 "term_to_xml.c"
                mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_21_58);
              }
#line 21826 "term_to_xml.c"
              mercury__term_to_xml__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21828 "term_to_xml.c"
              {
#line 21830 "term_to_xml.c"
                mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_68)), mercury__term_to_xml__STATE_VARIABLE_State_21_58, &mercury__term_to_xml__STATE_VARIABLE_State_22_59);
              }
#line 21833 "term_to_xml.c"
              mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21835 "term_to_xml.c"
              {
#line 21837 "term_to_xml.c"
                mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_59, &mercury__term_to_xml__STATE_VARIABLE_State_24_61);
              }
#line 21840 "term_to_xml.c"
              mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21842 "term_to_xml.c"
              {
#line 21844 "term_to_xml.c"
                mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_50)), mercury__term_to_xml__STATE_VARIABLE_State_24_61, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
#line 628 "term_to_xml.m"
            }
#line 627 "term_to_xml.m"
            break;
#line 627 "term_to_xml.m"
          case (MR_Integer) 2:
#line 634 "term_to_xml.m"
            {
#line 634 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_55;
#line 634 "term_to_xml.m"
              MR_String mercury__term_to_xml__SYSTEM_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 21859 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21861 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21864 "term_to_xml.c"
              {
#line 21866 "term_to_xml.c"
                mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_18_55);
              }
#line 21869 "term_to_xml.c"
              mercury__term_to_xml__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21871 "term_to_xml.c"
              {
#line 21873 "term_to_xml.c"
                mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_69)), mercury__term_to_xml__STATE_VARIABLE_State_18_55, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
#line 634 "term_to_xml.m"
            }
#line 627 "term_to_xml.m"
            break;
#line 627 "term_to_xml.m"
        }
#line 21882 "term_to_xml.c"
        mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21884 "term_to_xml.c"
        {
#line 21886 "term_to_xml.c"
          mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_65, &mercury__term_to_xml__STATE_VARIABLE_State_23_23);
        }
#line 485 "term_to_xml.m"
      }
#line 488 "term_to_xml.m"
    {
#line 488 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_15);
    }
#line 490 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 489 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 1;
#line 490 "term_to_xml.m"
    else
#line 491 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
#line 493 "term_to_xml.m"
    {
#line 493 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, (MR_Integer) 0, mercury__term_to_xml__Root_12, mercury__term_to_xml__STATE_VARIABLE_State_23_23, mercury__term_to_xml__STATE_VARIABLE_State_19);
#line 493 "term_to_xml.m"
      return;
    }
#line 477 "term_to_xml.m"
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
#line 474 "term_to_xml.m"
  {
#line 474 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 474 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 475 "term_to_xml.m"
    {
#line 475 "term_to_xml.m"
      mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(mercury__term_to_xml__TypeClassInfo_for_xmlable_13, mercury__term_to_xml__TypeClassInfo_for_writer_14, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Term_6, mercury__term_to_xml__V_10_10, mercury__term_to_xml__V_11_11, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 475 "term_to_xml.m"
      return;
    }
#line 474 "term_to_xml.m"
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
#line 21963 "term_to_xml.c"
  {
#line 21965 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;
#line 21967 "term_to_xml.c"
    MR_Word mercury__term_to_xml__HeadVar__2_2;
#line 21969 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21971 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_HeadVar__2_2;

#line 21974 "term_to_xml.c"
    {
#line 21976 "term_to_xml.c"
      mercury__term_to_xml__conv1_HeadVar__2_2 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_3), mercury__term_to_xml__HeadVar__1_1);
    }
#line 21979 "term_to_xml.c"
    mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) mercury__term_to_xml__conv1_HeadVar__2_2);
#line 21981 "term_to_xml.c"
    return mercury__term_to_xml__HeadVar__2_2;
#line 21983 "term_to_xml.c"
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
