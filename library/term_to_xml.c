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
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
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
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 1992 "term_to_xml.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2000 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2006 "term_to_xml.c"
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

#line 2021 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 2026 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0
  }
};

#line 2035 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 2040 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1] = {
  (MR_Integer) 0
};

#line 2045 "term_to_xml.c"
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

#line 2062 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0
};

#line 2068 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2] = {
  (MR_String) "attr_name",
  (MR_String) "attr_source"
};

#line 2074 "term_to_xml.c"
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

#line 2089 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 2094 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0
  }
};

#line 2103 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 2108 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1] = {
  (MR_Integer) 0
};

#line 2113 "term_to_xml.c"
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

#line 2130 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0 = {
  (MR_String) "functor",
  (MR_Integer) 0
};

#line 2136 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1 = {
  (MR_String) "field_name",
  (MR_Integer) 1
};

#line 2142 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2 = {
  (MR_String) "type_name",
  (MR_Integer) 2
};

#line 2148 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3 = {
  (MR_String) "arity",
  (MR_Integer) 3
};

#line 2154 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3
};

#line 2162 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2
};

#line 2170 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2178 "term_to_xml.c"
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

#line 2195 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2200 "term_to_xml.c"
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

#line 2215 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2221 "term_to_xml.c"
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

#line 2236 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2241 "term_to_xml.c"
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

#line 2256 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0
};

#line 2261 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1
};

#line 2266 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2271 "term_to_xml.c"
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

#line 2290 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2297 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2304 "term_to_xml.c"
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

#line 2321 "term_to_xml.c"
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

#line 2336 "term_to_xml.c"
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

#line 2351 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 2359 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0
};

#line 2365 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2] = {
  (MR_String) "duplicate_element",
  (MR_String) "duplicate_types"
};

#line 2371 "term_to_xml.c"
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

#line 2386 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
};

#line 2391 "term_to_xml.c"
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

#line 2406 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0
};

#line 2411 "term_to_xml.c"
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

#line 2426 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1
};

#line 2432 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2
};

#line 2437 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2442 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4
};

#line 2447 "term_to_xml.c"
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

#line 2471 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2480 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2489 "term_to_xml.c"
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

#line 2506 "term_to_xml.c"
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

#line 2521 "term_to_xml.c"
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

#line 2536 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2544 "term_to_xml.c"
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

#line 2556 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
};

#line 2561 "term_to_xml.c"
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

#line 2576 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2582 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2
};

#line 2587 "term_to_xml.c"
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

#line 2601 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2608 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2615 "term_to_xml.c"
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

#line 2632 "term_to_xml.c"
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

#line 2649 "term_to_xml.c"
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

#line 2664 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0
};

#line 2669 "term_to_xml.c"
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

#line 2684 "term_to_xml.c"
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

#line 2699 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2705 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1
};

#line 2710 "term_to_xml.c"
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

#line 2724 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2731 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2738 "term_to_xml.c"
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

#line 2755 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0 = {
  (MR_String) "format",
  (MR_Integer) 0
};

#line 2761 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1 = {
  (MR_String) "no_format",
  (MR_Integer) 1
};

#line 2767 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 2773 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 2779 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2785 "term_to_xml.c"
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

#line 2802 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2808 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2] = {
  (MR_String) "functor_name",
  (MR_String) "functor_arity"
};

#line 2814 "term_to_xml.c"
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

#line 2829 "term_to_xml.c"
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

#line 2844 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 2849 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0
};

#line 2854 "term_to_xml.c"
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

#line 2868 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 2874 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2880 "term_to_xml.c"
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

#line 2897 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2903 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2] = {
  (MR_String) "stylesheet_type",
  (MR_String) "stylesheet_href"
};

#line 2909 "term_to_xml.c"
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

#line 2924 "term_to_xml.c"
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

#line 2939 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1
};

#line 2944 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 2949 "term_to_xml.c"
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

#line 2963 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 2969 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2975 "term_to_xml.c"
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

#line 2992 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0
  }
};

#line 3000 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

#line 3008 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0
};

#line 3015 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3] = {
  (MR_String) "element_name",
  (MR_String) "attributes",
  (MR_String) "children"
};

#line 3022 "term_to_xml.c"
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

#line 3037 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3042 "term_to_xml.c"
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

#line 3057 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3062 "term_to_xml.c"
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

#line 3077 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3082 "term_to_xml.c"
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

#line 3097 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3102 "term_to_xml.c"
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

#line 3117 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3122 "term_to_xml.c"
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

#line 3137 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0
};

#line 3142 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1
};

#line 3147 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2
};

#line 3152 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3159 "term_to_xml.c"
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

#line 3183 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3193 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 3203 "term_to_xml.c"
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

#line 3220 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1] = {
  (MR_String) "T"
};

#line 3225 "term_to_xml.c"
static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1] = {
  {
    (MR_String) "to_xml",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 3234 "term_to_xml.c"
static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1 = {
  (MR_String) "term_to_xml",
  (MR_String) "xmlable",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1,
  mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1
};

#line 3245 "term_to_xml.c"
const MR_TypeClassDeclStruct mercury__term_to_xml__term_to_xml__type_class_decl_xmlable_1 = {
  &mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3253 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
#line 3256 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3258 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3260 "term_to_xml.c"
{
#line 3262 "term_to_xml.c"
  {
#line 3264 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3267 "term_to_xml.c"
    {
#line 3269 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3272 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3274 "term_to_xml.c"
  }
#line 3276 "term_to_xml.c"
}

#line 3279 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
#line 3282 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3284 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3286 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3288 "term_to_xml.c"
{
#line 3290 "term_to_xml.c"
  {
#line 3292 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3295 "term_to_xml.c"
    {
#line 3297 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3300 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3302 "term_to_xml.c"
  }
#line 3304 "term_to_xml.c"
}

#line 3307 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
#line 3310 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3312 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3314 "term_to_xml.c"
{
#line 3316 "term_to_xml.c"
  {
#line 3318 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3321 "term_to_xml.c"
    {
#line 3323 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_from_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3326 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3328 "term_to_xml.c"
  }
#line 3330 "term_to_xml.c"
}

#line 3333 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
#line 3336 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3338 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3340 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3342 "term_to_xml.c"
{
#line 3344 "term_to_xml.c"
  {
#line 3346 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3349 "term_to_xml.c"
    {
#line 3351 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_from_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3354 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3356 "term_to_xml.c"
  }
#line 3358 "term_to_xml.c"
}

#line 3361 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
#line 3364 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3366 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3368 "term_to_xml.c"
{
#line 3370 "term_to_xml.c"
  {
#line 3372 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3375 "term_to_xml.c"
    {
#line 3377 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3380 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3382 "term_to_xml.c"
  }
#line 3384 "term_to_xml.c"
}

#line 3387 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
#line 3390 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3392 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3394 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3396 "term_to_xml.c"
{
#line 3398 "term_to_xml.c"
  {
#line 3400 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3403 "term_to_xml.c"
    {
#line 3405 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3408 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3410 "term_to_xml.c"
  }
#line 3412 "term_to_xml.c"
}

#line 3415 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
#line 3418 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3420 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3422 "term_to_xml.c"
{
#line 3424 "term_to_xml.c"
  {
#line 3426 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3429 "term_to_xml.c"
    {
#line 3431 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3434 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3436 "term_to_xml.c"
  }
#line 3438 "term_to_xml.c"
}

#line 3441 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
#line 3444 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3446 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3448 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3450 "term_to_xml.c"
{
#line 3452 "term_to_xml.c"
  {
#line 3454 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3457 "term_to_xml.c"
    {
#line 3459 "term_to_xml.c"
      mercury__term_to_xml____Compare____doctype_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3462 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3464 "term_to_xml.c"
  }
#line 3466 "term_to_xml.c"
}

#line 3469 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
#line 3472 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3474 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3476 "term_to_xml.c"
{
#line 3478 "term_to_xml.c"
  {
#line 3480 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3483 "term_to_xml.c"
    {
#line 3485 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____dtd_generation_result_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3488 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3490 "term_to_xml.c"
  }
#line 3492 "term_to_xml.c"
}

#line 3495 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
#line 3498 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3500 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3502 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3504 "term_to_xml.c"
{
#line 3506 "term_to_xml.c"
  {
#line 3508 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3511 "term_to_xml.c"
    {
#line 3513 "term_to_xml.c"
      mercury__term_to_xml____Compare____dtd_generation_result_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3516 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3518 "term_to_xml.c"
  }
#line 3520 "term_to_xml.c"
}

#line 3523 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
#line 3526 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3528 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3530 "term_to_xml.c"
{
#line 3532 "term_to_xml.c"
  {
#line 3534 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3537 "term_to_xml.c"
    {
#line 3539 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_mapping_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3542 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3544 "term_to_xml.c"
  }
#line 3546 "term_to_xml.c"
}

#line 3549 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
#line 3552 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3554 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3556 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3558 "term_to_xml.c"
{
#line 3560 "term_to_xml.c"
  {
#line 3562 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3565 "term_to_xml.c"
    {
#line 3567 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_mapping_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3570 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3572 "term_to_xml.c"
  }
#line 3574 "term_to_xml.c"
}

#line 3577 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
#line 3580 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3582 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3584 "term_to_xml.c"
{
#line 3586 "term_to_xml.c"
  {
#line 3588 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3591 "term_to_xml.c"
    {
#line 3593 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_pred_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3596 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3598 "term_to_xml.c"
  }
#line 3600 "term_to_xml.c"
}

#line 3603 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
#line 3606 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3608 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3610 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3612 "term_to_xml.c"
{
#line 3614 "term_to_xml.c"
  {
#line 3616 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3619 "term_to_xml.c"
    {
#line 3621 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_pred_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3624 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3626 "term_to_xml.c"
  }
#line 3628 "term_to_xml.c"
}

#line 3631 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
#line 3634 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3636 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3638 "term_to_xml.c"
{
#line 3640 "term_to_xml.c"
  {
#line 3642 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3645 "term_to_xml.c"
    {
#line 3647 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_dtd_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3650 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3652 "term_to_xml.c"
  }
#line 3654 "term_to_xml.c"
}

#line 3657 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
#line 3660 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3662 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3664 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3666 "term_to_xml.c"
{
#line 3668 "term_to_xml.c"
  {
#line 3670 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3673 "term_to_xml.c"
    {
#line 3675 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_dtd_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3678 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3680 "term_to_xml.c"
  }
#line 3682 "term_to_xml.c"
}

#line 3685 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
#line 3688 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3690 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3692 "term_to_xml.c"
{
#line 3694 "term_to_xml.c"
  {
#line 3696 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3699 "term_to_xml.c"
    {
#line 3701 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_format_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3704 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3706 "term_to_xml.c"
  }
#line 3708 "term_to_xml.c"
}

#line 3711 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
#line 3714 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3716 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3718 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3720 "term_to_xml.c"
{
#line 3722 "term_to_xml.c"
  {
#line 3724 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3727 "term_to_xml.c"
    {
#line 3729 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_format_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3732 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3734 "term_to_xml.c"
  }
#line 3736 "term_to_xml.c"
}

#line 3739 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
#line 3742 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3744 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3746 "term_to_xml.c"
{
#line 3748 "term_to_xml.c"
  {
#line 3750 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3753 "term_to_xml.c"
    {
#line 3755 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_functor_info_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3758 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3760 "term_to_xml.c"
  }
#line 3762 "term_to_xml.c"
}

#line 3765 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
#line 3768 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3770 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3772 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3774 "term_to_xml.c"
{
#line 3776 "term_to_xml.c"
  {
#line 3778 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3781 "term_to_xml.c"
    {
#line 3783 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_functor_info_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3786 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3788 "term_to_xml.c"
  }
#line 3790 "term_to_xml.c"
}

#line 3793 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
#line 3796 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3798 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3800 "term_to_xml.c"
{
#line 3802 "term_to_xml.c"
  {
#line 3804 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3807 "term_to_xml.c"
    {
#line 3809 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_stylesheet_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3812 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3814 "term_to_xml.c"
  }
#line 3816 "term_to_xml.c"
}

#line 3819 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
#line 3822 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3824 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3826 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3828 "term_to_xml.c"
{
#line 3830 "term_to_xml.c"
  {
#line 3832 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3835 "term_to_xml.c"
    {
#line 3837 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_stylesheet_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3840 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3842 "term_to_xml.c"
  }
#line 3844 "term_to_xml.c"
}

#line 3847 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
#line 3850 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3852 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3854 "term_to_xml.c"
{
#line 3856 "term_to_xml.c"
  {
#line 3858 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3861 "term_to_xml.c"
    {
#line 3863 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____xml_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3866 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3868 "term_to_xml.c"
  }
#line 3870 "term_to_xml.c"
}

#line 3873 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
#line 3876 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3878 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3880 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3882 "term_to_xml.c"
{
#line 3884 "term_to_xml.c"
  {
#line 3886 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3889 "term_to_xml.c"
    {
#line 3891 "term_to_xml.c"
      mercury__term_to_xml____Compare____xml_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3894 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3896 "term_to_xml.c"
  }
#line 3898 "term_to_xml.c"
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
#line 944 "string.opt"
  while (MR_TRUE)
#line 944 "string.opt"
    {
#line 944 "string.opt"
      /* tailcall optimized into a loop */
#line 944 "string.opt"
      {
#line 944 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_9_9 < mercury__term_to_xml__V_10_10);
#line 944 "string.opt"
        MR_Integer mercury__term_to_xml__V_12_13;
#line 944 "string.opt"
        MR_Char mercury__term_to_xml__V_13_14;

#line 938 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 938 "string.opt"
          {
#line 174 "string.opt"
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
#line 174 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3964 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_12_13  = NextIndex;
	 mercury__term_to_xml__V_13_14  = Ch;
#line 174 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 938 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 940 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_12_13 <= mercury__term_to_xml__V_10_10);
#line 938 "string.opt"
          }
#line 944 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 942 "string.opt"
          {
#line 942 "string.opt"
            MR_Box mercury__term_to_xml__V_16_15;

#line 942 "string.opt"
            {
#line 942 "string.opt"
              mercury__term_to_xml__write_xml_escaped_char_4_p_0(mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_13_14, mercury__term_to_xml__V_14_11, &mercury__term_to_xml__V_16_15);
            }
#line 943 "string.opt"
            /* direct tailcall eliminated */
#line 943 "string.opt"
            {
#line 943 "string.opt"
              MR_Integer mercury__term_to_xml__V_9__tmp_copy_9 = mercury__term_to_xml__V_12_13;
#line 943 "string.opt"
              MR_Box mercury__term_to_xml__V_14__tmp_copy_11 = mercury__term_to_xml__V_16_15;

#line 943 "string.opt"
              mercury__term_to_xml__V_14_11 = mercury__term_to_xml__V_14__tmp_copy_11;
#line 943 "string.opt"
              mercury__term_to_xml__V_9_9 = mercury__term_to_xml__V_9__tmp_copy_9;
#line 943 "string.opt"
            }
#line 943 "string.opt"
            continue;
#line 942 "string.opt"
          }
#line 944 "string.opt"
        else
#line 945 "string.opt"
          *mercury__term_to_xml__V_15_12 = mercury__term_to_xml__V_14_11;
#line 944 "string.opt"
      }
#line 944 "string.opt"
      break;
#line 944 "string.opt"
    }
#line 460 "string.int0"
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
#line 188 "list.opt"
  {
#line 188 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 188 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "list.opt"
      {
#line 188 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "list.opt"
      }
#line 188 "list.opt"
    else
#line 189 "list.opt"
      {
#line 189 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 189 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 189 "list.opt"
        MR_String mercury__term_to_xml__V_9_9;
#line 189 "list.opt"
        MR_Word mercury__term_to_xml__V_10_10;
#line 189 "list.opt"
        MR_Word mercury__term_to_xml__V_11_11;
#line 189 "list.opt"
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
#line 191 "list.opt"
        {
#line 191 "list.opt"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_12_12);
        }
#line 189 "list.opt"
        {
#line 189 "list.opt"
          MR_Word base;
#line 189 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = base;
#line 189 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 189 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_10_10));
#line 189 "list.opt"
        }
#line 189 "list.opt"
        {
#line 189 "list.opt"
          MR_Word base;
#line 189 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = base;
#line 189 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_11_11));
#line 189 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_12_12));
#line 189 "list.opt"
        }
#line 189 "list.opt"
      }
#line 188 "list.opt"
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
#line 192 "list.opt"
  {
#line 192 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 192 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "list.opt"
      {
#line 192 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "list.opt"
        *mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "list.opt"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 192 "list.opt"
      }
#line 192 "list.opt"
    else
#line 193 "list.opt"
      {
#line 193 "list.opt"
        MR_Integer mercury__term_to_xml__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 193 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 193 "list.opt"
        MR_String mercury__term_to_xml__V_10_10;
#line 193 "list.opt"
        MR_Word mercury__term_to_xml__V_11_11;
#line 193 "list.opt"
        MR_Integer mercury__term_to_xml__V_12_12;
#line 193 "list.opt"
        MR_Word mercury__term_to_xml__V_13_13;
#line 193 "list.opt"
        MR_Word mercury__term_to_xml__V_14_14;
#line 193 "list.opt"
        MR_Word mercury__term_to_xml__V_15_15;

#line 54 "construct.opt"
        {
#line 54 "construct.opt"
          mercury__term_to_xml__succeeded = mercury__construct__get_functor_internal_5_p_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_12_12, &mercury__term_to_xml__V_14_14);
        }
#line 193 "list.opt"
        if (mercury__term_to_xml__succeeded)
#line 193 "list.opt"
          {
#line 195 "list.opt"
            {
#line 195 "list.opt"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_9_9, &mercury__term_to_xml__V_11_11, &mercury__term_to_xml__V_13_13, &mercury__term_to_xml__V_15_15);
            }
#line 193 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 193 "list.opt"
              {
#line 193 "list.opt"
                {
#line 193 "list.opt"
                  MR_Word base;
#line 193 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 193 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_10_10));
#line 193 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_11_11));
#line 193 "list.opt"
                }
#line 193 "list.opt"
                {
#line 193 "list.opt"
                  MR_Word base;
#line 193 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "list.opt"
                  *mercury__term_to_xml__HeadVar__4_4 = base;
#line 193 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_12_12));
#line 193 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_13_13));
#line 193 "list.opt"
                }
#line 193 "list.opt"
                {
#line 193 "list.opt"
                  MR_Word base;
#line 193 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "list.opt"
                  *mercury__term_to_xml__HeadVar__5_5 = base;
#line 193 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_14_14));
#line 193 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_15_15));
#line 193 "list.opt"
                }
#line 193 "list.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 193 "list.opt"
              }
#line 193 "list.opt"
          }
#line 193 "list.opt"
      }
#line 192 "list.opt"
    return mercury__term_to_xml__succeeded;
#line 192 "list.opt"
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
#line 394 "list.opt"
  while (MR_TRUE)
#line 394 "list.opt"
    {
#line 394 "list.opt"
      /* tailcall optimized into a loop */
#line 394 "list.opt"
      {
#line 394 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 394 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 394 "list.opt"
        else
#line 396 "list.opt"
          {
#line 396 "list.opt"
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "list.opt"
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "list.opt"
            MR_Box mercury__term_to_xml__V_15_13;

#line 397 "list.opt"
            {
#line 397 "list.opt"
              mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
#line 398 "list.opt"
            /* direct tailcall eliminated */
#line 398 "list.opt"
            {
#line 398 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_11_10;
#line 398 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_15_13;

#line 398 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 398 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 398 "list.opt"
            }
#line 398 "list.opt"
            continue;
#line 396 "list.opt"
          }
#line 394 "list.opt"
      }
#line 394 "list.opt"
      break;
#line 394 "list.opt"
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
#line 410 "list.opt"
  while (MR_TRUE)
#line 410 "list.opt"
    {
#line 410 "list.opt"
      /* tailcall optimized into a loop */
#line 410 "list.opt"
      {
#line 410 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 410 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "list.opt"
          {
#line 410 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 410 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 410 "list.opt"
          }
#line 410 "list.opt"
        else
#line 413 "list.opt"
          {
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_23_19;
#line 413 "list.opt"
            MR_Box mercury__term_to_xml__V_24_20;

#line 1133 "term_to_xml.m"
            {
#line 1133 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 0, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
#line 415 "list.opt"
            /* direct tailcall eliminated */
#line 415 "list.opt"
            {
#line 415 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_16_14;
#line 415 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_23_19;
#line 415 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__V_24_20;

#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 415 "list.opt"
            }
#line 415 "list.opt"
            continue;
#line 413 "list.opt"
          }
#line 410 "list.opt"
      }
#line 410 "list.opt"
      break;
#line 410 "list.opt"
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
#line 410 "list.opt"
  while (MR_TRUE)
#line 410 "list.opt"
    {
#line 410 "list.opt"
      /* tailcall optimized into a loop */
#line 410 "list.opt"
      {
#line 410 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 410 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "list.opt"
          {
#line 410 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 410 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 410 "list.opt"
          }
#line 410 "list.opt"
        else
#line 413 "list.opt"
          {
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_23_19;
#line 413 "list.opt"
            MR_Box mercury__term_to_xml__V_24_20;

#line 1143 "term_to_xml.m"
            {
#line 1143 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 1, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
#line 415 "list.opt"
            /* direct tailcall eliminated */
#line 415 "list.opt"
            {
#line 415 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_16_14;
#line 415 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_23_19;
#line 415 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__V_24_20;

#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 415 "list.opt"
            }
#line 415 "list.opt"
            continue;
#line 413 "list.opt"
          }
#line 410 "list.opt"
      }
#line 410 "list.opt"
      break;
#line 410 "list.opt"
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
#line 410 "list.opt"
  while (MR_TRUE)
#line 410 "list.opt"
    {
#line 410 "list.opt"
      /* tailcall optimized into a loop */
#line 410 "list.opt"
      {
#line 410 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 410 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "list.opt"
          {
#line 410 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 410 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 410 "list.opt"
          }
#line 410 "list.opt"
        else
#line 413 "list.opt"
          {
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "list.opt"
            MR_Word mercury__term_to_xml__V_23_19;
#line 413 "list.opt"
            MR_Box mercury__term_to_xml__V_24_20;

#line 1153 "term_to_xml.m"
            {
#line 1153 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 2, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__V_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__V_24_20);
            }
#line 415 "list.opt"
            /* direct tailcall eliminated */
#line 415 "list.opt"
            {
#line 415 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_16_14;
#line 415 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_23_19;
#line 415 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__V_24_20;

#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 415 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 415 "list.opt"
            }
#line 415 "list.opt"
            continue;
#line 413 "list.opt"
          }
#line 410 "list.opt"
      }
#line 410 "list.opt"
      break;
#line 410 "list.opt"
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
#line 394 "list.opt"
  while (MR_TRUE)
#line 394 "list.opt"
    {
#line 394 "list.opt"
      /* tailcall optimized into a loop */
#line 394 "list.opt"
      {
#line 394 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 394 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 394 "list.opt"
        else
#line 396 "list.opt"
          {
#line 396 "list.opt"
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "list.opt"
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "list.opt"
            MR_Box mercury__term_to_xml__V_15_13;

#line 397 "list.opt"
            {
#line 397 "list.opt"
              mercury__term_to_xml__write_attribute_4_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
#line 398 "list.opt"
            /* direct tailcall eliminated */
#line 398 "list.opt"
            {
#line 398 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_11_10;
#line 398 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_15_13;

#line 398 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 398 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 398 "list.opt"
            }
#line 398 "list.opt"
            continue;
#line 396 "list.opt"
          }
#line 394 "list.opt"
      }
#line 394 "list.opt"
      break;
#line 394 "list.opt"
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
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 184 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__V_6_6);
        }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 184 "list.opt"
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
#line 675 "list.opt"
  while (MR_TRUE)
#line 675 "list.opt"
    {
#line 675 "list.opt"
      /* tailcall optimized into a loop */
#line 675 "list.opt"
      {
#line 675 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 675 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 675 "list.opt"
        else
#line 676 "list.opt"
          {
#line 676 "list.opt"
            MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 676 "list.opt"
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1407 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_42_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1407 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_43_53 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 51 "map.opt"
            MR_Word mercury__term_to_xml__V_5_61;
#line 51 "map.opt"
            MR_Box mercury__term_to_xml__conv0_V_5_61;

#line 51 "map.opt"
            {
#line 51 "map.opt"
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_42_52, mercury__term_to_xml__TypeCtorInfo_43_53, mercury__term_to_xml__V_12_12, ((MR_Box) (mercury__term_to_xml__V_6_6)), &mercury__term_to_xml__conv0_V_5_61);
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
#line 682 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 680 "list.opt"
              {
#line 680 "list.opt"
                MR_Word mercury__term_to_xml__V_9_9;

#line 680 "list.opt"
                {
#line 680 "list.opt"
                  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_7_7, &mercury__term_to_xml__V_9_9);
                }
#line 681 "list.opt"
                {
#line 681 "list.opt"
                  MR_Word base;
#line 681 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 681 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 681 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 681 "list.opt"
                }
#line 680 "list.opt"
              }
#line 682 "list.opt"
            else
#line 683 "list.opt"
              {
#line 683 "list.opt"
                /* direct tailcall eliminated */
#line 683 "list.opt"
                {
#line 683 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_7_7;

#line 683 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 683 "list.opt"
                }
#line 683 "list.opt"
                continue;
#line 683 "list.opt"
              }
#line 676 "list.opt"
          }
#line 675 "list.opt"
      }
#line 675 "list.opt"
      break;
#line 675 "list.opt"
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
#line 394 "list.opt"
  while (MR_TRUE)
#line 394 "list.opt"
    {
#line 394 "list.opt"
      /* tailcall optimized into a loop */
#line 394 "list.opt"
      {
#line 394 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 394 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 394 "list.opt"
        else
#line 396 "list.opt"
          {
#line 396 "list.opt"
            MR_Word mercury__term_to_xml__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "list.opt"
            MR_Word mercury__term_to_xml__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "list.opt"
            MR_Box mercury__term_to_xml__V_15_13;

#line 397 "list.opt"
            {
#line 397 "list.opt"
              mercury__term_to_xml__write_dtd_attlist_8_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_21_21, mercury__term_to_xml__V_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__V_15_13);
            }
#line 398 "list.opt"
            /* direct tailcall eliminated */
#line 398 "list.opt"
            {
#line 398 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_11_10;
#line 398 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_15_13;

#line 398 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 398 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 398 "list.opt"
            }
#line 398 "list.opt"
            continue;
#line 396 "list.opt"
          }
#line 394 "list.opt"
      }
#line 394 "list.opt"
      break;
#line 394 "list.opt"
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
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 184 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_String mercury__term_to_xml__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_6_6);
        }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 184 "list.opt"
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
#line 944 "string.opt"
  while (MR_TRUE)
#line 944 "string.opt"
    {
#line 944 "string.opt"
      /* tailcall optimized into a loop */
#line 944 "string.opt"
      {
#line 944 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_9_9 < mercury__term_to_xml__V_10_10);
#line 944 "string.opt"
        MR_Integer mercury__term_to_xml__V_12_13;
#line 944 "string.opt"
        MR_Char mercury__term_to_xml__V_13_14;

#line 938 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 938 "string.opt"
          {
#line 174 "string.opt"
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
#line 174 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 5209 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_12_13  = NextIndex;
	 mercury__term_to_xml__V_13_14  = Ch;
#line 174 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 938 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 940 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_12_13 <= mercury__term_to_xml__V_10_10);
#line 938 "string.opt"
          }
#line 944 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 942 "string.opt"
          {
#line 942 "string.opt"
            MR_Word mercury__term_to_xml__V_16_15;

#line 942 "string.opt"
            {
#line 942 "string.opt"
              mercury__term_to_xml__mangle_char_3_p_0(mercury__term_to_xml__V_13_14, mercury__term_to_xml__V_14_11, &mercury__term_to_xml__V_16_15);
            }
#line 943 "string.opt"
            /* direct tailcall eliminated */
#line 943 "string.opt"
            {
#line 943 "string.opt"
              MR_Integer mercury__term_to_xml__V_9__tmp_copy_9 = mercury__term_to_xml__V_12_13;
#line 943 "string.opt"
              MR_Word mercury__term_to_xml__V_14__tmp_copy_11 = mercury__term_to_xml__V_16_15;

#line 943 "string.opt"
              mercury__term_to_xml__V_14_11 = mercury__term_to_xml__V_14__tmp_copy_11;
#line 943 "string.opt"
              mercury__term_to_xml__V_9_9 = mercury__term_to_xml__V_9__tmp_copy_9;
#line 943 "string.opt"
            }
#line 943 "string.opt"
            continue;
#line 942 "string.opt"
          }
#line 944 "string.opt"
        else
#line 945 "string.opt"
          *mercury__term_to_xml__V_15_12 = mercury__term_to_xml__V_14_11;
#line 944 "string.opt"
      }
#line 944 "string.opt"
      break;
#line 944 "string.opt"
    }
#line 461 "string.int0"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
#line 310 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 310 "list.int"
{
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 184 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 186 "list.opt"
        {
#line 186 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(mercury__term_to_xml__V_6_6);
        }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 184 "list.opt"
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
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 184 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 825 "term_to_xml.m"
        {
#line 825 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 825 "term_to_xml.m"
        }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 184 "list.opt"
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
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 184 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_Integer mercury__term_to_xml__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 826 "term_to_xml.m"
        {
#line 826 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 826 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 826 "term_to_xml.m"
        }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 184 "list.opt"
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
#line 216 "list.opt"
  {
#line 216 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 216 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__4_4;

#line 216 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "list.opt"
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "list.opt"
        mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 216 "list.opt"
      else
#line 217 "list.opt"
        {
#line 17 "require.opt"
          {
#line 17 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 217 "list.opt"
        }
#line 216 "list.opt"
    else
#line 216 "list.opt"
      {
#line 216 "list.opt"
        MR_Word mercury__term_to_xml__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "list.opt"
        MR_String mercury__term_to_xml__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 216 "list.opt"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "list.opt"
          {
#line 17 "require.opt"
            {
#line 17 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 222 "list.opt"
          }
#line 216 "list.opt"
        else
#line 227 "list.opt"
          {
#line 227 "list.opt"
            MR_Integer mercury__term_to_xml__V_21_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 227 "list.opt"
            MR_Word mercury__term_to_xml__V_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 227 "list.opt"
            MR_Word mercury__term_to_xml__V_23_25;
#line 227 "list.opt"
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
#line 229 "list.opt"
            {
#line 229 "list.opt"
              mercury__term_to_xml__V_24_26 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__V_34_34, mercury__term_to_xml__V_22_24);
            }
#line 227 "list.opt"
            {
#line 227 "list.opt"
              mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 0) = ((MR_Box) (mercury__term_to_xml__V_23_25));
#line 227 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 1) = ((MR_Box) (mercury__term_to_xml__V_24_26));
#line 227 "list.opt"
            }
#line 227 "list.opt"
          }
#line 216 "list.opt"
      }
#line 216 "list.opt"
    return mercury__term_to_xml__HeadVar__4_4;
#line 216 "list.opt"
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
#line 710 "list.opt"
  while (MR_TRUE)
#line 710 "list.opt"
    {
#line 710 "list.opt"
      /* tailcall optimized into a loop */
#line 710 "list.opt"
      {
#line 710 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 710 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "list.opt"
        else
#line 711 "list.opt"
          {
#line 711 "list.opt"
            MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 711 "list.opt"
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 717 "list.opt"
            MR_Word mercury__term_to_xml__V_9_9;

#line 1290 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 1290 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1290 "term_to_xml.m"
              {
#line 1290 "term_to_xml.m"
                mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_6_6, (MR_Integer) 0)));
#line 715 "list.opt"
                {
#line 715 "list.opt"
                  MR_Word mercury__term_to_xml__V_10_10;

#line 715 "list.opt"
                  {
#line 715 "list.opt"
                    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__V_7_7, &mercury__term_to_xml__V_10_10);
                  }
#line 716 "list.opt"
                  {
#line 716 "list.opt"
                    MR_Word base;
#line 716 "list.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "list.opt"
                    *mercury__term_to_xml__HeadVar__3_3 = base;
#line 716 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 716 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_10_10));
#line 716 "list.opt"
                  }
#line 715 "list.opt"
                }
#line 1290 "term_to_xml.m"
              }
#line 1290 "term_to_xml.m"
            else
#line 718 "list.opt"
              {
#line 718 "list.opt"
                /* direct tailcall eliminated */
#line 718 "list.opt"
                {
#line 718 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__V_7_7;

#line 718 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 718 "list.opt"
                }
#line 718 "list.opt"
                continue;
#line 718 "list.opt"
              }
#line 711 "list.opt"
          }
#line 710 "list.opt"
      }
#line 710 "list.opt"
      break;
#line 710 "list.opt"
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
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 184 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 1537 "term_to_xml.m"
        {
#line 1537 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__V_6_6);
        }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 184 "list.opt"
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
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 184 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 193 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__map__ho3_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__V_6_6 ;
		{
#line 193 "construct.opt"

    SUCCESS_INDICATOR = (S == NULL);

#line 5763 "term_to_xml.c"

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
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__V_6_6));
#line 191 "construct.opt"
          }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 184 "list.opt"
  }
#line 310 "list.int"
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
#line 5882 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_117_117 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5937 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_138  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_138 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                    mercury__term_to_xml__V_10_10 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_138 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                        mercury__term_to_xml__V_10_10 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        mercury__term_to_xml__V_10_10 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 5966 "term_to_xml.c"
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
#line 5988 "term_to_xml.c"
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
#line 6020 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 2:
#line 6026 "term_to_xml.c"
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
#line 6039 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6045 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6051 "term_to_xml.c"
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
#line 6079 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_114_114 ;
	S2 =  mercury__term_to_xml__V_37_37 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6107 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_133  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_133 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_133 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 75 "term_to_xml.m"
                }
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 2:
#line 6142 "term_to_xml.c"
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
#line 6155 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6161 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6167 "term_to_xml.c"
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
#line 6195 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                break;
#line 75 "term_to_xml.m"
              case (MR_Integer) 1:
#line 6201 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_112_112 ;
	S2 =  mercury__term_to_xml__V_53_53 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6229 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_123  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_123 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_123 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
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
#line 6271 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6277 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6283 "term_to_xml.c"
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
#line 6318 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6324 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6330 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_113_113 ;
	S2 =  mercury__term_to_xml__V_69_69 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6365 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_128  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_128 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            {
#line 75 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_128 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                              else
#line 79 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                            }
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 1:
#line 6400 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 2:
#line 6406 "term_to_xml.c"
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
#line 6434 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6440 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6446 "term_to_xml.c"
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
#line 6459 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_118_118 ;
	S2 =  mercury__term_to_xml__V_85_85 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6487 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_143  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_143 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            {
#line 75 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_143 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                              else
#line 79 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                            }
#line 75 "term_to_xml.m"
                        }
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 2:
#line 6522 "term_to_xml.c"
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
#line 6550 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 6556 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                    break;
#line 75 "term_to_xml.m"
                  case (MR_Integer) 2:
#line 6562 "term_to_xml.c"
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
#line 6575 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "term_to_xml.m"
                        break;
#line 75 "term_to_xml.m"
                      case (MR_Integer) 1:
#line 6581 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_119_119 ;
	S2 =  mercury__term_to_xml__V_101_101 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6609 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_148  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_148 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            {
#line 75 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_148 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                              else
#line 79 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
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
#line 6727 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_6_6) == 0);
#line 75 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                  {
#line 6733 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_21_21 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];
#line 6735 "term_to_xml.c"
                    {
#line 6737 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_21_21, ((MR_Box) (mercury__term_to_xml__V_4_4)), ((MR_Box) (mercury__term_to_xml__V_7_7)));
                    }
#line 75 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 75 "term_to_xml.m"
                      {
#line 6744 "term_to_xml.c"
                        mercury__term_to_xml__TypeInfo_22_22 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];
#line 6746 "term_to_xml.c"
                        {
#line 6748 "term_to_xml.c"
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
#line 6778 "term_to_xml.c"
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
#line 6803 "term_to_xml.c"
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
#line 6835 "term_to_xml.c"
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
#line 6860 "term_to_xml.c"
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
#line 6885 "term_to_xml.c"
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
#line 6930 "term_to_xml.c"
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
#line 6942 "term_to_xml.c"
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
#line 6955 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6985 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_22  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              {
#line 75 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                else
#line 79 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
              }
#line 7014 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_17_17 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7044 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_27  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_27 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  {
#line 75 "private_builtin.opt"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_27 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                    if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                    else
#line 79 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
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
#line 7146 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 151 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 7150 "term_to_xml.c"
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
#line 7187 "term_to_xml.c"
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
#line 7199 "term_to_xml.c"
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
#line 7212 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_functor_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7242 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_22  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              {
#line 75 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_22 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                else
#line 79 "private_builtin.opt"
                  mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
              }
#line 7271 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 269 "term_to_xml.m"
            mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 269 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 269 "term_to_xml.m"
              *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 269 "term_to_xml.m"
            else
#line 37 "private_builtin.opt"
              {
#line 34 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 < mercury__term_to_xml__V_7_7);
#line 37 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 36 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                else
#line 42 "private_builtin.opt"
                  {
#line 39 "private_builtin.opt"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 == mercury__term_to_xml__V_7_7);
#line 42 "private_builtin.opt"
                    if (mercury__term_to_xml__succeeded)
#line 41 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                    else
#line 43 "private_builtin.opt"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                  }
#line 37 "private_builtin.opt"
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
#line 7378 "term_to_xml.c"
            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 269 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 7382 "term_to_xml.c"
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

#line 34 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 37 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 36 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
    else
#line 42 "private_builtin.opt"
      {
#line 39 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 42 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 41 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
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
#line 7451 "term_to_xml.c"
  {
#line 7453 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 7456 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 7458 "term_to_xml.c"
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
#line 7487 "term_to_xml.c"
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
#line 7535 "term_to_xml.c"
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
#line 7575 "term_to_xml.c"
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
#line 7608 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 133 "term_to_xml.m"
                    break;
#line 133 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 7614 "term_to_xml.c"
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
#line 7742 "term_to_xml.c"
                {
#line 7744 "term_to_xml.c"
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
#line 7850 "term_to_xml.c"
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
#line 7898 "term_to_xml.c"
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
#line 7938 "term_to_xml.c"
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
#line 7971 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 241 "term_to_xml.m"
                    break;
#line 241 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 7977 "term_to_xml.c"
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
#line 8107 "term_to_xml.c"
                {
#line 8109 "term_to_xml.c"
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
#line 8151 "term_to_xml.c"
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
#line 8199 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 2:
#line 8205 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 3:
#line 8211 "term_to_xml.c"
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
#line 8251 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 2:
#line 8257 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                  break;
#line 332 "term_to_xml.m"
                case (MR_Integer) 3:
#line 8263 "term_to_xml.c"
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
#line 8298 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8304 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____dtd_generation_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_52_52 ;
	S2 =  mercury__term_to_xml__V_18_18 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8340 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_58  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_58 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                    mercury__term_to_xml__V_20_20 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_58 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                        mercury__term_to_xml__V_20_20 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        mercury__term_to_xml__V_20_20 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 8369 "term_to_xml.c"
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
#line 8399 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 3:
#line 8405 "term_to_xml.c"
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
#line 8436 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8442 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8452 "term_to_xml.c"
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
#line 8476 "term_to_xml.c"
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
#line 8507 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                  case (MR_Integer) 1:
#line 8513 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                    break;
#line 332 "term_to_xml.m"
                }
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8523 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "term_to_xml.m"
                break;
#line 332 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8529 "term_to_xml.c"
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
#line 8661 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_7_7, mercury__term_to_xml__V_9_9) == 0);
#line 332 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 332 "term_to_xml.m"
                  {
#line 8667 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_17_17 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 8669 "term_to_xml.c"
                    {
#line 8671 "term_to_xml.c"
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
#line 8699 "term_to_xml.c"
                {
#line 8701 "term_to_xml.c"
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
#line 8727 "term_to_xml.c"
                {
#line 8729 "term_to_xml.c"
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
#line 8771 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_35_35 ;
	S2 =  mercury__term_to_xml__V_5_5 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8816 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_42  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_42 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_42 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 125 "term_to_xml.m"
                }
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 1:
#line 8851 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 2:
#line 8857 "term_to_xml.c"
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
#line 8883 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_37_37 ;
	S2 =  mercury__term_to_xml__V_16_16 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8915 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_47  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_47 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                    mercury__term_to_xml__V_18_18 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_47 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 8944 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_36_36 ;
	S2 =  mercury__term_to_xml__V_17_17 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8974 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_52  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_52 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                      else
#line 78 "private_builtin.opt"
                        {
#line 75 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_52 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                          else
#line 79 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                        }
#line 125 "term_to_xml.m"
                    }
#line 125 "term_to_xml.m"
                }
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 2:
#line 9011 "term_to_xml.c"
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
#line 9035 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 125 "term_to_xml.m"
                break;
#line 125 "term_to_xml.m"
              case (MR_Integer) 1:
#line 9041 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_38_38 ;
	S2 =  mercury__term_to_xml__V_28_28 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9069 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_57  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_57 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_57 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
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
#line 9163 "term_to_xml.c"
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
#line 9194 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_5_5, mercury__term_to_xml__V_7_7) == 0);
#line 125 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 9198 "term_to_xml.c"
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
#line 9223 "term_to_xml.c"
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

#line 34 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 37 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 36 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
    else
#line 42 "private_builtin.opt"
      {
#line 39 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 42 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 41 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
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
#line 9296 "term_to_xml.c"
  {
#line 9298 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 9301 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 9303 "term_to_xml.c"
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
#line 9332 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_from_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9366 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_18  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_18 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          {
#line 75 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_18 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
          }
#line 9395 "term_to_xml.c"
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

#line 34 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 < mercury__term_to_xml__V_14_14);
#line 37 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 36 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
            else
#line 42 "private_builtin.opt"
              {
#line 39 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 == mercury__term_to_xml__V_14_14);
#line 42 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 41 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                else
#line 43 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
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

#line 9480 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 284 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9484 "term_to_xml.c"
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
#line 9519 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9553 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_16  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_16 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          {
#line 75 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_16 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
          }
#line 9582 "term_to_xml.c"
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

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_5_5 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9612 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_7_21  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_21 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 72 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              {
#line 75 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_7_21 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 77 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                else
#line 79 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
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

#line 9687 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 119 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9691 "term_to_xml.c"
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
#line 9744 "term_to_xml.c"
    mercury__term_to_xml__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 91 "list.opt"
    {
#line 91 "list.opt"
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

#line 390 "string.opt"
        {
#line 390 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__ElementsStr_12, (MR_String) ")", &mercury__term_to_xml__V_17_17);
        }
#line 390 "string.opt"
        {
#line 390 "string.opt"
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
#line 9877 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9879 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9881 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1570 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_39_39;
#line 9885 "term_to_xml.c"
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
#line 9900 "term_to_xml.c"
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
#line 9914 "term_to_xml.c"
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
#line 9928 "term_to_xml.c"
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
#line 9942 "term_to_xml.c"
            mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9944 "term_to_xml.c"
            {
#line 9946 "term_to_xml.c"
              mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!ELEMENT ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
            }
#line 9949 "term_to_xml.c"
            mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9951 "term_to_xml.c"
            {
#line 9953 "term_to_xml.c"
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__Element_24)), mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_53_53);
            }
#line 9956 "term_to_xml.c"
            mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9958 "term_to_xml.c"
            {
#line 9960 "term_to_xml.c"
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
#line 9972 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9975 "term_to_xml.c"
                {
#line 9977 "term_to_xml.c"
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
#line 9988 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9991 "term_to_xml.c"
                {
#line 9993 "term_to_xml.c"
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
#line 10024 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1613 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_48_48;
#line 10028 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1581 "term_to_xml.m"
                if ((mercury__term_to_xml__Tail_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1585 "term_to_xml.m"
                  {
#line 1583 "term_to_xml.m"
                    MR_Integer mercury__term_to_xml__V_58_58;
#line 1583 "term_to_xml.m"
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
#line 10057 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_58_58  = Functors;
#line 38 "construct.opt"
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
#line 10100 "term_to_xml.c"
                    void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10103 "term_to_xml.c"
                    {
#line 10105 "term_to_xml.c"
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
#line 10129 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10132 "term_to_xml.c"
                      {
#line 10134 "term_to_xml.c"
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
#line 10153 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10155 "term_to_xml.c"
                {
#line 10157 "term_to_xml.c"
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
#line 10175 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10178 "term_to_xml.c"
                      {
#line 10180 "term_to_xml.c"
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
#line 10198 "term_to_xml.c"
                    void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10201 "term_to_xml.c"
                    {
#line 10203 "term_to_xml.c"
                      mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "*)")), mercury__term_to_xml__STATE_VARIABLE_State_68_68, &mercury__term_to_xml__STATE_VARIABLE_State_70_70);
                    }
#line 1614 "term_to_xml.m"
                  }
#line 1615 "term_to_xml.m"
                else
#line 1615 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_70_70 = mercury__term_to_xml__STATE_VARIABLE_State_68_68;
#line 10212 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10214 "term_to_xml.c"
                {
#line 10216 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_70_70, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1577 "term_to_xml.m"
              }
#line 1622 "term_to_xml.m"
            {
#line 1622 "term_to_xml.m"
              mercury__term_to_xml__write_dtd_attlists_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_79, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Element_24, mercury__term_to_xml__AttributeList_37, mercury__term_to_xml__MaybeFunctor_31, mercury__term_to_xml__MaybeArity_33, mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_75_75);
            }
#line 10226 "term_to_xml.c"
            mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10228 "term_to_xml.c"
            {
#line 10230 "term_to_xml.c"
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
#line 10362 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10364 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10366 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10368 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10370 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10372 "term_to_xml.c"
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

#line 689 "string.opt"
            {
#line 689 "string.opt"
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
#line 10450 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10452 "term_to_xml.c"
    {
#line 10454 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!ATTLIST ")), mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
    }
#line 10457 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10459 "term_to_xml.c"
    {
#line 10461 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_24_24, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
#line 10464 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10466 "term_to_xml.c"
    {
#line 10468 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 10471 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10473 "term_to_xml.c"
    {
#line 10475 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Name_14)), mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 10478 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10480 "term_to_xml.c"
    {
#line 10482 "term_to_xml.c"
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
#line 10496 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10499 "term_to_xml.c"
            {
#line 10501 "term_to_xml.c"
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
#line 10516 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10518 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10521 "term_to_xml.c"
            {
#line 10523 "term_to_xml.c"
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_57_91);
            }
#line 1479 "term_to_xml.m"
            {
#line 1479 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_86, mercury__term_to_xml__STATE_VARIABLE_State_57_91, &mercury__term_to_xml__STATE_VARIABLE_State_58_92);
            }
#line 10531 "term_to_xml.c"
            mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10533 "term_to_xml.c"
            {
#line 10535 "term_to_xml.c"
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
#line 10546 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10549 "term_to_xml.c"
          {
#line 10551 "term_to_xml.c"
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
#line 10564 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10567 "term_to_xml.c"
            {
#line 10569 "term_to_xml.c"
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
#line 10584 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10586 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10589 "term_to_xml.c"
            {
#line 10591 "term_to_xml.c"
              mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_18_52);
            }
#line 1465 "term_to_xml.m"
            {
#line 1465 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_47, mercury__term_to_xml__STATE_VARIABLE_State_18_52, &mercury__term_to_xml__STATE_VARIABLE_State_19_53);
            }
#line 10599 "term_to_xml.c"
            mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10601 "term_to_xml.c"
            {
#line 10603 "term_to_xml.c"
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
#line 10616 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10619 "term_to_xml.c"
            {
#line 10621 "term_to_xml.c"
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
#line 10636 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10638 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10641 "term_to_xml.c"
            {
#line 10643 "term_to_xml.c"
              mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_41_75);
            }
#line 1473 "term_to_xml.m"
            {
#line 1473 "term_to_xml.m"
              mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_70, mercury__term_to_xml__STATE_VARIABLE_State_41_75, &mercury__term_to_xml__STATE_VARIABLE_State_42_76);
            }
#line 10651 "term_to_xml.c"
            mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10653 "term_to_xml.c"
            {
#line 10655 "term_to_xml.c"
              mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_42_76, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
            }
#line 1471 "term_to_xml.m"
          }
#line 1461 "term_to_xml.m"
        break;
#line 1461 "term_to_xml.m"
    }
#line 10664 "term_to_xml.c"
    mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10666 "term_to_xml.c"
    {
#line 10668 "term_to_xml.c"
      mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 10670 "term_to_xml.c"
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
#line 10801 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10803 "term_to_xml.c"
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
#line 10816 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_38_67 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10818 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_9_73 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10820 "term_to_xml.c"
                mercury__term_to_xml__TypeInfo_10_74 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 164 "list.opt"
                {
#line 164 "list.opt"
                  mercury__list__reverse_2_p_0(mercury__term_to_xml__TypeInfo_10_74, mercury__term_to_xml__ArgTypeLists_49, &mercury__term_to_xml__V_5_70);
                }
#line 165 "list.opt"
                mercury__term_to_xml__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "list.opt"
                {
#line 166 "list.opt"
                  mercury__list__condense_acc_3_p_0(mercury__term_to_xml__TypeCtorInfo_38_67, mercury__term_to_xml__V_5_70, mercury__term_to_xml__V_6_71, &mercury__term_to_xml__ChildArgTypes_20);
                }
#line 10834 "term_to_xml.c"
                mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10836 "term_to_xml.c"
                {
#line 10838 "term_to_xml.c"
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
#line 10851 "term_to_xml.c"
                mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10853 "term_to_xml.c"
                {
#line 10855 "term_to_xml.c"
                  mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\" -->\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_25_55, &mercury__term_to_xml__STATE_VARIABLE_State_27_57);
                }
#line 1543 "term_to_xml.m"
                {
#line 1543 "term_to_xml.m"
                  mercury__term_to_xml__write_dtd_entries_10_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Elements_44, mercury__term_to_xml__MaybeFunctors_45, mercury__term_to_xml__MaybeArities_46, mercury__term_to_xml__ArgTypeLists_49, mercury__term_to_xml__AttributeLists_48, mercury__term_to_xml__STATE_VARIABLE_State_27_57, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
                }
#line 1450 "term_to_xml.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10865 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10867 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_33_33 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 129 "map.opt"
                {
#line 129 "map.opt"
                  mercury__tree234__set_4_p_0(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__TypeCtorInfo_33_33, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__AlreadyDone_4, &mercury__term_to_xml__NewAlreadyDone_21);
                }
#line 56 "list.opt"
                {
#line 56 "list.opt"
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

#line 36 "type_desc.opt"
            {
#line 36 "type_desc.opt"
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
#line 10987 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_16_16  = Functors;
#line 38 "construct.opt"
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
#line 123 "type_desc.opt"
                      MR_String mercury__term_to_xml__V_5_64;
#line 123 "type_desc.opt"
                      MR_Integer mercury__term_to_xml__V_6_65;
#line 123 "type_desc.opt"
                      MR_String mercury__term_to_xml__V_5_68;
#line 123 "type_desc.opt"
                      MR_Integer mercury__term_to_xml__V_6_69;

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_15 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 11051 "term_to_xml.c"

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
#line 11083 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_57  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_58  = ArgPseudoTypeInfos;
#line 69 "type_desc.opt"
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
#line 11155 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_5_64  = TypeCtorModuleName;
	 mercury__term_to_xml__V_60_60  = TypeCtorName;
	 mercury__term_to_xml__V_6_65  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1052 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_60_60, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                                  if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
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
#line 11211 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_61_61  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_68  = TypeCtorName;
	 mercury__term_to_xml__V_6_69  = TypeCtorArity;
#line 123 "type_desc.opt"
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
#line 11269 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_80_80  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 11322 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_81_81  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 11375 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_82_82  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 11428 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_83_83  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 11513 "term_to_xml.c"
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
#line 11558 "term_to_xml.c"
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
#line 11572 "term_to_xml.c"
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
#line 11798 "term_to_xml.c"
      {
#line 11800 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11803 "term_to_xml.c"
        {
#line 11805 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Str_8)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11807 "term_to_xml.c"
          return;
        }
#line 11810 "term_to_xml.c"
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
#line 11822 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 680 "string.opt"
        {
#line 680 "string.opt"
          mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_6));
#line 680 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 680 "string.opt"
        }
#line 682 "string.opt"
        {
#line 682 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_5_21);
        }
#line 11840 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11842 "term_to_xml.c"
        {
#line 11844 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__V_12_12)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11846 "term_to_xml.c"
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

#line 225 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 225 "string.opt"

    Length = strlen(Str);

#line 11895 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_8_22  = Length;
#line 225 "string.opt"
}
#line 225 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 225 "string.opt"

    Length = strlen(Str);

#line 11915 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_33  = Length;
#line 225 "string.opt"
}
#line 46 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_22 < mercury__term_to_xml__V_17_33);
#line 49 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 48 "int.opt"
      mercury__term_to_xml__V_13_32 = mercury__term_to_xml__V_8_22;
#line 49 "int.opt"
    else
#line 50 "int.opt"
      mercury__term_to_xml__V_13_32 = mercury__term_to_xml__V_17_33;
#line 596 "string.opt"
    {
#line 596 "string.opt"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(mercury__term_to_xml__TypeClassInfo_for_writer_12, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Str_6, (MR_Integer) 0, mercury__term_to_xml__V_13_32, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 596 "string.opt"
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
#line 11975 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11977 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11979 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11981 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 11984 "term_to_xml.c"
    {
#line 11986 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 11989 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11991 "term_to_xml.c"
    {
#line 11993 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Name_6)), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 11996 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11998 "term_to_xml.c"
    {
#line 12000 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "=\"")), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_15_15);
    }
#line 1299 "term_to_xml.m"
    {
#line 1299 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Value_7, mercury__term_to_xml__STATE_VARIABLE_State_15_15, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12008 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12010 "term_to_xml.c"
    {
#line 12012 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 12014 "term_to_xml.c"
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

#line 689 "string.opt"
            {
#line 689 "string.opt"
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
#line 12307 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12309 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12311 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12314 "term_to_xml.c"
    {
#line 12316 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_11_11);
    }
#line 12319 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12321 "term_to_xml.c"
    {
#line 12323 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Element_6)), mercury__term_to_xml__STATE_VARIABLE_State_11_11, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 12326 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12328 "term_to_xml.c"
    {
#line 12330 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 12332 "term_to_xml.c"
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
#line 12367 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12369 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12371 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12374 "term_to_xml.c"
    {
#line 12376 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 12379 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12381 "term_to_xml.c"
    {
#line 12383 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1230 "term_to_xml.m"
    {
#line 1230 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12391 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12393 "term_to_xml.c"
    {
#line 12395 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " />")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 12397 "term_to_xml.c"
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
#line 12440 "term_to_xml.c"
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
#line 12458 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12460 "term_to_xml.c"
    {
#line 12462 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12464 "term_to_xml.c"
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
#line 12499 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12501 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12503 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12506 "term_to_xml.c"
    {
#line 12508 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 12511 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12513 "term_to_xml.c"
    {
#line 12515 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1209 "term_to_xml.m"
    {
#line 1209 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12523 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12525 "term_to_xml.c"
    {
#line 12527 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 12529 "term_to_xml.c"
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
#line 12572 "term_to_xml.c"
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
#line 12590 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12592 "term_to_xml.c"
    {
#line 12594 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12596 "term_to_xml.c"
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
#line 12653 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12655 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12657 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12659 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12661 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12663 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12666 "term_to_xml.c"
    {
#line 12668 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_17, &mercury__term_to_xml__STATE_VARIABLE_State_20_20);
    }
#line 12671 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12673 "term_to_xml.c"
    {
#line 12675 "term_to_xml.c"
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
#line 12697 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12699 "term_to_xml.c"
    {
#line 12701 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 1185 "term_to_xml.m"
    {
#line 1185 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_12, mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 12709 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12711 "term_to_xml.c"
    {
#line 12713 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
#line 12716 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12718 "term_to_xml.c"
    {
#line 12720 "term_to_xml.c"
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
    }
#line 12723 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12725 "term_to_xml.c"
    {
#line 12727 "term_to_xml.c"
      mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_18);
#line 12729 "term_to_xml.c"
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
#line 12771 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12774 "term_to_xml.c"
            {
#line 12776 "term_to_xml.c"
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
#line 56 "construct.opt"
        MR_Word mercury__term_to_xml__V_12_12;

#line 1075 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1075 "term_to_xml.m"
          {
#line 1075 "term_to_xml.m"
            mercury__term_to_xml__FunctorNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1075 "term_to_xml.m"
            mercury__term_to_xml__FunctorNums_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "construct.opt"
            {
#line 56 "construct.opt"
              mercury__term_to_xml__succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(mercury__term_to_xml__TypeDesc_6, mercury__term_to_xml__FunctorNum_7, &mercury__term_to_xml__V_14_14, &mercury__term_to_xml__V_15_15, &mercury__term_to_xml__V_12_12, &mercury__term_to_xml__V_13_22);
            }
#line 1078 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1078 "term_to_xml.m"
              {
#line 57 "construct.opt"
                {
#line 57 "construct.opt"
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
#line 13292 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_9  = Functors;
#line 38 "construct.opt"
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

#line 889 "list.opt"
        {
#line 889 "list.opt"
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
#line 123 "type_desc.opt"
    MR_String mercury__term_to_xml__V_5_13;
#line 123 "type_desc.opt"
    MR_Integer mercury__term_to_xml__V_6_14;
#line 123 "type_desc.opt"
    MR_String mercury__term_to_xml__V_5_17;
#line 123 "type_desc.opt"
    MR_Integer mercury__term_to_xml__V_6_18;

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_3 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 13403 "term_to_xml.c"

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
#line 13435 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_6  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_7  = ArgPseudoTypeInfos;
#line 69 "type_desc.opt"
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
#line 13507 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_5_13  = TypeCtorModuleName;
	 mercury__term_to_xml__V_9_9  = TypeCtorName;
	 mercury__term_to_xml__V_6_14  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1052 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
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
#line 13563 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_10_10  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_17  = TypeCtorName;
	 mercury__term_to_xml__V_6_18  = TypeCtorArity;
#line 123 "type_desc.opt"
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
#line 13622 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_to_xml__NumFunctors_4  = Functors;
#line 38 "construct.opt"
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
#line 37 "type_desc.opt"
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
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
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
#line 13768 "term_to_xml.c"

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
#line 13792 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
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
#line 13934 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13936 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13938 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13940 "term_to_xml.c"
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
#line 13986 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13988 "term_to_xml.c"
        {
#line 13990 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 13993 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13995 "term_to_xml.c"
        {
#line 13997 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14000 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14002 "term_to_xml.c"
        {
#line 14004 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14007 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14009 "term_to_xml.c"
        {
#line 14011 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14013 "term_to_xml.c"
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
#line 37 "type_desc.opt"
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
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
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
#line 14142 "term_to_xml.c"

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
#line 14166 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
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
#line 14308 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14310 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14312 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14314 "term_to_xml.c"
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
#line 14360 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14362 "term_to_xml.c"
        {
#line 14364 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 14367 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14369 "term_to_xml.c"
        {
#line 14371 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14374 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14376 "term_to_xml.c"
        {
#line 14378 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14381 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14383 "term_to_xml.c"
        {
#line 14385 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14387 "term_to_xml.c"
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
#line 37 "type_desc.opt"
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
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
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
#line 14516 "term_to_xml.c"

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
#line 14540 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
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
#line 14682 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14684 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14686 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14688 "term_to_xml.c"
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
#line 14734 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14736 "term_to_xml.c"
        {
#line 14738 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 14741 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14743 "term_to_xml.c"
        {
#line 14745 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 14748 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14750 "term_to_xml.c"
        {
#line 14752 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 14755 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14757 "term_to_xml.c"
        {
#line 14759 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14761 "term_to_xml.c"
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
#line 37 "type_desc.opt"
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
#line 17 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 17 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 1005 "term_to_xml.m"
    {
#line 1005 "term_to_xml.m"
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
#line 14890 "term_to_xml.c"

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
#line 14914 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 38 "construct.opt"
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
#line 15056 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15058 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15060 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15062 "term_to_xml.c"
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
#line 15108 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15110 "term_to_xml.c"
        {
#line 15112 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
        }
#line 15115 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15117 "term_to_xml.c"
        {
#line 15119 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
        }
#line 15122 "term_to_xml.c"
        mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15124 "term_to_xml.c"
        {
#line 15126 "term_to_xml.c"
          mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
        }
#line 15129 "term_to_xml.c"
        mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15131 "term_to_xml.c"
        {
#line 15133 "term_to_xml.c"
          mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 15135 "term_to_xml.c"
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
#line 15225 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15228 "term_to_xml.c"
          {
#line 15230 "term_to_xml.c"
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_0_3, mercury__term_to_xml__STATE_VARIABLE_State_4);
#line 15232 "term_to_xml.c"
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
#line 15563 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 900 "term_to_xml.m"
                  mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
#line 15568 "term_to_xml.c"
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15570 "term_to_xml.c"
                  {
#line 15572 "term_to_xml.c"
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
#line 15639 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15641 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15643 "term_to_xml.c"
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
#line 15668 "term_to_xml.c"
          mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15670 "term_to_xml.c"
          {
#line 15672 "term_to_xml.c"
            mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<![CDATA[")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
#line 15675 "term_to_xml.c"
          mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15677 "term_to_xml.c"
          {
#line 15679 "term_to_xml.c"
            mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__CData_19)), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
#line 15682 "term_to_xml.c"
          mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15684 "term_to_xml.c"
          {
#line 15686 "term_to_xml.c"
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
#line 15698 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15701 "term_to_xml.c"
                {
#line 15703 "term_to_xml.c"
                  mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_46_46, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15705 "term_to_xml.c"
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
#line 15747 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15749 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 15751 "term_to_xml.c"
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
#line 15776 "term_to_xml.c"
              mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15778 "term_to_xml.c"
              {
#line 15780 "term_to_xml.c"
                mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!-- ")), mercury__term_to_xml__STATE_VARIABLE_State_32_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
              }
#line 924 "term_to_xml.m"
              {
#line 924 "term_to_xml.m"
                mercury__string__replace_all_4_p_0(mercury__term_to_xml__Comment_20, (MR_String) "--", (MR_String) " - ", &mercury__term_to_xml__EscapedComment_21);
              }
#line 15788 "term_to_xml.c"
              mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15790 "term_to_xml.c"
              {
#line 15792 "term_to_xml.c"
                mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__EscapedComment_21)), mercury__term_to_xml__STATE_VARIABLE_State_34_34, &mercury__term_to_xml__STATE_VARIABLE_State_37_37);
              }
#line 15795 "term_to_xml.c"
              mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15797 "term_to_xml.c"
              {
#line 15799 "term_to_xml.c"
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
#line 15823 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15825 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 15828 "term_to_xml.c"
              {
#line 15830 "term_to_xml.c"
                mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "&")), mercury__term_to_xml__STATE_VARIABLE_State_0_24, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
              }
#line 931 "term_to_xml.m"
              {
#line 931 "term_to_xml.m"
                mercury__term_to_xml__V_29_29 = mercury__string__f_43_43_2_f_0(mercury__term_to_xml__EntityName_22, (MR_String) ";");
              }
#line 15838 "term_to_xml.c"
              mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15840 "term_to_xml.c"
              {
#line 15842 "term_to_xml.c"
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__V_29_29)), mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15844 "term_to_xml.c"
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
#line 15857 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_62, (MR_Integer) 0)), (MR_Integer) 5)));

#line 15860 "term_to_xml.c"
              {
#line 15862 "term_to_xml.c"
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_62), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RawString_23)), mercury__term_to_xml__STATE_VARIABLE_State_0_24, mercury__term_to_xml__STATE_VARIABLE_State_25);
#line 15864 "term_to_xml.c"
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
#line 861 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 679 "string.opt"
          {
#line 679 "string.opt"
            MR_Word mercury__term_to_xml__V_5_21;
#line 679 "string.opt"
            MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 680 "string.opt"
            {
#line 680 "string.opt"
              mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Char_6));
#line 680 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 680 "string.opt"
            }
#line 682 "string.opt"
            {
#line 682 "string.opt"
              mercury__string__to_char_list_2_p_1(mercury__term_to_xml__PrimValue_4, mercury__term_to_xml__V_5_21);
            }
#line 679 "string.opt"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 679 "string.opt"
          }
#line 861 "term_to_xml.m"
        else
#line 863 "term_to_xml.m"
          {
#line 863 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Int_7;
#line 861 "term_to_xml.m"
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
#line 863 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 687 "string.opt"
              {
#line 689 "string.opt"
                {
#line 689 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Int_7, (MR_Integer) 10, mercury__term_to_xml__PrimValue_4);
                }
#line 687 "string.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 687 "string.opt"
              }
#line 863 "term_to_xml.m"
            else
#line 864 "term_to_xml.m"
              {
#line 864 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 864 "term_to_xml.m"
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
#line 864 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 864 "term_to_xml.m"
                  {
#line 701 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_to_xml__Float_8 ;
		{
#line 701 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 16067 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__term_to_xml__PrimValue_4  = Str;
#line 701 "string.opt"
}
#line 701 "string.opt"
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
#line 16136 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_15  = Functors;
#line 38 "construct.opt"
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

#line 889 "list.opt"
        {
#line 889 "list.opt"
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

#line 34 "char.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_to_xml__Chr_4 ;
		{
#line 34 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 16439 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_11_11  = Int;
#line 34 "char.opt"
}
#line 689 "string.opt"
        {
#line 689 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__V_11_11, (MR_Integer) 10, &mercury__term_to_xml__V_10_10);
        }
#line 122 "string.opt"
        {
#line 122 "string.opt"
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
#line 56 "list.opt"
    {
#line 56 "list.opt"
      mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_12_12, mercury__term_to_xml__PrevChrs_5, mercury__term_to_xml__Chrs_6, mercury__term_to_xml__HeadVar__3_3);
#line 56 "list.opt"
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
#line 243 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__Head_5 ;
		{
#line 243 "string.opt"

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

#line 16562 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 243 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 782 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 782 "term_to_xml.m"
      {
#line 533 "string.opt"
        {
#line 533 "string.opt"
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__Head_5, &mercury__term_to_xml__V_5_23);
        }
#line 534 "string.opt"
        {
#line 534 "string.opt"
          mercury__string__char_list_to_lower_2_p_0(mercury__term_to_xml__V_5_23, &mercury__term_to_xml__V_6_24);
        }
#line 535 "string.opt"
        {
#line 535 "string.opt"
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
#line 390 "string.opt"
        {
#line 390 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__Head_5, mercury__term_to_xml__Tail_6, &mercury__term_to_xml__Rest_8);
        }
#line 788 "term_to_xml.m"
      }
#line 791 "term_to_xml.m"
    mercury__term_to_xml__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 225 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 225 "string.opt"

    Length = strlen(Str);

#line 16632 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_8_36  = Length;
#line 225 "string.opt"
}
#line 225 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 225 "string.opt"

    Length = strlen(Str);

#line 16652 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_49  = Length;
#line 225 "string.opt"
}
#line 46 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_36 < mercury__term_to_xml__V_17_49);
#line 49 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 48 "int.opt"
      mercury__term_to_xml__V_13_48 = mercury__term_to_xml__V_8_36;
#line 49 "int.opt"
    else
#line 50 "int.opt"
      mercury__term_to_xml__V_13_48 = mercury__term_to_xml__V_17_49;
#line 596 "string.opt"
    {
#line 596 "string.opt"
      mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(mercury__term_to_xml__Rest_8, (MR_Integer) 0, mercury__term_to_xml__V_13_48, mercury__term_to_xml__V_12_12, &mercury__term_to_xml__ElementChrs_9);
    }
#line 124 "string.opt"
    {
#line 124 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__term_to_xml__ElementChrs_9, &mercury__term_to_xml__V_13_13);
    }
#line 390 "string.opt"
    {
#line 390 "string.opt"
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
#line 16737 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_13_13  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 16796 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_14_14  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 16855 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_15_15  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 16914 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_16_16  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 17156 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_50_50  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 17215 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_51_51  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 17274 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_52_52  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 17333 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_53_53  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 123 "type_desc.opt"
            MR_String mercury__term_to_xml__V_5_68;
#line 123 "type_desc.opt"
            MR_Integer mercury__term_to_xml__V_6_69;
#line 123 "type_desc.opt"
            MR_String mercury__term_to_xml__V_5_72;
#line 123 "type_desc.opt"
            MR_Integer mercury__term_to_xml__V_6_73;

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 17411 "term_to_xml.c"

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
#line 17443 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_61  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_62  = ArgPseudoTypeInfos;
#line 69 "type_desc.opt"
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
#line 17515 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_5_68  = TypeCtorModuleName;
	 mercury__term_to_xml__V_64_64  = TypeCtorName;
	 mercury__term_to_xml__V_6_69  = TypeCtorArity;
#line 123 "type_desc.opt"
}
#line 1052 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_64_64, (MR_String) "array") == 0);
#line 1048 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1048 "term_to_xml.m"
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
#line 17571 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_65_65  = TypeCtorModuleName;
	 mercury__term_to_xml__V_5_72  = TypeCtorName;
	 mercury__term_to_xml__V_6_73  = TypeCtorArity;
#line 123 "type_desc.opt"
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
#line 390 "string.opt"
                {
#line 390 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_25_25, &mercury__term_to_xml__V_23_23);
                }
#line 390 "string.opt"
                {
#line 390 "string.opt"
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
#line 689 "string.opt"
        {
#line 689 "string.opt"
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
#line 390 "string.opt"
        {
#line 390 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_34_34, &mercury__term_to_xml__V_32_32);
        }
#line 390 "string.opt"
        {
#line 390 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__V_31_31, mercury__term_to_xml__V_32_32, &mercury__term_to_xml__V_30_30);
        }
#line 390 "string.opt"
        {
#line 390 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_30_30, &mercury__term_to_xml__V_28_28);
        }
#line 390 "string.opt"
        {
#line 390 "string.opt"
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
#line 37 "type_desc.opt"
              MR_Box mercury__term_to_xml__V_34_34;
#line 18050 "term_to_xml.c"
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
#line 18079 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 551 "term_to_xml.m"
              {
#line 551 "term_to_xml.m"
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
#line 18091 "term_to_xml.c"
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18093 "term_to_xml.c"
              {
#line 18095 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
#line 18097 "term_to_xml.c"
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
#line 37 "type_desc.opt"
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
#line 18160 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18162 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18164 "term_to_xml.c"
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
#line 18234 "term_to_xml.c"

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
#line 18258 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_22_22  = Functors;
#line 38 "construct.opt"
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
#line 18305 "term_to_xml.c"
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18307 "term_to_xml.c"
          {
#line 18309 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
#line 18312 "term_to_xml.c"
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18314 "term_to_xml.c"
          {
#line 18316 "term_to_xml.c"
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
#line 18332 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18334 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18337 "term_to_xml.c"
                {
#line 18339 "term_to_xml.c"
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
#line 18342 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18344 "term_to_xml.c"
                {
#line 18346 "term_to_xml.c"
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
#line 18367 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18369 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18371 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18373 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18376 "term_to_xml.c"
                {
#line 18378 "term_to_xml.c"
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
#line 18381 "term_to_xml.c"
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18383 "term_to_xml.c"
                {
#line 18385 "term_to_xml.c"
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
#line 18388 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18390 "term_to_xml.c"
                {
#line 18392 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
#line 18395 "term_to_xml.c"
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18397 "term_to_xml.c"
                {
#line 18399 "term_to_xml.c"
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
#line 18414 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18416 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18419 "term_to_xml.c"
                {
#line 18421 "term_to_xml.c"
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
#line 18424 "term_to_xml.c"
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18426 "term_to_xml.c"
                {
#line 18428 "term_to_xml.c"
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 633 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
          }
#line 18437 "term_to_xml.c"
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18439 "term_to_xml.c"
          {
#line 18441 "term_to_xml.c"
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
#line 37 "type_desc.opt"
              MR_Box mercury__term_to_xml__V_34_34;
#line 18585 "term_to_xml.c"
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
#line 18614 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_43  = TypeInfo;
#line 37 "type_desc.opt"
}
#line 551 "term_to_xml.m"
              {
#line 551 "term_to_xml.m"
                mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__TypeDesc_43, mercury__term_to_xml__ElementMapping_12, mercury__term_to_xml__DTDResult_14, mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_29_29);
              }
#line 18626 "term_to_xml.c"
              mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18628 "term_to_xml.c"
              {
#line 18630 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_29_29, mercury__term_to_xml__STATE_VARIABLE_State_27);
#line 18632 "term_to_xml.c"
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
#line 37 "type_desc.opt"
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
#line 18695 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18697 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18699 "term_to_xml.c"
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
#line 18769 "term_to_xml.c"

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
#line 18793 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_22_22  = Functors;
#line 38 "construct.opt"
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
#line 18840 "term_to_xml.c"
          mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18842 "term_to_xml.c"
          {
#line 18844 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_26, &mercury__term_to_xml__STATE_VARIABLE_State_15_66);
          }
#line 18847 "term_to_xml.c"
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18849 "term_to_xml.c"
          {
#line 18851 "term_to_xml.c"
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
#line 18867 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18869 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18872 "term_to_xml.c"
                {
#line 18874 "term_to_xml.c"
                  mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_27_78);
                }
#line 18877 "term_to_xml.c"
                mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18879 "term_to_xml.c"
                {
#line 18881 "term_to_xml.c"
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
#line 18902 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18904 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18906 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 18908 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18911 "term_to_xml.c"
                {
#line 18913 "term_to_xml.c"
                  mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_21_72);
                }
#line 18916 "term_to_xml.c"
                mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18918 "term_to_xml.c"
                {
#line 18920 "term_to_xml.c"
                  mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__PUBLIC_82)), mercury__term_to_xml__STATE_VARIABLE_State_21_72, &mercury__term_to_xml__STATE_VARIABLE_State_22_73);
                }
#line 18923 "term_to_xml.c"
                mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18925 "term_to_xml.c"
                {
#line 18927 "term_to_xml.c"
                  mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_73, &mercury__term_to_xml__STATE_VARIABLE_State_24_75);
                }
#line 18930 "term_to_xml.c"
                mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18932 "term_to_xml.c"
                {
#line 18934 "term_to_xml.c"
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
#line 18949 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18951 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 18954 "term_to_xml.c"
                {
#line 18956 "term_to_xml.c"
                  mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_67, &mercury__term_to_xml__STATE_VARIABLE_State_18_69);
                }
#line 18959 "term_to_xml.c"
                mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18961 "term_to_xml.c"
                {
#line 18963 "term_to_xml.c"
                  mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__SYSTEM_83)), mercury__term_to_xml__STATE_VARIABLE_State_18_69, &mercury__term_to_xml__STATE_VARIABLE_State_28_79);
                }
#line 633 "term_to_xml.m"
              }
#line 626 "term_to_xml.m"
              break;
#line 626 "term_to_xml.m"
          }
#line 18972 "term_to_xml.c"
          mercury__term_to_xml__func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18974 "term_to_xml.c"
          {
#line 18976 "term_to_xml.c"
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
#line 19899 "term_to_xml.c"
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
#line 19924 "term_to_xml.c"
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
#line 19959 "term_to_xml.c"
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
#line 19980 "term_to_xml.c"
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
#line 20019 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20021 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20023 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20025 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1340 "term_to_xml.m"
                  {
#line 1340 "term_to_xml.m"
                    mercury__term_to_xml__ArgTypes_18 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__PseudoArgTypes_16);
                  }
#line 20033 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20035 "term_to_xml.c"
                  {
#line 20037 "term_to_xml.c"
                    mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_23, &mercury__term_to_xml__STATE_VARIABLE_State_35_35);
                  }
#line 20040 "term_to_xml.c"
                  mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20042 "term_to_xml.c"
                  {
#line 20044 "term_to_xml.c"
                    mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootElement_13)), mercury__term_to_xml__STATE_VARIABLE_State_35_35, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
                  }
#line 20047 "term_to_xml.c"
                  mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20049 "term_to_xml.c"
                  {
#line 20051 "term_to_xml.c"
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
#line 64 "tree234.opt"
                  mercury__term_to_xml__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1345 "term_to_xml.m"
                  {
#line 1345 "term_to_xml.m"
                    mercury__term_to_xml__write_dtd_types_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_47, mercury__term_to_xml__Stream_7, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_39_39, mercury__term_to_xml__V_40_40, mercury__term_to_xml__STATE_VARIABLE_State_38_38, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
                  }
#line 20071 "term_to_xml.c"
                  mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20073 "term_to_xml.c"
                  {
#line 20075 "term_to_xml.c"
                    mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_47), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n]>")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, mercury__term_to_xml__STATE_VARIABLE_State_24);
#line 20077 "term_to_xml.c"
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
#line 20186 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_12  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 20474 "term_to_xml.c"
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
#line 20499 "term_to_xml.c"
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
#line 20524 "term_to_xml.c"
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
#line 20549 "term_to_xml.c"
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
#line 20574 "term_to_xml.c"
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

#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_2_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 32 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 20625 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_13  = PseudoTypeDesc;
#line 32 "type_desc.opt"
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
#line 64 "tree234.opt"
        mercury__term_to_xml__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 64 "tree234.opt"
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
#line 20802 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 20908 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20910 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20912 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20914 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20916 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20919 "term_to_xml.c"
                  {
#line 20921 "term_to_xml.c"
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
#line 20924 "term_to_xml.c"
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20926 "term_to_xml.c"
                  {
#line 20928 "term_to_xml.c"
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
#line 20931 "term_to_xml.c"
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20933 "term_to_xml.c"
                  {
#line 20935 "term_to_xml.c"
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
#line 20938 "term_to_xml.c"
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20940 "term_to_xml.c"
                  {
#line 20942 "term_to_xml.c"
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
#line 20945 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20947 "term_to_xml.c"
                  {
#line 20949 "term_to_xml.c"
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
#line 21182 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 37 "type_desc.opt"
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
#line 21288 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21290 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21292 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21294 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21296 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21299 "term_to_xml.c"
                  {
#line 21301 "term_to_xml.c"
                    mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_13_50);
                  }
#line 21304 "term_to_xml.c"
                  mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21306 "term_to_xml.c"
                  {
#line 21308 "term_to_xml.c"
                    mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_13_50, &mercury__term_to_xml__STATE_VARIABLE_State_14_51);
                  }
#line 21311 "term_to_xml.c"
                  mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21313 "term_to_xml.c"
                  {
#line 21315 "term_to_xml.c"
                    mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_51, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
                  }
#line 21318 "term_to_xml.c"
                  mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21320 "term_to_xml.c"
                  {
#line 21322 "term_to_xml.c"
                    mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
                  }
#line 21325 "term_to_xml.c"
                  mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21327 "term_to_xml.c"
                  {
#line 21329 "term_to_xml.c"
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
#line 21447 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 21450 "term_to_xml.c"
    {
#line 21452 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "<\?xml version=\"1.0\"")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 560 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeEncoding_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "term_to_xml.m"
      {
#line 21459 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 21462 "term_to_xml.c"
        {
#line 21464 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 21466 "term_to_xml.c"
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
#line 21481 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21483 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21485 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21488 "term_to_xml.c"
        {
#line 21490 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " encoding=\"")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
        }
#line 21493 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21495 "term_to_xml.c"
        {
#line 21497 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Encoding_8)), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_17_17);
        }
#line 21500 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21502 "term_to_xml.c"
        {
#line 21504 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_17, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 21506 "term_to_xml.c"
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
#line 21545 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21547 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_Root_10;
#line 496 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_11_11;
#line 496 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;

#line 21554 "term_to_xml.c"
    {
#line 21556 "term_to_xml.c"
      mercury__term_to_xml__conv1_Root_10 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_18), mercury__term_to_xml__Term_8);
    }
#line 21559 "term_to_xml.c"
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
#line 21633 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box);
#line 21635 "term_to_xml.c"
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
#line 21665 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21667 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21669 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21671 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21673 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21676 "term_to_xml.c"
        {
#line 21678 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_13_36);
        }
#line 21681 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21683 "term_to_xml.c"
        {
#line 21685 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Type_33)), mercury__term_to_xml__STATE_VARIABLE_State_13_36, &mercury__term_to_xml__STATE_VARIABLE_State_14_37);
        }
#line 21688 "term_to_xml.c"
        mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21690 "term_to_xml.c"
        {
#line 21692 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_14_37, &mercury__term_to_xml__STATE_VARIABLE_State_16_39);
        }
#line 21695 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21697 "term_to_xml.c"
        {
#line 21699 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Href_34)), mercury__term_to_xml__STATE_VARIABLE_State_16_39, &mercury__term_to_xml__STATE_VARIABLE_State_17_40);
        }
#line 21702 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21704 "term_to_xml.c"
        {
#line 21706 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_40, &mercury__term_to_xml__STATE_VARIABLE_State_22_22);
        }
#line 572 "term_to_xml.m"
      }
#line 21711 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21713 "term_to_xml.c"
    {
#line 21715 "term_to_xml.c"
      mercury__term_to_xml__conv6_Root_12 = mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_26), mercury__term_to_xml__Term_8);
    }
#line 21718 "term_to_xml.c"
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
#line 21742 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21744 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21746 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21749 "term_to_xml.c"
        {
#line 21751 "term_to_xml.c"
          mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_22_22, &mercury__term_to_xml__STATE_VARIABLE_State_15_52);
        }
#line 21754 "term_to_xml.c"
        mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21756 "term_to_xml.c"
        {
#line 21758 "term_to_xml.c"
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
#line 21774 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21776 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21779 "term_to_xml.c"
              {
#line 21781 "term_to_xml.c"
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_27_64);
              }
#line 21784 "term_to_xml.c"
              mercury__term_to_xml__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21786 "term_to_xml.c"
              {
#line 21788 "term_to_xml.c"
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
#line 21809 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21811 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21813 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 21815 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21818 "term_to_xml.c"
              {
#line 21820 "term_to_xml.c"
                mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_21_58);
              }
#line 21823 "term_to_xml.c"
              mercury__term_to_xml__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21825 "term_to_xml.c"
              {
#line 21827 "term_to_xml.c"
                mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_68)), mercury__term_to_xml__STATE_VARIABLE_State_21_58, &mercury__term_to_xml__STATE_VARIABLE_State_22_59);
              }
#line 21830 "term_to_xml.c"
              mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21832 "term_to_xml.c"
              {
#line 21834 "term_to_xml.c"
                mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_59, &mercury__term_to_xml__STATE_VARIABLE_State_24_61);
              }
#line 21837 "term_to_xml.c"
              mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21839 "term_to_xml.c"
              {
#line 21841 "term_to_xml.c"
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
#line 21856 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21858 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21861 "term_to_xml.c"
              {
#line 21863 "term_to_xml.c"
                mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_18_55);
              }
#line 21866 "term_to_xml.c"
              mercury__term_to_xml__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21868 "term_to_xml.c"
              {
#line 21870 "term_to_xml.c"
                mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_69)), mercury__term_to_xml__STATE_VARIABLE_State_18_55, &mercury__term_to_xml__STATE_VARIABLE_State_28_65);
              }
#line 633 "term_to_xml.m"
            }
#line 626 "term_to_xml.m"
            break;
#line 626 "term_to_xml.m"
        }
#line 21879 "term_to_xml.c"
        mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21881 "term_to_xml.c"
        {
#line 21883 "term_to_xml.c"
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
#line 21960 "term_to_xml.c"
  {
#line 21962 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;
#line 21964 "term_to_xml.c"
    MR_Word mercury__term_to_xml__HeadVar__2_2;
#line 21966 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21968 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_HeadVar__2_2;

#line 21971 "term_to_xml.c"
    {
#line 21973 "term_to_xml.c"
      mercury__term_to_xml__conv1_HeadVar__2_2 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_3), mercury__term_to_xml__HeadVar__1_1);
    }
#line 21976 "term_to_xml.c"
    mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) mercury__term_to_xml__conv1_HeadVar__2_2);
#line 21978 "term_to_xml.c"
    return mercury__term_to_xml__HeadVar__2_2;
#line 21980 "term_to_xml.c"
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
