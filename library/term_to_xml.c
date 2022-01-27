/*
** Automatically generated from `term_to_xml.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 87 "term_to_xml.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0;

#line 90 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2];

#line 93 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0;

#line 96 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1];

#line 99 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1];

#line 102 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1];

#line 105 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1];

#line 108 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2];

#line 111 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2];

#line 114 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0;

#line 117 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1];

#line 120 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1];

#line 123 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1];

#line 126 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1];

#line 129 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0;

#line 132 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1;

#line 135 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2;

#line 138 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3;

#line 141 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4];

#line 144 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4];

#line 147 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4];

#line 150 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1];

#line 153 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0;

#line 156 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2];

#line 159 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1;

#line 162 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1];

#line 165 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2;

#line 168 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1];

#line 171 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1];

#line 174 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1];

#line 177 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0[3];

#line 180 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3];

#line 183 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3];

#line 186 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0;

#line 189 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1;

#line 192 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0;

#line 195 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2];

#line 198 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2];

#line 201 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2;

#line 204 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1];

#line 207 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3;

#line 210 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1];

#line 213 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4;

#line 216 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2];

#line 219 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1];

#line 222 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1];

#line 225 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1];

#line 228 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0[4];

#line 231 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5];

#line 234 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5];

#line 237 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0;

#line 240 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1;

#line 243 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0;

#line 246 "term_to_xml.c"
static const MR_VA_TypeInfo_Struct4 mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0;

#line 249 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1];

#line 252 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2;

#line 255 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2];

#line 258 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1];

#line 261 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0[2];

#line 264 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3];

#line 267 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3];

#line 270 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0;

#line 273 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1];

#line 276 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1;

#line 279 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2;

#line 282 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2];

#line 285 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1];

#line 288 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0[2];

#line 291 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3];

#line 294 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3];

#line 297 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0;

#line 300 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1;

#line 303 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2];

#line 306 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2];

#line 309 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2];

#line 312 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2];

#line 315 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2];

#line 318 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0;

#line 321 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1;

#line 324 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1];

#line 327 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1];

#line 330 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0[2];

#line 333 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2];

#line 336 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2];

#line 339 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2];

#line 342 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2];

#line 345 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0;

#line 348 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1;

#line 351 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1];

#line 354 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1];

#line 357 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0[2];

#line 360 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2];

#line 363 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2];

#line 366 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0;

#line 369 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0;

#line 372 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3];

#line 375 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3];

#line 378 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0;

#line 381 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1];

#line 384 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1;

#line 387 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1];

#line 390 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2;

#line 393 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1];

#line 396 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3;

#line 399 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1];

#line 402 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4;

#line 405 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1];

#line 408 "term_to_xml.c"
static const MR_DuFunctorDesc mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5;

#line 411 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1];

#line 414 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1];

#line 417 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1];

#line 420 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3];

#line 423 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0[4];

#line 426 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6];

#line 429 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6];

#line 432 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1];

#line 435 "term_to_xml.c"
static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1];

#line 438 "term_to_xml.c"
static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1;

#line 441 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
#line 444 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 446 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 449 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
#line 452 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 454 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 456 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 459 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
#line 462 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 464 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 467 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
#line 470 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 472 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 474 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 477 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
#line 480 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 482 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 485 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
#line 488 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 490 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 492 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 495 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
#line 498 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 500 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 503 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
#line 506 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 508 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 510 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 513 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
#line 516 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 518 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 521 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
#line 524 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 526 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 528 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 531 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
#line 534 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 536 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 539 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
#line 542 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 544 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 546 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 549 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
#line 552 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 554 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 557 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
#line 560 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 562 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 564 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 567 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
#line 570 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 572 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 575 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
#line 578 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 580 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 582 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 585 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
#line 588 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 590 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 593 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
#line 596 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 598 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 600 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 603 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
#line 606 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 608 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 611 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
#line 614 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 616 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 618 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 621 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
#line 624 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 626 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 629 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
#line 632 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 634 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 636 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 639 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
#line 642 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 644 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2);

#line 647 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
#line 650 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 652 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 654 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3);

#line 86 "string.opt"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
#line 86 "string.opt"
  MR_Word mercury__term_to_xml__V_17_17,
#line 86 "string.opt"
  MR_Box mercury__term_to_xml__V_18_18,
#line 86 "string.opt"
  MR_String mercury__term_to_xml__String_8_8,
#line 86 "string.opt"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 86 "string.opt"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 86 "string.opt"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 86 "string.opt"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12);

#line 326 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
#line 326 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 326 "list.int"
  MR_Word mercury__term_to_xml__V_17_17,
#line 326 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 326 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 326 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4);

#line 367 "list.int"
static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
#line 367 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 367 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 367 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 367 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 367 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__5_5);

#line 135 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_18_18,
#line 135 "list.int"
  MR_Integer mercury__term_to_xml__V_19_19,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 135 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 148 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 148 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 148 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 148 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 148 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 148 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 148 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 148 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 157 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 157 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 157 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 157 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 157 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 157 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 157 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 157 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 157 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 157 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6);

#line 135 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 135 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_13_13,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_14_14,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_15_15,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 101 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
#line 101 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 101 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 101 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 135 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 135 "list.int"
  MR_String mercury__term_to_xml__V_18_18,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_19_19,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_21_21,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 135 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 87 "string.opt"
static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
#line 87 "string.opt"
  MR_String mercury__term_to_xml__String_8_8,
#line 87 "string.opt"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 87 "string.opt"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 87 "string.opt"
  MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 87 "string.opt"
  MR_Word * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
#line 435 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3);

#line 107 "list.int"
static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
#line 107 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 107 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 1348 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
#line 1348 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
#line 1348 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1348 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2);

#line 1629 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
#line 1629 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_4,
#line 1629 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5);

#line 1537 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
#line 1537 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__4_4,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArityList_6,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttributeListList_8,
#line 1537 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1537 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

#line 1508 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1508 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1508 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_13,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1508 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1508 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17);

#line 1475 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1475 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1475 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_12,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_13,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__6_6,
#line 1475 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1475 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20);

#line 1429 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
#line 1429 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AlreadyDone_4,
#line 1429 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
#line 1429 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6);

#line 1371 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_1,
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Done_3,
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementsSoFar_4);

#line 1293 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
#line 1293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 1293 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1293 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_6,
#line 1293 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1293 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10);

#line 1287 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
#line 1287 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
#line 1287 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1287 "term_to_xml.m"
  MR_String mercury__term_to_xml__Str_6,
#line 1287 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1287 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9);

#line 1057 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
#line 1057 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_6,
#line 1057 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1057 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_9,
#line 1057 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_10,
#line 1057 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11);

#line 1031 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
#line 1031 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1031 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgPseudoType_4);

#line 950 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
#line 950 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
#line 950 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 950 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_7,
#line 950 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_8,
#line 950 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 950 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11);

#line 944 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
#line 944 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 944 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1,
#line 944 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 944 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
#line 944 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4);

#line 805 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
#line 805 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_8,
#line 805 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__Elements_10,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeArities_12,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttributeLists_14);

#line 785 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
#line 785 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_4,
#line 785 "term_to_xml.m"
  MR_Word mercury__term_to_xml__PrevChrs_5,
#line 785 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__3_3);

#line 768 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
#line 768 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_3);

#line 736 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
#line 736 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 736 "term_to_xml.m"
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

#line 693 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__all_attr_sources_0_f_0(void);

#line 671 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
#line 671 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_1,
#line 671 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 671 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_3,
#line 671 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__4_4);

#line 643 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
#line 643 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_1,
#line 643 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 643 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_3,
#line 643 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__4_4);

#line 618 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_external_doctype_5_p_0(
#line 618 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_33,
#line 618 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 618 "term_to_xml.m"
  MR_String mercury__term_to_xml__Root_7,
#line 618 "term_to_xml.m"
  MR_Word mercury__term_to_xml__DocType_8,
#line 618 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_12,
#line 618 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_13);

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

#line 597 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_47,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_46,
#line 597 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_2,
#line 597 "term_to_xml.m"
  MR_Box mercury__term_to_xml__T_3,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_4,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__5_5,
#line 597 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__6_6,
#line 597 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_7,
#line 597 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_8);

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

#line 593 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_47,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_46,
#line 593 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_2,
#line 593 "term_to_xml.m"
  MR_Box mercury__term_to_xml__T_3,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_4,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__5_5,
#line 593 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__6_6,
#line 593 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_7,
#line 593 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_8);

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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 2198 "term_to_xml.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_to_xml__list__pti_list_1__plain_term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2206 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2212 "term_to_xml.c"
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

#line 2227 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 2232 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_0_0
  }
};

#line 2241 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_0_0
};

#line 2246 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_0[1] = {
  (MR_Integer) 0
};

#line 2251 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_attr_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_0
};

#line 2272 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_attr_from_source_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0
};

#line 2278 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_attr_from_source_0_0[2] = {
  (MR_String) "attr_name",
  (MR_String) "attr_source"
};

#line 2284 "term_to_xml.c"
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

#line 2299 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 2304 "term_to_xml.c"
static const MR_DuPtagLayout mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_to_xml__term_to_xml__du_stag_ordered_attr_from_source_0_0
  }
};

#line 2313 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_attr_from_source_0_0
};

#line 2318 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0[1] = {
  (MR_Integer) 0
};

#line 2323 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_from_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_from_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_from_source",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_attr_from_source_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_attr_from_source_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_from_source_0
};

#line 2344 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0 = {
  (MR_String) "functor",
  (MR_Integer) 0
};

#line 2350 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1 = {
  (MR_String) "field_name",
  (MR_Integer) 1
};

#line 2356 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2 = {
  (MR_String) "type_name",
  (MR_Integer) 2
};

#line 2362 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3 = {
  (MR_String) "arity",
  (MR_Integer) 3
};

#line 2368 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3
};

#line 2376 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0[4] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_3,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_1,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_attr_source_0_2
};

#line 2384 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2392 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_attr_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____attr_source_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____attr_source_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "attr_source",
  {
    mercury__term_to_xml__term_to_xml__enum_name_ordered_attr_source_0
  },
  {
    mercury__term_to_xml__term_to_xml__enum_value_ordered_attr_source_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_attr_source_0
};

#line 2413 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2418 "term_to_xml.c"
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

#line 2433 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2439 "term_to_xml.c"
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

#line 2454 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_doctype_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2459 "term_to_xml.c"
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

#line 2474 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0
};

#line 2479 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1
};

#line 2484 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_doctype_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2489 "term_to_xml.c"
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

#line 2508 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_doctype_0_2
};

#line 2515 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2522 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____doctype_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____doctype_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "doctype",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_doctype_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_doctype_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_doctype_0
};

#line 2543 "term_to_xml.c"
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

#line 2558 "term_to_xml.c"
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

#line 2573 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 2581 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1type_desc__type_ctor_info_type_desc_0
};

#line 2587 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_dtd_generation_result_0_2[2] = {
  (MR_String) "duplicate_element",
  (MR_String) "duplicate_types"
};

#line 2593 "term_to_xml.c"
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

#line 2608 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
};

#line 2613 "term_to_xml.c"
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

#line 2628 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_dtd_generation_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0
};

#line 2633 "term_to_xml.c"
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

#line 2648 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1
};

#line 2654 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2
};

#line 2659 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2664 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_dtd_generation_result_0_3[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4
};

#line 2669 "term_to_xml.c"
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

#line 2693 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0[5] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_dtd_generation_result_0_3
};

#line 2702 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2711 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_dtd_generation_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "dtd_generation_result",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_dtd_generation_result_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_dtd_generation_result_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_dtd_generation_result_0
};

#line 2732 "term_to_xml.c"
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

#line 2747 "term_to_xml.c"
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

#line 2762 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_from_source_0
  }
};

#line 2770 "term_to_xml.c"
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

#line 2782 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_element_mapping_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
};

#line 2787 "term_to_xml.c"
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

#line 2802 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2808 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_element_mapping_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2
};

#line 2813 "term_to_xml.c"
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

#line 2827 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_element_mapping_0_1
};

#line 2834 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2841 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_element_mapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____element_mapping_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_mapping_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_mapping",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_element_mapping_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_element_mapping_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_element_mapping_0
};

#line 2862 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_element_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_to_xml____Unify____element_pred_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____element_pred_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "element_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml____vti_pred_4type_desc__type_ctor_info_type_desc_0term_to_xml__type_ctor_info_maybe_functor_info_0builtin__type_ctor_info_string_0list__ti_list_1term_to_xml__type_ctor_info_attr_from_source_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2883 "term_to_xml.c"
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

#line 2898 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_dtd_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_doctype_0
};

#line 2903 "term_to_xml.c"
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

#line 2918 "term_to_xml.c"
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

#line 2933 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2939 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_dtd_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1
};

#line 2944 "term_to_xml.c"
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

#line 2958 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_dtd_0_2
};

#line 2965 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2972 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_dtd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_dtd_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_dtd_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_dtd",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_dtd_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_dtd_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_dtd_0
};

#line 2993 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0 = {
  (MR_String) "format",
  (MR_Integer) 0
};

#line 2999 "term_to_xml.c"
static const MR_EnumFunctorDesc mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1 = {
  (MR_String) "no_format",
  (MR_Integer) 1
};

#line 3005 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 3011 "term_to_xml.c"
static const MR_EnumFunctorDescPtr mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0[2] = {
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_0,
  &mercury__term_to_xml__term_to_xml__enum_functor_desc_maybe_format_0_1
};

#line 3017 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3023 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_format_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_format_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_format",
  {
    mercury__term_to_xml__term_to_xml__enum_name_ordered_maybe_format_0
  },
  {
    mercury__term_to_xml__term_to_xml__enum_value_ordered_maybe_format_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_format_0
};

#line 3044 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_functor_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3050 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_functor_info_0_0[2] = {
  (MR_String) "functor_name",
  (MR_String) "functor_arity"
};

#line 3056 "term_to_xml.c"
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

#line 3071 "term_to_xml.c"
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

#line 3086 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 3091 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_functor_info_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0
};

#line 3096 "term_to_xml.c"
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

#line 3110 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_functor_info_0_1
};

#line 3116 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3122 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_functor_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_functor_info",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_functor_info_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_functor_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_functor_info_0
};

#line 3143 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_maybe_stylesheet_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3149 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_maybe_stylesheet_0_0[2] = {
  (MR_String) "stylesheet_type",
  (MR_String) "stylesheet_href"
};

#line 3155 "term_to_xml.c"
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

#line 3170 "term_to_xml.c"
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

#line 3185 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1
};

#line 3190 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_maybe_stylesheet_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 3195 "term_to_xml.c"
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

#line 3209 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0[2] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_maybe_stylesheet_0_0
};

#line 3215 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3221 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_maybe_stylesheet_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "maybe_stylesheet",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_maybe_stylesheet_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_maybe_stylesheet_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_maybe_stylesheet_0
};

#line 3242 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_attr_0
  }
};

#line 3250 "term_to_xml.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

#line 3258 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_attr_0,
  (MR_PseudoTypeInfo) &mercury__term_to_xml__list__ti_list_1term_to_xml__type_ctor_info_xml_0
};

#line 3265 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__field_names_xml_0_0[3] = {
  (MR_String) "element_name",
  (MR_String) "attributes",
  (MR_String) "children"
};

#line 3272 "term_to_xml.c"
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

#line 3287 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3292 "term_to_xml.c"
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

#line 3307 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3312 "term_to_xml.c"
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

#line 3327 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3332 "term_to_xml.c"
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

#line 3347 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3352 "term_to_xml.c"
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

#line 3367 "term_to_xml.c"
static const MR_PseudoTypeInfo mercury__term_to_xml__term_to_xml__field_types_xml_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3372 "term_to_xml.c"
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

#line 3387 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_0[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0
};

#line 3392 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_1[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1
};

#line 3397 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_2[1] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2
};

#line 3402 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_stag_ordered_xml_0_3[3] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3409 "term_to_xml.c"
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

#line 3433 "term_to_xml.c"
static const MR_DuFunctorDescPtr mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0[6] = {
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_2,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_3,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_1,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_0,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_4,
  &mercury__term_to_xml__term_to_xml__du_functor_desc_xml_0_5
};

#line 3443 "term_to_xml.c"
static const MR_Integer mercury__term_to_xml__term_to_xml__functor_number_map_xml_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 3453 "term_to_xml.c"
const MR_TypeCtorInfo_Struct mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_to_xml____Unify____xml_0_0_10001)),
  ((MR_Box) (mercury__term_to_xml____Compare____xml_0_0_10001)),
  (MR_String) "term_to_xml",
  (MR_String) "xml",
  {
    mercury__term_to_xml__term_to_xml__du_name_ordered_xml_0
  },
  {
    mercury__term_to_xml__term_to_xml__du_ptag_ordered_xml_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__term_to_xml__term_to_xml__functor_number_map_xml_0
};

#line 3474 "term_to_xml.c"
static const MR_ConstString mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1[1] = {
  (MR_String) "T"
};

#line 3479 "term_to_xml.c"
static const MR_TypeClassMethod mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1[1] = {
  {
    (MR_String) "to_xml",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 3488 "term_to_xml.c"
static const MR_TypeClassId mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1 = {
  (MR_String) "term_to_xml",
  (MR_String) "xmlable",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__term_to_xml__term_to_xml__type_class_id_var_names_xmlable_1,
  mercury__term_to_xml__term_to_xml__type_class_id_method_ids_xmlable_1
};

#line 3499 "term_to_xml.c"
const MR_TypeClassDeclStruct mercury__term_to_xml__term_to_xml__type_class_decl_xmlable_1 = {
  &mercury__term_to_xml__term_to_xml__type_class_id_xmlable_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3507 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0_10001(
#line 3510 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3512 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3514 "term_to_xml.c"
{
#line 3516 "term_to_xml.c"
  {
#line 3518 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3521 "term_to_xml.c"
    {
#line 3523 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3526 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3528 "term_to_xml.c"
  }
#line 3530 "term_to_xml.c"
}

#line 3533 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0_10001(
#line 3536 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3538 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3540 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3542 "term_to_xml.c"
{
#line 3544 "term_to_xml.c"
  {
#line 3546 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3549 "term_to_xml.c"
    {
#line 3551 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3554 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3556 "term_to_xml.c"
  }
#line 3558 "term_to_xml.c"
}

#line 3561 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0_10001(
#line 3564 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3566 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3568 "term_to_xml.c"
{
#line 3570 "term_to_xml.c"
  {
#line 3572 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3575 "term_to_xml.c"
    {
#line 3577 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_from_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3580 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3582 "term_to_xml.c"
  }
#line 3584 "term_to_xml.c"
}

#line 3587 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0_10001(
#line 3590 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3592 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3594 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3596 "term_to_xml.c"
{
#line 3598 "term_to_xml.c"
  {
#line 3600 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3603 "term_to_xml.c"
    {
#line 3605 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_from_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3608 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3610 "term_to_xml.c"
  }
#line 3612 "term_to_xml.c"
}

#line 3615 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0_10001(
#line 3618 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3620 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3622 "term_to_xml.c"
{
#line 3624 "term_to_xml.c"
  {
#line 3626 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3629 "term_to_xml.c"
    {
#line 3631 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____attr_source_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3634 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3636 "term_to_xml.c"
  }
#line 3638 "term_to_xml.c"
}

#line 3641 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0_10001(
#line 3644 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3646 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3648 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3650 "term_to_xml.c"
{
#line 3652 "term_to_xml.c"
  {
#line 3654 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3657 "term_to_xml.c"
    {
#line 3659 "term_to_xml.c"
      mercury__term_to_xml____Compare____attr_source_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3662 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3664 "term_to_xml.c"
  }
#line 3666 "term_to_xml.c"
}

#line 3669 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0_10001(
#line 3672 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3674 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3676 "term_to_xml.c"
{
#line 3678 "term_to_xml.c"
  {
#line 3680 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3683 "term_to_xml.c"
    {
#line 3685 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3688 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3690 "term_to_xml.c"
  }
#line 3692 "term_to_xml.c"
}

#line 3695 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0_10001(
#line 3698 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3700 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3702 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3704 "term_to_xml.c"
{
#line 3706 "term_to_xml.c"
  {
#line 3708 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3711 "term_to_xml.c"
    {
#line 3713 "term_to_xml.c"
      mercury__term_to_xml____Compare____doctype_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3716 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3718 "term_to_xml.c"
  }
#line 3720 "term_to_xml.c"
}

#line 3723 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0_10001(
#line 3726 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3728 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3730 "term_to_xml.c"
{
#line 3732 "term_to_xml.c"
  {
#line 3734 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3737 "term_to_xml.c"
    {
#line 3739 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____dtd_generation_result_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3742 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3744 "term_to_xml.c"
  }
#line 3746 "term_to_xml.c"
}

#line 3749 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0_10001(
#line 3752 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3754 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3756 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3758 "term_to_xml.c"
{
#line 3760 "term_to_xml.c"
  {
#line 3762 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3765 "term_to_xml.c"
    {
#line 3767 "term_to_xml.c"
      mercury__term_to_xml____Compare____dtd_generation_result_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3770 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3772 "term_to_xml.c"
  }
#line 3774 "term_to_xml.c"
}

#line 3777 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0_10001(
#line 3780 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3782 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3784 "term_to_xml.c"
{
#line 3786 "term_to_xml.c"
  {
#line 3788 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3791 "term_to_xml.c"
    {
#line 3793 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_mapping_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3796 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3798 "term_to_xml.c"
  }
#line 3800 "term_to_xml.c"
}

#line 3803 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0_10001(
#line 3806 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3808 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3810 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3812 "term_to_xml.c"
{
#line 3814 "term_to_xml.c"
  {
#line 3816 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3819 "term_to_xml.c"
    {
#line 3821 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_mapping_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3824 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3826 "term_to_xml.c"
  }
#line 3828 "term_to_xml.c"
}

#line 3831 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0_10001(
#line 3834 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3836 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3838 "term_to_xml.c"
{
#line 3840 "term_to_xml.c"
  {
#line 3842 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3845 "term_to_xml.c"
    {
#line 3847 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____element_pred_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3850 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3852 "term_to_xml.c"
  }
#line 3854 "term_to_xml.c"
}

#line 3857 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0_10001(
#line 3860 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3862 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3864 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3866 "term_to_xml.c"
{
#line 3868 "term_to_xml.c"
  {
#line 3870 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3873 "term_to_xml.c"
    {
#line 3875 "term_to_xml.c"
      mercury__term_to_xml____Compare____element_pred_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3878 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3880 "term_to_xml.c"
  }
#line 3882 "term_to_xml.c"
}

#line 3885 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0_10001(
#line 3888 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3890 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3892 "term_to_xml.c"
{
#line 3894 "term_to_xml.c"
  {
#line 3896 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3899 "term_to_xml.c"
    {
#line 3901 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_dtd_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3904 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3906 "term_to_xml.c"
  }
#line 3908 "term_to_xml.c"
}

#line 3911 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0_10001(
#line 3914 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3916 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3918 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3920 "term_to_xml.c"
{
#line 3922 "term_to_xml.c"
  {
#line 3924 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3927 "term_to_xml.c"
    {
#line 3929 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_dtd_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3932 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3934 "term_to_xml.c"
  }
#line 3936 "term_to_xml.c"
}

#line 3939 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0_10001(
#line 3942 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3944 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 3946 "term_to_xml.c"
{
#line 3948 "term_to_xml.c"
  {
#line 3950 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 3953 "term_to_xml.c"
    {
#line 3955 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_format_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 3958 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 3960 "term_to_xml.c"
  }
#line 3962 "term_to_xml.c"
}

#line 3965 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0_10001(
#line 3968 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 3970 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 3972 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 3974 "term_to_xml.c"
{
#line 3976 "term_to_xml.c"
  {
#line 3978 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 3981 "term_to_xml.c"
    {
#line 3983 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_format_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 3986 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 3988 "term_to_xml.c"
  }
#line 3990 "term_to_xml.c"
}

#line 3993 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0_10001(
#line 3996 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 3998 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 4000 "term_to_xml.c"
{
#line 4002 "term_to_xml.c"
  {
#line 4004 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 4007 "term_to_xml.c"
    {
#line 4009 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_functor_info_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 4012 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 4014 "term_to_xml.c"
  }
#line 4016 "term_to_xml.c"
}

#line 4019 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0_10001(
#line 4022 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 4024 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 4026 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 4028 "term_to_xml.c"
{
#line 4030 "term_to_xml.c"
  {
#line 4032 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 4035 "term_to_xml.c"
    {
#line 4037 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_functor_info_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 4040 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 4042 "term_to_xml.c"
  }
#line 4044 "term_to_xml.c"
}

#line 4047 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0_10001(
#line 4050 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 4052 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 4054 "term_to_xml.c"
{
#line 4056 "term_to_xml.c"
  {
#line 4058 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 4061 "term_to_xml.c"
    {
#line 4063 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____maybe_stylesheet_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 4066 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 4068 "term_to_xml.c"
  }
#line 4070 "term_to_xml.c"
}

#line 4073 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0_10001(
#line 4076 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 4078 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 4080 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 4082 "term_to_xml.c"
{
#line 4084 "term_to_xml.c"
  {
#line 4086 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 4089 "term_to_xml.c"
    {
#line 4091 "term_to_xml.c"
      mercury__term_to_xml____Compare____maybe_stylesheet_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 4094 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 4096 "term_to_xml.c"
  }
#line 4098 "term_to_xml.c"
}

#line 4101 "term_to_xml.c"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0_10001(
#line 4104 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_1,
#line 4106 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2)
#line 4108 "term_to_xml.c"
{
#line 4110 "term_to_xml.c"
  {
#line 4112 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;

#line 4115 "term_to_xml.c"
    {
#line 4117 "term_to_xml.c"
      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____xml_0_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2));
    }
#line 4120 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 4122 "term_to_xml.c"
  }
#line 4124 "term_to_xml.c"
}

#line 4127 "term_to_xml.c"
static void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0_10001(
#line 4130 "term_to_xml.c"
  MR_Box * mercury__term_to_xml__wrapper_arg_1,
#line 4132 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_2,
#line 4134 "term_to_xml.c"
  MR_Box mercury__term_to_xml__wrapper_arg_3)
#line 4136 "term_to_xml.c"
{
#line 4138 "term_to_xml.c"
  {
#line 4140 "term_to_xml.c"
    MR_Word mercury__term_to_xml__conv0_HeadVar__1_1;

#line 4143 "term_to_xml.c"
    {
#line 4145 "term_to_xml.c"
      mercury__term_to_xml____Compare____xml_0_0(&mercury__term_to_xml__conv0_HeadVar__1_1, ((MR_Word) mercury__term_to_xml__wrapper_arg_2), ((MR_Word) mercury__term_to_xml__wrapper_arg_3));
    }
#line 4148 "term_to_xml.c"
    *mercury__term_to_xml__wrapper_arg_1 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__1_1));
#line 4150 "term_to_xml.c"
  }
#line 4152 "term_to_xml.c"
}

#line 86 "string.opt"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
#line 86 "string.opt"
  MR_Word mercury__term_to_xml__V_17_17,
#line 86 "string.opt"
  MR_Box mercury__term_to_xml__V_18_18,
#line 86 "string.opt"
  MR_String mercury__term_to_xml__String_8_8,
#line 86 "string.opt"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 86 "string.opt"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 86 "string.opt"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 86 "string.opt"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12)
#line 86 "string.opt"
{
#line 858 "string.opt"
  while (MR_TRUE)
#line 858 "string.opt"
    {
#line 858 "string.opt"
      /* tailcall optimized into a loop */
#line 858 "string.opt"
      {
#line 858 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__I_9_9 < mercury__term_to_xml__End_10_10);
#line 858 "string.opt"
        MR_Integer mercury__term_to_xml__J_12_13;
#line 858 "string.opt"
        MR_Char mercury__term_to_xml__Char_13_14;

#line 852 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 852 "string.opt"
          {
#line 593 "string.opt"
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
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4218 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__J_12_13  = NextIndex;
	 mercury__term_to_xml__Char_13_14  = Ch;
#line 593 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 852 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 854 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__J_12_13 <= mercury__term_to_xml__End_10_10);
#line 852 "string.opt"
          }
#line 858 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 856 "string.opt"
          {
#line 856 "string.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 856 "string.opt"
            {
#line 856 "string.opt"
              mercury__term_to_xml__write_xml_escaped_char_4_p_0(mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__Char_13_14, mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11, &mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15);
            }
#line 857 "string.opt"
            /* direct tailcall eliminated */
#line 857 "string.opt"
            {
#line 857 "string.opt"
              MR_Integer mercury__term_to_xml__I_9__tmp_copy_9 = mercury__term_to_xml__J_12_13;
#line 857 "string.opt"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 857 "string.opt"
              mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 857 "string.opt"
              mercury__term_to_xml__I_9_9 = mercury__term_to_xml__I_9__tmp_copy_9;
#line 857 "string.opt"
            }
#line 857 "string.opt"
            continue;
#line 856 "string.opt"
          }
#line 858 "string.opt"
        else
#line 859 "string.opt"
          *mercury__term_to_xml__STATE_VARIABLE_Acc_15_12 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11;
#line 858 "string.opt"
      }
#line 858 "string.opt"
      break;
#line 858 "string.opt"
    }
#line 86 "string.opt"
}

#line 326 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(
#line 326 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 326 "list.int"
  MR_Word mercury__term_to_xml__V_17_17,
#line 326 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 326 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 326 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4)
#line 326 "list.int"
{
#line 174 "list.opt"
  {
#line 174 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 174 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "list.opt"
      {
#line 174 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 174 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 174 "list.opt"
      }
#line 174 "list.opt"
    else
#line 175 "list.opt"
      {
#line 175 "list.opt"
        MR_Word mercury__term_to_xml__H0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "list.opt"
        MR_Word mercury__term_to_xml__T0_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 175 "list.opt"
        MR_String mercury__term_to_xml__H1_9_9;
#line 175 "list.opt"
        MR_Word mercury__term_to_xml__T1_10_10;
#line 175 "list.opt"
        MR_Word mercury__term_to_xml__H2_11_11;
#line 175 "list.opt"
        MR_Word mercury__term_to_xml__T2_12_12;
#line 824 "term_to_xml.m"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_16_16, (MR_Integer) 1)));
#line 824 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv2_H1_9_9;
#line 824 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv1_H2_11_11;

#line 824 "term_to_xml.m"
        {
#line 824 "term_to_xml.m"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__V_16_16), ((MR_Box) (mercury__term_to_xml__V_17_17)), ((MR_Box) (mercury__term_to_xml__H0_7_7)), &mercury__term_to_xml__conv2_H1_9_9, &mercury__term_to_xml__conv1_H2_11_11);
        }
#line 824 "term_to_xml.m"
        mercury__term_to_xml__H1_9_9 = ((MR_String) mercury__term_to_xml__conv2_H1_9_9);
#line 824 "term_to_xml.m"
        mercury__term_to_xml__H2_11_11 = ((MR_Word) mercury__term_to_xml__conv1_H2_11_11);
#line 177 "list.opt"
        {
#line 177 "list.opt"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__T0_8_8, &mercury__term_to_xml__T1_10_10, &mercury__term_to_xml__T2_12_12);
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H1_9_9));
#line 175 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T1_10_10));
#line 175 "list.opt"
        }
#line 175 "list.opt"
        {
#line 175 "list.opt"
          MR_Word base;
#line 175 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = base;
#line 175 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H2_11_11));
#line 175 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T2_12_12));
#line 175 "list.opt"
        }
#line 175 "list.opt"
      }
#line 174 "list.opt"
  }
#line 326 "list.int"
}

#line 367 "list.int"
static MR_bool MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(
#line 367 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 367 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 367 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3,
#line 367 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 367 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__5_5)
#line 367 "list.int"
{
#line 178 "list.opt"
  {
#line 178 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 178 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "list.opt"
      {
#line 178 "list.opt"
        *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "list.opt"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "list.opt"
        *mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "list.opt"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 178 "list.opt"
      }
#line 178 "list.opt"
    else
#line 179 "list.opt"
      {
#line 179 "list.opt"
        MR_Integer mercury__term_to_xml__H0_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 179 "list.opt"
        MR_Word mercury__term_to_xml__T0_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 179 "list.opt"
        MR_String mercury__term_to_xml__H1_10_10;
#line 179 "list.opt"
        MR_Word mercury__term_to_xml__T1_11_11;
#line 179 "list.opt"
        MR_Integer mercury__term_to_xml__H2_12_12;
#line 179 "list.opt"
        MR_Word mercury__term_to_xml__T2_13_13;
#line 179 "list.opt"
        MR_Word mercury__term_to_xml__H3_14_14;
#line 179 "list.opt"
        MR_Word mercury__term_to_xml__T3_15_15;

#line 83 "construct.opt"
        {
#line 83 "construct.opt"
          mercury__term_to_xml__succeeded = mercury__construct__get_functor_internal_5_p_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__H0_8_8, &mercury__term_to_xml__H1_10_10, &mercury__term_to_xml__H2_12_12, &mercury__term_to_xml__H3_14_14);
        }
#line 179 "list.opt"
        if (mercury__term_to_xml__succeeded)
#line 179 "list.opt"
          {
#line 181 "list.opt"
            {
#line 181 "list.opt"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__V_20_20, mercury__term_to_xml__T0_9_9, &mercury__term_to_xml__T1_11_11, &mercury__term_to_xml__T2_13_13, &mercury__term_to_xml__T3_15_15);
            }
#line 179 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 179 "list.opt"
              {
#line 179 "list.opt"
                {
#line 179 "list.opt"
                  MR_Word base;
#line 179 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 179 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H1_10_10));
#line 179 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T1_11_11));
#line 179 "list.opt"
                }
#line 179 "list.opt"
                {
#line 179 "list.opt"
                  MR_Word base;
#line 179 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "list.opt"
                  *mercury__term_to_xml__HeadVar__4_4 = base;
#line 179 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H2_12_12));
#line 179 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T2_13_13));
#line 179 "list.opt"
                }
#line 179 "list.opt"
                {
#line 179 "list.opt"
                  MR_Word base;
#line 179 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "list.opt"
                  *mercury__term_to_xml__HeadVar__5_5 = base;
#line 179 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H3_14_14));
#line 179 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__T3_15_15));
#line 179 "list.opt"
                }
#line 179 "list.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 179 "list.opt"
              }
#line 179 "list.opt"
          }
#line 179 "list.opt"
      }
#line 178 "list.opt"
    return mercury__term_to_xml__succeeded;
#line 178 "list.opt"
  }
#line 367 "list.int"
}

#line 135 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_18_18,
#line 135 "list.int"
  MR_Integer mercury__term_to_xml__V_19_19,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 135 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 135 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 380 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__term_to_xml__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__term_to_xml__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 383 "list.opt"
            {
#line 383 "list.opt"
              mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__H_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_15_15_13);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_11_10;
#line 384 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 135 "list.int"
}

#line 148 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 148 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 148 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 148 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 148 "list.int"
{
#line 396 "list.opt"
  while (MR_TRUE)
#line 396 "list.opt"
    {
#line 396 "list.opt"
      /* tailcall optimized into a loop */
#line 396 "list.opt"
      {
#line 396 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 396 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          {
#line 396 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 396 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 396 "list.opt"
          }
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 399 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 1118 "term_to_xml.m"
            {
#line 1118 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 0, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__H_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_23_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__STATE_VARIABLE_B_24_24_20);
            }
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_16_14;
#line 401 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 401 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 401 "list.opt"
            }
#line 401 "list.opt"
            continue;
#line 399 "list.opt"
          }
#line 396 "list.opt"
      }
#line 396 "list.opt"
      break;
#line 396 "list.opt"
    }
#line 148 "list.int"
}

#line 148 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 148 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 148 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 148 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 148 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 148 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 148 "list.int"
{
#line 396 "list.opt"
  while (MR_TRUE)
#line 396 "list.opt"
    {
#line 396 "list.opt"
      /* tailcall optimized into a loop */
#line 396 "list.opt"
      {
#line 396 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 396 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          {
#line 396 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 396 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 396 "list.opt"
          }
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 399 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 1128 "term_to_xml.m"
            {
#line 1128 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 1, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__H_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_23_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__STATE_VARIABLE_B_24_24_20);
            }
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_16_14;
#line 401 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 401 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 401 "list.opt"
            }
#line 401 "list.opt"
            continue;
#line 399 "list.opt"
          }
#line 396 "list.opt"
      }
#line 396 "list.opt"
      break;
#line 396 "list.opt"
    }
#line 148 "list.int"
}

#line 157 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(
#line 157 "list.int"
  MR_Word mercury__term_to_xml__V_24_24,
#line 157 "list.int"
  MR_Box mercury__term_to_xml__V_25_25,
#line 157 "list.int"
  MR_Word mercury__term_to_xml__V_26_26,
#line 157 "list.int"
  MR_Integer mercury__term_to_xml__V_27_27,
#line 157 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 157 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 157 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__4_4,
#line 157 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__5_5,
#line 157 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__6_6)
#line 157 "list.int"
{
#line 396 "list.opt"
  while (MR_TRUE)
#line 396 "list.opt"
    {
#line 396 "list.opt"
      /* tailcall optimized into a loop */
#line 396 "list.opt"
      {
#line 396 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 396 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          {
#line 396 "list.opt"
            *mercury__term_to_xml__HeadVar__6_6 = mercury__term_to_xml__HeadVar__5_5;
#line 396 "list.opt"
            *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 396 "list.opt"
          }
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 399 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 1138 "term_to_xml.m"
            {
#line 1138 "term_to_xml.m"
              mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_25_25, (MR_Integer) 2, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27, mercury__term_to_xml__H_15_13, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_23_23_19, mercury__term_to_xml__HeadVar__5_5, &mercury__term_to_xml__STATE_VARIABLE_B_24_24_20);
            }
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_16_14;
#line 401 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_23_23_19;
#line 401 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__5__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_B_24_24_20;

#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__5_5 = mercury__term_to_xml__HeadVar__5__tmp_copy_5;
#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 401 "list.opt"
            }
#line 401 "list.opt"
            continue;
#line 399 "list.opt"
          }
#line 396 "list.opt"
      }
#line 396 "list.opt"
      break;
#line 396 "list.opt"
    }
#line 157 "list.int"
}

#line 135 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 135 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 135 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 380 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__term_to_xml__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__term_to_xml__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 383 "list.opt"
            {
#line 383 "list.opt"
              mercury__term_to_xml__write_attribute_4_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__H_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_15_15_13);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_11_10;
#line 384 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 135 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_13_13,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_14_14,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_15_15,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 170 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, mercury__term_to_xml__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 101 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(
#line 101 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 101 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 101 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 101 "list.int"
{
#line 661 "list.opt"
  while (MR_TRUE)
#line 661 "list.opt"
    {
#line 661 "list.opt"
      /* tailcall optimized into a loop */
#line 661 "list.opt"
      {
#line 661 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 661 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "list.opt"
        else
#line 662 "list.opt"
          {
#line 662 "list.opt"
            MR_String mercury__term_to_xml__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 662 "list.opt"
            MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1398 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_42_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1398 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_43_53 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 39 "map.opt"
            MR_Word mercury__term_to_xml__V_5_61;
#line 39 "map.opt"
            MR_Box mercury__term_to_xml__conv0_V_5_61;

#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_42_52, mercury__term_to_xml__TypeCtorInfo_43_53, mercury__term_to_xml__V_12_12, ((MR_Box) (mercury__term_to_xml__H_6_6)), &mercury__term_to_xml__conv0_V_5_61);
            }
#line 39 "map.opt"
            if (mercury__term_to_xml__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__term_to_xml__V_5_61 = ((MR_Word) mercury__term_to_xml__conv0_V_5_61);
#line 39 "map.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 668 "list.opt"
            if (mercury__term_to_xml__succeeded)
#line 666 "list.opt"
              {
#line 666 "list.opt"
                MR_Word mercury__term_to_xml__TrueTail_9_9;

#line 666 "list.opt"
                {
#line 666 "list.opt"
                  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__T_7_7, &mercury__term_to_xml__TrueTail_9_9);
                }
#line 667 "list.opt"
                {
#line 667 "list.opt"
                  MR_Word base;
#line 667 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "list.opt"
                  *mercury__term_to_xml__HeadVar__3_3 = base;
#line 667 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 667 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__TrueTail_9_9));
#line 667 "list.opt"
                }
#line 666 "list.opt"
              }
#line 668 "list.opt"
            else
#line 669 "list.opt"
              {
#line 669 "list.opt"
                /* direct tailcall eliminated */
#line 669 "list.opt"
                {
#line 669 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_7_7;

#line 669 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 669 "list.opt"
                }
#line 669 "list.opt"
                continue;
#line 669 "list.opt"
              }
#line 662 "list.opt"
          }
#line 661 "list.opt"
      }
#line 661 "list.opt"
      break;
#line 661 "list.opt"
    }
#line 101 "list.int"
}

#line 135 "list.int"
static void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_16_16,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__V_17_17,
#line 135 "list.int"
  MR_String mercury__term_to_xml__V_18_18,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_19_19,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_20_20,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__V_21_21,
#line 135 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 135 "list.int"
  MR_Box mercury__term_to_xml__HeadVar__3_3,
#line 135 "list.int"
  MR_Box * mercury__term_to_xml__HeadVar__4_4)
#line 135 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 380 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__term_to_xml__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__term_to_xml__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 383 "list.opt"
            {
#line 383 "list.opt"
              mercury__term_to_xml__write_dtd_attlist_8_p_0(mercury__term_to_xml__V_16_16, mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_19_19, mercury__term_to_xml__V_20_20, mercury__term_to_xml__V_21_21, mercury__term_to_xml__H_10_9, mercury__term_to_xml__HeadVar__3_3, &mercury__term_to_xml__STATE_VARIABLE_A_15_15_13);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T_11_10;
#line 384 "list.opt"
              MR_Box mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 135 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__V_12_12,
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 170 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_String mercury__term_to_xml__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_12_12, mercury__term_to_xml__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__term_to_xml__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1081 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1081 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1081 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1081 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1081 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1081 "term_to_xml.m"
{
#line 1105 "term_to_xml.m"
  {
#line 1105 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1105 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_18_18;

#line 1105 "term_to_xml.m"
    {
#line 1105 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_18_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1105 "term_to_xml.m"
  }
#line 1081 "term_to_xml.m"
}

#line 1079 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1079 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1079 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1079 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1079 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1079 "term_to_xml.m"
{
#line 1099 "term_to_xml.m"
  {
#line 1099 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1099 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_17_17;

#line 1099 "term_to_xml.m"
    {
#line 1099 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_17_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1099 "term_to_xml.m"
  }
#line 1079 "term_to_xml.m"
}

#line 1077 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1077 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1077 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1077 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1077 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1077 "term_to_xml.m"
{
#line 1093 "term_to_xml.m"
  {
#line 1093 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1093 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 1093 "term_to_xml.m"
    {
#line 1093 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
    }
#line 1093 "term_to_xml.m"
  }
#line 1077 "term_to_xml.m"
}

#line 87 "string.opt"
static void MR_CALL 
mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(
#line 87 "string.opt"
  MR_String mercury__term_to_xml__String_8_8,
#line 87 "string.opt"
  MR_Integer mercury__term_to_xml__I_9_9,
#line 87 "string.opt"
  MR_Integer mercury__term_to_xml__End_10_10,
#line 87 "string.opt"
  MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11,
#line 87 "string.opt"
  MR_Word * mercury__term_to_xml__STATE_VARIABLE_Acc_15_12)
#line 87 "string.opt"
{
#line 858 "string.opt"
  while (MR_TRUE)
#line 858 "string.opt"
    {
#line 858 "string.opt"
      /* tailcall optimized into a loop */
#line 858 "string.opt"
      {
#line 858 "string.opt"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__I_9_9 < mercury__term_to_xml__End_10_10);
#line 858 "string.opt"
        MR_Integer mercury__term_to_xml__J_12_13;
#line 858 "string.opt"
        MR_Char mercury__term_to_xml__Char_13_14;

#line 852 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 852 "string.opt"
          {
#line 593 "string.opt"
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
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 5463 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__J_12_13  = NextIndex;
	 mercury__term_to_xml__Char_13_14  = Ch;
#line 593 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 852 "string.opt"
            if (mercury__term_to_xml__succeeded)
#line 854 "string.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__J_12_13 <= mercury__term_to_xml__End_10_10);
#line 852 "string.opt"
          }
#line 858 "string.opt"
        if (mercury__term_to_xml__succeeded)
#line 856 "string.opt"
          {
#line 856 "string.opt"
            MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 856 "string.opt"
            {
#line 856 "string.opt"
              mercury__term_to_xml__mangle_char_3_p_0(mercury__term_to_xml__Char_13_14, mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11, &mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15);
            }
#line 857 "string.opt"
            /* direct tailcall eliminated */
#line 857 "string.opt"
            {
#line 857 "string.opt"
              MR_Integer mercury__term_to_xml__I_9__tmp_copy_9 = mercury__term_to_xml__J_12_13;
#line 857 "string.opt"
              MR_Word mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_16_16_15;

#line 857 "string.opt"
              mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14__tmp_copy_11;
#line 857 "string.opt"
              mercury__term_to_xml__I_9_9 = mercury__term_to_xml__I_9__tmp_copy_9;
#line 857 "string.opt"
            }
#line 857 "string.opt"
            continue;
#line 856 "string.opt"
          }
#line 858 "string.opt"
        else
#line 859 "string.opt"
          *mercury__term_to_xml__STATE_VARIABLE_Acc_15_12 = mercury__term_to_xml__STATE_VARIABLE_Acc_0_14_11;
#line 858 "string.opt"
      }
#line 858 "string.opt"
      break;
#line 858 "string.opt"
    }
#line 87 "string.opt"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho25_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 170 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__term_to_xml__V_8_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(mercury__term_to_xml__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho23_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 170 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__term_to_xml__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 818 "term_to_xml.m"
        {
#line 818 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 818 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 818 "term_to_xml.m"
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho22_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 170 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Integer mercury__term_to_xml__H_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 819 "term_to_xml.m"
        {
#line 819 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 819 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 819 "term_to_xml.m"
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(
#line 435 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 435 "list.int"
{
#line 202 "list.opt"
  {
#line 202 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 202 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__4_4;

#line 202 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
      if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
        mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "list.opt"
      else
#line 203 "list.opt"
        {
#line 10 "require.opt"
          {
#line 10 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 203 "list.opt"
        }
#line 202 "list.opt"
    else
#line 202 "list.opt"
      {
#line 202 "list.opt"
        MR_Word mercury__term_to_xml__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "list.opt"
        MR_String mercury__term_to_xml__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "list.opt"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "list.opt"
          {
#line 10 "require.opt"
            {
#line 10 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 208 "list.opt"
          }
#line 202 "list.opt"
        else
#line 213 "list.opt"
          {
#line 213 "list.opt"
            MR_Integer mercury__term_to_xml__HB_21_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "list.opt"
            MR_Word mercury__term_to_xml__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "list.opt"
            MR_Word mercury__term_to_xml__V_23_25;
#line 213 "list.opt"
            MR_Word mercury__term_to_xml__V_24_26;

#line 848 "term_to_xml.m"
            {
#line 848 "term_to_xml.m"
              mercury__term_to_xml__V_23_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 0) = ((MR_Box) (mercury__term_to_xml__V_35_35));
#line 848 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_23_25, 1) = ((MR_Box) (mercury__term_to_xml__HB_21_23));
#line 848 "term_to_xml.m"
            }
#line 215 "list.opt"
            {
#line 215 "list.opt"
              mercury__term_to_xml__V_24_26 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__V_34_34, mercury__term_to_xml__TBs_22_24);
            }
#line 213 "list.opt"
            {
#line 213 "list.opt"
              mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 0) = ((MR_Box) (mercury__term_to_xml__V_23_25));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, 1) = ((MR_Box) (mercury__term_to_xml__V_24_26));
#line 213 "list.opt"
            }
#line 213 "list.opt"
          }
#line 202 "list.opt"
      }
#line 202 "list.opt"
    return mercury__term_to_xml__HeadVar__4_4;
#line 202 "list.opt"
  }
#line 435 "list.int"
}

#line 107 "list.int"
static void MR_CALL 
mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(
#line 107 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 107 "list.int"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 107 "list.int"
{
#line 696 "list.opt"
  while (MR_TRUE)
#line 696 "list.opt"
    {
#line 696 "list.opt"
      /* tailcall optimized into a loop */
#line 696 "list.opt"
      {
#line 696 "list.opt"
        MR_bool mercury__term_to_xml__succeeded;

#line 696 "list.opt"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "list.opt"
          *mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "list.opt"
        else
#line 697 "list.opt"
          {
#line 697 "list.opt"
            MR_Word mercury__term_to_xml__H0_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 697 "list.opt"
            MR_Word mercury__term_to_xml__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 703 "list.opt"
            MR_Word mercury__term_to_xml__H_9_9;

#line 1275 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__H0_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 1275 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1275 "term_to_xml.m"
              {
#line 1275 "term_to_xml.m"
                mercury__term_to_xml__H_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__H0_6_6, (MR_Integer) 0)));
#line 701 "list.opt"
                {
#line 701 "list.opt"
                  MR_Word mercury__term_to_xml__TrueTail_10_10;

#line 701 "list.opt"
                  {
#line 701 "list.opt"
                    mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__T0_7_7, &mercury__term_to_xml__TrueTail_10_10);
                  }
#line 702 "list.opt"
                  {
#line 702 "list.opt"
                    MR_Word base;
#line 702 "list.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "list.opt"
                    *mercury__term_to_xml__HeadVar__3_3 = base;
#line 702 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__H_9_9));
#line 702 "list.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__TrueTail_10_10));
#line 702 "list.opt"
                  }
#line 701 "list.opt"
                }
#line 1275 "term_to_xml.m"
              }
#line 1275 "term_to_xml.m"
            else
#line 704 "list.opt"
              {
#line 704 "list.opt"
                /* direct tailcall eliminated */
#line 704 "list.opt"
                {
#line 704 "list.opt"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__T0_7_7;

#line 704 "list.opt"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 704 "list.opt"
                }
#line 704 "list.opt"
                continue;
#line 704 "list.opt"
              }
#line 697 "list.opt"
          }
#line 696 "list.opt"
      }
#line 696 "list.opt"
      break;
#line 696 "list.opt"
    }
#line 107 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho8_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 170 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 1528 "term_to_xml.m"
        {
#line 1528 "term_to_xml.m"
          mercury__term_to_xml__V_8_8 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__term_to_xml__map__ho3_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__term_to_xml__succeeded;
#line 170 "list.opt"
    MR_Word mercury__term_to_xml__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__term_to_xml__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__term_to_xml__V_9_9;

#line 222 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__map__ho3_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__H_6_6 ;
		{
#line 222 "construct.opt"

    SUCCESS_INDICATOR = (S == NULL);

#line 6017 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 222 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 219 "construct.opt"
        if (mercury__term_to_xml__succeeded)
#line 218 "construct.opt"
          mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "construct.opt"
        else
#line 220 "construct.opt"
          {
#line 220 "construct.opt"
            mercury__term_to_xml__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 220 "construct.opt"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_8_8, 0) = ((MR_Box) (mercury__term_to_xml__H_6_6));
#line 220 "construct.opt"
          }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__term_to_xml__V_9_9 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__term_to_xml__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 0) = ((MR_Box) (mercury__term_to_xml__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__term_to_xml__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 1348 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml____Unify____list__list_1_1(
#line 1348 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_11,
#line 1348 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1348 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 1348 "term_to_xml.m"
{
#line 1348 "term_to_xml.m"
  {
#line 1348 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_6_6;
#line 1348 "term_to_xml.m"
    MR_Box mercury__term_to_xml__V_7_7;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;

#line 1348 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
      {
#line 1348 "term_to_xml.m"
        mercury__term_to_xml__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0));
#line 1348 "term_to_xml.m"
        mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)) = mercury__term_to_xml__V_7_7;
#line 1348 "term_to_xml.m"
        mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
        {
#line 1348 "term_to_xml.m"
          return mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_for_T_11, mercury__term_to_xml__V_6_6, mercury__term_to_xml__V_8_8);
        }
#line 1348 "term_to_xml.m"
      }
#line 1348 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1348 "term_to_xml.m"
  }
#line 1348 "term_to_xml.m"
}

#line 76 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____xml_0_0(
#line 76 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 76 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 76 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 76 "term_to_xml.m"
{
#line 76 "term_to_xml.m"
  {
#line 76 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 76 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_102 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 76 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_103 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 76 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_102 == mercury__term_to_xml__CastY_103);
#line 76 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 6136 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "term_to_xml.m"
    else
#line 76 "term_to_xml.m"
      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 76 "term_to_xml.m"
        {
#line 76 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "term_to_xml.m"
          if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 76 "term_to_xml.m"
            {
#line 76 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__Res_7_123;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_112_112 ;
	S2 =  mercury__term_to_xml__V_53_53 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6171 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_123  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_123 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_123 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 76 "term_to_xml.m"
            }
#line 76 "term_to_xml.m"
          else
#line 76 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6206 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
            else
#line 76 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6212 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
              else
#line 76 "term_to_xml.m"
                if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6218 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                else
#line 76 "term_to_xml.m"
                  if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6224 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                  else
#line 6228 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
        }
#line 76 "term_to_xml.m"
      else
#line 76 "term_to_xml.m"
        if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_to_xml.m"
          {
#line 76 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6243 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
            else
#line 76 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_to_xml.m"
                {
#line 76 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__Res_7_133;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_114_114 ;
	S2 =  mercury__term_to_xml__V_37_37 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6271 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_133  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_133 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_133 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 76 "term_to_xml.m"
                }
#line 76 "term_to_xml.m"
              else
#line 76 "term_to_xml.m"
                if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6306 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                else
#line 76 "term_to_xml.m"
                  if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6312 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                  else
#line 76 "term_to_xml.m"
                    if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6318 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                    else
#line 6322 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
          }
#line 76 "term_to_xml.m"
        else
#line 76 "term_to_xml.m"
          if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 76 "term_to_xml.m"
            {
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6341 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
              else
#line 76 "term_to_xml.m"
                if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6347 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                else
#line 76 "term_to_xml.m"
                  if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 76 "term_to_xml.m"
                    {
#line 76 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_10_10;
#line 76 "term_to_xml.m"
                      MR_Integer mercury__term_to_xml__Res_7_138;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_117_117 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6381 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_138  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_138 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                        mercury__term_to_xml__V_10_10 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                      else
#line 110 "private_builtin.opt"
                        {
#line 107 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_138 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                            mercury__term_to_xml__V_10_10 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                          else
#line 111 "private_builtin.opt"
                            mercury__term_to_xml__V_10_10 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                        }
#line 6410 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_10_10 == (MR_Integer) 0);
#line 76 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 76 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                        *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_10_10;
#line 76 "term_to_xml.m"
                      else
#line 76 "term_to_xml.m"
                        {
#line 76 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__V_11_11;
#line 76 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__TypeInfo_110_110 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];

#line 76 "term_to_xml.m"
                          {
#line 76 "term_to_xml.m"
                            mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_110_110, &mercury__term_to_xml__V_11_11, ((MR_Box) (mercury__term_to_xml__V_116_116)), ((MR_Box) (mercury__term_to_xml__V_8_8)));
                          }
#line 6432 "term_to_xml.c"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_11_11 == (MR_Integer) 0);
#line 76 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 76 "term_to_xml.m"
                          if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                            *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_11_11;
#line 76 "term_to_xml.m"
                          else
#line 76 "term_to_xml.m"
                            {
#line 76 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__TypeInfo_111_111 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];

#line 76 "term_to_xml.m"
                              {
#line 76 "term_to_xml.m"
                                mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_111_111, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__V_115_115)), ((MR_Box) (mercury__term_to_xml__V_9_9)));
#line 76 "term_to_xml.m"
                                return;
                              }
#line 76 "term_to_xml.m"
                            }
#line 76 "term_to_xml.m"
                        }
#line 76 "term_to_xml.m"
                    }
#line 76 "term_to_xml.m"
                  else
#line 76 "term_to_xml.m"
                    if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6464 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                    else
#line 76 "term_to_xml.m"
                      if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6470 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                      else
#line 6474 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
            }
#line 76 "term_to_xml.m"
          else
#line 76 "term_to_xml.m"
            if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 76 "term_to_xml.m"
              {
#line 76 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "term_to_xml.m"
                if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6489 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                else
#line 76 "term_to_xml.m"
                  if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6495 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                  else
#line 76 "term_to_xml.m"
                    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6501 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                    else
#line 76 "term_to_xml.m"
                      if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 76 "term_to_xml.m"
                        {
#line 76 "term_to_xml.m"
                          MR_String mercury__term_to_xml__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                          MR_Integer mercury__term_to_xml__Res_7_128;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_113_113 ;
	S2 =  mercury__term_to_xml__V_69_69 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6529 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_128  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_128 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                          else
#line 110 "private_builtin.opt"
                            {
#line 107 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_128 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                              else
#line 111 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                            }
#line 76 "term_to_xml.m"
                        }
#line 76 "term_to_xml.m"
                      else
#line 76 "term_to_xml.m"
                        if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6564 "term_to_xml.c"
                          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                        else
#line 6568 "term_to_xml.c"
                          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
              }
#line 76 "term_to_xml.m"
            else
#line 76 "term_to_xml.m"
              if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 76 "term_to_xml.m"
                {
#line 76 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "term_to_xml.m"
                  if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6583 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                  else
#line 76 "term_to_xml.m"
                    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6589 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                    else
#line 76 "term_to_xml.m"
                      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6595 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                      else
#line 76 "term_to_xml.m"
                        if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6601 "term_to_xml.c"
                          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                        else
#line 76 "term_to_xml.m"
                          if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 76 "term_to_xml.m"
                            {
#line 76 "term_to_xml.m"
                              MR_String mercury__term_to_xml__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                              MR_Integer mercury__term_to_xml__Res_7_143;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_118_118 ;
	S2 =  mercury__term_to_xml__V_85_85 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6629 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_143  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_143 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                              else
#line 110 "private_builtin.opt"
                                {
#line 107 "private_builtin.opt"
                                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_143 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                  if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                  else
#line 111 "private_builtin.opt"
                                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                }
#line 76 "term_to_xml.m"
                            }
#line 76 "term_to_xml.m"
                          else
#line 6662 "term_to_xml.c"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_to_xml.m"
                }
#line 76 "term_to_xml.m"
              else
#line 76 "term_to_xml.m"
                {
#line 76 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "term_to_xml.m"
                  if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6675 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                  else
#line 76 "term_to_xml.m"
                    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6681 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                    else
#line 76 "term_to_xml.m"
                      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6687 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                      else
#line 76 "term_to_xml.m"
                        if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6693 "term_to_xml.c"
                          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                        else
#line 76 "term_to_xml.m"
                          if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6699 "term_to_xml.c"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_to_xml.m"
                          else
#line 76 "term_to_xml.m"
                            {
#line 76 "term_to_xml.m"
                              MR_String mercury__term_to_xml__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                              MR_Integer mercury__term_to_xml__Res_7_148;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____xml_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_119_119 ;
	S2 =  mercury__term_to_xml__V_101_101 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6725 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_148  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_148 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                              if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                              else
#line 110 "private_builtin.opt"
                                {
#line 107 "private_builtin.opt"
                                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_148 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                  if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                  else
#line 111 "private_builtin.opt"
                                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                }
#line 76 "term_to_xml.m"
                            }
#line 76 "term_to_xml.m"
                }
#line 76 "term_to_xml.m"
  }
#line 76 "term_to_xml.m"
}

#line 76 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____xml_0_0(
#line 76 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 76 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 76 "term_to_xml.m"
{
#line 76 "term_to_xml.m"
  {
#line 76 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 76 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_19 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 76 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_20 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 76 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_19 == mercury__term_to_xml__CastY_20);
#line 76 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 76 "term_to_xml.m"
    else
#line 76 "term_to_xml.m"
      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 76 "term_to_xml.m"
        {
#line 76 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_12_12;

#line 76 "term_to_xml.m"
          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 76 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
            {
#line 76 "term_to_xml.m"
              mercury__term_to_xml__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 6806 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_11_11, mercury__term_to_xml__V_12_12) == 0);
#line 76 "term_to_xml.m"
            }
#line 76 "term_to_xml.m"
        }
#line 76 "term_to_xml.m"
      else
#line 76 "term_to_xml.m"
        if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_to_xml.m"
          {
#line 76 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_10_10;

#line 76 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 76 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
              {
#line 76 "term_to_xml.m"
                mercury__term_to_xml__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 6831 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, mercury__term_to_xml__V_10_10) == 0);
#line 76 "term_to_xml.m"
              }
#line 76 "term_to_xml.m"
          }
#line 76 "term_to_xml.m"
        else
#line 76 "term_to_xml.m"
          if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 76 "term_to_xml.m"
            {
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_21_21;
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_22_22;
#line 76 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_6_6;
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_7_7;
#line 76 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_8_8;

#line 76 "term_to_xml.m"
              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 76 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                {
#line 76 "term_to_xml.m"
                  mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "term_to_xml.m"
                  mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                  mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 2)));
#line 6872 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_6_6) == 0);
#line 76 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                    {
#line 6878 "term_to_xml.c"
                      mercury__term_to_xml__TypeInfo_21_21 = (MR_Word) &mercury__term_to_xml_scalar_common_1[5];
#line 6880 "term_to_xml.c"
                      {
#line 6882 "term_to_xml.c"
                        mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_21_21, ((MR_Box) (mercury__term_to_xml__V_4_4)), ((MR_Box) (mercury__term_to_xml__V_7_7)));
                      }
#line 76 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                        {
#line 6889 "term_to_xml.c"
                          mercury__term_to_xml__TypeInfo_22_22 = (MR_Word) &mercury__term_to_xml_scalar_common_1[6];
#line 6891 "term_to_xml.c"
                          {
#line 6893 "term_to_xml.c"
                            return mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_22_22, ((MR_Box) (mercury__term_to_xml__V_5_5)), ((MR_Box) (mercury__term_to_xml__V_8_8)));
                          }
#line 76 "term_to_xml.m"
                        }
#line 76 "term_to_xml.m"
                    }
#line 76 "term_to_xml.m"
                }
#line 76 "term_to_xml.m"
            }
#line 76 "term_to_xml.m"
          else
#line 76 "term_to_xml.m"
            if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 76 "term_to_xml.m"
              {
#line 76 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_14_14;

#line 76 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 76 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                  {
#line 76 "term_to_xml.m"
                    mercury__term_to_xml__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 6923 "term_to_xml.c"
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14) == 0);
#line 76 "term_to_xml.m"
                  }
#line 76 "term_to_xml.m"
              }
#line 76 "term_to_xml.m"
            else
#line 76 "term_to_xml.m"
              if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 76 "term_to_xml.m"
                {
#line 76 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_16_16;

#line 76 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                    {
#line 76 "term_to_xml.m"
                      mercury__term_to_xml__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 6948 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_15_15, mercury__term_to_xml__V_16_16) == 0);
#line 76 "term_to_xml.m"
                    }
#line 76 "term_to_xml.m"
                }
#line 76 "term_to_xml.m"
              else
#line 76 "term_to_xml.m"
                {
#line 76 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_18_18;

#line 76 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = ((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 76 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 76 "term_to_xml.m"
                    {
#line 76 "term_to_xml.m"
                      mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 6971 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_17_17, mercury__term_to_xml__V_18_18) == 0);
#line 76 "term_to_xml.m"
                    }
#line 76 "term_to_xml.m"
                }
#line 76 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 76 "term_to_xml.m"
  }
#line 76 "term_to_xml.m"
}

#line 153 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_stylesheet_0_0(
#line 153 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 153 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 153 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 153 "term_to_xml.m"
{
#line 153 "term_to_xml.m"
  {
#line 153 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 153 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_13 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 153 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_14 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 153 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_13 == mercury__term_to_xml__CastY_14);
#line 153 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 7008 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "term_to_xml.m"
    else
#line 153 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "term_to_xml.m"
        else
#line 7020 "term_to_xml.c"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "term_to_xml.m"
      else
#line 153 "term_to_xml.m"
        {
#line 153 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7033 "term_to_xml.c"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "term_to_xml.m"
          else
#line 153 "term_to_xml.m"
            {
#line 153 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_8_8;
#line 153 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__Res_7_22;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7063 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_22  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                    mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 7092 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 153 "term_to_xml.m"
              mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 153 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 153 "term_to_xml.m"
                *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 153 "term_to_xml.m"
              else
#line 153 "term_to_xml.m"
                {
#line 153 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__Res_7_27;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_stylesheet_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_17_17 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7122 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_27  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_27 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_27 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 153 "term_to_xml.m"
                }
#line 153 "term_to_xml.m"
            }
#line 153 "term_to_xml.m"
        }
#line 153 "term_to_xml.m"
  }
#line 153 "term_to_xml.m"
}

#line 153 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_stylesheet_0_0(
#line 153 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 153 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 153 "term_to_xml.m"
{
#line 153 "term_to_xml.m"
  {
#line 153 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 153 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 153 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 153 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 153 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 153 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 153 "term_to_xml.m"
    else
#line 153 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "term_to_xml.m"
        {
#line 153 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 153 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 153 "term_to_xml.m"
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
#line 153 "term_to_xml.m"
        }
#line 153 "term_to_xml.m"
      else
#line 153 "term_to_xml.m"
        {
#line 153 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_5_5;
#line 153 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_6_6;

#line 153 "term_to_xml.m"
          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 153 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 153 "term_to_xml.m"
            {
#line 153 "term_to_xml.m"
              mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "term_to_xml.m"
              mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 7224 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 153 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 7228 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_4_4, mercury__term_to_xml__V_6_6) == 0);
#line 153 "term_to_xml.m"
            }
#line 153 "term_to_xml.m"
        }
#line 153 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 153 "term_to_xml.m"
  }
#line 153 "term_to_xml.m"
}

#line 278 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_functor_info_0_0(
#line 278 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 278 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 278 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 278 "term_to_xml.m"
{
#line 278 "term_to_xml.m"
  {
#line 278 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 278 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_13 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 278 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_14 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 278 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_13 == mercury__term_to_xml__CastY_14);
#line 278 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 7265 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "term_to_xml.m"
    else
#line 278 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "term_to_xml.m"
        else
#line 7277 "term_to_xml.c"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "term_to_xml.m"
      else
#line 278 "term_to_xml.m"
        {
#line 278 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7290 "term_to_xml.c"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "term_to_xml.m"
          else
#line 278 "term_to_xml.m"
            {
#line 278 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_8_8;
#line 278 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__Res_7_22;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____maybe_functor_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_18_18 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7320 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_22  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_22 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                    mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 7349 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 278 "term_to_xml.m"
              mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 278 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 278 "term_to_xml.m"
                *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 278 "term_to_xml.m"
              else
#line 69 "private_builtin.opt"
                {
#line 66 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 < mercury__term_to_xml__V_7_7);
#line 69 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 68 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_17_17 == mercury__term_to_xml__V_7_7);
#line 74 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 69 "private_builtin.opt"
                }
#line 278 "term_to_xml.m"
            }
#line 278 "term_to_xml.m"
        }
#line 278 "term_to_xml.m"
  }
#line 278 "term_to_xml.m"
}

#line 278 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_functor_info_0_0(
#line 278 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 278 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 278 "term_to_xml.m"
{
#line 278 "term_to_xml.m"
  {
#line 278 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 278 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 278 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 278 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 278 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 278 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 278 "term_to_xml.m"
    else
#line 278 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "term_to_xml.m"
        {
#line 278 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 278 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 278 "term_to_xml.m"
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
#line 278 "term_to_xml.m"
        }
#line 278 "term_to_xml.m"
      else
#line 278 "term_to_xml.m"
        {
#line 278 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_5_5;
#line 278 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_6_6;

#line 278 "term_to_xml.m"
          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 278 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 278 "term_to_xml.m"
            {
#line 278 "term_to_xml.m"
              mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 278 "term_to_xml.m"
              mercury__term_to_xml__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 7456 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 278 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 7460 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_4_4 == mercury__term_to_xml__V_6_6);
#line 278 "term_to_xml.m"
            }
#line 278 "term_to_xml.m"
        }
#line 278 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 278 "term_to_xml.m"
  }
#line 278 "term_to_xml.m"
}

#line 874 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_format_0_0(
#line 874 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 874 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 874 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 874 "term_to_xml.m"
{
#line 874 "term_to_xml.m"
  {
#line 874 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 874 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar1_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 874 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar2_5 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 68 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 874 "term_to_xml.m"
  }
#line 874 "term_to_xml.m"
}

#line 874 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_format_0_0(
#line 874 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_1,
#line 874 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 874 "term_to_xml.m"
{
#line 7529 "term_to_xml.c"
  {
#line 7531 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 7534 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 7536 "term_to_xml.c"
  }
#line 874 "term_to_xml.m"
}

#line 135 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____maybe_dtd_0_0(
#line 135 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 135 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 135 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 135 "term_to_xml.m"
{
#line 135 "term_to_xml.m"
  {
#line 135 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 135 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 135 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_11 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 135 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_10 == mercury__term_to_xml__CastY_11);
#line 135 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 7565 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "term_to_xml.m"
    else
#line 135 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "term_to_xml.m"
        else
#line 135 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 135 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "term_to_xml.m"
          else
#line 7583 "term_to_xml.c"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "term_to_xml.m"
      else
#line 135 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 135 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "term_to_xml.m"
          else
#line 135 "term_to_xml.m"
            if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 135 "term_to_xml.m"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "term_to_xml.m"
            else
#line 7601 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "term_to_xml.m"
        else
#line 135 "term_to_xml.m"
          {
#line 135 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "term_to_xml.m"
            if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7612 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "term_to_xml.m"
            else
#line 135 "term_to_xml.m"
              if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7618 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "term_to_xml.m"
              else
#line 135 "term_to_xml.m"
                {
#line 135 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "term_to_xml.m"
                  {
#line 135 "term_to_xml.m"
                    mercury__term_to_xml____Compare____doctype_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_7_7);
#line 135 "term_to_xml.m"
                    return;
                  }
#line 135 "term_to_xml.m"
                }
#line 135 "term_to_xml.m"
          }
#line 135 "term_to_xml.m"
  }
#line 135 "term_to_xml.m"
}

#line 135 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____maybe_dtd_0_0(
#line 135 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 135 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 135 "term_to_xml.m"
{
#line 135 "term_to_xml.m"
  {
#line 135 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 135 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 135 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 135 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 135 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 135 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 135 "term_to_xml.m"
    else
#line 135 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "term_to_xml.m"
        {
#line 135 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 135 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 135 "term_to_xml.m"
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
#line 135 "term_to_xml.m"
        }
#line 135 "term_to_xml.m"
      else
#line 135 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 135 "term_to_xml.m"
          {
#line 135 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 135 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 135 "term_to_xml.m"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_8 == mercury__term_to_xml__CastX_7);
#line 135 "term_to_xml.m"
          }
#line 135 "term_to_xml.m"
        else
#line 135 "term_to_xml.m"
          {
#line 135 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_6_6;

#line 135 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 135 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 135 "term_to_xml.m"
              {
#line 135 "term_to_xml.m"
                mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 7714 "term_to_xml.c"
                {
#line 7716 "term_to_xml.c"
                  return mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____doctype_0_0(mercury__term_to_xml__V_5_5, mercury__term_to_xml__V_6_6);
                }
#line 135 "term_to_xml.m"
              }
#line 135 "term_to_xml.m"
          }
#line 135 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 135 "term_to_xml.m"
  }
#line 135 "term_to_xml.m"
}

#line 267 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____element_pred_0_0(
#line 267 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 267 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 267 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 267 "term_to_xml.m"
{
#line 267 "term_to_xml.m"
  {
#line 267 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 267 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_6_6 = (MR_Word) &mercury__term_to_xml_scalar_common_2[0];
#line 267 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar1_4 = mercury__term_to_xml__HeadVar__2_2;
#line 267 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar2_5 = mercury__term_to_xml__HeadVar__3_3;

#line 267 "term_to_xml.m"
    {
#line 267 "term_to_xml.m"
      mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_6_6, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_to_xml__Cast_HeadVar2_5)));
#line 267 "term_to_xml.m"
      return;
    }
#line 267 "term_to_xml.m"
  }
#line 267 "term_to_xml.m"
}

#line 267 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_pred_0_0(
#line 267 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 267 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 267 "term_to_xml.m"
{
#line 267 "term_to_xml.m"
  {
#line 267 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 267 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar1_3 = mercury__term_to_xml__HeadVar__1_1;
#line 267 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Cast_HeadVar2_4 = mercury__term_to_xml__HeadVar__2_2;

#line 267 "term_to_xml.m"
    {
#line 267 "term_to_xml.m"
      return mercury__term_to_xml__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__term_to_xml__Cast_HeadVar1_3, (MR_Word) mercury__term_to_xml__Cast_HeadVar2_4);
    }
#line 267 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 267 "term_to_xml.m"
  }
#line 267 "term_to_xml.m"
}

#line 249 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____element_mapping_0_0(
#line 249 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 249 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 249 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 249 "term_to_xml.m"
{
#line 249 "term_to_xml.m"
  {
#line 249 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 249 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 249 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_11 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 249 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_10 == mercury__term_to_xml__CastY_11);
#line 249 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 7818 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "term_to_xml.m"
    else
#line 249 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "term_to_xml.m"
        else
#line 249 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 249 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "term_to_xml.m"
          else
#line 7836 "term_to_xml.c"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "term_to_xml.m"
      else
#line 249 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 249 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "term_to_xml.m"
          else
#line 249 "term_to_xml.m"
            if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 249 "term_to_xml.m"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "term_to_xml.m"
            else
#line 7854 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "term_to_xml.m"
        else
#line 249 "term_to_xml.m"
          {
#line 249 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 249 "term_to_xml.m"
            if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7865 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "term_to_xml.m"
            else
#line 249 "term_to_xml.m"
              if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7871 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "term_to_xml.m"
              else
#line 249 "term_to_xml.m"
                {
#line 249 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__TypeInfo_12_12 = (MR_Word) &mercury__term_to_xml_scalar_common_2[0];
#line 249 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 249 "term_to_xml.m"
                  {
#line 249 "term_to_xml.m"
                    mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_12_12, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__V_13_13)), ((MR_Box) (mercury__term_to_xml__V_9_9)));
#line 249 "term_to_xml.m"
                    return;
                  }
#line 249 "term_to_xml.m"
                }
#line 249 "term_to_xml.m"
          }
#line 249 "term_to_xml.m"
  }
#line 249 "term_to_xml.m"
}

#line 249 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____element_mapping_0_0(
#line 249 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 249 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 249 "term_to_xml.m"
{
#line 249 "term_to_xml.m"
  {
#line 249 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 249 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 249 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 249 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 249 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 249 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 249 "term_to_xml.m"
    else
#line 249 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "term_to_xml.m"
        {
#line 249 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 249 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 249 "term_to_xml.m"
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
#line 249 "term_to_xml.m"
        }
#line 249 "term_to_xml.m"
      else
#line 249 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 249 "term_to_xml.m"
          {
#line 249 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__CastX_5 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 249 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__CastY_6 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 249 "term_to_xml.m"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_6 == mercury__term_to_xml__CastX_5);
#line 249 "term_to_xml.m"
          }
#line 249 "term_to_xml.m"
        else
#line 249 "term_to_xml.m"
          {
#line 249 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_8_8;

#line 249 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 249 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 249 "term_to_xml.m"
              {
#line 249 "term_to_xml.m"
                mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 7969 "term_to_xml.c"
                {
#line 7971 "term_to_xml.c"
                  return mercury__term_to_xml__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__term_to_xml__V_7_7, (MR_Word) mercury__term_to_xml__V_8_8);
                }
#line 249 "term_to_xml.m"
              }
#line 249 "term_to_xml.m"
          }
#line 249 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 249 "term_to_xml.m"
  }
#line 249 "term_to_xml.m"
}

#line 343 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____dtd_generation_result_0_0(
#line 343 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 343 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 343 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 343 "term_to_xml.m"
{
#line 343 "term_to_xml.m"
  {
#line 343 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 343 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_45 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 343 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_46 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 343 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_45 == mercury__term_to_xml__CastY_46);
#line 343 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 8009 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "term_to_xml.m"
    else
#line 343 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 343 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 343 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "term_to_xml.m"
        else
#line 343 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
          else
#line 343 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8029 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
            else
#line 343 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8035 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
              else
#line 8039 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
      else
#line 343 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "term_to_xml.m"
          if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 343 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
          else
#line 343 "term_to_xml.m"
            if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "term_to_xml.m"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "term_to_xml.m"
            else
#line 343 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8059 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
              else
#line 343 "term_to_xml.m"
                if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8065 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
                else
#line 8069 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
        else
#line 343 "term_to_xml.m"
          if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 343 "term_to_xml.m"
            {
#line 343 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 343 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "term_to_xml.m"
              if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8084 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
              else
#line 343 "term_to_xml.m"
                if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8090 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
                else
#line 343 "term_to_xml.m"
                  if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 343 "term_to_xml.m"
                    {
#line 343 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 343 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 343 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_20_20;
#line 343 "term_to_xml.m"
                      MR_Integer mercury__term_to_xml__Res_7_58;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____dtd_generation_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_52_52 ;
	S2 =  mercury__term_to_xml__V_18_18 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8122 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_58  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_58 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                        mercury__term_to_xml__V_20_20 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                      else
#line 110 "private_builtin.opt"
                        {
#line 107 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_58 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                            mercury__term_to_xml__V_20_20 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                          else
#line 111 "private_builtin.opt"
                            mercury__term_to_xml__V_20_20 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                        }
#line 8151 "term_to_xml.c"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_20_20 == (MR_Integer) 0);
#line 343 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 343 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 343 "term_to_xml.m"
                        *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_20_20;
#line 343 "term_to_xml.m"
                      else
#line 343 "term_to_xml.m"
                        {
#line 343 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__TypeInfo_50_50 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];

#line 343 "term_to_xml.m"
                          {
#line 343 "term_to_xml.m"
                            mercury__builtin__compare_3_p_0(mercury__term_to_xml__TypeInfo_50_50, mercury__term_to_xml__HeadVar__1_1, ((MR_Box) (mercury__term_to_xml__V_51_51)), ((MR_Box) (mercury__term_to_xml__V_19_19)));
#line 343 "term_to_xml.m"
                            return;
                          }
#line 343 "term_to_xml.m"
                        }
#line 343 "term_to_xml.m"
                    }
#line 343 "term_to_xml.m"
                  else
#line 343 "term_to_xml.m"
                    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8181 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
                    else
#line 8185 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
            }
#line 343 "term_to_xml.m"
          else
#line 343 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 343 "term_to_xml.m"
              {
#line 343 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "term_to_xml.m"
                if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8200 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
                else
#line 343 "term_to_xml.m"
                  if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8206 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
                  else
#line 343 "term_to_xml.m"
                    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8212 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
                    else
#line 343 "term_to_xml.m"
                      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 343 "term_to_xml.m"
                        {
#line 343 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "term_to_xml.m"
                          {
#line 343 "term_to_xml.m"
                            mercury__type_desc____Compare____pseudo_type_desc_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__V_53_53, mercury__term_to_xml__V_44_44);
#line 343 "term_to_xml.m"
                            return;
                          }
#line 343 "term_to_xml.m"
                        }
#line 343 "term_to_xml.m"
                      else
#line 8234 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
              }
#line 343 "term_to_xml.m"
            else
#line 343 "term_to_xml.m"
              {
#line 343 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 343 "term_to_xml.m"
                if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8247 "term_to_xml.c"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
                else
#line 343 "term_to_xml.m"
                  if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8253 "term_to_xml.c"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
                  else
#line 343 "term_to_xml.m"
                    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8259 "term_to_xml.c"
                      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "term_to_xml.m"
                    else
#line 343 "term_to_xml.m"
                      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8265 "term_to_xml.c"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "term_to_xml.m"
                      else
#line 343 "term_to_xml.m"
                        {
#line 343 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));

#line 343 "term_to_xml.m"
                          {
#line 343 "term_to_xml.m"
                            mercury__type_desc____Compare____type_desc_0_0(mercury__term_to_xml__HeadVar__1_1, mercury__term_to_xml__V_54_54, mercury__term_to_xml__V_33_33);
#line 343 "term_to_xml.m"
                            return;
                          }
#line 343 "term_to_xml.m"
                        }
#line 343 "term_to_xml.m"
              }
#line 343 "term_to_xml.m"
  }
#line 343 "term_to_xml.m"
}

#line 343 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____dtd_generation_result_0_0(
#line 343 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 343 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 343 "term_to_xml.m"
{
#line 343 "term_to_xml.m"
  {
#line 343 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 343 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_15 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 343 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_16 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 343 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_15 == mercury__term_to_xml__CastY_16);
#line 343 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 343 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 343 "term_to_xml.m"
    else
#line 343 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 343 "term_to_xml.m"
        {
#line 343 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastX_5 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 343 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__CastY_6 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 343 "term_to_xml.m"
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_6 == mercury__term_to_xml__CastX_5);
#line 343 "term_to_xml.m"
        }
#line 343 "term_to_xml.m"
      else
#line 343 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "term_to_xml.m"
          {
#line 343 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__CastX_3 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 343 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__CastY_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 343 "term_to_xml.m"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastY_4 == mercury__term_to_xml__CastX_3);
#line 343 "term_to_xml.m"
          }
#line 343 "term_to_xml.m"
        else
#line 343 "term_to_xml.m"
          if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 343 "term_to_xml.m"
            {
#line 343 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeInfo_17_17;
#line 343 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_9_9;
#line 343 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_10_10;

#line 343 "term_to_xml.m"
              mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 343 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 343 "term_to_xml.m"
                {
#line 343 "term_to_xml.m"
                  mercury__term_to_xml__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 343 "term_to_xml.m"
                  mercury__term_to_xml__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 8371 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_7_7, mercury__term_to_xml__V_9_9) == 0);
#line 343 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 343 "term_to_xml.m"
                    {
#line 8377 "term_to_xml.c"
                      mercury__term_to_xml__TypeInfo_17_17 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 8379 "term_to_xml.c"
                      {
#line 8381 "term_to_xml.c"
                        return mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_17_17, ((MR_Box) (mercury__term_to_xml__V_8_8)), ((MR_Box) (mercury__term_to_xml__V_10_10)));
                      }
#line 343 "term_to_xml.m"
                    }
#line 343 "term_to_xml.m"
                }
#line 343 "term_to_xml.m"
            }
#line 343 "term_to_xml.m"
          else
#line 343 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 343 "term_to_xml.m"
              {
#line 343 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_14_14;

#line 343 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 343 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 343 "term_to_xml.m"
                  {
#line 343 "term_to_xml.m"
                    mercury__term_to_xml__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 8409 "term_to_xml.c"
                    {
#line 8411 "term_to_xml.c"
                      return mercury__term_to_xml__succeeded = mercury__type_desc____Unify____pseudo_type_desc_0_0(mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_14_14);
                    }
#line 343 "term_to_xml.m"
                  }
#line 343 "term_to_xml.m"
              }
#line 343 "term_to_xml.m"
            else
#line 343 "term_to_xml.m"
              {
#line 343 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_12_12;

#line 343 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 343 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 343 "term_to_xml.m"
                  {
#line 343 "term_to_xml.m"
                    mercury__term_to_xml__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 8435 "term_to_xml.c"
                    {
#line 8437 "term_to_xml.c"
                      return mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__V_11_11, mercury__term_to_xml__V_12_12);
                    }
#line 343 "term_to_xml.m"
                  }
#line 343 "term_to_xml.m"
              }
#line 343 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 343 "term_to_xml.m"
  }
#line 343 "term_to_xml.m"
}

#line 127 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____doctype_0_0(
#line 127 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 127 "term_to_xml.m"
{
#line 127 "term_to_xml.m"
  {
#line 127 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 127 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_29 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 127 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_30 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 127 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_29 == mercury__term_to_xml__CastY_30);
#line 127 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 8475 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 127 "term_to_xml.m"
    else
#line 127 "term_to_xml.m"
      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 127 "term_to_xml.m"
        {
#line 127 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 127 "term_to_xml.m"
          if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 127 "term_to_xml.m"
            {
#line 127 "term_to_xml.m"
              MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 127 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__Res_7_42;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_35_35 ;
	S2 =  mercury__term_to_xml__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8510 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_42  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_42 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_42 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 127 "term_to_xml.m"
            }
#line 127 "term_to_xml.m"
          else
#line 127 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8545 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 127 "term_to_xml.m"
            else
#line 8549 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 127 "term_to_xml.m"
        }
#line 127 "term_to_xml.m"
      else
#line 127 "term_to_xml.m"
        if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 127 "term_to_xml.m"
          {
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 127 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8566 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 127 "term_to_xml.m"
            else
#line 127 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 127 "term_to_xml.m"
                {
#line 127 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 127 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 127 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_18_18;
#line 127 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__Res_7_47;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_37_37 ;
	S2 =  mercury__term_to_xml__V_16_16 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8598 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_47  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_47 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                    mercury__term_to_xml__V_18_18 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_47 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        mercury__term_to_xml__V_18_18 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 8627 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_18_18 == (MR_Integer) 0);
#line 127 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 127 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 127 "term_to_xml.m"
                    *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_18_18;
#line 127 "term_to_xml.m"
                  else
#line 127 "term_to_xml.m"
                    {
#line 127 "term_to_xml.m"
                      MR_Integer mercury__term_to_xml__Res_7_52;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_36_36 ;
	S2 =  mercury__term_to_xml__V_17_17 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8657 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_52  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_52 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                      else
#line 110 "private_builtin.opt"
                        {
#line 107 "private_builtin.opt"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_52 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                          if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                          else
#line 111 "private_builtin.opt"
                            *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                        }
#line 127 "term_to_xml.m"
                    }
#line 127 "term_to_xml.m"
                }
#line 127 "term_to_xml.m"
              else
#line 8692 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 127 "term_to_xml.m"
          }
#line 127 "term_to_xml.m"
        else
#line 127 "term_to_xml.m"
          {
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));

#line 127 "term_to_xml.m"
            if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8705 "term_to_xml.c"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 127 "term_to_xml.m"
            else
#line 127 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8711 "term_to_xml.c"
                *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 127 "term_to_xml.m"
              else
#line 127 "term_to_xml.m"
                {
#line 127 "term_to_xml.m"
                  MR_String mercury__term_to_xml__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 127 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__Res_7_57;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____doctype_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_38_38 ;
	S2 =  mercury__term_to_xml__V_28_28 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8737 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_57  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_57 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
                    *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_57 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 127 "term_to_xml.m"
                }
#line 127 "term_to_xml.m"
          }
#line 127 "term_to_xml.m"
  }
#line 127 "term_to_xml.m"
}

#line 127 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____doctype_0_0(
#line 127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 127 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 127 "term_to_xml.m"
{
#line 127 "term_to_xml.m"
  {
#line 127 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 127 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_11 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 127 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_12 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 127 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_11 == mercury__term_to_xml__CastY_12);
#line 127 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 127 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 127 "term_to_xml.m"
    else
#line 127 "term_to_xml.m"
      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 127 "term_to_xml.m"
        {
#line 127 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_4_4;

#line 127 "term_to_xml.m"
          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 127 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 127 "term_to_xml.m"
            {
#line 127 "term_to_xml.m"
              mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 8818 "term_to_xml.c"
              mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_4_4) == 0);
#line 127 "term_to_xml.m"
            }
#line 127 "term_to_xml.m"
        }
#line 127 "term_to_xml.m"
      else
#line 127 "term_to_xml.m"
        if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 127 "term_to_xml.m"
          {
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_7_7;
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_8_8;

#line 127 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 127 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 127 "term_to_xml.m"
              {
#line 127 "term_to_xml.m"
                mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "term_to_xml.m"
                mercury__term_to_xml__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 8849 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_5_5, mercury__term_to_xml__V_7_7) == 0);
#line 127 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 8853 "term_to_xml.c"
                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_6_6, mercury__term_to_xml__V_8_8) == 0);
#line 127 "term_to_xml.m"
              }
#line 127 "term_to_xml.m"
          }
#line 127 "term_to_xml.m"
        else
#line 127 "term_to_xml.m"
          {
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_10_10;

#line 127 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 127 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 127 "term_to_xml.m"
              {
#line 127 "term_to_xml.m"
                mercury__term_to_xml__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 8876 "term_to_xml.c"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, mercury__term_to_xml__V_10_10) == 0);
#line 127 "term_to_xml.m"
              }
#line 127 "term_to_xml.m"
          }
#line 127 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 127 "term_to_xml.m"
  }
#line 127 "term_to_xml.m"
}

#line 301 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____attr_source_0_0(
#line 301 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 301 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 301 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 301 "term_to_xml.m"
{
#line 301 "term_to_xml.m"
  {
#line 301 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 301 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar1_4 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 301 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Cast_HeadVar2_5 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 < mercury__term_to_xml__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__term_to_xml__succeeded)
#line 68 "private_builtin.opt"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Cast_HeadVar1_4 == mercury__term_to_xml__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 301 "term_to_xml.m"
  }
#line 301 "term_to_xml.m"
}

#line 301 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_source_0_0(
#line 301 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_1,
#line 301 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 301 "term_to_xml.m"
{
#line 8945 "term_to_xml.c"
  {
#line 8947 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__HeadVar__2_1 == mercury__term_to_xml__HeadVar__2_2);

#line 8950 "term_to_xml.c"
    return mercury__term_to_xml__succeeded;
#line 8952 "term_to_xml.c"
  }
#line 301 "term_to_xml.m"
}

#line 293 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____attr_from_source_0_0(
#line 293 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 293 "term_to_xml.m"
{
#line 293 "term_to_xml.m"
  {
#line 293 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 293 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 293 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 293 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 293 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 8981 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "term_to_xml.m"
    else
#line 293 "term_to_xml.m"
      {
#line 293 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_8_8;
#line 293 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__Res_7_18;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_from_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9015 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_18  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_18 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_18 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 9044 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 293 "term_to_xml.m"
        mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 293 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 293 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 293 "term_to_xml.m"
        else
#line 293 "term_to_xml.m"
          {
#line 293 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_13_13 = (MR_Integer) mercury__term_to_xml__V_5_5;
#line 293 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_14_14 = (MR_Integer) mercury__term_to_xml__V_7_7;

#line 66 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 < mercury__term_to_xml__V_14_14);
#line 69 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 68 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_13_13 == mercury__term_to_xml__V_14_14);
#line 74 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 293 "term_to_xml.m"
          }
#line 293 "term_to_xml.m"
      }
#line 293 "term_to_xml.m"
  }
#line 293 "term_to_xml.m"
}

#line 293 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_from_source_0_0(
#line 293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 293 "term_to_xml.m"
{
#line 293 "term_to_xml.m"
  {
#line 293 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 293 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 293 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 293 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_7 == mercury__term_to_xml__CastY_8);
#line 293 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 293 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 293 "term_to_xml.m"
    else
#line 293 "term_to_xml.m"
      {
#line 293 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 9129 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 293 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9133 "term_to_xml.c"
          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_4_4 == mercury__term_to_xml__V_6_6);
#line 293 "term_to_xml.m"
      }
#line 293 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 293 "term_to_xml.m"
  }
#line 293 "term_to_xml.m"
}

#line 121 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml____Compare____attr_0_0(
#line 121 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__1_1,
#line 121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3)
#line 121 "term_to_xml.m"
{
#line 121 "term_to_xml.m"
  {
#line 121 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 121 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_9 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;
#line 121 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_10 = (MR_Integer) mercury__term_to_xml__HeadVar__3_3;

#line 121 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_9 == mercury__term_to_xml__CastY_10);
#line 121 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 9168 "term_to_xml.c"
      *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "term_to_xml.m"
    else
#line 121 "term_to_xml.m"
      {
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_8_8;
#line 121 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__Res_7_16;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_4_4 ;
	S2 =  mercury__term_to_xml__V_6_6 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9202 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_16  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_16 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
          mercury__term_to_xml__V_8_8 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_16 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              mercury__term_to_xml__V_8_8 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 9231 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == (MR_Integer) 0);
#line 121 "term_to_xml.m"
        mercury__term_to_xml__succeeded = !(mercury__term_to_xml__succeeded);
#line 121 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 121 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__V_8_8;
#line 121 "term_to_xml.m"
        else
#line 121 "term_to_xml.m"
          {
#line 121 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Res_7_21;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml____Compare____attr_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_to_xml__V_5_5 ;
	S2 =  mercury__term_to_xml__V_7_7 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9261 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Res_7_21  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_21 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
            if (mercury__term_to_xml__succeeded)
#line 104 "private_builtin.opt"
              *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
            else
#line 110 "private_builtin.opt"
              {
#line 107 "private_builtin.opt"
                mercury__term_to_xml__succeeded = (mercury__term_to_xml__Res_7_21 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                if (mercury__term_to_xml__succeeded)
#line 109 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                else
#line 111 "private_builtin.opt"
                  *mercury__term_to_xml__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
              }
#line 121 "term_to_xml.m"
          }
#line 121 "term_to_xml.m"
      }
#line 121 "term_to_xml.m"
  }
#line 121 "term_to_xml.m"
}

#line 121 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml____Unify____attr_0_0(
#line 121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2)
#line 121 "term_to_xml.m"
{
#line 121 "term_to_xml.m"
  {
#line 121 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 121 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastX_7 = (MR_Integer) mercury__term_to_xml__HeadVar__1_1;
#line 121 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__CastY_8 = (MR_Integer) mercury__term_to_xml__HeadVar__2_2;

#line 121 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__CastX_7 == mercury__term_to_xml__CastY_8);
#line 121 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 121 "term_to_xml.m"
      mercury__term_to_xml__succeeded = MR_TRUE;
#line 121 "term_to_xml.m"
    else
#line 121 "term_to_xml.m"
      {
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));

#line 9336 "term_to_xml.c"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_3_3, mercury__term_to_xml__V_5_5) == 0);
#line 121 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 9340 "term_to_xml.c"
          mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_4_4, mercury__term_to_xml__V_6_6) == 0);
#line 121 "term_to_xml.m"
      }
#line 121 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 121 "term_to_xml.m"
  }
#line 121 "term_to_xml.m"
}

#line 1629 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__dtd_allowed_functors_regex_2_f_0(
#line 1629 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_4,
#line 1629 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5)
#line 1629 "term_to_xml.m"
{
#line 1632 "term_to_xml.m"
  {
#line 1632 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1632 "term_to_xml.m"
    MR_String mercury__term_to_xml__Regex_6;
#line 1632 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Elements_7;
#line 1632 "term_to_xml.m"
    MR_String mercury__term_to_xml__ElementsStr_12;
#line 1633 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;
#line 1633 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_9_9;
#line 1633 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10;
#line 1633 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11;
#line 1635 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_19_19;
#line 1635 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_14_14;

#line 1633 "term_to_xml.m"
    {
#line 1633 "term_to_xml.m"
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_4, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__Elements_7, &mercury__term_to_xml__V_8_8, &mercury__term_to_xml__V_9_9, &mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_11_11);
    }
#line 1634 "term_to_xml.m"
    {
#line 1634 "term_to_xml.m"
      mercury__term_to_xml__ElementsStr_12 = mercury__string__join_list_2_f_0((MR_String) "|", mercury__term_to_xml__Elements_7);
    }
#line 9393 "term_to_xml.c"
    mercury__term_to_xml__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__term_to_xml__TypeCtorInfo_19_19, mercury__term_to_xml__Elements_7, (MR_Integer) 0, &mercury__term_to_xml__V_14_14);
    }
#line 1635 "term_to_xml.m"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_14_14 > (MR_Integer) 1);
#line 1637 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1636 "term_to_xml.m"
      {
#line 1636 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_17_17;

#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__ElementsStr_12, (MR_String) ")", &mercury__term_to_xml__V_17_17);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "(", mercury__term_to_xml__V_17_17, &mercury__term_to_xml__Regex_6);
        }
#line 1636 "term_to_xml.m"
      }
#line 1637 "term_to_xml.m"
    else
#line 1638 "term_to_xml.m"
      mercury__term_to_xml__Regex_6 = mercury__term_to_xml__ElementsStr_12;
#line 1632 "term_to_xml.m"
    return mercury__term_to_xml__Regex_6;
#line 1632 "term_to_xml.m"
  }
#line 1629 "term_to_xml.m"
}

#line 1537 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_entries_10_p_0(
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_79,
#line 1537 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__4_4,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctorList_5,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArityList_6,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ArgTypeListList_7,
#line 1537 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttributeListList_8,
#line 1537 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1537 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1537 "term_to_xml.m"
{
#line 1545 "term_to_xml.m"
  while (MR_TRUE)
#line 1545 "term_to_xml.m"
    {
#line 1545 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1545 "term_to_xml.m"
      {
#line 1545 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;

#line 1545 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1545 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_10 = mercury__term_to_xml__STATE_VARIABLE_State_0_9;
#line 1545 "term_to_xml.m"
        else
#line 1548 "term_to_xml.m"
          {
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_80_80 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_81_81;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_82_82;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeInfo_83_83;
#line 1548 "term_to_xml.m"
            MR_String mercury__term_to_xml__Element_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)));
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Elements_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeFunctor_31;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeFunctors_32;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeArity_33;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__MaybeArities_34;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgTypeList_35;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgTypeLists_36;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__AttributeList_37;
#line 1548 "term_to_xml.m"
            MR_Word mercury__term_to_xml__AttributeLists_38;
#line 1548 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;
#line 1548 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_53_53;
#line 1548 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_55_55;
#line 1548 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_57;
#line 1548 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_75_75;
#line 1548 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_77_77;
#line 1550 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv0_MaybeFunctor_31;
#line 1552 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv1_MaybeArity_33;
#line 1554 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv2_ArgTypeList_35;
#line 1556 "term_to_xml.m"
            MR_Box mercury__term_to_xml__conv3_AttributeList_37;
#line 9526 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9528 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9530 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1563 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_39_39;
#line 9534 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1550 "term_to_xml.m"
            {
#line 1550 "term_to_xml.m"
              mercury__term_to_xml__conv0_MaybeFunctor_31 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
#line 1550 "term_to_xml.m"
            mercury__term_to_xml__MaybeFunctor_31 = ((MR_Word) mercury__term_to_xml__conv0_MaybeFunctor_31);
#line 1551 "term_to_xml.m"
            {
#line 1551 "term_to_xml.m"
              mercury__term_to_xml__MaybeFunctors_32 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_80_80, mercury__term_to_xml__MaybeFunctorList_5);
            }
#line 9549 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_81_81 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1552 "term_to_xml.m"
            {
#line 1552 "term_to_xml.m"
              mercury__term_to_xml__conv1_MaybeArity_33 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
#line 1552 "term_to_xml.m"
            mercury__term_to_xml__MaybeArity_33 = ((MR_Word) mercury__term_to_xml__conv1_MaybeArity_33);
#line 1553 "term_to_xml.m"
            {
#line 1553 "term_to_xml.m"
              mercury__term_to_xml__MaybeArities_34 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_81_81, mercury__term_to_xml__MaybeArityList_6);
            }
#line 9563 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_82_82 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 1554 "term_to_xml.m"
            {
#line 1554 "term_to_xml.m"
              mercury__term_to_xml__conv2_ArgTypeList_35 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
#line 1554 "term_to_xml.m"
            mercury__term_to_xml__ArgTypeList_35 = ((MR_Word) mercury__term_to_xml__conv2_ArgTypeList_35);
#line 1555 "term_to_xml.m"
            {
#line 1555 "term_to_xml.m"
              mercury__term_to_xml__ArgTypeLists_36 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_82_82, mercury__term_to_xml__ArgTypeListList_7);
            }
#line 9577 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_83_83 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
#line 1556 "term_to_xml.m"
            {
#line 1556 "term_to_xml.m"
              mercury__term_to_xml__conv3_AttributeList_37 = mercury__list__det_head_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
#line 1556 "term_to_xml.m"
            mercury__term_to_xml__AttributeList_37 = ((MR_Word) mercury__term_to_xml__conv3_AttributeList_37);
#line 1557 "term_to_xml.m"
            {
#line 1557 "term_to_xml.m"
              mercury__term_to_xml__AttributeLists_38 = mercury__list__det_tail_1_f_0(mercury__term_to_xml__TypeInfo_83_83, mercury__term_to_xml__AttributeListList_8);
            }
#line 9591 "term_to_xml.c"
            mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9593 "term_to_xml.c"
            {
#line 9595 "term_to_xml.c"
              mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!ELEMENT ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
            }
#line 9598 "term_to_xml.c"
            mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9600 "term_to_xml.c"
            {
#line 9602 "term_to_xml.c"
              mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__Element_24)), mercury__term_to_xml__STATE_VARIABLE_State_52_52, &mercury__term_to_xml__STATE_VARIABLE_State_53_53);
            }
#line 9605 "term_to_xml.c"
            mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9607 "term_to_xml.c"
            {
#line 9609 "term_to_xml.c"
              mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_53_53, &mercury__term_to_xml__STATE_VARIABLE_State_55_55);
            }
#line 1563 "term_to_xml.m"
            {
#line 1563 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_39_39);
            }
#line 1566 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1565 "term_to_xml.m"
              {
#line 9621 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9624 "term_to_xml.c"
                {
#line 9626 "term_to_xml.c"
                  mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(#PCDATA)>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                }
#line 1565 "term_to_xml.m"
              }
#line 1566 "term_to_xml.m"
            else
#line 1570 "term_to_xml.m"
              if ((mercury__term_to_xml__ArgTypeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "term_to_xml.m"
                {
#line 9637 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9640 "term_to_xml.c"
                  {
#line 9642 "term_to_xml.c"
                    mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "EMPTY>\n")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                  }
#line 1568 "term_to_xml.m"
                }
#line 1570 "term_to_xml.m"
              else
#line 1571 "term_to_xml.m"
                {
#line 1571 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__Head_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 0)));
#line 1571 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__Tail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgTypeList_35, (MR_Integer) 1)));
#line 1571 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__Braces_44;
#line 1571 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__AllowedFunctorsRegexs_46;
#line 1571 "term_to_xml.m"
                  MR_String mercury__term_to_xml__AllowedFunctorsRegex_47;
#line 1571 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_61_61;
#line 1571 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_63_63;
#line 1571 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_66_66;
#line 1571 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_68_68;
#line 1571 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_70_70;
#line 1585 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_45_45;
#line 9673 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1611 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__V_48_48;
#line 9677 "term_to_xml.c"
                  void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1575 "term_to_xml.m"
                  if ((mercury__term_to_xml__Tail_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1579 "term_to_xml.m"
                    {
#line 1577 "term_to_xml.m"
                      MR_Integer mercury__term_to_xml__V_58_58;
#line 1577 "term_to_xml.m"
                      MR_Integer mercury__term_to_xml__V_59_59;

#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_entries_10_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__Head_40 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 9706 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_58_58  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1577 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1577 "term_to_xml.m"
                        {
#line 1577 "term_to_xml.m"
                          mercury__term_to_xml__V_59_59 = (MR_Integer) 1;
#line 1577 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_58_58 > mercury__term_to_xml__V_59_59);
#line 1577 "term_to_xml.m"
                        }
#line 1579 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1578 "term_to_xml.m"
                        mercury__term_to_xml__Braces_44 = (MR_Integer) 0;
#line 1579 "term_to_xml.m"
                      else
#line 1580 "term_to_xml.m"
                        mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
#line 1579 "term_to_xml.m"
                    }
#line 1575 "term_to_xml.m"
                  else
#line 1574 "term_to_xml.m"
                    mercury__term_to_xml__Braces_44 = (MR_Integer) 1;
#line 1585 "term_to_xml.m"
                  {
#line 1585 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_45_45);
                  }
#line 1587 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1586 "term_to_xml.m"
                    {
#line 9749 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9752 "term_to_xml.c"
                      {
#line 9754 "term_to_xml.c"
                        mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_55_55, &mercury__term_to_xml__STATE_VARIABLE_State_61_61);
                      }
#line 1586 "term_to_xml.m"
                    }
#line 1587 "term_to_xml.m"
                  else
#line 1586 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_61_61 = mercury__term_to_xml__STATE_VARIABLE_State_55_55;
#line 1594 "term_to_xml.m"
                  if ((mercury__term_to_xml__Braces_44 == (MR_Integer) 0))
#line 1595 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_63_63 = mercury__term_to_xml__STATE_VARIABLE_State_61_61;
#line 1594 "term_to_xml.m"
                  else
#line 1592 "term_to_xml.m"
                    {
#line 9771 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9774 "term_to_xml.c"
                      {
#line 9776 "term_to_xml.c"
                        mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "(")), mercury__term_to_xml__STATE_VARIABLE_State_61_61, &mercury__term_to_xml__STATE_VARIABLE_State_63_63);
                      }
#line 1592 "term_to_xml.m"
                    }
#line 1598 "term_to_xml.m"
                  {
#line 1598 "term_to_xml.m"
                    mercury__term_to_xml__AllowedFunctorsRegexs_46 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__ArgTypeList_35);
                  }
#line 1601 "term_to_xml.m"
                  {
#line 1601 "term_to_xml.m"
                    mercury__term_to_xml__AllowedFunctorsRegex_47 = mercury__string__join_list_2_f_0((MR_String) ",", mercury__term_to_xml__AllowedFunctorsRegexs_46);
                  }
#line 9791 "term_to_xml.c"
                  mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9793 "term_to_xml.c"
                  {
#line 9795 "term_to_xml.c"
                    mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__AllowedFunctorsRegex_47)), mercury__term_to_xml__STATE_VARIABLE_State_63_63, &mercury__term_to_xml__STATE_VARIABLE_State_66_66);
                  }
#line 1607 "term_to_xml.m"
                  if ((mercury__term_to_xml__Braces_44 == (MR_Integer) 0))
#line 1608 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_68_68 = mercury__term_to_xml__STATE_VARIABLE_State_66_66;
#line 1607 "term_to_xml.m"
                  else
#line 1605 "term_to_xml.m"
                    {
#line 9806 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9809 "term_to_xml.c"
                      {
#line 9811 "term_to_xml.c"
                        mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ")")), mercury__term_to_xml__STATE_VARIABLE_State_66_66, &mercury__term_to_xml__STATE_VARIABLE_State_68_68);
                      }
#line 1605 "term_to_xml.m"
                    }
#line 1611 "term_to_xml.m"
                  {
#line 1611 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_3, &mercury__term_to_xml__V_48_48);
                  }
#line 1613 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1612 "term_to_xml.m"
                    {
#line 9825 "term_to_xml.c"
                      void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9828 "term_to_xml.c"
                      {
#line 9830 "term_to_xml.c"
                        mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "*)")), mercury__term_to_xml__STATE_VARIABLE_State_68_68, &mercury__term_to_xml__STATE_VARIABLE_State_70_70);
                      }
#line 1612 "term_to_xml.m"
                    }
#line 1613 "term_to_xml.m"
                  else
#line 1612 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_70_70 = mercury__term_to_xml__STATE_VARIABLE_State_68_68;
#line 9839 "term_to_xml.c"
                  mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9841 "term_to_xml.c"
                  {
#line 9843 "term_to_xml.c"
                    mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_70_70, &mercury__term_to_xml__STATE_VARIABLE_State_57_57);
                  }
#line 1571 "term_to_xml.m"
                }
#line 1620 "term_to_xml.m"
            {
#line 1620 "term_to_xml.m"
              mercury__term_to_xml__write_dtd_attlists_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_79, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Element_24, mercury__term_to_xml__AttributeList_37, mercury__term_to_xml__MaybeFunctor_31, mercury__term_to_xml__MaybeArity_33, mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__STATE_VARIABLE_State_57_57, &mercury__term_to_xml__STATE_VARIABLE_State_75_75);
            }
#line 9853 "term_to_xml.c"
            mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_79, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9855 "term_to_xml.c"
            {
#line 9857 "term_to_xml.c"
              mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_79), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_75_75, &mercury__term_to_xml__STATE_VARIABLE_State_77_77);
            }
#line 1623 "term_to_xml.m"
            /* direct tailcall eliminated */
#line 1623 "term_to_xml.m"
            {
#line 1623 "term_to_xml.m"
              MR_Word mercury__term_to_xml__HeadVar__4__tmp_copy_4 = mercury__term_to_xml__Elements_25;
#line 1623 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MaybeFunctorList__tmp_copy_5 = mercury__term_to_xml__MaybeFunctors_32;
#line 1623 "term_to_xml.m"
              MR_Word mercury__term_to_xml__MaybeArityList__tmp_copy_6 = mercury__term_to_xml__MaybeArities_34;
#line 1623 "term_to_xml.m"
              MR_Word mercury__term_to_xml__ArgTypeListList__tmp_copy_7 = mercury__term_to_xml__ArgTypeLists_36;
#line 1623 "term_to_xml.m"
              MR_Word mercury__term_to_xml__AttributeListList__tmp_copy_8 = mercury__term_to_xml__AttributeLists_38;
#line 1623 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_9 = mercury__term_to_xml__STATE_VARIABLE_State_77_77;

#line 1623 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_0_9 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_9;
#line 1623 "term_to_xml.m"
              mercury__term_to_xml__AttributeListList_8 = mercury__term_to_xml__AttributeListList__tmp_copy_8;
#line 1623 "term_to_xml.m"
              mercury__term_to_xml__ArgTypeListList_7 = mercury__term_to_xml__ArgTypeListList__tmp_copy_7;
#line 1623 "term_to_xml.m"
              mercury__term_to_xml__MaybeArityList_6 = mercury__term_to_xml__MaybeArityList__tmp_copy_6;
#line 1623 "term_to_xml.m"
              mercury__term_to_xml__MaybeFunctorList_5 = mercury__term_to_xml__MaybeFunctorList__tmp_copy_5;
#line 1623 "term_to_xml.m"
              mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__HeadVar__4__tmp_copy_4;
#line 1623 "term_to_xml.m"
            }
#line 1623 "term_to_xml.m"
            continue;
#line 1548 "term_to_xml.m"
          }
#line 1545 "term_to_xml.m"
      }
#line 1545 "term_to_xml.m"
      break;
#line 1545 "term_to_xml.m"
    }
#line 1537 "term_to_xml.m"
}

#line 1508 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlists_8_p_0(
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1508 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1508 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_12,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_13,
#line 1508 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1508 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1508 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1508 "term_to_xml.m"
{
#line 1514 "term_to_xml.m"
  {
#line 1514 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1514 "term_to_xml.m"
    {
#line 1514 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_55_44_32_56_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Element_10, mercury__term_to_xml__MaybeFunctor_12, mercury__term_to_xml__MaybeArity_13, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__AttrFromSources_11, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1514 "term_to_xml.m"
      return;
    }
#line 1514 "term_to_xml.m"
  }
#line 1508 "term_to_xml.m"
}

#line 1475 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_attlist_8_p_0(
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1475 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1475 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_11,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_12,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_13,
#line 1475 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__6_6,
#line 1475 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1475 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1475 "term_to_xml.m"
{
#line 1480 "term_to_xml.m"
  {
#line 1480 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1480 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 0)));
#line 1480 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Source_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__6_6, (MR_Integer) 1)));
#line 1480 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeValue_17;
#line 1480 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
#line 1480 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1480 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 1480 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 1480 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
#line 1480 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
#line 9989 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9991 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9993 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9995 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9997 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9999 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1484 "term_to_xml.m"
    if ((mercury__term_to_xml__Source_15 == (MR_Integer) 3))
#line 1489 "term_to_xml.m"
      if ((mercury__term_to_xml__MaybeArity_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1491 "term_to_xml.m"
        mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1489 "term_to_xml.m"
      else
#line 1487 "term_to_xml.m"
        {
#line 1487 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_12, (MR_Integer) 0)));
#line 1487 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_22_22;

#line 297 "string.opt"
          {
#line 297 "string.opt"
            mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_18, (MR_Integer) 10, &mercury__term_to_xml__V_22_22);
          }
#line 1488 "term_to_xml.m"
          {
#line 1488 "term_to_xml.m"
            mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1488 "term_to_xml.m"
          }
#line 1487 "term_to_xml.m"
        }
#line 1484 "term_to_xml.m"
    else
#line 1484 "term_to_xml.m"
      if ((mercury__term_to_xml__Source_15 == (MR_Integer) 1))
#line 1498 "term_to_xml.m"
        mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1484 "term_to_xml.m"
      else
#line 1484 "term_to_xml.m"
        if ((mercury__term_to_xml__Source_15 == (MR_Integer) 0))
#line 1483 "term_to_xml.m"
          mercury__term_to_xml__MaybeValue_17 = mercury__term_to_xml__MaybeFunctor_11;
#line 1484 "term_to_xml.m"
        else
#line 1494 "term_to_xml.m"
          {
#line 1494 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_21_21;

#line 1495 "term_to_xml.m"
            {
#line 1495 "term_to_xml.m"
              mercury__term_to_xml__V_21_21 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_13);
            }
#line 1495 "term_to_xml.m"
            {
#line 1495 "term_to_xml.m"
              mercury__term_to_xml__MaybeValue_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, 0) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1495 "term_to_xml.m"
            }
#line 1494 "term_to_xml.m"
          }
#line 10066 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10068 "term_to_xml.c"
    {
#line 10070 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<!ATTLIST ")), mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
    }
#line 10073 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10075 "term_to_xml.c"
    {
#line 10077 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_24_24, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
#line 10080 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10082 "term_to_xml.c"
    {
#line 10084 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 10087 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10089 "term_to_xml.c"
    {
#line 10091 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Name_14)), mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 10094 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10096 "term_to_xml.c"
    {
#line 10098 "term_to_xml.c"
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) " CDATA ")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
#line 1452 "term_to_xml.m"
    if ((mercury__term_to_xml__Source_15 == (MR_Integer) 3))
#line 1452 "term_to_xml.m"
      if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1466 "term_to_xml.m"
        {
#line 10107 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10110 "term_to_xml.c"
          {
#line 10112 "term_to_xml.c"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
          }
#line 1466 "term_to_xml.m"
        }
#line 1452 "term_to_xml.m"
      else
#line 1468 "term_to_xml.m"
        {
#line 1468 "term_to_xml.m"
          MR_String mercury__term_to_xml__Value_86 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1468 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_57_91;
#line 1468 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_58_92;
#line 10127 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10129 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10132 "term_to_xml.c"
          {
#line 10134 "term_to_xml.c"
            mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_57_91);
          }
#line 1470 "term_to_xml.m"
          {
#line 1470 "term_to_xml.m"
            mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_86, mercury__term_to_xml__STATE_VARIABLE_State_57_91, &mercury__term_to_xml__STATE_VARIABLE_State_58_92);
          }
#line 10142 "term_to_xml.c"
          mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10144 "term_to_xml.c"
          {
#line 10146 "term_to_xml.c"
            mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_58_92, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
          }
#line 1468 "term_to_xml.m"
        }
#line 1452 "term_to_xml.m"
    else
#line 1452 "term_to_xml.m"
      if ((mercury__term_to_xml__Source_15 == (MR_Integer) 1))
#line 1458 "term_to_xml.m"
        {
#line 10157 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10160 "term_to_xml.c"
          {
#line 10162 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
          }
#line 1458 "term_to_xml.m"
        }
#line 1452 "term_to_xml.m"
      else
#line 1452 "term_to_xml.m"
        if ((mercury__term_to_xml__Source_15 == (MR_Integer) 0))
#line 1452 "term_to_xml.m"
          if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "term_to_xml.m"
            {
#line 10175 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10178 "term_to_xml.c"
              {
#line 10180 "term_to_xml.c"
                mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#IMPLIED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
              }
#line 1452 "term_to_xml.m"
            }
#line 1452 "term_to_xml.m"
          else
#line 1454 "term_to_xml.m"
            {
#line 1454 "term_to_xml.m"
              MR_String mercury__term_to_xml__Value_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1454 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_52;
#line 1454 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_53;
#line 10195 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10197 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10200 "term_to_xml.c"
              {
#line 10202 "term_to_xml.c"
                mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_18_52);
              }
#line 1456 "term_to_xml.m"
              {
#line 1456 "term_to_xml.m"
                mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_47, mercury__term_to_xml__STATE_VARIABLE_State_18_52, &mercury__term_to_xml__STATE_VARIABLE_State_19_53);
              }
#line 10210 "term_to_xml.c"
              mercury__term_to_xml__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10212 "term_to_xml.c"
              {
#line 10214 "term_to_xml.c"
                mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_19_53, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
              }
#line 1454 "term_to_xml.m"
            }
#line 1452 "term_to_xml.m"
        else
#line 1452 "term_to_xml.m"
          if ((mercury__term_to_xml__MaybeValue_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "term_to_xml.m"
            {
#line 10225 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

#line 10228 "term_to_xml.c"
              {
#line 10230 "term_to_xml.c"
                mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#REQUIRED")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
              }
#line 1460 "term_to_xml.m"
            }
#line 1452 "term_to_xml.m"
          else
#line 1462 "term_to_xml.m"
            {
#line 1462 "term_to_xml.m"
              MR_String mercury__term_to_xml__Value_70 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeValue_17, (MR_Integer) 0)));
#line 1462 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_75;
#line 1462 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_42_76;
#line 10245 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10247 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 10250 "term_to_xml.c"
              {
#line 10252 "term_to_xml.c"
                mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "#FIXED \"")), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_41_75);
              }
#line 1464 "term_to_xml.m"
              {
#line 1464 "term_to_xml.m"
                mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_70, mercury__term_to_xml__STATE_VARIABLE_State_41_75, &mercury__term_to_xml__STATE_VARIABLE_State_42_76);
              }
#line 10260 "term_to_xml.c"
              mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10262 "term_to_xml.c"
              {
#line 10264 "term_to_xml.c"
                mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_42_76, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
              }
#line 1462 "term_to_xml.m"
            }
#line 10269 "term_to_xml.c"
    mercury__term_to_xml__func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10271 "term_to_xml.c"
    {
#line 10273 "term_to_xml.c"
      mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 10275 "term_to_xml.c"
      return;
    }
#line 1480 "term_to_xml.m"
  }
#line 1475 "term_to_xml.m"
}

#line 1429 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_dtd_types_6_p_0(
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_29,
#line 1429 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_2,
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__3_3,
#line 1429 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AlreadyDone_4,
#line 1429 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
#line 1429 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6)
#line 1429 "term_to_xml.m"
{
#line 1433 "term_to_xml.m"
  while (MR_TRUE)
#line 1433 "term_to_xml.m"
    {
#line 1433 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1433 "term_to_xml.m"
      {
#line 1433 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;

#line 1433 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1433 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_6 = mercury__term_to_xml__STATE_VARIABLE_State_0_5;
#line 1433 "term_to_xml.m"
        else
#line 1435 "term_to_xml.m"
          {
#line 1435 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 0)));
#line 1435 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDescs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__3_3, (MR_Integer) 1)));
#line 1436 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_30_30 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1436 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_31_31 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 39 "map.opt"
            MR_Box mercury__term_to_xml__conv0_V_19_19;

#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_30_30, mercury__term_to_xml__TypeCtorInfo_31_31, mercury__term_to_xml__AlreadyDone_4, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_V_19_19);
            }
#line 39 "map.opt"
            if (mercury__term_to_xml__succeeded)
#line 39 "map.opt"
              mercury__term_to_xml__succeeded = MR_TRUE;
#line 1438 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1437 "term_to_xml.m"
              {
#line 1437 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1437 "term_to_xml.m"
                {
#line 1437 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__TypeDescs_16;

#line 1437 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 1437 "term_to_xml.m"
                }
#line 1437 "term_to_xml.m"
                continue;
#line 1437 "term_to_xml.m"
              }
#line 1438 "term_to_xml.m"
            else
#line 1440 "term_to_xml.m"
              {
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_32_32;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_33_33;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_38_67;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_9_73;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeInfo_10_74;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ChildArgTypes_20;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__NewAlreadyDone_21;
#line 1440 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_27_27;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__Elements_44;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__MaybeFunctors_45;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__MaybeArities_46;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ArgPseudoTypeLists_47;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__AttributeLists_48;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ArgTypeLists_49;
#line 1440 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_53;
#line 1440 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_54_54;
#line 1440 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_55;
#line 1440 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_57;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__RevXss_5_70;
#line 1440 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_6_71;
#line 10406 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 10408 "term_to_xml.c"
                void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1525 "term_to_xml.m"
                {
#line 1525 "term_to_xml.m"
                  mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_44, &mercury__term_to_xml__MaybeFunctors_45, &mercury__term_to_xml__MaybeArities_46, &mercury__term_to_xml__ArgPseudoTypeLists_47, &mercury__term_to_xml__AttributeLists_48);
                }
#line 1528 "term_to_xml.m"
                {
#line 1528 "term_to_xml.m"
                  mercury__term_to_xml__ArgTypeLists_49 = mercury__term_to_xml__map__ho8_2_f_in__list_0(mercury__term_to_xml__ArgPseudoTypeLists_47);
                }
#line 10421 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_38_67 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10423 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_9_73 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10425 "term_to_xml.c"
                mercury__term_to_xml__TypeInfo_10_74 = (MR_Word) &mercury__term_to_xml_scalar_common_1[4];
#line 150 "list.opt"
                {
#line 150 "list.opt"
                  mercury__list__reverse_2_p_0(mercury__term_to_xml__TypeInfo_10_74, mercury__term_to_xml__ArgTypeLists_49, &mercury__term_to_xml__RevXss_5_70);
                }
#line 151 "list.opt"
                mercury__term_to_xml__V_6_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "list.opt"
                {
#line 152 "list.opt"
                  mercury__list__condense_2_3_p_0(mercury__term_to_xml__TypeCtorInfo_38_67, mercury__term_to_xml__RevXss_5_70, mercury__term_to_xml__V_6_71, &mercury__term_to_xml__ChildArgTypes_20);
                }
#line 10439 "term_to_xml.c"
                mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10441 "term_to_xml.c"
                {
#line 10443 "term_to_xml.c"
                  mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!-- Elements for functors of type \"")), mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_23_53);
                }
#line 1532 "term_to_xml.m"
                {
#line 1532 "term_to_xml.m"
                  mercury__term_to_xml__V_54_54 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_15);
                }
#line 1532 "term_to_xml.m"
                {
#line 1532 "term_to_xml.m"
                  mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__V_54_54, mercury__term_to_xml__STATE_VARIABLE_State_23_53, &mercury__term_to_xml__STATE_VARIABLE_State_25_55);
                }
#line 10456 "term_to_xml.c"
                mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10458 "term_to_xml.c"
                {
#line 10460 "term_to_xml.c"
                  mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_29), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\" -->\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_25_55, &mercury__term_to_xml__STATE_VARIABLE_State_27_57);
                }
#line 1534 "term_to_xml.m"
                {
#line 1534 "term_to_xml.m"
                  mercury__term_to_xml__write_dtd_entries_10_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_29, mercury__term_to_xml__Stream_1, mercury__term_to_xml__MakeElement_2, mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__Elements_44, mercury__term_to_xml__MaybeFunctors_45, mercury__term_to_xml__MaybeArities_46, mercury__term_to_xml__ArgTypeLists_49, mercury__term_to_xml__AttributeLists_48, mercury__term_to_xml__STATE_VARIABLE_State_27_57, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
                }
#line 1441 "term_to_xml.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 10470 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 10472 "term_to_xml.c"
                mercury__term_to_xml__TypeCtorInfo_33_33 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 117 "map.opt"
                {
#line 117 "map.opt"
                  mercury__tree234__set_4_p_0(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__TypeCtorInfo_33_33, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__AlreadyDone_4, &mercury__term_to_xml__NewAlreadyDone_21);
                }
#line 46 "list.opt"
                {
#line 46 "list.opt"
                  mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_32_32, mercury__term_to_xml__ChildArgTypes_20, mercury__term_to_xml__TypeDescs_16, &mercury__term_to_xml__V_27_27);
                }
#line 1442 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1442 "term_to_xml.m"
                {
#line 1442 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__3__tmp_copy_3 = mercury__term_to_xml__V_27_27;
#line 1442 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__AlreadyDone__tmp_copy_4 = mercury__term_to_xml__NewAlreadyDone_21;
#line 1442 "term_to_xml.m"
                  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;

#line 1442 "term_to_xml.m"
                  mercury__term_to_xml__STATE_VARIABLE_State_0_5 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_5;
#line 1442 "term_to_xml.m"
                  mercury__term_to_xml__AlreadyDone_4 = mercury__term_to_xml__AlreadyDone__tmp_copy_4;
#line 1442 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__3_3 = mercury__term_to_xml__HeadVar__3__tmp_copy_3;
#line 1442 "term_to_xml.m"
                }
#line 1442 "term_to_xml.m"
                continue;
#line 1440 "term_to_xml.m"
              }
#line 1435 "term_to_xml.m"
          }
#line 1433 "term_to_xml.m"
      }
#line 1433 "term_to_xml.m"
      break;
#line 1433 "term_to_xml.m"
    }
#line 1429 "term_to_xml.m"
}

#line 1371 "term_to_xml.m"
static MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_1,
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Done_3,
#line 1371 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementsSoFar_4)
#line 1371 "term_to_xml.m"
{
#line 1376 "term_to_xml.m"
  while (MR_TRUE)
#line 1376 "term_to_xml.m"
    {
#line 1376 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1376 "term_to_xml.m"
      {
#line 1376 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded;
#line 1376 "term_to_xml.m"
        MR_Word mercury__term_to_xml__HeadVar__5_5;

#line 1376 "term_to_xml.m"
        if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1376 "term_to_xml.m"
          mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "term_to_xml.m"
        else
#line 1378 "term_to_xml.m"
          {
#line 1378 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDesc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1378 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDescs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1420 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeDesc_15;

#line 1380 "term_to_xml.m"
            {
#line 1380 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__type_desc__ground_pseudo_type_desc_to_type_desc_1_f_0(mercury__term_to_xml__PseudoTypeDesc_10, &mercury__term_to_xml__TypeDesc_15);
            }
#line 1420 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1417 "term_to_xml.m"
              {
#line 1027 "term_to_xml.m"
                {
#line 1027 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_16_16;
#line 1027 "term_to_xml.m"
                  MR_Integer mercury__term_to_xml__V_51_51;

#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_15 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 10592 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_16_16  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
                    {
#line 1029 "term_to_xml.m"
                      mercury__term_to_xml__V_51_51 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_16_16 > mercury__term_to_xml__V_51_51);
#line 1027 "term_to_xml.m"
                    }
#line 1027 "term_to_xml.m"
                }
#line 1386 "term_to_xml.m"
                if (!(mercury__term_to_xml__succeeded))
#line 1386 "term_to_xml.m"
                  {
#line 1033 "term_to_xml.m"
                    {
#line 1033 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__PseudoTypeDesc_54;
#line 1033 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__TypeCtor_55;
#line 1033 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__ArgPseudoTypes_56;
#line 1033 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_57_57;
#line 1033 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_58_58;
#line 1033 "term_to_xml.m"
                      MR_String mercury__term_to_xml__V_59_59;
#line 1036 "term_to_xml.m"
                      MR_Word mercury__term_to_xml__V_17_17;
#line 142 "type_desc.opt"
                      MR_String mercury__term_to_xml___ModuleName_5_62;
#line 142 "type_desc.opt"
                      MR_Integer mercury__term_to_xml___Arity_6_63;
#line 142 "type_desc.opt"
                      MR_String mercury__term_to_xml___Name_5_66;
#line 142 "type_desc.opt"
                      MR_Integer mercury__term_to_xml___Arity_6_67;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_15 ;
		{
#line 53 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 10656 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_54  = PseudoTypeDesc;
#line 53 "type_desc.opt"
}
#line 88 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_54 ;
		{
#line 88 "type_desc.opt"
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
#line 10688 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_55  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_56  = ArgPseudoTypeInfos;
#line 88 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1033 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                        {
#line 1036 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_56)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "term_to_xml.m"
                          if (mercury__term_to_xml__succeeded)
#line 1036 "term_to_xml.m"
                            {
#line 1036 "term_to_xml.m"
                              mercury__term_to_xml__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_56, (MR_Integer) 0)));
#line 1036 "term_to_xml.m"
                              mercury__term_to_xml__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_56, (MR_Integer) 1)));
#line 1036 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1033 "term_to_xml.m"
                              if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                                {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_55 ;
		{
#line 142 "type_desc.opt"
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
#line 10760 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml___ModuleName_5_62  = TypeCtorModuleName;
	 mercury__term_to_xml__V_58_58  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_63  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1037 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_58_58, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                                  if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                                    {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_55 ;
		{
#line 142 "type_desc.opt"
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
#line 10816 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_59_59  = TypeCtorModuleName;
	 mercury__term_to_xml___Name_5_66  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_67  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1038 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_59_59, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                                    }
#line 1033 "term_to_xml.m"
                                }
#line 1036 "term_to_xml.m"
                            }
#line 1033 "term_to_xml.m"
                        }
#line 1033 "term_to_xml.m"
                    }
#line 1386 "term_to_xml.m"
                    if (!(mercury__term_to_xml__succeeded))
#line 741 "term_to_xml.m"
                      {
#line 739 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__TypeCtorInfo_9_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 739 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_78_78;
#line 56 "type_desc.opt"
                        MR_String mercury__term_to_xml__V_70_70;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_74 ;
		{
#line 56 "type_desc.opt"
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
#line 10874 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_78_78  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 739 "term_to_xml.m"
                        {
#line 739 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_78_78);
                        }
#line 741 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 740 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = MR_TRUE;
#line 741 "term_to_xml.m"
                        else
#line 743 "term_to_xml.m"
                          {
#line 741 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_10_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 741 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_79_79;
#line 56 "type_desc.opt"
                            MR_Char mercury__term_to_xml__V_71_71;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_75 ;
		{
#line 56 "type_desc.opt"
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
#line 10927 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_79_79  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 741 "term_to_xml.m"
                            {
#line 741 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_79_79);
                            }
#line 743 "term_to_xml.m"
                            if (mercury__term_to_xml__succeeded)
#line 742 "term_to_xml.m"
                              mercury__term_to_xml__succeeded = MR_TRUE;
#line 743 "term_to_xml.m"
                            else
#line 745 "term_to_xml.m"
                              {
#line 743 "term_to_xml.m"
                                MR_Word mercury__term_to_xml__TypeCtorInfo_11_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 743 "term_to_xml.m"
                                MR_Word mercury__term_to_xml__V_80_80;
#line 56 "type_desc.opt"
                                MR_Integer mercury__term_to_xml__V_72_72;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_76 ;
		{
#line 56 "type_desc.opt"
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
#line 10980 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_80_80  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 743 "term_to_xml.m"
                                {
#line 743 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_80_80);
                                }
#line 745 "term_to_xml.m"
                                if (mercury__term_to_xml__succeeded)
#line 744 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = MR_TRUE;
#line 745 "term_to_xml.m"
                                else
#line 746 "term_to_xml.m"
                                  {
#line 746 "term_to_xml.m"
                                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 746 "term_to_xml.m"
                                    MR_Word mercury__term_to_xml__V_81_81;
#line 56 "type_desc.opt"
                                    MR_Float mercury__term_to_xml__V_73_73;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_for_types_4_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_77 ;
		{
#line 56 "type_desc.opt"
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
#line 11033 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_81_81  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 746 "term_to_xml.m"
                                    {
#line 746 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_15, mercury__term_to_xml__V_81_81);
                                    }
#line 746 "term_to_xml.m"
                                  }
#line 745 "term_to_xml.m"
                              }
#line 743 "term_to_xml.m"
                          }
#line 741 "term_to_xml.m"
                      }
#line 1386 "term_to_xml.m"
                  }
#line 1417 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1395 "term_to_xml.m"
                  {
#line 1392 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_39_39 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1392 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_40_40 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 39 "map.opt"
                    MR_Box mercury__term_to_xml__conv0_V_5_88;

#line 39 "map.opt"
                    {
#line 39 "map.opt"
                      mercury__term_to_xml__succeeded = mercury__tree234__search_3_p_0(mercury__term_to_xml__TypeCtorInfo_39_39, mercury__term_to_xml__TypeCtorInfo_40_40, mercury__term_to_xml__Done_3, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__conv0_V_5_88);
                    }
#line 39 "map.opt"
                    if (mercury__term_to_xml__succeeded)
#line 39 "map.opt"
                      mercury__term_to_xml__succeeded = MR_TRUE;
#line 1395 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1393 "term_to_xml.m"
                      {
#line 1393 "term_to_xml.m"
                        /* direct tailcall eliminated */
#line 1393 "term_to_xml.m"
                        {
#line 1393 "term_to_xml.m"
                          MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__PseudoTypeDescs_11;

#line 1393 "term_to_xml.m"
                          mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1393 "term_to_xml.m"
                        }
#line 1393 "term_to_xml.m"
                        continue;
#line 1393 "term_to_xml.m"
                      }
#line 1395 "term_to_xml.m"
                    else
#line 1397 "term_to_xml.m"
                      {
#line 1397 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__TypeCtorInfo_44_44;
#line 1397 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__Elements_19;
#line 1397 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__ArgLists_22;
#line 1397 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__DupElements_24;
#line 1396 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_20_20;
#line 1396 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_21_21;
#line 1396 "term_to_xml.m"
                        MR_Word mercury__term_to_xml__V_23_23;

#line 1396 "term_to_xml.m"
                        {
#line 1396 "term_to_xml.m"
                          mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_1, mercury__term_to_xml__TypeDesc_15, &mercury__term_to_xml__Elements_19, &mercury__term_to_xml__V_20_20, &mercury__term_to_xml__V_21_21, &mercury__term_to_xml__ArgLists_22, &mercury__term_to_xml__V_23_23);
                        }
#line 11118 "term_to_xml.c"
                        mercury__term_to_xml__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1398 "term_to_xml.m"
                        {
#line 1398 "term_to_xml.m"
                          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_95_95_91_50_93_95_48_3_p_in__list_0(mercury__term_to_xml__ElementsSoFar_4, mercury__term_to_xml__Elements_19, &mercury__term_to_xml__DupElements_24);
                        }
#line 1405 "term_to_xml.m"
                        if ((mercury__term_to_xml__DupElements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1406 "term_to_xml.m"
                          {
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_46_46 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0;
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_47_47;
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_48_48;
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewPseudoTypeDescs_29;
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeDescList_30;
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewElementsSoFar_31;
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__NewDone_32;
#line 1406 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_34_34;
#line 1406 "term_to_xml.m"
                            MR_Integer mercury__term_to_xml__V_35_35;

#line 1407 "term_to_xml.m"
                            {
#line 1407 "term_to_xml.m"
                              mercury__term_to_xml__V_34_34 = mercury__list__condense_1_f_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__ArgLists_22);
                            }
#line 1407 "term_to_xml.m"
                            {
#line 1407 "term_to_xml.m"
                              mercury__list__merge_and_remove_dups_3_p_0(mercury__term_to_xml__TypeCtorInfo_46_46, mercury__term_to_xml__V_34_34, mercury__term_to_xml__PseudoTypeDescs_11, &mercury__term_to_xml__NewPseudoTypeDescs_29);
                            }
#line 78 "list.opt"
                            {
#line 78 "list.opt"
                              mercury__list__length_2_3_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__Elements_19, (MR_Integer) 0, &mercury__term_to_xml__V_35_35);
                            }
#line 11163 "term_to_xml.c"
                            mercury__term_to_xml__TypeCtorInfo_47_47 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1409 "term_to_xml.m"
                            {
#line 1409 "term_to_xml.m"
                              mercury__list__duplicate_3_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__V_35_35, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), &mercury__term_to_xml__TypeDescList_30);
                            }
#line 1410 "term_to_xml.m"
                            {
#line 1410 "term_to_xml.m"
                              mercury__map__det_insert_from_corresponding_lists_4_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__Elements_19, mercury__term_to_xml__TypeDescList_30, mercury__term_to_xml__ElementsSoFar_4, &mercury__term_to_xml__NewElementsSoFar_31);
                            }
#line 1412 "term_to_xml.m"
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 11177 "term_to_xml.c"
                            mercury__term_to_xml__TypeCtorInfo_48_48 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1412 "term_to_xml.m"
                            {
#line 1412 "term_to_xml.m"
                              mercury__map__det_insert_4_p_0(mercury__term_to_xml__TypeCtorInfo_47_47, mercury__term_to_xml__TypeCtorInfo_48_48, ((MR_Box) (mercury__term_to_xml__TypeDesc_15)), ((MR_Box) ((MR_Integer) 0)), mercury__term_to_xml__Done_3, &mercury__term_to_xml__NewDone_32);
                            }
#line 1413 "term_to_xml.m"
                            /* direct tailcall eliminated */
#line 1413 "term_to_xml.m"
                            {
#line 1413 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__NewPseudoTypeDescs_29;
#line 1413 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__Done__tmp_copy_3 = mercury__term_to_xml__NewDone_32;
#line 1413 "term_to_xml.m"
                              MR_Word mercury__term_to_xml__ElementsSoFar__tmp_copy_4 = mercury__term_to_xml__NewElementsSoFar_31;

#line 1413 "term_to_xml.m"
                              mercury__term_to_xml__ElementsSoFar_4 = mercury__term_to_xml__ElementsSoFar__tmp_copy_4;
#line 1413 "term_to_xml.m"
                              mercury__term_to_xml__Done_3 = mercury__term_to_xml__Done__tmp_copy_3;
#line 1413 "term_to_xml.m"
                              mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1413 "term_to_xml.m"
                            }
#line 1413 "term_to_xml.m"
                            continue;
#line 1406 "term_to_xml.m"
                          }
#line 1405 "term_to_xml.m"
                        else
#line 1401 "term_to_xml.m"
                          {
#line 1401 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__TypeCtorInfo_45_45 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 1401 "term_to_xml.m"
                            MR_String mercury__term_to_xml__DupElement_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 0)));
#line 1401 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__DupTypeDesc_27;
#line 1401 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__DupTypes_28;
#line 1401 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_37_37;
#line 1401 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_38_38;
#line 1401 "term_to_xml.m"
                            MR_Word mercury__term_to_xml__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupElements_24, (MR_Integer) 1)));
#line 1402 "term_to_xml.m"
                            MR_Box mercury__term_to_xml__conv1_DupTypeDesc_27;

#line 1402 "term_to_xml.m"
                            {
#line 1402 "term_to_xml.m"
                              mercury__map__lookup_3_p_0(mercury__term_to_xml__TypeCtorInfo_44_44, mercury__term_to_xml__TypeCtorInfo_45_45, mercury__term_to_xml__ElementsSoFar_4, ((MR_Box) (mercury__term_to_xml__DupElement_25)), &mercury__term_to_xml__conv1_DupTypeDesc_27);
                            }
#line 1402 "term_to_xml.m"
                            mercury__term_to_xml__DupTypeDesc_27 = ((MR_Word) mercury__term_to_xml__conv1_DupTypeDesc_27);
#line 1403 "term_to_xml.m"
                            mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1403 "term_to_xml.m"
                            {
#line 1403 "term_to_xml.m"
                              mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__DupTypeDesc_27));
#line 1403 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 1) = ((MR_Box) (mercury__term_to_xml__V_38_38));
#line 1403 "term_to_xml.m"
                            }
#line 1403 "term_to_xml.m"
                            {
#line 1403 "term_to_xml.m"
                              mercury__term_to_xml__DupTypes_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
#line 1403 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__DupTypes_28, 1) = ((MR_Box) (mercury__term_to_xml__V_37_37));
#line 1403 "term_to_xml.m"
                            }
#line 1404 "term_to_xml.m"
                            {
#line 1404 "term_to_xml.m"
                              mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__DupElement_25));
#line 1404 "term_to_xml.m"
                              MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, 1) = ((MR_Box) (mercury__term_to_xml__DupTypes_28));
#line 1404 "term_to_xml.m"
                            }
#line 1401 "term_to_xml.m"
                          }
#line 1397 "term_to_xml.m"
                      }
#line 1395 "term_to_xml.m"
                  }
#line 1417 "term_to_xml.m"
                else
#line 1418 "term_to_xml.m"
                  {
#line 1418 "term_to_xml.m"
                    mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "term_to_xml.m"
                    MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_15));
#line 1418 "term_to_xml.m"
                  }
#line 1417 "term_to_xml.m"
              }
#line 1420 "term_to_xml.m"
            else
#line 1421 "term_to_xml.m"
              {
#line 1421 "term_to_xml.m"
                mercury__term_to_xml__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "term_to_xml.m"
                MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__5_5, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_10));
#line 1421 "term_to_xml.m"
              }
#line 1378 "term_to_xml.m"
          }
#line 1376 "term_to_xml.m"
        return mercury__term_to_xml__HeadVar__5_5;
#line 1376 "term_to_xml.m"
      }
#line 1376 "term_to_xml.m"
      break;
#line 1376 "term_to_xml.m"
    }
#line 1371 "term_to_xml.m"
}

#line 1293 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_char_4_p_0(
#line 1293 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 1293 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1293 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_6,
#line 1293 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1293 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1293 "term_to_xml.m"
{
#line 1299 "term_to_xml.m"
  {
#line 1299 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1299 "term_to_xml.m"
    MR_String mercury__term_to_xml__Str_8;

#line 1305 "term_to_xml.m"
    if ((mercury__term_to_xml__Chr_6 == (MR_Char) 34))
#line 1309 "term_to_xml.m"
      {
#line 1309 "term_to_xml.m"
        mercury__term_to_xml__Str_8 = (MR_String) "&quot;";
#line 1309 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 1309 "term_to_xml.m"
      }
#line 1305 "term_to_xml.m"
    else
#line 1305 "term_to_xml.m"
      if ((mercury__term_to_xml__Chr_6 == (MR_Char) 38))
#line 1307 "term_to_xml.m"
        {
#line 1307 "term_to_xml.m"
          mercury__term_to_xml__Str_8 = (MR_String) "&amp;";
#line 1307 "term_to_xml.m"
          mercury__term_to_xml__succeeded = MR_TRUE;
#line 1307 "term_to_xml.m"
        }
#line 1305 "term_to_xml.m"
      else
#line 1305 "term_to_xml.m"
        if ((mercury__term_to_xml__Chr_6 == (MR_Char) 39))
#line 1308 "term_to_xml.m"
          {
#line 1308 "term_to_xml.m"
            mercury__term_to_xml__Str_8 = (MR_String) "&apos;";
#line 1308 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 1308 "term_to_xml.m"
          }
#line 1305 "term_to_xml.m"
        else
#line 1305 "term_to_xml.m"
          if ((mercury__term_to_xml__Chr_6 == (MR_Char) 60))
#line 1305 "term_to_xml.m"
            {
#line 1305 "term_to_xml.m"
              mercury__term_to_xml__Str_8 = (MR_String) "&lt;";
#line 1305 "term_to_xml.m"
              mercury__term_to_xml__succeeded = MR_TRUE;
#line 1305 "term_to_xml.m"
            }
#line 1305 "term_to_xml.m"
          else
#line 1305 "term_to_xml.m"
            if ((mercury__term_to_xml__Chr_6 == (MR_Char) 62))
#line 1306 "term_to_xml.m"
              {
#line 1306 "term_to_xml.m"
                mercury__term_to_xml__Str_8 = (MR_String) "&gt;";
#line 1306 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 1306 "term_to_xml.m"
              }
#line 1305 "term_to_xml.m"
            else
#line 1305 "term_to_xml.m"
              mercury__term_to_xml__succeeded = MR_FALSE;
#line 1299 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 11394 "term_to_xml.c"
      {
#line 11396 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11399 "term_to_xml.c"
        {
#line 11401 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Str_8)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11403 "term_to_xml.c"
          return;
        }
#line 11406 "term_to_xml.c"
      }
#line 1299 "term_to_xml.m"
    else
#line 1300 "term_to_xml.m"
      {
#line 1300 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_12_12;
#line 1300 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_5_21;
#line 1300 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11418 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 288 "string.opt"
        {
#line 288 "string.opt"
          mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_6));
#line 288 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 288 "string.opt"
        }
#line 290 "string.opt"
        {
#line 290 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__term_to_xml__V_12_12, mercury__term_to_xml__V_5_21);
        }
#line 11436 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11438 "term_to_xml.c"
        {
#line 11440 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_14), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__V_12_12)), mercury__term_to_xml__STATE_VARIABLE_State_0_9, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11442 "term_to_xml.c"
          return;
        }
#line 1300 "term_to_xml.m"
      }
#line 1299 "term_to_xml.m"
  }
#line 1293 "term_to_xml.m"
}

#line 1287 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_xml_escaped_string_4_p_0(
#line 1287 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_12,
#line 1287 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1287 "term_to_xml.m"
  MR_String mercury__term_to_xml__Str_6,
#line 1287 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1287 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1287 "term_to_xml.m"
{
#line 1290 "term_to_xml.m"
  {
#line 1290 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1290 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Length_8_22;
#line 1290 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__End_13_32;
#line 1290 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_33;

#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 11491 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Length_8_22  = Length;
#line 244 "string.opt"
}
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Str_6 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 11511 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_33  = Length;
#line 244 "string.opt"
}
#line 85 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Length_8_22 < mercury__term_to_xml__V_17_33);
#line 88 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 87 "int.opt"
      mercury__term_to_xml__End_13_32 = mercury__term_to_xml__Length_8_22;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__term_to_xml__End_13_32 = mercury__term_to_xml__V_17_33;
#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(mercury__term_to_xml__TypeClassInfo_for_writer_12, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Str_6, (MR_Integer) 0, mercury__term_to_xml__End_13_32, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 696 "string.opt"
      return;
    }
#line 1290 "term_to_xml.m"
  }
#line 1287 "term_to_xml.m"
}

#line 1277 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_attribute_4_p_0(
#line 1277 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1277 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1277 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1277 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 1277 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 1277 "term_to_xml.m"
{
#line 1280 "term_to_xml.m"
  {
#line 1280 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1280 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1280 "term_to_xml.m"
    MR_String mercury__term_to_xml__Value_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 1280 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 1280 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1280 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_15;
#line 1280 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 11571 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11573 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11575 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11577 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 11580 "term_to_xml.c"
    {
#line 11582 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " ")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 11585 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11587 "term_to_xml.c"
    {
#line 11589 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Name_6)), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 11592 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11594 "term_to_xml.c"
    {
#line 11596 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "=\"")), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_15_15);
    }
#line 1284 "term_to_xml.m"
    {
#line 1284 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Value_7, mercury__term_to_xml__STATE_VARIABLE_State_15_15, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 11604 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11606 "term_to_xml.c"
    {
#line 11608 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 11610 "term_to_xml.c"
      return;
    }
#line 1280 "term_to_xml.m"
  }
#line 1277 "term_to_xml.m"
}

#line 1273 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__is_maybe_yes_2_p_0(
#line 1273 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_4,
#line 1273 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1,
#line 1273 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__X_3)
#line 1273 "term_to_xml.m"
{
#line 1275 "term_to_xml.m"
  {
#line 1275 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 1275 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1275 "term_to_xml.m"
      *mercury__term_to_xml__X_3 = (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0));
#line 1275 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1275 "term_to_xml.m"
  }
#line 1273 "term_to_xml.m"
}

#line 1264 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__make_attrs_from_sources_5_f_0(
#line 1264 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
#line 1264 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_8,
#line 1264 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 1264 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_10,
#line 1264 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11)
#line 1264 "term_to_xml.m"
{
#line 1268 "term_to_xml.m"
  {
#line 1268 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1268 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_12;
#line 1268 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_13;

#line 1269 "term_to_xml.m"
    {
#line 1269 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_13 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_7, mercury__term_to_xml__MaybeArity_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__MaybeField_10, mercury__term_to_xml__AttrFromSources_11);
    }
#line 1271 "term_to_xml.m"
    {
#line 1271 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_13, &mercury__term_to_xml__Attrs_12);
    }
#line 1268 "term_to_xml.m"
    return mercury__term_to_xml__Attrs_12;
#line 1268 "term_to_xml.m"
  }
#line 1264 "term_to_xml.m"
}

#line 1226 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__attr_from_source_to_maybe_attr_5_f_0(
#line 1226 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_7,
#line 1226 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_8,
#line 1226 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 1226 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldName_10,
#line 1226 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__5_5)
#line 1226 "term_to_xml.m"
{
#line 1230 "term_to_xml.m"
  {
#line 1230 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1230 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttr_13;
#line 1230 "term_to_xml.m"
    MR_String mercury__term_to_xml__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 0)));
#line 1230 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Source_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 1)));

#line 1240 "term_to_xml.m"
    if ((mercury__term_to_xml__Source_12 == (MR_Integer) 3))
#line 1246 "term_to_xml.m"
      if ((mercury__term_to_xml__MaybeArity_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "term_to_xml.m"
        mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1246 "term_to_xml.m"
      else
#line 1243 "term_to_xml.m"
        {
#line 1243 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeArity_8, (MR_Integer) 0)));
#line 1243 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_20_20;
#line 1243 "term_to_xml.m"
          MR_String mercury__term_to_xml__V_21_21;

#line 297 "string.opt"
          {
#line 297 "string.opt"
            mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_15, (MR_Integer) 10, &mercury__term_to_xml__V_21_21);
          }
#line 1244 "term_to_xml.m"
          {
#line 1244 "term_to_xml.m"
            mercury__term_to_xml__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1244 "term_to_xml.m"
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_20_20, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1244 "term_to_xml.m"
            MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_20_20, 1) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1244 "term_to_xml.m"
          }
#line 1244 "term_to_xml.m"
          {
#line 1244 "term_to_xml.m"
            mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_20_20));
#line 1244 "term_to_xml.m"
          }
#line 1243 "term_to_xml.m"
        }
#line 1240 "term_to_xml.m"
    else
#line 1240 "term_to_xml.m"
      if ((mercury__term_to_xml__Source_12 == (MR_Integer) 1))
#line 1258 "term_to_xml.m"
        if ((mercury__term_to_xml__MaybeFieldName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1260 "term_to_xml.m"
          mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1258 "term_to_xml.m"
        else
#line 1256 "term_to_xml.m"
          {
#line 1256 "term_to_xml.m"
            MR_String mercury__term_to_xml__FieldName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldName_10, (MR_Integer) 0)));
#line 1256 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_17_17;

#line 1257 "term_to_xml.m"
            {
#line 1257 "term_to_xml.m"
              mercury__term_to_xml__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_17_17, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1257 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_17_17, 1) = ((MR_Box) (mercury__term_to_xml__FieldName_16));
#line 1257 "term_to_xml.m"
            }
#line 1257 "term_to_xml.m"
            {
#line 1257 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_17_17));
#line 1257 "term_to_xml.m"
            }
#line 1256 "term_to_xml.m"
          }
#line 1240 "term_to_xml.m"
      else
#line 1240 "term_to_xml.m"
        if ((mercury__term_to_xml__Source_12 == (MR_Integer) 0))
#line 1236 "term_to_xml.m"
          if ((mercury__term_to_xml__MaybeFunctor_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1238 "term_to_xml.m"
            mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1236 "term_to_xml.m"
          else
#line 1234 "term_to_xml.m"
            {
#line 1234 "term_to_xml.m"
              MR_String mercury__term_to_xml__Functor_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFunctor_7, (MR_Integer) 0)));
#line 1234 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_22_22;

#line 1235 "term_to_xml.m"
              {
#line 1235 "term_to_xml.m"
                mercury__term_to_xml__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "term_to_xml.m"
                MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_22_22, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1235 "term_to_xml.m"
                MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_22_22, 1) = ((MR_Box) (mercury__term_to_xml__Functor_14));
#line 1235 "term_to_xml.m"
              }
#line 1235 "term_to_xml.m"
              {
#line 1235 "term_to_xml.m"
                mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1235 "term_to_xml.m"
              }
#line 1234 "term_to_xml.m"
            }
#line 1240 "term_to_xml.m"
        else
#line 1251 "term_to_xml.m"
          {
#line 1251 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_18_18;
#line 1251 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_19_19;

#line 1252 "term_to_xml.m"
            {
#line 1252 "term_to_xml.m"
              mercury__term_to_xml__V_19_19 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_9);
            }
#line 1252 "term_to_xml.m"
            {
#line 1252 "term_to_xml.m"
              mercury__term_to_xml__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_18_18, 0) = ((MR_Box) (mercury__term_to_xml__Name_11));
#line 1252 "term_to_xml.m"
              MR_hl_field(MR_mktag(0), mercury__term_to_xml__V_18_18, 1) = ((MR_Box) (mercury__term_to_xml__V_19_19));
#line 1252 "term_to_xml.m"
            }
#line 1252 "term_to_xml.m"
            {
#line 1252 "term_to_xml.m"
              mercury__term_to_xml__MaybeAttr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeAttr_13, 0) = ((MR_Box) (mercury__term_to_xml__V_18_18));
#line 1252 "term_to_xml.m"
            }
#line 1251 "term_to_xml.m"
          }
#line 1230 "term_to_xml.m"
    return mercury__term_to_xml__MaybeAttr_13;
#line 1230 "term_to_xml.m"
  }
#line 1226 "term_to_xml.m"
}

#line 1218 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_end_4_p_0(
#line 1218 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 1218 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1218 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_6,
#line 1218 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1218 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1218 "term_to_xml.m"
{
#line 1221 "term_to_xml.m"
  {
#line 1221 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1221 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_11;
#line 1221 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 11892 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11894 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11896 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 11899 "term_to_xml.c"
    {
#line 11901 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_11_11);
    }
#line 11904 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11906 "term_to_xml.c"
    {
#line 11908 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Element_6)), mercury__term_to_xml__STATE_VARIABLE_State_11_11, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 11911 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11913 "term_to_xml.c"
    {
#line 11915 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 11917 "term_to_xml.c"
      return;
    }
#line 1221 "term_to_xml.m"
  }
#line 1218 "term_to_xml.m"
}

#line 1209 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_empty_element_5_p_0(
#line 1209 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1209 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 1209 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_7,
#line 1209 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Attributes_8,
#line 1209 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 1209 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 1209 "term_to_xml.m"
{
#line 1212 "term_to_xml.m"
  {
#line 1212 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1212 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1212 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
#line 1212 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 11952 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11954 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11956 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 11959 "term_to_xml.c"
    {
#line 11961 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 11964 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11966 "term_to_xml.c"
    {
#line 11968 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1215 "term_to_xml.m"
    {
#line 1215 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 11976 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11978 "term_to_xml.c"
    {
#line 11980 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " />")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 11982 "term_to_xml.c"
      return;
    }
#line 1212 "term_to_xml.m"
  }
#line 1209 "term_to_xml.m"
}

#line 1197 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(
#line 1197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
#line 1197 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 1197 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_11,
#line 1197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_12,
#line 1197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
#line 1197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_14,
#line 1197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_15,
#line 1197 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_16,
#line 1197 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1197 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1197 "term_to_xml.m"
{
#line 1203 "term_to_xml.m"
  {
#line 1203 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1203 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_18;
#line 1203 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1203 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
#line 12025 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1269 "term_to_xml.m"
    {
#line 1269 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
#line 1271 "term_to_xml.m"
    {
#line 1271 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
#line 1206 "term_to_xml.m"
    {
#line 1206 "term_to_xml.m"
      mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 12043 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12045 "term_to_xml.c"
    {
#line 12047 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12049 "term_to_xml.c"
      return;
    }
#line 1203 "term_to_xml.m"
  }
#line 1197 "term_to_xml.m"
}

#line 1188 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_start_5_p_0(
#line 1188 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 1188 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 1188 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_7,
#line 1188 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Attributes_8,
#line 1188 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 1188 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 1188 "term_to_xml.m"
{
#line 1191 "term_to_xml.m"
  {
#line 1191 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1191 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_13_13;
#line 1191 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_14_14;
#line 1191 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 12084 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12086 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12088 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12091 "term_to_xml.c"
    {
#line 12093 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_10, &mercury__term_to_xml__STATE_VARIABLE_State_13_13);
    }
#line 12096 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12098 "term_to_xml.c"
    {
#line 12100 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Element_7)), mercury__term_to_xml__STATE_VARIABLE_State_13_13, &mercury__term_to_xml__STATE_VARIABLE_State_14_14);
    }
#line 1194 "term_to_xml.m"
    {
#line 1194 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Attributes_8, mercury__term_to_xml__STATE_VARIABLE_State_14_14, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 12108 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12110 "term_to_xml.c"
    {
#line 12112 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_19), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 12114 "term_to_xml.c"
      return;
    }
#line 1191 "term_to_xml.m"
  }
#line 1188 "term_to_xml.m"
}

#line 1175 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(
#line 1175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_24,
#line 1175 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 1175 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_11,
#line 1175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_12,
#line 1175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFunctor_13,
#line 1175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeArity_14,
#line 1175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_15,
#line 1175 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_16,
#line 1175 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1175 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1175 "term_to_xml.m"
{
#line 1182 "term_to_xml.m"
  {
#line 1182 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1182 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_18;
#line 1182 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1182 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_31;
#line 12157 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1269 "term_to_xml.m"
    {
#line 1269 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_31 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__MaybeFunctor_13, mercury__term_to_xml__MaybeArity_14, mercury__term_to_xml__TypeDesc_16, mercury__term_to_xml__MaybeField_15, mercury__term_to_xml__AttrFromSources_12);
    }
#line 1271 "term_to_xml.m"
    {
#line 1271 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_31, &mercury__term_to_xml__Attrs_18);
    }
#line 1185 "term_to_xml.m"
    {
#line 1185 "term_to_xml.m"
      mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_24, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_11, mercury__term_to_xml__Attrs_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 12175 "term_to_xml.c"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12177 "term_to_xml.c"
    {
#line 12179 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_24), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 12181 "term_to_xml.c"
      return;
    }
#line 1182 "term_to_xml.m"
  }
#line 1175 "term_to_xml.m"
}

#line 1157 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(
#line 1157 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_34,
#line 1157 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1157 "term_to_xml.m"
  MR_String mercury__term_to_xml__Element_10,
#line 1157 "term_to_xml.m"
  MR_Word mercury__term_to_xml__AttrFromSources_11,
#line 1157 "term_to_xml.m"
  MR_String mercury__term_to_xml__Value_12,
#line 1157 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeField_13,
#line 1157 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_14,
#line 1157 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 1157 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 1157 "term_to_xml.m"
{
#line 1163 "term_to_xml.m"
  {
#line 1163 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1163 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Attrs_16;
#line 1163 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_20;
#line 1163 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 1163 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_22_22;
#line 1163 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 1163 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 1163 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 1163 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 1163 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;
#line 1163 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_31_31;
#line 1163 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeAttrs_47;
#line 12238 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12240 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12242 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12244 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12246 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12248 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 12251 "term_to_xml.c"
    {
#line 12253 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<")), mercury__term_to_xml__STATE_VARIABLE_State_0_17, &mercury__term_to_xml__STATE_VARIABLE_State_20_20);
    }
#line 12256 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12258 "term_to_xml.c"
    {
#line 12260 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_20_20, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 1166 "term_to_xml.m"
    mercury__term_to_xml__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1166 "term_to_xml.m"
    mercury__term_to_xml__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1269 "term_to_xml.m"
    {
#line 1269 "term_to_xml.m"
      mercury__term_to_xml__MaybeAttrs_47 = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_50_95_95_91_53_93_95_48_2_f_in__list_0(mercury__term_to_xml__V_22_22, mercury__term_to_xml__V_23_23, mercury__term_to_xml__TypeDesc_14, mercury__term_to_xml__MaybeField_13, mercury__term_to_xml__AttrFromSources_11);
    }
#line 1271 "term_to_xml.m"
    {
#line 1271 "term_to_xml.m"
      mercury__term_to_xml__filter_map__ho13_3_p_in__list_0(mercury__term_to_xml__MaybeAttrs_47, &mercury__term_to_xml__Attrs_16);
    }
#line 1168 "term_to_xml.m"
    {
#line 1168 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_51_44_32_52_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Attrs_16, mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
    }
#line 12282 "term_to_xml.c"
    mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12284 "term_to_xml.c"
    {
#line 12286 "term_to_xml.c"
      mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
    }
#line 1170 "term_to_xml.m"
    {
#line 1170 "term_to_xml.m"
      mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_34, mercury__term_to_xml__Stream_9, mercury__term_to_xml__Value_12, mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
    }
#line 12294 "term_to_xml.c"
    mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12296 "term_to_xml.c"
    {
#line 12298 "term_to_xml.c"
      mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
    }
#line 12301 "term_to_xml.c"
    mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12303 "term_to_xml.c"
    {
#line 12305 "term_to_xml.c"
      mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Element_10)), mercury__term_to_xml__STATE_VARIABLE_State_30_30, &mercury__term_to_xml__STATE_VARIABLE_State_31_31);
    }
#line 12308 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12310 "term_to_xml.c"
    {
#line 12312 "term_to_xml.c"
      mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_34), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) ">\n")), mercury__term_to_xml__STATE_VARIABLE_State_31_31, mercury__term_to_xml__STATE_VARIABLE_State_18);
#line 12314 "term_to_xml.c"
      return;
    }
#line 1163 "term_to_xml.m"
  }
#line 1157 "term_to_xml.m"
}

#line 1146 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__indent_4_p_0(
#line 1146 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_16,
#line 1146 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 1146 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_6,
#line 1146 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 1146 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 1146 "term_to_xml.m"
{
#line 1153 "term_to_xml.m"
  while (MR_TRUE)
#line 1153 "term_to_xml.m"
    {
#line 1153 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1153 "term_to_xml.m"
      {
#line 1153 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = (mercury__term_to_xml__IndentLevel_6 > (MR_Integer) 0);

#line 1153 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1151 "term_to_xml.m"
          {
#line 1151 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 1151 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__V_13_13;
#line 12356 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12359 "term_to_xml.c"
            {
#line 12361 "term_to_xml.c"
              mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_16), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\t")), mercury__term_to_xml__STATE_VARIABLE_State_0_8, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
            }
#line 1152 "term_to_xml.m"
            mercury__term_to_xml__V_13_13 = (mercury__term_to_xml__IndentLevel_6 - (MR_Integer) 1);
#line 1152 "term_to_xml.m"
            /* direct tailcall eliminated */
#line 1152 "term_to_xml.m"
            {
#line 1152 "term_to_xml.m"
              MR_Integer mercury__term_to_xml__IndentLevel__tmp_copy_6 = mercury__term_to_xml__V_13_13;
#line 1152 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_8 = mercury__term_to_xml__STATE_VARIABLE_State_12_12;

#line 1152 "term_to_xml.m"
              mercury__term_to_xml__STATE_VARIABLE_State_0_8 = mercury__term_to_xml__STATE_VARIABLE_State_0__tmp_copy_8;
#line 1152 "term_to_xml.m"
              mercury__term_to_xml__IndentLevel_6 = mercury__term_to_xml__IndentLevel__tmp_copy_6;
#line 1152 "term_to_xml.m"
            }
#line 1152 "term_to_xml.m"
            continue;
#line 1151 "term_to_xml.m"
          }
#line 1153 "term_to_xml.m"
        else
#line 1152 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_9 = mercury__term_to_xml__STATE_VARIABLE_State_0_8;
#line 1153 "term_to_xml.m"
      }
#line 1153 "term_to_xml.m"
      break;
#line 1153 "term_to_xml.m"
    }
#line 1146 "term_to_xml.m"
}

#line 1131 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_include_details_cc_8_p_0(
#line 1131 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1131 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1131 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1131 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1131 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1131 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1131 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1131 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1131 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1131 "term_to_xml.m"
{
#line 1137 "term_to_xml.m"
  {
#line 1137 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1138 "term_to_xml.m"
    {
#line 1138 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1138 "term_to_xml.m"
      return;
    }
#line 1137 "term_to_xml.m"
  }
#line 1131 "term_to_xml.m"
}

#line 1121 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_canonicalize_8_p_0(
#line 1121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1121 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1121 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1121 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1121 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1121 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1121 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1121 "term_to_xml.m"
{
#line 1127 "term_to_xml.m"
  {
#line 1127 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1128 "term_to_xml.m"
    {
#line 1128 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1128 "term_to_xml.m"
      return;
    }
#line 1127 "term_to_xml.m"
  }
#line 1121 "term_to_xml.m"
}

#line 1111 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_do_not_allow_8_p_0(
#line 1111 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 1111 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1111 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_10,
#line 1111 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 1111 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_12,
#line 1111 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames0_13,
#line 1111 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_14,
#line 1111 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_16,
#line 1111 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_17)
#line 1111 "term_to_xml.m"
{
#line 1117 "term_to_xml.m"
  {
#line 1117 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1118 "term_to_xml.m"
    {
#line 1118 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_20, mercury__term_to_xml__Stream_9, (MR_Integer) 0, mercury__term_to_xml__MakeElement_10, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_12, mercury__term_to_xml__MaybeFieldNames0_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_16, mercury__term_to_xml__STATE_VARIABLE_State_17);
#line 1118 "term_to_xml.m"
      return;
    }
#line 1117 "term_to_xml.m"
  }
#line 1111 "term_to_xml.m"
}

#line 1083 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_3(
#line 1083 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1083 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1083 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1083 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1083 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1083 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1083 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1083 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1083 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1083 "term_to_xml.m"
{
#line 1092 "term_to_xml.m"
  {
#line 1092 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1092 "term_to_xml.m"
    if ((mercury__term_to_xml__NonCanon_10 == (MR_Integer) 1))
#line 1099 "term_to_xml.m"
      {
#line 1099 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_17_17;

#line 1099 "term_to_xml.m"
        {
#line 1099 "term_to_xml.m"
          mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_54_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_17_17, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
        }
#line 1099 "term_to_xml.m"
      }
#line 1092 "term_to_xml.m"
    else
#line 1092 "term_to_xml.m"
      if ((mercury__term_to_xml__NonCanon_10 == (MR_Integer) 0))
#line 1093 "term_to_xml.m"
        {
#line 1093 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_16_16;

#line 1093 "term_to_xml.m"
          {
#line 1093 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1093 "term_to_xml.m"
        }
#line 1092 "term_to_xml.m"
      else
#line 1105 "term_to_xml.m"
        {
#line 1105 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_18_18;

#line 1105 "term_to_xml.m"
          {
#line 1105 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_53_95_95_91_53_44_32_54_93_95_48_6_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, &mercury__term_to_xml__V_18_18, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
          }
#line 1105 "term_to_xml.m"
        }
#line 1092 "term_to_xml.m"
  }
#line 1083 "term_to_xml.m"
}

#line 1081 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_2(
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1081 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1081 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1081 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1081 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1081 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1081 "term_to_xml.m"
{
#line 1092 "term_to_xml.m"
  {
#line 1092 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1092 "term_to_xml.m"
    {
#line 1092 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1092 "term_to_xml.m"
      return;
    }
#line 1092 "term_to_xml.m"
  }
#line 1081 "term_to_xml.m"
}

#line 1079 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_1(
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1079 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1079 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1079 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1079 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1079 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1079 "term_to_xml.m"
{
#line 1092 "term_to_xml.m"
  {
#line 1092 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1092 "term_to_xml.m"
    {
#line 1092 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1092 "term_to_xml.m"
      return;
    }
#line 1092 "term_to_xml.m"
  }
#line 1079 "term_to_xml.m"
}

#line 1077 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_child_xml_elements_8_p_0(
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 1077 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_10,
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_11,
#line 1077 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_12,
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Args_13,
#line 1077 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_14,
#line 1077 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_19,
#line 1077 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_20)
#line 1077 "term_to_xml.m"
{
#line 1092 "term_to_xml.m"
  {
#line 1092 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1092 "term_to_xml.m"
    {
#line 1092 "term_to_xml.m"
      mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_9, mercury__term_to_xml__MakeElement_11, mercury__term_to_xml__IndentLevel_12, mercury__term_to_xml__Args_13, mercury__term_to_xml__MaybeFieldNames_14, mercury__term_to_xml__STATE_VARIABLE_State_0_19, mercury__term_to_xml__STATE_VARIABLE_State_20);
#line 1092 "term_to_xml.m"
      return;
    }
#line 1092 "term_to_xml.m"
  }
#line 1077 "term_to_xml.m"
}

#line 1057 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__find_field_names_5_p_0(
#line 1057 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_6,
#line 1057 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 1057 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_9,
#line 1057 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_10,
#line 1057 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFieldNames_11)
#line 1057 "term_to_xml.m"
{
#line 1061 "term_to_xml.m"
  while (MR_TRUE)
#line 1061 "term_to_xml.m"
    {
#line 1061 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 1061 "term_to_xml.m"
      {
#line 1061 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__FunctorNum_7;
#line 1061 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_8;
#line 1067 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FoundFieldNames_13;
#line 1063 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_14_14;
#line 1063 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_15_15;
#line 1063 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgNameList0_13_22;
#line 85 "construct.opt"
        MR_Word mercury__term_to_xml__V_12_12;

#line 1060 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1060 "term_to_xml.m"
          {
#line 1060 "term_to_xml.m"
            mercury__term_to_xml__FunctorNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 1060 "term_to_xml.m"
            mercury__term_to_xml__FunctorNums_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 85 "construct.opt"
            {
#line 85 "construct.opt"
              mercury__term_to_xml__succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(mercury__term_to_xml__TypeDesc_6, mercury__term_to_xml__FunctorNum_7, &mercury__term_to_xml__V_14_14, &mercury__term_to_xml__V_15_15, &mercury__term_to_xml__V_12_12, &mercury__term_to_xml__ArgNameList0_13_22);
            }
#line 1063 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1063 "term_to_xml.m"
              {
#line 86 "construct.opt"
                {
#line 86 "construct.opt"
                  mercury__term_to_xml__FoundFieldNames_13 = mercury__term_to_xml__map__ho3_2_f_in__list_0(mercury__term_to_xml__ArgNameList0_13_22);
                }
#line 1063 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Functor_9, mercury__term_to_xml__V_14_14) == 0);
#line 1063 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1063 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = (mercury__term_to_xml__Arity_10 == mercury__term_to_xml__V_15_15);
#line 1063 "term_to_xml.m"
              }
#line 1067 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1066 "term_to_xml.m"
              {
#line 1066 "term_to_xml.m"
                *mercury__term_to_xml__MaybeFieldNames_11 = mercury__term_to_xml__FoundFieldNames_13;
#line 1066 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 1066 "term_to_xml.m"
              }
#line 1067 "term_to_xml.m"
            else
#line 1068 "term_to_xml.m"
              {
#line 1068 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 1068 "term_to_xml.m"
                {
#line 1068 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__2__tmp_copy_2 = mercury__term_to_xml__FunctorNums_8;

#line 1068 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__2_2 = mercury__term_to_xml__HeadVar__2__tmp_copy_2;
#line 1068 "term_to_xml.m"
                }
#line 1068 "term_to_xml.m"
                continue;
#line 1068 "term_to_xml.m"
              }
#line 1060 "term_to_xml.m"
          }
#line 1061 "term_to_xml.m"
        return mercury__term_to_xml__succeeded;
#line 1061 "term_to_xml.m"
      }
#line 1061 "term_to_xml.m"
      break;
#line 1061 "term_to_xml.m"
    }
#line 1057 "term_to_xml.m"
}

#line 1040 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__get_field_names_3_f_0(
#line 1040 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5,
#line 1040 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_6,
#line 1040 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Arity_7)
#line 1040 "term_to_xml.m"
{
#line 1053 "term_to_xml.m"
  {
#line 1053 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1053 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFields_8;
#line 1053 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__NumFunctors_9;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_17;

#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__get_field_names_3_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 12866 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_9  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
      {
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__V_17_17 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_9 > mercury__term_to_xml__V_17_17);
#line 1027 "term_to_xml.m"
      }
#line 1053 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1044 "term_to_xml.m"
      {
#line 1044 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_10;
#line 1044 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_13_13 = (mercury__term_to_xml__NumFunctors_9 - (MR_Integer) 1);
#line 1044 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1050 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FoundMaybeFields_11;

#line 875 "list.opt"
        {
#line 875 "list.opt"
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__V_13_13, mercury__term_to_xml__V_7_21, &mercury__term_to_xml__FunctorNums_10);
        }
#line 1046 "term_to_xml.m"
        {
#line 1046 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__find_field_names_5_p_0(mercury__term_to_xml__TypeDesc_5, mercury__term_to_xml__FunctorNums_10, mercury__term_to_xml__Functor_6, mercury__term_to_xml__Arity_7, &mercury__term_to_xml__FoundMaybeFields_11);
        }
#line 1050 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1049 "term_to_xml.m"
          mercury__term_to_xml__MaybeFields_8 = mercury__term_to_xml__FoundMaybeFields_11;
#line 1050 "term_to_xml.m"
        else
#line 1051 "term_to_xml.m"
          mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1044 "term_to_xml.m"
      }
#line 1053 "term_to_xml.m"
    else
#line 1054 "term_to_xml.m"
      mercury__term_to_xml__MaybeFields_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "term_to_xml.m"
    return mercury__term_to_xml__MaybeFields_8;
#line 1053 "term_to_xml.m"
  }
#line 1040 "term_to_xml.m"
}

#line 1031 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_array_2_p_0(
#line 1031 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1031 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgPseudoType_4)
#line 1031 "term_to_xml.m"
{
#line 1033 "term_to_xml.m"
  {
#line 1033 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1033 "term_to_xml.m"
    MR_Word mercury__term_to_xml__PseudoTypeDesc_5;
#line 1033 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtor_6;
#line 1033 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ArgPseudoTypes_7;
#line 1033 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_8_8;
#line 1033 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_9_9;
#line 1033 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_10_10;
#line 142 "type_desc.opt"
    MR_String mercury__term_to_xml___ModuleName_5_13;
#line 142 "type_desc.opt"
    MR_Integer mercury__term_to_xml___Arity_6_14;
#line 142 "type_desc.opt"
    MR_String mercury__term_to_xml___Name_5_17;
#line 142 "type_desc.opt"
    MR_Integer mercury__term_to_xml___Arity_6_18;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_3 ;
		{
#line 53 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 12977 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_5  = PseudoTypeDesc;
#line 53 "type_desc.opt"
}
#line 88 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_5 ;
		{
#line 88 "type_desc.opt"
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
#line 13009 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_6  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_7  = ArgPseudoTypeInfos;
#line 88 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1033 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
      {
#line 1036 "term_to_xml.m"
        mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_7)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1036 "term_to_xml.m"
          {
#line 1036 "term_to_xml.m"
            *mercury__term_to_xml__ArgPseudoType_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 0)));
#line 1036 "term_to_xml.m"
            mercury__term_to_xml__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_7, (MR_Integer) 1)));
#line 1036 "term_to_xml.m"
            mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1033 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
              {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
		{
#line 142 "type_desc.opt"
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
#line 13081 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml___ModuleName_5_13  = TypeCtorModuleName;
	 mercury__term_to_xml__V_9_9  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_14  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1037 "term_to_xml.m"
                mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_9_9, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                  {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_array_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_6 ;
		{
#line 142 "type_desc.opt"
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
#line 13137 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_10_10  = TypeCtorModuleName;
	 mercury__term_to_xml___Name_5_17  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_18  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1038 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_10_10, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                  }
#line 1033 "term_to_xml.m"
              }
#line 1036 "term_to_xml.m"
          }
#line 1033 "term_to_xml.m"
      }
#line 1033 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1033 "term_to_xml.m"
  }
#line 1031 "term_to_xml.m"
}

#line 1025 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__is_discriminated_union_2_p_0(
#line 1025 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 1025 "term_to_xml.m"
  MR_Integer * mercury__term_to_xml__NumFunctors_4)
#line 1025 "term_to_xml.m"
{
#line 1027 "term_to_xml.m"
  {
#line 1027 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_5_5;

#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_discriminated_union_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_3 ;
		{
#line 67 "construct.opt"
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
	 *mercury__term_to_xml__NumFunctors_4  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
      {
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__V_5_5 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (*mercury__term_to_xml__NumFunctors_4 > mercury__term_to_xml__V_5_5);
#line 1027 "term_to_xml.m"
      }
#line 1027 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 1027 "term_to_xml.m"
  }
#line 1025 "term_to_xml.m"
}

#line 973 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_3(
#line 973 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 973 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 973 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 973 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 973 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 973 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 973 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 973 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 973 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 973 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 973 "term_to_xml.m"
{
#line 982 "term_to_xml.m"
  {
#line 982 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 982 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 982 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 56 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 998 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1003 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 985 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "term_to_xml.m"
      {
#line 987 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "term_to_xml.m"
      }
#line 985 "term_to_xml.m"
    else
#line 984 "term_to_xml.m"
      {
#line 984 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 984 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 984 "term_to_xml.m"
      }
#line 12 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 12 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 990 "term_to_xml.m"
    {
#line 990 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_3(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 56 "type_desc.opt"
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
#line 13342 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_3

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13366 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
      {
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1027 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 994 "term_to_xml.m"
      {
#line 994 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 994 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    else
#line 996 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 998 "term_to_xml.m"
    {
#line 998 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 998 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 998 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 999 "term_to_xml.m"
    {
#line 999 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1003 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1000 "term_to_xml.m"
        {
#line 1000 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1001 "term_to_xml.m"
        {
#line 1001 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1001 "term_to_xml.m"
          return;
        }
#line 1000 "term_to_xml.m"
      }
#line 1003 "term_to_xml.m"
    else
#line 1010 "term_to_xml.m"
      if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "term_to_xml.m"
        {
#line 1005 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_48_48;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_49_49;

#line 1006 "term_to_xml.m"
          {
#line 1006 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1008 "term_to_xml.m"
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1008 "term_to_xml.m"
          }
#line 1007 "term_to_xml.m"
          {
#line 1007 "term_to_xml.m"
            mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1007 "term_to_xml.m"
            return;
          }
#line 1005 "term_to_xml.m"
        }
#line 1010 "term_to_xml.m"
      else
#line 1011 "term_to_xml.m"
        {
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_37_37;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_38_38;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1011 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_40_40;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 13508 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13510 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13512 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13514 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1012 "term_to_xml.m"
          {
#line 1012 "term_to_xml.m"
            mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
          }
#line 1013 "term_to_xml.m"
          {
#line 1013 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1015 "term_to_xml.m"
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1015 "term_to_xml.m"
          }
#line 1014 "term_to_xml.m"
          {
#line 1014 "term_to_xml.m"
            mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
          }
#line 1018 "term_to_xml.m"
          mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1017 "term_to_xml.m"
          {
#line 1017 "term_to_xml.m"
            mercury__term_to_xml__write_child_xml_elements_8_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__NonCanon_11, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
          }
#line 1019 "term_to_xml.m"
          {
#line 1019 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
#line 13560 "term_to_xml.c"
          mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13562 "term_to_xml.c"
          {
#line 13564 "term_to_xml.c"
            mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
          }
#line 13567 "term_to_xml.c"
          mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13569 "term_to_xml.c"
          {
#line 13571 "term_to_xml.c"
            mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
          }
#line 13574 "term_to_xml.c"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13576 "term_to_xml.c"
          {
#line 13578 "term_to_xml.c"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
#line 13581 "term_to_xml.c"
          mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13583 "term_to_xml.c"
          {
#line 13585 "term_to_xml.c"
            mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 13587 "term_to_xml.c"
            return;
          }
#line 1011 "term_to_xml.m"
        }
#line 982 "term_to_xml.m"
  }
#line 973 "term_to_xml.m"
}

#line 971 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_2(
#line 971 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 971 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 971 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 971 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 971 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 971 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 971 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 971 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 971 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 971 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 971 "term_to_xml.m"
{
#line 982 "term_to_xml.m"
  {
#line 982 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 982 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 982 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 56 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 998 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1003 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 985 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "term_to_xml.m"
      {
#line 987 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "term_to_xml.m"
      }
#line 985 "term_to_xml.m"
    else
#line 984 "term_to_xml.m"
      {
#line 984 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 984 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 984 "term_to_xml.m"
      }
#line 12 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 12 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 990 "term_to_xml.m"
    {
#line 990 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 56 "type_desc.opt"
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
#line 13716 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 13740 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
      {
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1027 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 994 "term_to_xml.m"
      {
#line 994 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 994 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    else
#line 996 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 998 "term_to_xml.m"
    {
#line 998 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 998 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 998 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 999 "term_to_xml.m"
    {
#line 999 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1003 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1000 "term_to_xml.m"
        {
#line 1000 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1001 "term_to_xml.m"
        {
#line 1001 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1001 "term_to_xml.m"
          return;
        }
#line 1000 "term_to_xml.m"
      }
#line 1003 "term_to_xml.m"
    else
#line 1010 "term_to_xml.m"
      if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "term_to_xml.m"
        {
#line 1005 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_48_48;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_49_49;

#line 1006 "term_to_xml.m"
          {
#line 1006 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1008 "term_to_xml.m"
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1008 "term_to_xml.m"
          }
#line 1007 "term_to_xml.m"
          {
#line 1007 "term_to_xml.m"
            mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1007 "term_to_xml.m"
            return;
          }
#line 1005 "term_to_xml.m"
        }
#line 1010 "term_to_xml.m"
      else
#line 1011 "term_to_xml.m"
        {
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_37_37;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_38_38;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1011 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_40_40;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 13882 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13884 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13886 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 13888 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1012 "term_to_xml.m"
          {
#line 1012 "term_to_xml.m"
            mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
          }
#line 1013 "term_to_xml.m"
          {
#line 1013 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1015 "term_to_xml.m"
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1015 "term_to_xml.m"
          }
#line 1014 "term_to_xml.m"
          {
#line 1014 "term_to_xml.m"
            mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
          }
#line 1018 "term_to_xml.m"
          mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1017 "term_to_xml.m"
          {
#line 1017 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_50_8_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
          }
#line 1019 "term_to_xml.m"
          {
#line 1019 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
#line 13934 "term_to_xml.c"
          mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13936 "term_to_xml.c"
          {
#line 13938 "term_to_xml.c"
            mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
          }
#line 13941 "term_to_xml.c"
          mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13943 "term_to_xml.c"
          {
#line 13945 "term_to_xml.c"
            mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
          }
#line 13948 "term_to_xml.c"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13950 "term_to_xml.c"
          {
#line 13952 "term_to_xml.c"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
#line 13955 "term_to_xml.c"
          mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13957 "term_to_xml.c"
          {
#line 13959 "term_to_xml.c"
            mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 13961 "term_to_xml.c"
            return;
          }
#line 1011 "term_to_xml.m"
        }
#line 982 "term_to_xml.m"
  }
#line 971 "term_to_xml.m"
}

#line 969 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_1(
#line 969 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 969 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 969 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 969 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 969 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 969 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 969 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 969 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 969 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 969 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 969 "term_to_xml.m"
{
#line 982 "term_to_xml.m"
  {
#line 982 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 982 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 982 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 56 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 998 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1003 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 985 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "term_to_xml.m"
      {
#line 987 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "term_to_xml.m"
      }
#line 985 "term_to_xml.m"
    else
#line 984 "term_to_xml.m"
      {
#line 984 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 984 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 984 "term_to_xml.m"
      }
#line 12 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 12 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 990 "term_to_xml.m"
    {
#line 990 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 56 "type_desc.opt"
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
#line 14090 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_1

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14114 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
      {
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1027 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 994 "term_to_xml.m"
      {
#line 994 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 994 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    else
#line 996 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 998 "term_to_xml.m"
    {
#line 998 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 998 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 998 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 999 "term_to_xml.m"
    {
#line 999 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1003 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1000 "term_to_xml.m"
        {
#line 1000 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1001 "term_to_xml.m"
        {
#line 1001 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1001 "term_to_xml.m"
          return;
        }
#line 1000 "term_to_xml.m"
      }
#line 1003 "term_to_xml.m"
    else
#line 1010 "term_to_xml.m"
      if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "term_to_xml.m"
        {
#line 1005 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_48_48;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_49_49;

#line 1006 "term_to_xml.m"
          {
#line 1006 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1008 "term_to_xml.m"
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1008 "term_to_xml.m"
          }
#line 1007 "term_to_xml.m"
          {
#line 1007 "term_to_xml.m"
            mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1007 "term_to_xml.m"
            return;
          }
#line 1005 "term_to_xml.m"
        }
#line 1010 "term_to_xml.m"
      else
#line 1011 "term_to_xml.m"
        {
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_37_37;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_38_38;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1011 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_40_40;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 14256 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14258 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14260 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14262 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1012 "term_to_xml.m"
          {
#line 1012 "term_to_xml.m"
            mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
          }
#line 1013 "term_to_xml.m"
          {
#line 1013 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1015 "term_to_xml.m"
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1015 "term_to_xml.m"
          }
#line 1014 "term_to_xml.m"
          {
#line 1014 "term_to_xml.m"
            mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
          }
#line 1018 "term_to_xml.m"
          mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1017 "term_to_xml.m"
          {
#line 1017 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_49_8_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
          }
#line 1019 "term_to_xml.m"
          {
#line 1019 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
#line 14308 "term_to_xml.c"
          mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14310 "term_to_xml.c"
          {
#line 14312 "term_to_xml.c"
            mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
          }
#line 14315 "term_to_xml.c"
          mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14317 "term_to_xml.c"
          {
#line 14319 "term_to_xml.c"
            mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
          }
#line 14322 "term_to_xml.c"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14324 "term_to_xml.c"
          {
#line 14326 "term_to_xml.c"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
#line 14329 "term_to_xml.c"
          mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14331 "term_to_xml.c"
          {
#line 14333 "term_to_xml.c"
            mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14335 "term_to_xml.c"
            return;
          }
#line 1011 "term_to_xml.m"
        }
#line 982 "term_to_xml.m"
  }
#line 969 "term_to_xml.m"
}

#line 967 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_univ_9_p_0(
#line 967 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_51,
#line 967 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_10,
#line 967 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_11,
#line 967 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_12,
#line 967 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_13,
#line 967 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_14,
#line 967 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeFieldNames_15,
#line 967 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__RemainingMaybeFieldNames_16,
#line 967 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_32,
#line 967 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_33)
#line 967 "term_to_xml.m"
{
#line 982 "term_to_xml.m"
  {
#line 982 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_52_52;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MaybeFieldName_18;
#line 982 "term_to_xml.m"
    MR_Box mercury__term_to_xml__Term_19;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Functor_20;
#line 982 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Arity_21;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Args_22;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_23;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Request_25;
#line 982 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_26;
#line 982 "term_to_xml.m"
    MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 56 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_53_53;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_24_24;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_57_57;
#line 998 "term_to_xml.m"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv2_Element_26;
#line 998 "term_to_xml.m"
    MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 1003 "term_to_xml.m"
    MR_String mercury__term_to_xml__PrimValue_28;

#line 985 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeFieldNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "term_to_xml.m"
      {
#line 987 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 988 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "term_to_xml.m"
      }
#line 985 "term_to_xml.m"
    else
#line 984 "term_to_xml.m"
      {
#line 984 "term_to_xml.m"
        mercury__term_to_xml__MaybeFieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 0)));
#line 984 "term_to_xml.m"
        *mercury__term_to_xml__RemainingMaybeFieldNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeFieldNames_15, (MR_Integer) 1)));
#line 984 "term_to_xml.m"
      }
#line 12 "univ.opt"
    mercury__term_to_xml__TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 0)));
#line 12 "univ.opt"
    mercury__term_to_xml__Term_19 = (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Univ_14, (MR_Integer) 1));
#line 990 "term_to_xml.m"
    {
#line 990 "term_to_xml.m"
      mercury__deconstruct__deconstruct_5_p_0(mercury__term_to_xml__TypeInfo_52_52, mercury__term_to_xml__Term_19, mercury__term_to_xml__NonCanon_11, &mercury__term_to_xml__Functor_20, &mercury__term_to_xml__Arity_21, &mercury__term_to_xml__Args_22);
    }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_52_52 ;
		{
#line 56 "type_desc.opt"
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
#line 14464 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_23  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_element_univ_9_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_23 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 14488 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_24_24  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
      {
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__V_57_57 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_24_24 > mercury__term_to_xml__V_57_57);
#line 1027 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 994 "term_to_xml.m"
      {
#line 994 "term_to_xml.m"
        mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 994 "term_to_xml.m"
        MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_25, 1) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 994 "term_to_xml.m"
      }
#line 995 "term_to_xml.m"
    else
#line 996 "term_to_xml.m"
      mercury__term_to_xml__Request_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "term_to_xml.m"
    mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_12, (MR_Integer) 1)));
#line 998 "term_to_xml.m"
    {
#line 998 "term_to_xml.m"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_12), ((MR_Box) (mercury__term_to_xml__TypeDesc_23)), ((MR_Box) (mercury__term_to_xml__Request_25)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
    }
#line 998 "term_to_xml.m"
    mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 998 "term_to_xml.m"
    mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 999 "term_to_xml.m"
    {
#line 999 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__primitive_value_2_p_0(mercury__term_to_xml__Univ_14, &mercury__term_to_xml__PrimValue_28);
    }
#line 1003 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1000 "term_to_xml.m"
      {
#line 1000 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_34_34;

#line 1000 "term_to_xml.m"
        {
#line 1000 "term_to_xml.m"
          mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_34_34);
        }
#line 1001 "term_to_xml.m"
        {
#line 1001 "term_to_xml.m"
          mercury__term_to_xml__write_primitive_element_with_attr_from_source_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__PrimValue_28, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_34_34, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1001 "term_to_xml.m"
          return;
        }
#line 1000 "term_to_xml.m"
      }
#line 1003 "term_to_xml.m"
    else
#line 1010 "term_to_xml.m"
      if ((mercury__term_to_xml__Args_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "term_to_xml.m"
        {
#line 1005 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_48_48;
#line 1005 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_49_49;

#line 1006 "term_to_xml.m"
          {
#line 1006 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_48_48, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1008 "term_to_xml.m"
          }
#line 1008 "term_to_xml.m"
          {
#line 1008 "term_to_xml.m"
            mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_49_49, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1008 "term_to_xml.m"
          }
#line 1007 "term_to_xml.m"
          {
#line 1007 "term_to_xml.m"
            mercury__term_to_xml__write_empty_element_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_48_48, mercury__term_to_xml__V_49_49, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_47_47, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 1007 "term_to_xml.m"
            return;
          }
#line 1005 "term_to_xml.m"
        }
#line 1010 "term_to_xml.m"
      else
#line 1011 "term_to_xml.m"
        {
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__ChildMaybeFieldNames_31;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_37_37;
#line 1011 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_38_38;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_39_39;
#line 1011 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_40_40;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_43_43;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_44_44;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_11_64;
#line 1011 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_65;
#line 14630 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14632 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14634 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 14636 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1012 "term_to_xml.m"
          {
#line 1012 "term_to_xml.m"
            mercury__term_to_xml__ChildMaybeFieldNames_31 = mercury__term_to_xml__get_field_names_3_f_0(mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__Functor_20, mercury__term_to_xml__Arity_21);
          }
#line 1013 "term_to_xml.m"
          {
#line 1013 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_0_32, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_37_37, 0) = ((MR_Box) (mercury__term_to_xml__Functor_20));
#line 1015 "term_to_xml.m"
          }
#line 1015 "term_to_xml.m"
          {
#line 1015 "term_to_xml.m"
            mercury__term_to_xml__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_38_38, 0) = ((MR_Box) (mercury__term_to_xml__Arity_21));
#line 1015 "term_to_xml.m"
          }
#line 1014 "term_to_xml.m"
          {
#line 1014 "term_to_xml.m"
            mercury__term_to_xml__write_element_start_with_attr_from_source_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__Element_26, mercury__term_to_xml__AttrFromSources_27, mercury__term_to_xml__V_37_37, mercury__term_to_xml__V_38_38, mercury__term_to_xml__MaybeFieldName_18, mercury__term_to_xml__TypeDesc_23, mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_39_39);
          }
#line 1018 "term_to_xml.m"
          mercury__term_to_xml__V_40_40 = (mercury__term_to_xml__IndentLevel_13 + (MR_Integer) 1);
#line 1017 "term_to_xml.m"
          {
#line 1017 "term_to_xml.m"
            mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_99_104_105_108_100_95_120_109_108_95_101_108_101_109_101_110_116_115_95_95_91_51_93_95_48_8_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_40_40, mercury__term_to_xml__Args_22, mercury__term_to_xml__ChildMaybeFieldNames_31, mercury__term_to_xml__STATE_VARIABLE_State_39_39, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
          }
#line 1019 "term_to_xml.m"
          {
#line 1019 "term_to_xml.m"
            mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_51, mercury__term_to_xml__Stream_10, mercury__term_to_xml__IndentLevel_13, mercury__term_to_xml__STATE_VARIABLE_State_41_41, &mercury__term_to_xml__STATE_VARIABLE_State_43_43);
          }
#line 14682 "term_to_xml.c"
          mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14684 "term_to_xml.c"
          {
#line 14686 "term_to_xml.c"
            mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "</")), mercury__term_to_xml__STATE_VARIABLE_State_43_43, &mercury__term_to_xml__STATE_VARIABLE_State_11_64);
          }
#line 14689 "term_to_xml.c"
          mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14691 "term_to_xml.c"
          {
#line 14693 "term_to_xml.c"
            mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) (mercury__term_to_xml__Element_26)), mercury__term_to_xml__STATE_VARIABLE_State_11_64, &mercury__term_to_xml__STATE_VARIABLE_State_12_65);
          }
#line 14696 "term_to_xml.c"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14698 "term_to_xml.c"
          {
#line 14700 "term_to_xml.c"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) ">")), mercury__term_to_xml__STATE_VARIABLE_State_12_65, &mercury__term_to_xml__STATE_VARIABLE_State_44_44);
          }
#line 14703 "term_to_xml.c"
          mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14705 "term_to_xml.c"
          {
#line 14707 "term_to_xml.c"
            mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_51), mercury__term_to_xml__Stream_10, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_44_44, mercury__term_to_xml__STATE_VARIABLE_State_33);
#line 14709 "term_to_xml.c"
            return;
          }
#line 1011 "term_to_xml.m"
        }
#line 982 "term_to_xml.m"
  }
#line 967 "term_to_xml.m"
}

#line 950 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_indent_5_p_0(
#line 950 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_13,
#line 950 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 950 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_7,
#line 950 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_8,
#line 950 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_10,
#line 950 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_11)
#line 950 "term_to_xml.m"
{
#line 956 "term_to_xml.m"
  {
#line 956 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 956 "term_to_xml.m"
    if ((mercury__term_to_xml__Format_7 == (MR_Integer) 0))
#line 957 "term_to_xml.m"
      {
#line 957 "term_to_xml.m"
        mercury__term_to_xml__indent_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_13, mercury__term_to_xml__Stream_6, mercury__term_to_xml__Indent_8, mercury__term_to_xml__STATE_VARIABLE_State_0_10, mercury__term_to_xml__STATE_VARIABLE_State_11);
#line 957 "term_to_xml.m"
        return;
      }
#line 956 "term_to_xml.m"
    else
#line 959 "term_to_xml.m"
      *mercury__term_to_xml__STATE_VARIABLE_State_11 = mercury__term_to_xml__STATE_VARIABLE_State_0_10;
#line 956 "term_to_xml.m"
  }
#line 950 "term_to_xml.m"
}

#line 944 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__maybe_nl_4_p_0(
#line 944 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_15,
#line 944 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1,
#line 944 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 944 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_3,
#line 944 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_4)
#line 944 "term_to_xml.m"
{
#line 947 "term_to_xml.m"
  {
#line 947 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 947 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__2_2 == (MR_Integer) 0))
#line 948 "term_to_xml.m"
      {
#line 14783 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));

#line 14786 "term_to_xml.c"
        {
#line 14788 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_15), mercury__term_to_xml__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_0_3, mercury__term_to_xml__STATE_VARIABLE_State_4);
#line 14790 "term_to_xml.c"
          return;
        }
#line 948 "term_to_xml.m"
      }
#line 947 "term_to_xml.m"
    else
#line 947 "term_to_xml.m"
      *mercury__term_to_xml__STATE_VARIABLE_State_4 = mercury__term_to_xml__STATE_VARIABLE_State_0_3;
#line 947 "term_to_xml.m"
  }
#line 944 "term_to_xml.m"
}

#line 935 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__contains_noformat_xml_1_p_0(
#line 935 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1)
#line 935 "term_to_xml.m"
{
#line 937 "term_to_xml.m"
  while (MR_TRUE)
#line 937 "term_to_xml.m"
    {
#line 937 "term_to_xml.m"
      /* tailcall optimized into a loop */
#line 937 "term_to_xml.m"
      {
#line 937 "term_to_xml.m"
        MR_bool mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 937 "term_to_xml.m"
        MR_Word mercury__term_to_xml__XML_2;
#line 937 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Rest_3;

#line 937 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 937 "term_to_xml.m"
          {
#line 937 "term_to_xml.m"
            mercury__term_to_xml__XML_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 937 "term_to_xml.m"
            mercury__term_to_xml__Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 1)));
#line 939 "term_to_xml.m"
            {
#line 939 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_4_4;

#line 928 "term_to_xml.m"
              if (((MR_tag((MR_Word) mercury__term_to_xml__XML_2)) == (MR_mktag((MR_Integer) 2))))
#line 930 "term_to_xml.m"
                mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 928 "term_to_xml.m"
              else
#line 928 "term_to_xml.m"
                if (((MR_tag((MR_Word) mercury__term_to_xml__XML_2)) == (MR_mktag((MR_Integer) 1))))
#line 929 "term_to_xml.m"
                  mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 928 "term_to_xml.m"
                else
#line 928 "term_to_xml.m"
                  if (((MR_tag((MR_Word) mercury__term_to_xml__XML_2)) == (MR_mktag((MR_Integer) 0))))
#line 928 "term_to_xml.m"
                    mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 928 "term_to_xml.m"
                  else
#line 928 "term_to_xml.m"
                    if (((((MR_tag((MR_Word) mercury__term_to_xml__XML_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 931 "term_to_xml.m"
                      mercury__term_to_xml__V_4_4 = (MR_Integer) 1;
#line 928 "term_to_xml.m"
                    else
#line 928 "term_to_xml.m"
                      if (((((MR_tag((MR_Word) mercury__term_to_xml__XML_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__XML_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 933 "term_to_xml.m"
                        mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 928 "term_to_xml.m"
                      else
#line 932 "term_to_xml.m"
                        mercury__term_to_xml__V_4_4 = (MR_Integer) 0;
#line 939 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_4_4 == (MR_Integer) 0);
#line 939 "term_to_xml.m"
            }
#line 940 "term_to_xml.m"
            if (!(mercury__term_to_xml__succeeded))
#line 941 "term_to_xml.m"
              {
#line 941 "term_to_xml.m"
                /* direct tailcall eliminated */
#line 941 "term_to_xml.m"
                {
#line 941 "term_to_xml.m"
                  MR_Word mercury__term_to_xml__HeadVar__1__tmp_copy_1 = mercury__term_to_xml__Rest_3;

#line 941 "term_to_xml.m"
                  mercury__term_to_xml__HeadVar__1_1 = mercury__term_to_xml__HeadVar__1__tmp_copy_1;
#line 941 "term_to_xml.m"
                }
#line 941 "term_to_xml.m"
                continue;
#line 941 "term_to_xml.m"
              }
#line 937 "term_to_xml.m"
          }
#line 937 "term_to_xml.m"
        return mercury__term_to_xml__succeeded;
#line 937 "term_to_xml.m"
      }
#line 937 "term_to_xml.m"
      break;
#line 937 "term_to_xml.m"
    }
#line 935 "term_to_xml.m"
}

#line 926 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__can_format_siblings_1_f_0(
#line 926 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__1_1)
#line 926 "term_to_xml.m"
{
#line 928 "term_to_xml.m"
  {
#line 928 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 928 "term_to_xml.m"
    MR_Word mercury__term_to_xml__HeadVar__2_2;

#line 928 "term_to_xml.m"
    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 930 "term_to_xml.m"
      mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 928 "term_to_xml.m"
    else
#line 928 "term_to_xml.m"
      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 929 "term_to_xml.m"
        mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 928 "term_to_xml.m"
      else
#line 928 "term_to_xml.m"
        if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 928 "term_to_xml.m"
          mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 928 "term_to_xml.m"
        else
#line 928 "term_to_xml.m"
          if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 931 "term_to_xml.m"
            mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 1;
#line 928 "term_to_xml.m"
          else
#line 928 "term_to_xml.m"
            if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 933 "term_to_xml.m"
              mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 928 "term_to_xml.m"
            else
#line 932 "term_to_xml.m"
              mercury__term_to_xml__HeadVar__2_2 = (MR_Integer) 0;
#line 928 "term_to_xml.m"
    return mercury__term_to_xml__HeadVar__2_2;
#line 928 "term_to_xml.m"
  }
#line 926 "term_to_xml.m"
}

#line 878 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_format_6_p_0(
#line 878 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_91,
#line 878 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 878 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Format_2,
#line 878 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_3,
#line 878 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__4_4,
#line 878 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_5,
#line 878 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_6)
#line 878 "term_to_xml.m"
{
#line 882 "term_to_xml.m"
  {
#line 882 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 882 "term_to_xml.m"
    if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__4_4)) == (MR_mktag((MR_Integer) 2))))
#line 905 "term_to_xml.m"
      {
#line 905 "term_to_xml.m"
        MR_String mercury__term_to_xml__CData_43 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)));
#line 905 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_47_47;
#line 905 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_49_49;
#line 905 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_50_50;
#line 905 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_52_52;

#line 906 "term_to_xml.m"
        {
#line 906 "term_to_xml.m"
          mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Format_2, mercury__term_to_xml__IndentLevel_3, mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_47_47);
        }
#line 907 "term_to_xml.m"
        {
#line 907 "term_to_xml.m"
          mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<![CDATA[")), mercury__term_to_xml__STATE_VARIABLE_State_47_47, &mercury__term_to_xml__STATE_VARIABLE_State_49_49);
        }
#line 908 "term_to_xml.m"
        {
#line 908 "term_to_xml.m"
          mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__CData_43)), mercury__term_to_xml__STATE_VARIABLE_State_49_49, &mercury__term_to_xml__STATE_VARIABLE_State_50_50);
        }
#line 909 "term_to_xml.m"
        {
#line 909 "term_to_xml.m"
          mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "]]>")), mercury__term_to_xml__STATE_VARIABLE_State_50_50, &mercury__term_to_xml__STATE_VARIABLE_State_52_52);
        }
#line 910 "term_to_xml.m"
        {
#line 910 "term_to_xml.m"
          mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Format_2, mercury__term_to_xml__STATE_VARIABLE_State_52_52, mercury__term_to_xml__STATE_VARIABLE_State_6);
#line 910 "term_to_xml.m"
          return;
        }
#line 905 "term_to_xml.m"
      }
#line 882 "term_to_xml.m"
    else
#line 882 "term_to_xml.m"
      if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 903 "term_to_xml.m"
        {
#line 903 "term_to_xml.m"
          MR_String mercury__term_to_xml__Data_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)));

#line 904 "term_to_xml.m"
          {
#line 904 "term_to_xml.m"
            mercury__term_to_xml__write_xml_escaped_string_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Data_35, mercury__term_to_xml__STATE_VARIABLE_State_0_5, mercury__term_to_xml__STATE_VARIABLE_State_6);
#line 904 "term_to_xml.m"
            return;
          }
#line 903 "term_to_xml.m"
        }
#line 882 "term_to_xml.m"
      else
#line 882 "term_to_xml.m"
        if (((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 882 "term_to_xml.m"
          {
#line 882 "term_to_xml.m"
            MR_String mercury__term_to_xml__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)));
#line 882 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Attrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));
#line 882 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Children_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 2)));
#line 882 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_19;

#line 883 "term_to_xml.m"
            {
#line 883 "term_to_xml.m"
              mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Format_2, mercury__term_to_xml__IndentLevel_3, mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_19_19);
            }
#line 888 "term_to_xml.m"
            if ((mercury__term_to_xml__Children_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "term_to_xml.m"
              {
#line 885 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_30_30;

#line 886 "term_to_xml.m"
                {
#line 886 "term_to_xml.m"
                  mercury__term_to_xml__write_empty_element_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Name_10, mercury__term_to_xml__Attrs_11, mercury__term_to_xml__STATE_VARIABLE_State_19_19, &mercury__term_to_xml__STATE_VARIABLE_State_30_30);
                }
#line 887 "term_to_xml.m"
                {
#line 887 "term_to_xml.m"
                  mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Format_2, mercury__term_to_xml__STATE_VARIABLE_State_30_30, mercury__term_to_xml__STATE_VARIABLE_State_6);
#line 887 "term_to_xml.m"
                  return;
                }
#line 885 "term_to_xml.m"
              }
#line 888 "term_to_xml.m"
            else
#line 889 "term_to_xml.m"
              {
#line 889 "term_to_xml.m"
                MR_Word mercury__term_to_xml__ChildrenFormat_16;
#line 889 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_20;
#line 889 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 889 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
#line 889 "term_to_xml.m"
                MR_Integer mercury__term_to_xml__V_25_25;
#line 889 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 889 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;

#line 890 "term_to_xml.m"
                {
#line 890 "term_to_xml.m"
                  mercury__term_to_xml__write_element_start_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Name_10, mercury__term_to_xml__Attrs_11, mercury__term_to_xml__STATE_VARIABLE_State_19_19, &mercury__term_to_xml__STATE_VARIABLE_State_20_20);
                }
#line 891 "term_to_xml.m"
                {
#line 891 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_12);
                }
#line 893 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 892 "term_to_xml.m"
                  {
#line 892 "term_to_xml.m"
                    mercury__term_to_xml__ChildrenFormat_16 = (MR_Integer) 1;
#line 892 "term_to_xml.m"
                    mercury__term_to_xml__STATE_VARIABLE_State_22_22 = mercury__term_to_xml__STATE_VARIABLE_State_20_20;
#line 892 "term_to_xml.m"
                  }
#line 893 "term_to_xml.m"
                else
#line 894 "term_to_xml.m"
                  {
#line 894 "term_to_xml.m"
                    mercury__term_to_xml__ChildrenFormat_16 = (MR_Integer) 0;
#line 895 "term_to_xml.m"
                    {
#line 895 "term_to_xml.m"
                      mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_20_20, &mercury__term_to_xml__STATE_VARIABLE_State_22_22);
                    }
#line 894 "term_to_xml.m"
                  }
#line 898 "term_to_xml.m"
                mercury__term_to_xml__V_25_25 = (mercury__term_to_xml__IndentLevel_3 + (MR_Integer) 1);
#line 897 "term_to_xml.m"
                {
#line 897 "term_to_xml.m"
                  mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_53_44_32_54_93_95_48_4_p_in__list_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__ChildrenFormat_16, mercury__term_to_xml__V_25_25, mercury__term_to_xml__Children_12, mercury__term_to_xml__STATE_VARIABLE_State_22_22, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
                }
#line 899 "term_to_xml.m"
                {
#line 899 "term_to_xml.m"
                  mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__ChildrenFormat_16, mercury__term_to_xml__IndentLevel_3, mercury__term_to_xml__STATE_VARIABLE_State_24_24, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
                }
#line 900 "term_to_xml.m"
                {
#line 900 "term_to_xml.m"
                  mercury__term_to_xml__write_element_end_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Name_10, mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
                }
#line 901 "term_to_xml.m"
                {
#line 901 "term_to_xml.m"
                  mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Format_2, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_6);
#line 901 "term_to_xml.m"
                  return;
                }
#line 889 "term_to_xml.m"
              }
#line 882 "term_to_xml.m"
          }
#line 882 "term_to_xml.m"
        else
#line 882 "term_to_xml.m"
          if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__4_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 912 "term_to_xml.m"
            {
#line 912 "term_to_xml.m"
              MR_String mercury__term_to_xml__Comment_57 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));
#line 912 "term_to_xml.m"
              MR_String mercury__term_to_xml__EscapedComment_59;
#line 912 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_62_62;
#line 912 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_64_64;
#line 912 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_67_67;
#line 912 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_69_69;

#line 913 "term_to_xml.m"
              {
#line 913 "term_to_xml.m"
                mercury__term_to_xml__maybe_indent_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Format_2, mercury__term_to_xml__IndentLevel_3, mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_62_62);
              }
#line 914 "term_to_xml.m"
              {
#line 914 "term_to_xml.m"
                mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "<!-- ")), mercury__term_to_xml__STATE_VARIABLE_State_62_62, &mercury__term_to_xml__STATE_VARIABLE_State_64_64);
              }
#line 916 "term_to_xml.m"
              {
#line 916 "term_to_xml.m"
                mercury__string__replace_all_4_p_0(mercury__term_to_xml__Comment_57, (MR_String) "--", (MR_String) " - ", &mercury__term_to_xml__EscapedComment_59);
              }
#line 917 "term_to_xml.m"
              {
#line 917 "term_to_xml.m"
                mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__EscapedComment_59)), mercury__term_to_xml__STATE_VARIABLE_State_64_64, &mercury__term_to_xml__STATE_VARIABLE_State_67_67);
              }
#line 918 "term_to_xml.m"
              {
#line 918 "term_to_xml.m"
                mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) " -->")), mercury__term_to_xml__STATE_VARIABLE_State_67_67, &mercury__term_to_xml__STATE_VARIABLE_State_69_69);
              }
#line 919 "term_to_xml.m"
              {
#line 919 "term_to_xml.m"
                mercury__term_to_xml__maybe_nl_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Format_2, mercury__term_to_xml__STATE_VARIABLE_State_69_69, mercury__term_to_xml__STATE_VARIABLE_State_6);
#line 919 "term_to_xml.m"
                return;
              }
#line 912 "term_to_xml.m"
            }
#line 882 "term_to_xml.m"
          else
#line 882 "term_to_xml.m"
            if (((((MR_tag((MR_Word) mercury__term_to_xml__HeadVar__4_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 920 "term_to_xml.m"
              {
#line 920 "term_to_xml.m"
                MR_String mercury__term_to_xml__EntityName_74 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));
#line 920 "term_to_xml.m"
                MR_Box mercury__term_to_xml__STATE_VARIABLE_State_79_79;
#line 920 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_80_80;

#line 921 "term_to_xml.m"
                {
#line 921 "term_to_xml.m"
                  mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "&")), mercury__term_to_xml__STATE_VARIABLE_State_0_5, &mercury__term_to_xml__STATE_VARIABLE_State_79_79);
                }
#line 922 "term_to_xml.m"
                {
#line 922 "term_to_xml.m"
                  mercury__term_to_xml__V_80_80 = mercury__string__f_43_43_2_f_0(mercury__term_to_xml__EntityName_74, (MR_String) ";");
                }
#line 922 "term_to_xml.m"
                {
#line 922 "term_to_xml.m"
                  mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__V_80_80)), mercury__term_to_xml__STATE_VARIABLE_State_79_79, mercury__term_to_xml__STATE_VARIABLE_State_6);
#line 922 "term_to_xml.m"
                  return;
                }
#line 920 "term_to_xml.m"
              }
#line 882 "term_to_xml.m"
            else
#line 923 "term_to_xml.m"
              {
#line 923 "term_to_xml.m"
                MR_String mercury__term_to_xml__RawString_86 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_to_xml__HeadVar__4_4, (MR_Integer) 1)));

#line 924 "term_to_xml.m"
                {
#line 924 "term_to_xml.m"
                  mercury__stream__put_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_91, mercury__term_to_xml__Stream_1, ((MR_Box) (mercury__term_to_xml__RawString_86)), mercury__term_to_xml__STATE_VARIABLE_State_0_5, mercury__term_to_xml__STATE_VARIABLE_State_6);
#line 924 "term_to_xml.m"
                  return;
                }
#line 923 "term_to_xml.m"
              }
#line 882 "term_to_xml.m"
  }
#line 878 "term_to_xml.m"
}

#line 850 "term_to_xml.m"
MR_bool MR_CALL 
mercury__term_to_xml__primitive_value_2_p_0(
#line 850 "term_to_xml.m"
  MR_Word mercury__term_to_xml__Univ_3,
#line 850 "term_to_xml.m"
  MR_String * mercury__term_to_xml__PrimValue_4)
#line 850 "term_to_xml.m"
{
#line 855 "term_to_xml.m"
  {
#line 855 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 855 "term_to_xml.m"
    MR_String mercury__term_to_xml__String_5;
#line 853 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 6 "univ.opt"
    MR_Box mercury__term_to_xml__conv0_String_5;

#line 6 "univ.opt"
    {
#line 6 "univ.opt"
      mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_9_9, &mercury__term_to_xml__conv0_String_5, mercury__term_to_xml__Univ_3);
    }
#line 6 "univ.opt"
    if (mercury__term_to_xml__succeeded)
#line 6 "univ.opt"
      {
#line 6 "univ.opt"
        mercury__term_to_xml__String_5 = ((MR_String) mercury__term_to_xml__conv0_String_5);
#line 6 "univ.opt"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 6 "univ.opt"
      }
#line 855 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 854 "term_to_xml.m"
      {
#line 854 "term_to_xml.m"
        *mercury__term_to_xml__PrimValue_4 = mercury__term_to_xml__String_5;
#line 854 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 854 "term_to_xml.m"
      }
#line 855 "term_to_xml.m"
    else
#line 857 "term_to_xml.m"
      {
#line 857 "term_to_xml.m"
        MR_Char mercury__term_to_xml__Char_6;
#line 855 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 6 "univ.opt"
        MR_Box mercury__term_to_xml__conv1_Char_6;

#line 6 "univ.opt"
        {
#line 6 "univ.opt"
          mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_10_10, &mercury__term_to_xml__conv1_Char_6, mercury__term_to_xml__Univ_3);
        }
#line 6 "univ.opt"
        if (mercury__term_to_xml__succeeded)
#line 6 "univ.opt"
          {
#line 6 "univ.opt"
            mercury__term_to_xml__Char_6 = ((MR_Char) (MR_Word) mercury__term_to_xml__conv1_Char_6);
#line 6 "univ.opt"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 6 "univ.opt"
          }
#line 857 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 287 "string.opt"
          {
#line 287 "string.opt"
            MR_Word mercury__term_to_xml__V_5_21;
#line 287 "string.opt"
            MR_Word mercury__term_to_xml__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
            {
#line 288 "string.opt"
              mercury__term_to_xml__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Char_6));
#line 288 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_5_21, 1) = ((MR_Box) (mercury__term_to_xml__V_6_22));
#line 288 "string.opt"
            }
#line 290 "string.opt"
            {
#line 290 "string.opt"
              mercury__string__to_char_list_2_p_1(mercury__term_to_xml__PrimValue_4, mercury__term_to_xml__V_5_21);
            }
#line 287 "string.opt"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 287 "string.opt"
          }
#line 857 "term_to_xml.m"
        else
#line 859 "term_to_xml.m"
          {
#line 859 "term_to_xml.m"
            MR_Integer mercury__term_to_xml__Int_7;
#line 857 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 6 "univ.opt"
            MR_Box mercury__term_to_xml__conv2_Int_7;

#line 6 "univ.opt"
            {
#line 6 "univ.opt"
              mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_11_11, &mercury__term_to_xml__conv2_Int_7, mercury__term_to_xml__Univ_3);
            }
#line 6 "univ.opt"
            if (mercury__term_to_xml__succeeded)
#line 6 "univ.opt"
              {
#line 6 "univ.opt"
                mercury__term_to_xml__Int_7 = ((MR_Integer) mercury__term_to_xml__conv2_Int_7);
#line 6 "univ.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 6 "univ.opt"
              }
#line 859 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 295 "string.opt"
              {
#line 297 "string.opt"
                {
#line 297 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Int_7, (MR_Integer) 10, mercury__term_to_xml__PrimValue_4);
                }
#line 295 "string.opt"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 295 "string.opt"
              }
#line 859 "term_to_xml.m"
            else
#line 860 "term_to_xml.m"
              {
#line 860 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 860 "term_to_xml.m"
                MR_Float mercury__term_to_xml__Float_8;
#line 6 "univ.opt"
                MR_Box mercury__term_to_xml__conv3_Float_8;

#line 6 "univ.opt"
                {
#line 6 "univ.opt"
                  mercury__term_to_xml__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__term_to_xml__TypeCtorInfo_12_12, &mercury__term_to_xml__conv3_Float_8, mercury__term_to_xml__Univ_3);
                }
#line 6 "univ.opt"
                if (mercury__term_to_xml__succeeded)
#line 6 "univ.opt"
                  {
#line 6 "univ.opt"
                    mercury__term_to_xml__Float_8 = MR_unbox_float(mercury__term_to_xml__conv3_Float_8);
#line 6 "univ.opt"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 6 "univ.opt"
                  }
#line 860 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 860 "term_to_xml.m"
                  {
#line 309 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__primitive_value_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_to_xml__Float_8 ;
		{
#line 309 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15458 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__term_to_xml__PrimValue_4  = Str;
#line 309 "string.opt"
}
#line 309 "string.opt"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 860 "term_to_xml.m"
                  }
#line 860 "term_to_xml.m"
              }
#line 859 "term_to_xml.m"
          }
#line 857 "term_to_xml.m"
      }
#line 855 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 855 "term_to_xml.m"
  }
#line 850 "term_to_xml.m"
}

#line 805 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__get_elements_and_args_7_p_0(
#line 805 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MakeElement_8,
#line 805 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_9,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__Elements_10,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeFunctors_11,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__MaybeArities_12,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__ArgTypeLists_13,
#line 805 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__AttributeLists_14)
#line 805 "term_to_xml.m"
{
#line 831 "term_to_xml.m"
  {
#line 831 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 831 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__NumFunctors_15;
#line 1027 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_83_83;

#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__get_elements_and_args_7_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__TypeDesc_9 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 15527 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__NumFunctors_15  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1027 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1027 "term_to_xml.m"
      {
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__V_83_83 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (mercury__term_to_xml__NumFunctors_15 > mercury__term_to_xml__V_83_83);
#line 1027 "term_to_xml.m"
      }
#line 831 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 813 "term_to_xml.m"
      {
#line 813 "term_to_xml.m"
        MR_Word mercury__term_to_xml__FunctorNums_16;
#line 813 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_30_30 = (mercury__term_to_xml__NumFunctors_15 - (MR_Integer) 1);
#line 813 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Functors_17;
#line 826 "term_to_xml.m"
        MR_Word mercury__term_to_xml__Arities_18;
#line 826 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgTypeLists0_19;

#line 875 "list.opt"
        {
#line 875 "list.opt"
          mercury__list__successive_integers_4_p_0((MR_Integer) 0, mercury__term_to_xml__V_30_30, mercury__term_to_xml__V_7_87, &mercury__term_to_xml__FunctorNums_16);
        }
#line 815 "term_to_xml.m"
        {
#line 815 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_51_95_95_104_111_50_48_95_95_91_50_93_95_48_5_p_in__list_0(mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__FunctorNums_16, &mercury__term_to_xml__Functors_17, &mercury__term_to_xml__Arities_18, &mercury__term_to_xml__ArgTypeLists0_19);
        }
#line 826 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 818 "term_to_xml.m"
          {
#line 818 "term_to_xml.m"
            MR_Word mercury__term_to_xml__Requests_21;

#line 818 "term_to_xml.m"
            {
#line 818 "term_to_xml.m"
              *mercury__term_to_xml__MaybeFunctors_11 = mercury__term_to_xml__map__ho23_2_f_in__list_0(mercury__term_to_xml__Functors_17);
            }
#line 819 "term_to_xml.m"
            {
#line 819 "term_to_xml.m"
              *mercury__term_to_xml__MaybeArities_12 = mercury__term_to_xml__map__ho22_2_f_in__list_0(mercury__term_to_xml__Arities_18);
            }
#line 820 "term_to_xml.m"
            *mercury__term_to_xml__ArgTypeLists_13 = mercury__term_to_xml__ArgTypeLists0_19;
#line 821 "term_to_xml.m"
            {
#line 821 "term_to_xml.m"
              mercury__term_to_xml__Requests_21 = mercury__term_to_xml__map_corresponding__ho19_3_f_in__list_0(mercury__term_to_xml__Functors_17, mercury__term_to_xml__Arities_18);
            }
#line 825 "term_to_xml.m"
            {
#line 825 "term_to_xml.m"
              mercury__term_to_xml__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_95_104_111_50_49_95_95_91_51_93_95_48_4_p_in__list_0(mercury__term_to_xml__MakeElement_8, mercury__term_to_xml__TypeDesc_9, mercury__term_to_xml__Requests_21, mercury__term_to_xml__Elements_10, mercury__term_to_xml__AttributeLists_14);
#line 825 "term_to_xml.m"
              return;
            }
#line 818 "term_to_xml.m"
          }
#line 826 "term_to_xml.m"
        else
#line 827 "term_to_xml.m"
          {
#line 827 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_80_80 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 827 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_43_43 = (MR_Word) ((MR_Box) ((MR_String) "term_to_xml.get_elements_and_args: get_functor failed for discriminated union"));

#line 827 "term_to_xml.m"
            {
#line 827 "term_to_xml.m"
              mercury__exception__throw_1_p_0(mercury__term_to_xml__TypeCtorInfo_80_80, ((MR_Box) (mercury__term_to_xml__V_43_43)));
#line 827 "term_to_xml.m"
              return;
            }
#line 827 "term_to_xml.m"
          }
#line 813 "term_to_xml.m"
      }
#line 831 "term_to_xml.m"
    else
#line 832 "term_to_xml.m"
      {
#line 832 "term_to_xml.m"
        MR_String mercury__term_to_xml__Element_26;
#line 832 "term_to_xml.m"
        MR_Word mercury__term_to_xml__AttrFromSources_27;
#line 832 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 832 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_48_48;
#line 832 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;
#line 832 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_50_50;
#line 832 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_51_51;
#line 832 "term_to_xml.m"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_8, (MR_Integer) 1)));
#line 832 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv2_Element_26;
#line 832 "term_to_xml.m"
        MR_Box mercury__term_to_xml__conv1_AttrFromSources_27;
#line 841 "term_to_xml.m"
        MR_Word mercury__term_to_xml__ArgType_28;

#line 832 "term_to_xml.m"
        {
#line 832 "term_to_xml.m"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__MakeElement_8), ((MR_Box) (mercury__term_to_xml__TypeDesc_9)), ((MR_Box) (mercury__term_to_xml__V_47_47)), &mercury__term_to_xml__conv2_Element_26, &mercury__term_to_xml__conv1_AttrFromSources_27);
        }
#line 832 "term_to_xml.m"
        mercury__term_to_xml__Element_26 = ((MR_String) mercury__term_to_xml__conv2_Element_26);
#line 832 "term_to_xml.m"
        mercury__term_to_xml__AttrFromSources_27 = ((MR_Word) mercury__term_to_xml__conv1_AttrFromSources_27);
#line 833 "term_to_xml.m"
        mercury__term_to_xml__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "term_to_xml.m"
        {
#line 833 "term_to_xml.m"
          MR_Word base;
#line 833 "term_to_xml.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "term_to_xml.m"
          *mercury__term_to_xml__Elements_10 = base;
#line 833 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__Element_26));
#line 833 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_48_48));
#line 833 "term_to_xml.m"
        }
#line 834 "term_to_xml.m"
        mercury__term_to_xml__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 834 "term_to_xml.m"
        {
#line 834 "term_to_xml.m"
          MR_Word base;
#line 834 "term_to_xml.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "term_to_xml.m"
          *mercury__term_to_xml__AttributeLists_14 = base;
#line 834 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__AttrFromSources_27));
#line 834 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_49_49));
#line 834 "term_to_xml.m"
        }
#line 835 "term_to_xml.m"
        mercury__term_to_xml__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 835 "term_to_xml.m"
        mercury__term_to_xml__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 835 "term_to_xml.m"
        *mercury__term_to_xml__MaybeFunctors_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[19]);
#line 836 "term_to_xml.m"
        *mercury__term_to_xml__MaybeArities_12 = (MR_Word) *mercury__term_to_xml__MaybeFunctors_11;
#line 838 "term_to_xml.m"
        {
#line 838 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_array_2_p_0(mercury__term_to_xml__TypeDesc_9, &mercury__term_to_xml__ArgType_28);
        }
#line 841 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 840 "term_to_xml.m"
          {
#line 840 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_54_54;
#line 840 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_56_56;

#line 840 "term_to_xml.m"
            {
#line 840 "term_to_xml.m"
              mercury__term_to_xml__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_54_54, 0) = ((MR_Box) (mercury__term_to_xml__ArgType_28));
#line 840 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_54_54, 1) = ((MR_Box) (mercury__term_to_xml__V_55_55));
#line 840 "term_to_xml.m"
            }
#line 840 "term_to_xml.m"
            mercury__term_to_xml__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "term_to_xml.m"
            {
#line 840 "term_to_xml.m"
              MR_Word base;
#line 840 "term_to_xml.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "term_to_xml.m"
              *mercury__term_to_xml__ArgTypeLists_13 = base;
#line 840 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_to_xml__V_54_54));
#line 840 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_to_xml__V_56_56));
#line 840 "term_to_xml.m"
            }
#line 840 "term_to_xml.m"
          }
#line 841 "term_to_xml.m"
        else
#line 842 "term_to_xml.m"
          {
#line 842 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 842 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 842 "term_to_xml.m"
            *mercury__term_to_xml__ArgTypeLists_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[20]);
#line 842 "term_to_xml.m"
          }
#line 832 "term_to_xml.m"
      }
#line 831 "term_to_xml.m"
  }
#line 805 "term_to_xml.m"
}

#line 785 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__mangle_char_3_p_0(
#line 785 "term_to_xml.m"
  MR_Char mercury__term_to_xml__Chr_4,
#line 785 "term_to_xml.m"
  MR_Word mercury__term_to_xml__PrevChrs_5,
#line 785 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__3_3)
#line 785 "term_to_xml.m"
{
#line 787 "term_to_xml.m"
  {
#line 787 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 787 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 787 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Chrs_6;

#line 790 "term_to_xml.m"
    {
#line 790 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__term_to_xml__Chr_4);
    }
#line 793 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 792 "term_to_xml.m"
      {
#line 792 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 792 "term_to_xml.m"
        {
#line 792 "term_to_xml.m"
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) (mercury__term_to_xml__Chr_4));
#line 792 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__V_7_7));
#line 792 "term_to_xml.m"
        }
#line 792 "term_to_xml.m"
      }
#line 793 "term_to_xml.m"
    else
#line 794 "term_to_xml.m"
      {
#line 794 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_9_9;
#line 794 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_10_10;
#line 794 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_11_11;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_char_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_to_xml__Chr_4 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 15835 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_11_11  = Int;
#line 66 "char.opt"
}
#line 297 "string.opt"
        {
#line 297 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__V_11_11, (MR_Integer) 10, &mercury__term_to_xml__V_10_10);
        }
#line 392 "string.opt"
        {
#line 392 "string.opt"
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__V_10_10, &mercury__term_to_xml__V_9_9);
        }
#line 794 "term_to_xml.m"
        {
#line 794 "term_to_xml.m"
          mercury__term_to_xml__Chrs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 794 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__Chrs_6, 1) = ((MR_Box) (mercury__term_to_xml__V_9_9));
#line 794 "term_to_xml.m"
        }
#line 794 "term_to_xml.m"
      }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__term_to_xml__TypeCtorInfo_12_12, mercury__term_to_xml__PrevChrs_5, mercury__term_to_xml__Chrs_6, mercury__term_to_xml__HeadVar__3_3);
#line 46 "list.opt"
      return;
    }
#line 787 "term_to_xml.m"
  }
#line 785 "term_to_xml.m"
}

#line 768 "term_to_xml.m"
static MR_String MR_CALL 
mercury__term_to_xml__mangle_1_f_0(
#line 768 "term_to_xml.m"
  MR_String mercury__term_to_xml__Functor_3)
#line 768 "term_to_xml.m"
{
#line 770 "term_to_xml.m"
  {
#line 770 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 770 "term_to_xml.m"
    MR_String mercury__term_to_xml__Element_4;
#line 770 "term_to_xml.m"
    MR_String mercury__term_to_xml__Head_5;
#line 770 "term_to_xml.m"
    MR_String mercury__term_to_xml__Tail_6;
#line 770 "term_to_xml.m"
    MR_String mercury__term_to_xml__First_7;
#line 770 "term_to_xml.m"
    MR_String mercury__term_to_xml__Rest_8;
#line 770 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ElementChrs_9;
#line 770 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;
#line 770 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_13_13;
#line 770 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__Length_8_36;
#line 770 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__End_13_48;
#line 770 "term_to_xml.m"
    MR_Integer mercury__term_to_xml__V_17_49;
#line 773 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_18_18;
#line 773 "term_to_xml.m"
    MR_Word mercury__term_to_xml__List_5_23;
#line 773 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ListLow_6_24;

#line 771 "term_to_xml.m"
    {
#line 771 "term_to_xml.m"
      mercury__string__split_4_p_0(mercury__term_to_xml__Functor_3, (MR_Integer) 1, &mercury__term_to_xml__Head_5, &mercury__term_to_xml__Tail_6);
    }
#line 427 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_to_xml__Head_5 ;
		{
#line 427 "string.opt"

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

#line 15958 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 427 "string.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 773 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 773 "term_to_xml.m"
      {
#line 378 "string.opt"
        {
#line 378 "string.opt"
          mercury__string__to_char_list_2_p_0(mercury__term_to_xml__Head_5, &mercury__term_to_xml__List_5_23);
        }
#line 379 "string.opt"
        {
#line 379 "string.opt"
          mercury__string__char_list_to_lower_2_p_0(mercury__term_to_xml__List_5_23, &mercury__term_to_xml__ListLow_6_24);
        }
#line 380 "string.opt"
        {
#line 380 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__term_to_xml__ListLow_6_24, &mercury__term_to_xml__V_18_18);
        }
#line 774 "term_to_xml.m"
        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__Head_5, mercury__term_to_xml__V_18_18) == 0);
#line 773 "term_to_xml.m"
      }
#line 778 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 776 "term_to_xml.m"
      {
#line 776 "term_to_xml.m"
        mercury__term_to_xml__First_7 = mercury__term_to_xml__Head_5;
#line 777 "term_to_xml.m"
        mercury__term_to_xml__Rest_8 = mercury__term_to_xml__Tail_6;
#line 776 "term_to_xml.m"
      }
#line 778 "term_to_xml.m"
    else
#line 779 "term_to_xml.m"
      {
#line 721 "term_to_xml.m"
        mercury__term_to_xml__First_7 = (MR_String) "Tag_";
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__Head_5, mercury__term_to_xml__Tail_6, &mercury__term_to_xml__Rest_8);
        }
#line 779 "term_to_xml.m"
      }
#line 782 "term_to_xml.m"
    mercury__term_to_xml__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 16028 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__Length_8_36  = Length;
#line 244 "string.opt"
}
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__mangle_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_to_xml__Rest_8 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 16048 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_17_49  = Length;
#line 244 "string.opt"
}
#line 85 "int.opt"
    mercury__term_to_xml__succeeded = (mercury__term_to_xml__Length_8_36 < mercury__term_to_xml__V_17_49);
#line 88 "int.opt"
    if (mercury__term_to_xml__succeeded)
#line 87 "int.opt"
      mercury__term_to_xml__End_13_48 = mercury__term_to_xml__Length_8_36;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__term_to_xml__End_13_48 = mercury__term_to_xml__V_17_49;
#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__term_to_xml__foldl_between_2__ho33_6_p_in__string_0(mercury__term_to_xml__Rest_8, (MR_Integer) 0, mercury__term_to_xml__End_13_48, mercury__term_to_xml__V_12_12, &mercury__term_to_xml__ElementChrs_9);
    }
#line 394 "string.opt"
    {
#line 394 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__term_to_xml__ElementChrs_9, &mercury__term_to_xml__V_13_13);
    }
#line 260 "string.opt"
    {
#line 260 "string.opt"
      mercury__string__append_3_p_2(mercury__term_to_xml__First_7, mercury__term_to_xml__V_13_13, &mercury__term_to_xml__Element_4);
    }
#line 770 "term_to_xml.m"
    return mercury__term_to_xml__Element_4;
#line 770 "term_to_xml.m"
  }
#line 768 "term_to_xml.m"
}

#line 736 "term_to_xml.m"
static MR_bool MR_CALL 
mercury__term_to_xml__is_primitive_type_2_p_0(
#line 736 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_3,
#line 736 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_4)
#line 736 "term_to_xml.m"
{
#line 741 "term_to_xml.m"
  {
#line 741 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 739 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 739 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_13_13;
#line 56 "type_desc.opt"
    MR_String mercury__term_to_xml__V_5_5;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_9 ;
		{
#line 56 "type_desc.opt"
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
#line 16133 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_13_13  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 739 "term_to_xml.m"
    {
#line 739 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_13_13);
    }
#line 741 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 740 "term_to_xml.m"
      {
#line 740 "term_to_xml.m"
        *mercury__term_to_xml__Element_4 = (MR_String) "String";
#line 740 "term_to_xml.m"
        mercury__term_to_xml__succeeded = MR_TRUE;
#line 740 "term_to_xml.m"
      }
#line 741 "term_to_xml.m"
    else
#line 743 "term_to_xml.m"
      {
#line 741 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 741 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_14_14;
#line 56 "type_desc.opt"
        MR_Char mercury__term_to_xml__V_6_6;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_10 ;
		{
#line 56 "type_desc.opt"
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
#line 16192 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_14_14  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 741 "term_to_xml.m"
        {
#line 741 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_14_14);
        }
#line 743 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 742 "term_to_xml.m"
          {
#line 742 "term_to_xml.m"
            *mercury__term_to_xml__Element_4 = (MR_String) "Char";
#line 742 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 742 "term_to_xml.m"
          }
#line 743 "term_to_xml.m"
        else
#line 745 "term_to_xml.m"
          {
#line 743 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 743 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_15_15;
#line 56 "type_desc.opt"
            MR_Integer mercury__term_to_xml__V_7_7;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_11 ;
		{
#line 56 "type_desc.opt"
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
#line 16251 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_15_15  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 743 "term_to_xml.m"
            {
#line 743 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_15_15);
            }
#line 745 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 744 "term_to_xml.m"
              {
#line 744 "term_to_xml.m"
                *mercury__term_to_xml__Element_4 = (MR_String) "Int";
#line 744 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 744 "term_to_xml.m"
              }
#line 745 "term_to_xml.m"
            else
#line 746 "term_to_xml.m"
              {
#line 746 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 746 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_16_16;
#line 56 "type_desc.opt"
                MR_Float mercury__term_to_xml__V_8_8;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__is_primitive_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_12 ;
		{
#line 56 "type_desc.opt"
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
#line 16310 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_16_16  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 746 "term_to_xml.m"
                {
#line 746 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_3, mercury__term_to_xml__V_16_16);
                }
#line 746 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 746 "term_to_xml.m"
                  {
#line 747 "term_to_xml.m"
                    *mercury__term_to_xml__Element_4 = (MR_String) "Float";
#line 747 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 746 "term_to_xml.m"
                  }
#line 746 "term_to_xml.m"
              }
#line 745 "term_to_xml.m"
          }
#line 743 "term_to_xml.m"
      }
#line 741 "term_to_xml.m"
    return mercury__term_to_xml__succeeded;
#line 741 "term_to_xml.m"
  }
#line 736 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv3_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_3, &mercury__term_to_xml__conv2_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv1_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_3, &mercury__term_to_xml__conv0_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__4_4));
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
    if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
      *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[21];
#line 705 "term_to_xml.m"
    else
#line 705 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__2_2 = (MR_Word) &mercury__term_to_xml_scalar_common_3[22];
#line 705 "term_to_xml.m"
      else
#line 707 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__1_1, (MR_Integer) 0)));
#line 705 "term_to_xml.m"
  }
#line 702 "term_to_xml.m"
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

#line 671 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_simple_element_4_p_0(
#line 671 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_1,
#line 671 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 671 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_3,
#line 671 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__4_4)
#line 671 "term_to_xml.m"
{
#line 674 "term_to_xml.m"
  {
#line 674 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 674 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "term_to_xml.m"
      {
#line 685 "term_to_xml.m"
        MR_String mercury__term_to_xml__PrimitiveElement_13;
#line 739 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeCtorInfo_9_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 739 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_49_49;
#line 56 "type_desc.opt"
        MR_String mercury__term_to_xml__V_41_41;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_9_45 ;
		{
#line 56 "type_desc.opt"
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
#line 16530 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_49_49  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 739 "term_to_xml.m"
        {
#line 739 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_1, mercury__term_to_xml__V_49_49);
        }
#line 741 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 740 "term_to_xml.m"
          {
#line 740 "term_to_xml.m"
            mercury__term_to_xml__PrimitiveElement_13 = (MR_String) "String";
#line 740 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 740 "term_to_xml.m"
          }
#line 741 "term_to_xml.m"
        else
#line 743 "term_to_xml.m"
          {
#line 741 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtorInfo_10_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 741 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_50_50;
#line 56 "type_desc.opt"
            MR_Char mercury__term_to_xml__V_42_42;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_10_46 ;
		{
#line 56 "type_desc.opt"
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
#line 16589 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_50_50  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 741 "term_to_xml.m"
            {
#line 741 "term_to_xml.m"
              mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_1, mercury__term_to_xml__V_50_50);
            }
#line 743 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 742 "term_to_xml.m"
              {
#line 742 "term_to_xml.m"
                mercury__term_to_xml__PrimitiveElement_13 = (MR_String) "Char";
#line 742 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 742 "term_to_xml.m"
              }
#line 743 "term_to_xml.m"
            else
#line 745 "term_to_xml.m"
              {
#line 743 "term_to_xml.m"
                MR_Word mercury__term_to_xml__TypeCtorInfo_11_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 743 "term_to_xml.m"
                MR_Word mercury__term_to_xml__V_51_51;
#line 56 "type_desc.opt"
                MR_Integer mercury__term_to_xml__V_43_43;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_11_47 ;
		{
#line 56 "type_desc.opt"
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
#line 16648 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_51_51  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 743 "term_to_xml.m"
                {
#line 743 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_1, mercury__term_to_xml__V_51_51);
                }
#line 745 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 744 "term_to_xml.m"
                  {
#line 744 "term_to_xml.m"
                    mercury__term_to_xml__PrimitiveElement_13 = (MR_String) "Int";
#line 744 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = MR_TRUE;
#line 744 "term_to_xml.m"
                  }
#line 745 "term_to_xml.m"
                else
#line 746 "term_to_xml.m"
                  {
#line 746 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__TypeCtorInfo_12_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 746 "term_to_xml.m"
                    MR_Word mercury__term_to_xml__V_52_52;
#line 56 "type_desc.opt"
                    MR_Float mercury__term_to_xml__V_44_44;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeCtorInfo_12_48 ;
		{
#line 56 "type_desc.opt"
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
#line 16707 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_52_52  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 746 "term_to_xml.m"
                    {
#line 746 "term_to_xml.m"
                      mercury__term_to_xml__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_to_xml__TypeDesc_1, mercury__term_to_xml__V_52_52);
                    }
#line 746 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 746 "term_to_xml.m"
                      {
#line 747 "term_to_xml.m"
                        mercury__term_to_xml__PrimitiveElement_13 = (MR_String) "Float";
#line 747 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = MR_TRUE;
#line 746 "term_to_xml.m"
                      }
#line 746 "term_to_xml.m"
                  }
#line 745 "term_to_xml.m"
              }
#line 743 "term_to_xml.m"
          }
#line 685 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 682 "term_to_xml.m"
          {
#line 682 "term_to_xml.m"
            *mercury__term_to_xml__Element_3 = mercury__term_to_xml__PrimitiveElement_13;
#line 683 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
#line 682 "term_to_xml.m"
          }
#line 685 "term_to_xml.m"
        else
#line 688 "term_to_xml.m"
          {
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDesc_59;
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtor_60;
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgPseudoTypes_61;
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_62_62;
#line 1033 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_63_63;
#line 1033 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_64_64;
#line 1036 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_14_14;
#line 142 "type_desc.opt"
            MR_String mercury__term_to_xml___ModuleName_5_67;
#line 142 "type_desc.opt"
            MR_Integer mercury__term_to_xml___Arity_6_68;
#line 142 "type_desc.opt"
            MR_String mercury__term_to_xml___Name_5_71;
#line 142 "type_desc.opt"
            MR_Integer mercury__term_to_xml___Arity_6_72;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_1 ;
		{
#line 53 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 16785 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_59  = PseudoTypeDesc;
#line 53 "type_desc.opt"
}
#line 88 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_59 ;
		{
#line 88 "type_desc.opt"
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
#line 16817 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_60  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_61  = ArgPseudoTypeInfos;
#line 88 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1033 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
              {
#line 1036 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_61)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1036 "term_to_xml.m"
                  {
#line 1036 "term_to_xml.m"
                    mercury__term_to_xml__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_61, (MR_Integer) 0)));
#line 1036 "term_to_xml.m"
                    mercury__term_to_xml__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_61, (MR_Integer) 1)));
#line 1036 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1033 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                      {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_60 ;
		{
#line 142 "type_desc.opt"
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
#line 16889 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml___ModuleName_5_67  = TypeCtorModuleName;
	 mercury__term_to_xml__V_63_63  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_68  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1037 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_63_63, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                          {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_simple_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_60 ;
		{
#line 142 "type_desc.opt"
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
#line 16945 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_64_64  = TypeCtorModuleName;
	 mercury__term_to_xml___Name_5_71  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_72  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1038 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_64_64, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                          }
#line 1033 "term_to_xml.m"
                      }
#line 1036 "term_to_xml.m"
                  }
#line 1033 "term_to_xml.m"
              }
#line 688 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 686 "term_to_xml.m"
              {
#line 734 "term_to_xml.m"
                *mercury__term_to_xml__Element_3 = (MR_String) "Array";
#line 695 "term_to_xml.m"
                *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 686 "term_to_xml.m"
              }
#line 688 "term_to_xml.m"
            else
#line 689 "term_to_xml.m"
              {
#line 689 "term_to_xml.m"
                *mercury__term_to_xml__Element_3 = (MR_String) "Unknown";
#line 690 "term_to_xml.m"
                {
#line 690 "term_to_xml.m"
                  *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 689 "term_to_xml.m"
              }
#line 688 "term_to_xml.m"
          }
#line 685 "term_to_xml.m"
      }
#line 674 "term_to_xml.m"
    else
#line 674 "term_to_xml.m"
      {
#line 674 "term_to_xml.m"
        MR_String mercury__term_to_xml__Functor_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 677 "term_to_xml.m"
        MR_String mercury__term_to_xml__ReservedElement_9;

#line 695 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_6, (MR_String) "[]") == 0))
#line 729 "term_to_xml.m"
          {
#line 729 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_9 = (MR_String) "Nil";
#line 729 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 729 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
          if ((strcmp(mercury__term_to_xml__Functor_6, (MR_String) "{}") == 0))
#line 730 "term_to_xml.m"
            {
#line 730 "term_to_xml.m"
              mercury__term_to_xml__ReservedElement_9 = (MR_String) "Tuple";
#line 730 "term_to_xml.m"
              mercury__term_to_xml__succeeded = MR_TRUE;
#line 730 "term_to_xml.m"
            }
#line 728 "term_to_xml.m"
          else
#line 728 "term_to_xml.m"
            if ((strcmp(mercury__term_to_xml__Functor_6, (MR_String) "[|]") == 0))
#line 728 "term_to_xml.m"
              {
#line 728 "term_to_xml.m"
                mercury__term_to_xml__ReservedElement_9 = (MR_String) "List";
#line 728 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 728 "term_to_xml.m"
              }
#line 728 "term_to_xml.m"
            else
#line 728 "term_to_xml.m"
              mercury__term_to_xml__succeeded = MR_FALSE;
#line 677 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 676 "term_to_xml.m"
          *mercury__term_to_xml__Element_3 = mercury__term_to_xml__ReservedElement_9;
#line 677 "term_to_xml.m"
        else
#line 678 "term_to_xml.m"
          {
#line 678 "term_to_xml.m"
            *mercury__term_to_xml__Element_3 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_6);
          }
#line 674 "term_to_xml.m"
      }
#line 674 "term_to_xml.m"
  }
#line 671 "term_to_xml.m"
}

#line 643 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__make_unique_element_4_p_0(
#line 643 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_1,
#line 643 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__2_2,
#line 643 "term_to_xml.m"
  MR_String * mercury__term_to_xml__Element_3,
#line 643 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__4_4)
#line 643 "term_to_xml.m"
{
#line 647 "term_to_xml.m"
  {
#line 647 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 647 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "term_to_xml.m"
      {
#line 660 "term_to_xml.m"
        MR_String mercury__term_to_xml__PrimitiveElement_22;

#line 656 "term_to_xml.m"
        {
#line 656 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__term_to_xml__is_primitive_type_2_p_0(mercury__term_to_xml__TypeDesc_1, &mercury__term_to_xml__PrimitiveElement_22);
        }
#line 660 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 657 "term_to_xml.m"
          {
#line 657 "term_to_xml.m"
            *mercury__term_to_xml__Element_3 = mercury__term_to_xml__PrimitiveElement_22;
#line 658 "term_to_xml.m"
            *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[12]);
#line 657 "term_to_xml.m"
          }
#line 660 "term_to_xml.m"
        else
#line 664 "term_to_xml.m"
          {
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__PseudoTypeDesc_85;
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__TypeCtor_86;
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__ArgPseudoTypes_87;
#line 1033 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_88_88;
#line 1033 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_89_89;
#line 1033 "term_to_xml.m"
            MR_String mercury__term_to_xml__V_90_90;
#line 1036 "term_to_xml.m"
            MR_Word mercury__term_to_xml__V_23_23;
#line 142 "type_desc.opt"
            MR_String mercury__term_to_xml___ModuleName_5_93;
#line 142 "type_desc.opt"
            MR_Integer mercury__term_to_xml___Arity_6_94;
#line 142 "type_desc.opt"
            MR_String mercury__term_to_xml___Name_5_97;
#line 142 "type_desc.opt"
            MR_Integer mercury__term_to_xml___Arity_6_98;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_1 ;
		{
#line 53 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 17140 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_85  = PseudoTypeDesc;
#line 53 "type_desc.opt"
}
#line 88 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__term_to_xml__PseudoTypeDesc_85 ;
		{
#line 88 "type_desc.opt"
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
#line 17172 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__TypeCtor_86  = TypeCtorDesc;
	 mercury__term_to_xml__ArgPseudoTypes_87  = ArgPseudoTypeInfos;
#line 88 "type_desc.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 1033 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
              {
#line 1036 "term_to_xml.m"
                mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__ArgPseudoTypes_87)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1036 "term_to_xml.m"
                  {
#line 1036 "term_to_xml.m"
                    mercury__term_to_xml__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_87, (MR_Integer) 0)));
#line 1036 "term_to_xml.m"
                    mercury__term_to_xml__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ArgPseudoTypes_87, (MR_Integer) 1)));
#line 1036 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1033 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                      {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_86 ;
		{
#line 142 "type_desc.opt"
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
#line 17244 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml___ModuleName_5_93  = TypeCtorModuleName;
	 mercury__term_to_xml__V_89_89  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_94  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1037 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_89_89, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1033 "term_to_xml.m"
                          {
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__make_unique_element_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_to_xml__TypeCtor_86 ;
		{
#line 142 "type_desc.opt"
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
#line 17300 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_90_90  = TypeCtorModuleName;
	 mercury__term_to_xml___Name_5_97  = TypeCtorName;
	 mercury__term_to_xml___Arity_6_98  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 1038 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = (strcmp(mercury__term_to_xml__V_90_90, (MR_String) "array") == 0);
#line 1033 "term_to_xml.m"
                          }
#line 1033 "term_to_xml.m"
                      }
#line 1036 "term_to_xml.m"
                  }
#line 1033 "term_to_xml.m"
              }
#line 664 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 662 "term_to_xml.m"
              {
#line 662 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_33_33;
#line 662 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_35_35;
#line 662 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_36_36;

#line 662 "term_to_xml.m"
                {
#line 662 "term_to_xml.m"
                  mercury__term_to_xml__V_36_36 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_1);
                }
#line 662 "term_to_xml.m"
                {
#line 662 "term_to_xml.m"
                  mercury__term_to_xml__V_35_35 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_36_36);
                }
#line 661 "term_to_xml.m"
                {
#line 661 "term_to_xml.m"
                  mercury__term_to_xml__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__term_to_xml__V_35_35);
                }
#line 661 "term_to_xml.m"
                {
#line 661 "term_to_xml.m"
                  *mercury__term_to_xml__Element_3 = mercury__string__f_43_43_2_f_0((MR_String) "Array", mercury__term_to_xml__V_33_33);
                }
#line 663 "term_to_xml.m"
                {
#line 663 "term_to_xml.m"
                  *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 662 "term_to_xml.m"
              }
#line 664 "term_to_xml.m"
            else
#line 665 "term_to_xml.m"
              {
#line 665 "term_to_xml.m"
                MR_String mercury__term_to_xml__V_37_37;

#line 665 "term_to_xml.m"
                {
#line 665 "term_to_xml.m"
                  mercury__term_to_xml__V_37_37 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_1);
                }
#line 665 "term_to_xml.m"
                {
#line 665 "term_to_xml.m"
                  *mercury__term_to_xml__Element_3 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_37_37);
                }
#line 666 "term_to_xml.m"
                {
#line 666 "term_to_xml.m"
                  *mercury__term_to_xml__HeadVar__4_4 = mercury__term_to_xml__all_attr_sources_0_f_0();
                }
#line 665 "term_to_xml.m"
              }
#line 664 "term_to_xml.m"
          }
#line 660 "term_to_xml.m"
      }
#line 647 "term_to_xml.m"
    else
#line 647 "term_to_xml.m"
      {
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__Functor_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 0)));
#line 647 "term_to_xml.m"
        MR_Integer mercury__term_to_xml__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__2_2, (MR_Integer) 1)));
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__MangledElement_10;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_11_11;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_13_13;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_14_14;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_15_15;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_17_17;
#line 647 "term_to_xml.m"
        MR_String mercury__term_to_xml__V_18_18;
#line 650 "term_to_xml.m"
        MR_String mercury__term_to_xml__ReservedElement_9;

#line 695 "term_to_xml.m"
        *mercury__term_to_xml__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_to_xml_scalar_common_1[18]);
#line 728 "term_to_xml.m"
        if ((strcmp(mercury__term_to_xml__Functor_6, (MR_String) "[]") == 0))
#line 729 "term_to_xml.m"
          {
#line 729 "term_to_xml.m"
            mercury__term_to_xml__ReservedElement_9 = (MR_String) "Nil";
#line 729 "term_to_xml.m"
            mercury__term_to_xml__succeeded = MR_TRUE;
#line 729 "term_to_xml.m"
          }
#line 728 "term_to_xml.m"
        else
#line 728 "term_to_xml.m"
          if ((strcmp(mercury__term_to_xml__Functor_6, (MR_String) "{}") == 0))
#line 730 "term_to_xml.m"
            {
#line 730 "term_to_xml.m"
              mercury__term_to_xml__ReservedElement_9 = (MR_String) "Tuple";
#line 730 "term_to_xml.m"
              mercury__term_to_xml__succeeded = MR_TRUE;
#line 730 "term_to_xml.m"
            }
#line 728 "term_to_xml.m"
          else
#line 728 "term_to_xml.m"
            if ((strcmp(mercury__term_to_xml__Functor_6, (MR_String) "[|]") == 0))
#line 728 "term_to_xml.m"
              {
#line 728 "term_to_xml.m"
                mercury__term_to_xml__ReservedElement_9 = (MR_String) "List";
#line 728 "term_to_xml.m"
                mercury__term_to_xml__succeeded = MR_TRUE;
#line 728 "term_to_xml.m"
              }
#line 728 "term_to_xml.m"
            else
#line 728 "term_to_xml.m"
              mercury__term_to_xml__succeeded = MR_FALSE;
#line 650 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 649 "term_to_xml.m"
          mercury__term_to_xml__MangledElement_10 = mercury__term_to_xml__ReservedElement_9;
#line 650 "term_to_xml.m"
        else
#line 651 "term_to_xml.m"
          {
#line 651 "term_to_xml.m"
            mercury__term_to_xml__MangledElement_10 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__Functor_6);
          }
#line 297 "string.opt"
        {
#line 297 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__term_to_xml__Arity_7, (MR_Integer) 10, &mercury__term_to_xml__V_14_14);
        }
#line 654 "term_to_xml.m"
        {
#line 654 "term_to_xml.m"
          mercury__term_to_xml__V_18_18 = mercury__type_desc__type_name_1_f_0(mercury__term_to_xml__TypeDesc_1);
        }
#line 654 "term_to_xml.m"
        {
#line 654 "term_to_xml.m"
          mercury__term_to_xml__V_17_17 = mercury__term_to_xml__mangle_1_f_0(mercury__term_to_xml__V_18_18);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_17_17, &mercury__term_to_xml__V_15_15);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__V_14_14, mercury__term_to_xml__V_15_15, &mercury__term_to_xml__V_13_13);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2((MR_String) "--", mercury__term_to_xml__V_13_13, &mercury__term_to_xml__V_11_11);
        }
#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2(mercury__term_to_xml__MangledElement_10, mercury__term_to_xml__V_11_11, mercury__term_to_xml__Element_3);
#line 260 "string.opt"
          return;
        }
#line 647 "term_to_xml.m"
      }
#line 647 "term_to_xml.m"
  }
#line 643 "term_to_xml.m"
}

#line 618 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_external_doctype_5_p_0(
#line 618 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_33,
#line 618 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 618 "term_to_xml.m"
  MR_String mercury__term_to_xml__Root_7,
#line 618 "term_to_xml.m"
  MR_Word mercury__term_to_xml__DocType_8,
#line 618 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_12,
#line 618 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_13)
#line 618 "term_to_xml.m"
{
#line 621 "term_to_xml.m"
  {
#line 621 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 621 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_15;
#line 621 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 621 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 17532 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17534 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 17536 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 17539 "term_to_xml.c"
    {
#line 17541 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_12, &mercury__term_to_xml__STATE_VARIABLE_State_15_15);
    }
#line 17544 "term_to_xml.c"
    mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17546 "term_to_xml.c"
    {
#line 17548 "term_to_xml.c"
      mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__Root_7)), mercury__term_to_xml__STATE_VARIABLE_State_15_15, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
    }
#line 628 "term_to_xml.m"
    if (((MR_tag((MR_Word) mercury__term_to_xml__DocType_8)) == (MR_mktag((MR_Integer) 0))))
#line 625 "term_to_xml.m"
      {
#line 625 "term_to_xml.m"
        MR_String mercury__term_to_xml__PUBLIC_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_8, (MR_Integer) 0)));
#line 625 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_27;
#line 17559 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17561 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 17564 "term_to_xml.c"
        {
#line 17566 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_27_27);
        }
#line 17569 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17571 "term_to_xml.c"
        {
#line 17573 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__PUBLIC_10)), mercury__term_to_xml__STATE_VARIABLE_State_27_27, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
        }
#line 625 "term_to_xml.m"
      }
#line 628 "term_to_xml.m"
    else
#line 628 "term_to_xml.m"
      if (((MR_tag((MR_Word) mercury__term_to_xml__DocType_8)) == (MR_mktag((MR_Integer) 1))))
#line 629 "term_to_xml.m"
        {
#line 629 "term_to_xml.m"
          MR_String mercury__term_to_xml__SYSTEM_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_8, (MR_Integer) 1)));
#line 629 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 629 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 629 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
#line 629 "term_to_xml.m"
          MR_String mercury__term_to_xml__PUBLIC_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_8, (MR_Integer) 0)));
#line 17594 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17596 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 17598 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 17600 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 17603 "term_to_xml.c"
          {
#line 17605 "term_to_xml.c"
            mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
          }
#line 17608 "term_to_xml.c"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17610 "term_to_xml.c"
          {
#line 17612 "term_to_xml.c"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__PUBLIC_31)), mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_22_22);
          }
#line 17615 "term_to_xml.c"
          mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17617 "term_to_xml.c"
          {
#line 17619 "term_to_xml.c"
            mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_22, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
          }
#line 17622 "term_to_xml.c"
          mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17624 "term_to_xml.c"
          {
#line 17626 "term_to_xml.c"
            mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__SYSTEM_11)), mercury__term_to_xml__STATE_VARIABLE_State_24_24, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
          }
#line 629 "term_to_xml.m"
        }
#line 628 "term_to_xml.m"
      else
#line 635 "term_to_xml.m"
        {
#line 635 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_18;
#line 635 "term_to_xml.m"
          MR_String mercury__term_to_xml__SYSTEM_32 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_8, (MR_Integer) 0)));
#line 17639 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17641 "term_to_xml.c"
          void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 17644 "term_to_xml.c"
          {
#line 17646 "term_to_xml.c"
            mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_18_18);
          }
#line 17649 "term_to_xml.c"
          mercury__term_to_xml__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17651 "term_to_xml.c"
          {
#line 17653 "term_to_xml.c"
            mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) (mercury__term_to_xml__SYSTEM_32)), mercury__term_to_xml__STATE_VARIABLE_State_18_18, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
          }
#line 635 "term_to_xml.m"
        }
#line 17658 "term_to_xml.c"
    mercury__term_to_xml__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17660 "term_to_xml.c"
    {
#line 17662 "term_to_xml.c"
      mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_33), mercury__term_to_xml__Stream_6, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_13);
#line 17664 "term_to_xml.c"
      return;
    }
#line 621 "term_to_xml.m"
  }
#line 618 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv4_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv3_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_3, &mercury__term_to_xml__conv3_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv2_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv1_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_3, &mercury__term_to_xml__conv1_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 597 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_2(
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_47,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_46,
#line 597 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_2,
#line 597 "term_to_xml.m"
  MR_Box mercury__term_to_xml__T_3,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_4,
#line 597 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__5_5,
#line 597 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__6_6,
#line 597 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_7,
#line 597 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_8)
#line 597 "term_to_xml.m"
{
#line 602 "term_to_xml.m"
  {
#line 602 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 602 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "term_to_xml.m"
      {
#line 603 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
#line 603 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeDesc_58;
#line 56 "type_desc.opt"
        MR_Box mercury__term_to_xml__V_48_48;
#line 17788 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_47 ;
		{
#line 56 "type_desc.opt"
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
#line 17817 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_58  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 565 "term_to_xml.m"
        {
#line 565 "term_to_xml.m"
          mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_46, mercury__term_to_xml__Stream_1, mercury__term_to_xml__TypeDesc_58, mercury__term_to_xml__ElementMapping_4, mercury__term_to_xml__HeadVar__6_6, mercury__term_to_xml__STATE_VARIABLE_State_0_7, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
        }
#line 17829 "term_to_xml.c"
        mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_46, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17831 "term_to_xml.c"
        {
#line 17833 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_46), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_24_24, mercury__term_to_xml__STATE_VARIABLE_State_8);
#line 17835 "term_to_xml.c"
          return;
        }
#line 603 "term_to_xml.m"
      }
#line 602 "term_to_xml.m"
    else
#line 602 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 602 "term_to_xml.m"
        {
#line 602 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_8 = mercury__term_to_xml__STATE_VARIABLE_State_0_7;
#line 602 "term_to_xml.m"
        }
#line 602 "term_to_xml.m"
      else
#line 607 "term_to_xml.m"
        {
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__DocType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 0)));
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_33;
#line 607 "term_to_xml.m"
          MR_String mercury__term_to_xml__Functor_34;
#line 607 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_35;
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Request_38;
#line 607 "term_to_xml.m"
          MR_String mercury__term_to_xml__Root_39;
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_44_44;
#line 609 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_36_36;
#line 610 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_37_37;
#line 610 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_43_43;
#line 610 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_71_71;
#line 56 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_49_49;
#line 56 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_50_50;
#line 615 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_40_40;
#line 615 "term_to_xml.m"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 615 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv7_Root_39;
#line 615 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv6_V_40_40;

#line 606 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "term_to_xml.m"
          if ((mercury__term_to_xml__ElementMapping_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_33 = (MR_Word) &mercury__term_to_xml_scalar_common_3[19];
#line 705 "term_to_xml.m"
          else
#line 705 "term_to_xml.m"
            if ((mercury__term_to_xml__ElementMapping_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_33 = (MR_Word) &mercury__term_to_xml_scalar_common_3[20];
#line 705 "term_to_xml.m"
            else
#line 707 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_4, (MR_Integer) 0)));
#line 609 "term_to_xml.m"
          {
#line 609 "term_to_xml.m"
            mercury__deconstruct__deconstruct_5_p_2(mercury__term_to_xml__TypeInfo_for_T_47, mercury__term_to_xml__T_3, mercury__term_to_xml__NonCanon_2, &mercury__term_to_xml__Functor_34, &mercury__term_to_xml__Arity_35, &mercury__term_to_xml__V_36_36);
          }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_47 ;
		{
#line 56 "type_desc.opt"
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
#line 17938 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_43_43  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__V_43_43 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 17962 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_37_37  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 610 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 610 "term_to_xml.m"
            {
#line 1029 "term_to_xml.m"
              mercury__term_to_xml__V_71_71 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_37_37 > mercury__term_to_xml__V_71_71);
#line 610 "term_to_xml.m"
            }
#line 612 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 611 "term_to_xml.m"
            {
#line 611 "term_to_xml.m"
              mercury__term_to_xml__Request_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_38, 0) = ((MR_Box) (mercury__term_to_xml__Functor_34));
#line 611 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_38, 1) = ((MR_Box) (mercury__term_to_xml__Arity_35));
#line 611 "term_to_xml.m"
            }
#line 612 "term_to_xml.m"
          else
#line 613 "term_to_xml.m"
            mercury__term_to_xml__Request_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_47 ;
		{
#line 56 "type_desc.opt"
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
#line 18024 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_44_44  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 615 "term_to_xml.m"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_33, (MR_Integer) 1)));
#line 615 "term_to_xml.m"
          {
#line 615 "term_to_xml.m"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_33), ((MR_Box) (mercury__term_to_xml__V_44_44)), ((MR_Box) (mercury__term_to_xml__Request_38)), &mercury__term_to_xml__conv7_Root_39, &mercury__term_to_xml__conv6_V_40_40);
          }
#line 615 "term_to_xml.m"
          mercury__term_to_xml__Root_39 = ((MR_String) mercury__term_to_xml__conv7_Root_39);
#line 615 "term_to_xml.m"
          mercury__term_to_xml__V_40_40 = ((MR_Word) mercury__term_to_xml__conv6_V_40_40);
#line 616 "term_to_xml.m"
          {
#line 616 "term_to_xml.m"
            mercury__term_to_xml__write_external_doctype_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_46, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Root_39, mercury__term_to_xml__DocType_31, mercury__term_to_xml__STATE_VARIABLE_State_0_7, mercury__term_to_xml__STATE_VARIABLE_State_8);
#line 616 "term_to_xml.m"
            return;
          }
#line 607 "term_to_xml.m"
        }
#line 602 "term_to_xml.m"
  }
#line 597 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv4_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv3_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv4_Element_3, &mercury__term_to_xml__conv3_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv4_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv3_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv2_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv1_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv2_Element_3, &mercury__term_to_xml__conv1_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv2_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv1_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 593 "term_to_xml.m"
static void MR_CALL 
mercury__term_to_xml__write_doctype_8_p_0(
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_47,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_46,
#line 593 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_1,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_2,
#line 593 "term_to_xml.m"
  MR_Box mercury__term_to_xml__T_3,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_4,
#line 593 "term_to_xml.m"
  MR_Word mercury__term_to_xml__HeadVar__5_5,
#line 593 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__HeadVar__6_6,
#line 593 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_7,
#line 593 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_8)
#line 593 "term_to_xml.m"
{
#line 602 "term_to_xml.m"
  {
#line 602 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 602 "term_to_xml.m"
    if ((mercury__term_to_xml__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "term_to_xml.m"
      {
#line 603 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_24;
#line 603 "term_to_xml.m"
        MR_Word mercury__term_to_xml__TypeDesc_58;
#line 56 "type_desc.opt"
        MR_Box mercury__term_to_xml__V_48_48;
#line 18172 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_47 ;
		{
#line 56 "type_desc.opt"
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
#line 18201 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_58  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 565 "term_to_xml.m"
        {
#line 565 "term_to_xml.m"
          mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_46, mercury__term_to_xml__Stream_1, mercury__term_to_xml__TypeDesc_58, mercury__term_to_xml__ElementMapping_4, mercury__term_to_xml__HeadVar__6_6, mercury__term_to_xml__STATE_VARIABLE_State_0_7, &mercury__term_to_xml__STATE_VARIABLE_State_24_24);
        }
#line 18213 "term_to_xml.c"
        mercury__term_to_xml__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_46, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18215 "term_to_xml.c"
        {
#line 18217 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_46), mercury__term_to_xml__Stream_1, ((MR_Box) ((MR_String) "\n")), mercury__term_to_xml__STATE_VARIABLE_State_24_24, mercury__term_to_xml__STATE_VARIABLE_State_8);
#line 18219 "term_to_xml.c"
          return;
        }
#line 603 "term_to_xml.m"
      }
#line 602 "term_to_xml.m"
    else
#line 602 "term_to_xml.m"
      if ((mercury__term_to_xml__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 602 "term_to_xml.m"
        {
#line 602 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_8 = mercury__term_to_xml__STATE_VARIABLE_State_0_7;
#line 602 "term_to_xml.m"
        }
#line 602 "term_to_xml.m"
      else
#line 607 "term_to_xml.m"
        {
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__DocType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__HeadVar__5_5, (MR_Integer) 0)));
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_33;
#line 607 "term_to_xml.m"
          MR_String mercury__term_to_xml__Functor_34;
#line 607 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__Arity_35;
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Request_38;
#line 607 "term_to_xml.m"
          MR_String mercury__term_to_xml__Root_39;
#line 607 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_44_44;
#line 609 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_36_36;
#line 610 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_37_37;
#line 610 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_43_43;
#line 610 "term_to_xml.m"
          MR_Integer mercury__term_to_xml__V_71_71;
#line 56 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_49_49;
#line 56 "type_desc.opt"
          MR_Box mercury__term_to_xml__V_50_50;
#line 615 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_40_40;
#line 615 "term_to_xml.m"
          void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 615 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv7_Root_39;
#line 615 "term_to_xml.m"
          MR_Box mercury__term_to_xml__conv6_V_40_40;

#line 606 "term_to_xml.m"
          *mercury__term_to_xml__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "term_to_xml.m"
          if ((mercury__term_to_xml__ElementMapping_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_33 = (MR_Word) &mercury__term_to_xml_scalar_common_3[17];
#line 705 "term_to_xml.m"
          else
#line 705 "term_to_xml.m"
            if ((mercury__term_to_xml__ElementMapping_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_33 = (MR_Word) &mercury__term_to_xml_scalar_common_3[18];
#line 705 "term_to_xml.m"
            else
#line 707 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_4, (MR_Integer) 0)));
#line 609 "term_to_xml.m"
          {
#line 609 "term_to_xml.m"
            mercury__deconstruct__deconstruct_5_p_1(mercury__term_to_xml__TypeInfo_for_T_47, mercury__term_to_xml__T_3, mercury__term_to_xml__NonCanon_2, &mercury__term_to_xml__Functor_34, &mercury__term_to_xml__Arity_35, &mercury__term_to_xml__V_36_36);
          }
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_47 ;
		{
#line 56 "type_desc.opt"
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
#line 18322 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_43_43  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_to_xml__V_43_43 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 18346 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_to_xml__V_37_37  = Functors;
#line 67 "construct.opt"
	}
mercury__term_to_xml__succeeded  = SUCCESS_INDICATOR;
}
#line 610 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 610 "term_to_xml.m"
            {
#line 1029 "term_to_xml.m"
              mercury__term_to_xml__V_71_71 = (MR_Integer) -1;
#line 1029 "term_to_xml.m"
              mercury__term_to_xml__succeeded = (mercury__term_to_xml__V_37_37 > mercury__term_to_xml__V_71_71);
#line 610 "term_to_xml.m"
            }
#line 612 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 611 "term_to_xml.m"
            {
#line 611 "term_to_xml.m"
              mercury__term_to_xml__Request_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_38, 0) = ((MR_Box) (mercury__term_to_xml__Functor_34));
#line 611 "term_to_xml.m"
              MR_hl_field(MR_mktag(1), mercury__term_to_xml__Request_38, 1) = ((MR_Box) (mercury__term_to_xml__Arity_35));
#line 611 "term_to_xml.m"
            }
#line 612 "term_to_xml.m"
          else
#line 613 "term_to_xml.m"
            mercury__term_to_xml__Request_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_doctype_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_47 ;
		{
#line 56 "type_desc.opt"
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
#line 18408 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_44_44  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 615 "term_to_xml.m"
          mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__MakeElement_33, (MR_Integer) 1)));
#line 615 "term_to_xml.m"
          {
#line 615 "term_to_xml.m"
            mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__MakeElement_33), ((MR_Box) (mercury__term_to_xml__V_44_44)), ((MR_Box) (mercury__term_to_xml__Request_38)), &mercury__term_to_xml__conv7_Root_39, &mercury__term_to_xml__conv6_V_40_40);
          }
#line 615 "term_to_xml.m"
          mercury__term_to_xml__Root_39 = ((MR_String) mercury__term_to_xml__conv7_Root_39);
#line 615 "term_to_xml.m"
          mercury__term_to_xml__V_40_40 = ((MR_Word) mercury__term_to_xml__conv6_V_40_40);
#line 616 "term_to_xml.m"
          {
#line 616 "term_to_xml.m"
            mercury__term_to_xml__write_external_doctype_5_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_46, mercury__term_to_xml__Stream_1, mercury__term_to_xml__Root_39, mercury__term_to_xml__DocType_31, mercury__term_to_xml__STATE_VARIABLE_State_0_7, mercury__term_to_xml__STATE_VARIABLE_State_8);
#line 616 "term_to_xml.m"
            return;
          }
#line 607 "term_to_xml.m"
        }
#line 602 "term_to_xml.m"
  }
#line 593 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv3_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_3, &mercury__term_to_xml__conv2_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv1_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_3, &mercury__term_to_xml__conv0_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 467 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_3(
#line 467 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 467 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 467 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 467 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 467 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 467 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 467 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 467 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 467 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 467 "term_to_xml.m"
{
#line 557 "term_to_xml.m"
  {
#line 557 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 560 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 558 "term_to_xml.m"
    {
#line 558 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
    if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
      mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[15];
#line 705 "term_to_xml.m"
    else
#line 705 "term_to_xml.m"
      if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[16];
#line 705 "term_to_xml.m"
      else
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 561 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "term_to_xml.m"
    {
#line 560 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_3(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 557 "term_to_xml.m"
  }
#line 467 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv3_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_3, &mercury__term_to_xml__conv2_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv1_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_3, &mercury__term_to_xml__conv0_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 465 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_2(
#line 465 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 465 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 465 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 465 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 465 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 465 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 465 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 465 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 465 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 465 "term_to_xml.m"
{
#line 557 "term_to_xml.m"
  {
#line 557 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 560 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 558 "term_to_xml.m"
    {
#line 558 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
    if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
      mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[13];
#line 705 "term_to_xml.m"
    else
#line 705 "term_to_xml.m"
      if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[14];
#line 705 "term_to_xml.m"
      else
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 561 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "term_to_xml.m"
    {
#line 560 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 557 "term_to_xml.m"
  }
#line 465 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv3_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_3, &mercury__term_to_xml__conv2_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv1_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_3, &mercury__term_to_xml__conv0_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 463 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_1(
#line 463 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 463 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 463 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 463 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 463 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 463 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 463 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 463 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 463 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 463 "term_to_xml.m"
{
#line 557 "term_to_xml.m"
  {
#line 557 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 560 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 558 "term_to_xml.m"
    {
#line 558 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
    if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
      mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[11];
#line 705 "term_to_xml.m"
    else
#line 705 "term_to_xml.m"
      if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[12];
#line 705 "term_to_xml.m"
      else
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 561 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "term_to_xml.m"
    {
#line 560 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 557 "term_to_xml.m"
  }
#line 463 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv3_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_3, &mercury__term_to_xml__conv2_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv1_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_3, &mercury__term_to_xml__conv0_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 461 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_general_7_p_0(
#line 461 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_22,
#line 461 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_21,
#line 461 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_8,
#line 461 "term_to_xml.m"
  MR_Word mercury__term_to_xml__NonCanon_9,
#line 461 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_10,
#line 461 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__IndentLevel_11,
#line 461 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_12,
#line 461 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_17,
#line 461 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_18)
#line 461 "term_to_xml.m"
{
#line 557 "term_to_xml.m"
  {
#line 557 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Univ_14;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_15;
#line 557 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 560 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;

#line 558 "term_to_xml.m"
    {
#line 558 "term_to_xml.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_22, mercury__term_to_xml__Term_12, &mercury__term_to_xml__Univ_14);
    }
#line 705 "term_to_xml.m"
    if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
      mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[9];
#line 705 "term_to_xml.m"
    else
#line 705 "term_to_xml.m"
      if ((mercury__term_to_xml__ElementMapping_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = (MR_Word) &mercury__term_to_xml_scalar_common_3[10];
#line 705 "term_to_xml.m"
      else
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_10, (MR_Integer) 0)));
#line 561 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "term_to_xml.m"
    {
#line 560 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_univ_9_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_21, mercury__term_to_xml__Stream_8, mercury__term_to_xml__NonCanon_9, mercury__term_to_xml__MakeElement_15, mercury__term_to_xml__IndentLevel_11, mercury__term_to_xml__Univ_14, mercury__term_to_xml__V_19_19, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_0_17, mercury__term_to_xml__STATE_VARIABLE_State_18);
    }
#line 557 "term_to_xml.m"
  }
#line 461 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv3_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_3, &mercury__term_to_xml__conv2_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv1_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_3, &mercury__term_to_xml__conv0_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 443 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_dtd_from_type_6_p_0(
#line 443 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_48,
#line 443 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 443 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_8,
#line 443 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_9,
#line 443 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_10,
#line 443 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_23,
#line 443 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_24)
#line 443 "term_to_xml.m"
{
#line 1316 "term_to_xml.m"
  {
#line 1316 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;

#line 1317 "term_to_xml.m"
    {
#line 1317 "term_to_xml.m"
      *mercury__term_to_xml__DTDResult_10 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__TypeDesc_8);
    }
#line 1338 "term_to_xml.m"
    if ((*mercury__term_to_xml__DTDResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1339 "term_to_xml.m"
      *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1338 "term_to_xml.m"
    else
#line 1338 "term_to_xml.m"
      if ((*mercury__term_to_xml__DTDResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "term_to_xml.m"
        {
#line 1319 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_12;
#line 1334 "term_to_xml.m"
          MR_String mercury__term_to_xml__RootElement_13;
#line 1334 "term_to_xml.m"
          MR_Word mercury__term_to_xml__PseudoArgTypes_16;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeInfo_59_59;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeInfo_60_60;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeInfo_61_61;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__TypeInfo_62_62;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_25_25;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_26_26;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_27_27;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_28_28;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_29_29;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_30_30;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_31_31;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_32_32;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_55_55;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_56_56;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_57_57;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_58_58;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_75_75;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_76_76;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_77_77;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_85_85;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_86_86;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_87_87;
#line 1323 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_14_14;
#line 1323 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_15_15;
#line 1322 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_17_17;

#line 705 "term_to_xml.m"
          if ((mercury__term_to_xml__ElementMapping_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[7];
#line 705 "term_to_xml.m"
          else
#line 705 "term_to_xml.m"
            if ((mercury__term_to_xml__ElementMapping_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_12 = (MR_Word) &mercury__term_to_xml_scalar_common_3[8];
#line 705 "term_to_xml.m"
            else
#line 707 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_9, (MR_Integer) 0)));
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "term_to_xml.m"
          {
#line 1323 "term_to_xml.m"
            mercury__term_to_xml__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, 0) = NULL;
#line 1323 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, 1) = ((MR_Box) (mercury__term_to_xml__V_30_30));
#line 1323 "term_to_xml.m"
          }
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "term_to_xml.m"
          {
#line 1323 "term_to_xml.m"
            mercury__term_to_xml__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, 0) = NULL;
#line 1323 "term_to_xml.m"
            MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, 1) = ((MR_Box) (mercury__term_to_xml__V_31_31));
#line 1323 "term_to_xml.m"
          }
#line 1323 "term_to_xml.m"
          mercury__term_to_xml__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1322 "term_to_xml.m"
          {
#line 1322 "term_to_xml.m"
            mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__TypeDesc_8, &mercury__term_to_xml__V_25_25, &mercury__term_to_xml__V_55_55, &mercury__term_to_xml__V_56_56, &mercury__term_to_xml__V_28_28, &mercury__term_to_xml__V_17_17);
          }
#line 19231 "term_to_xml.c"
          mercury__term_to_xml__TypeInfo_59_59 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1348 "term_to_xml.m"
          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
            {
#line 1348 "term_to_xml.m"
              mercury__term_to_xml__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_55_55, (MR_Integer) 0)));
#line 1348 "term_to_xml.m"
              mercury__term_to_xml__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_55_55, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
              (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_76_76));
#line 1348 "term_to_xml.m"
              mercury__term_to_xml__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_26_26, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
              {
#line 1348 "term_to_xml.m"
                mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_59_59, mercury__term_to_xml__V_75_75, mercury__term_to_xml__V_77_77);
              }
#line 1322 "term_to_xml.m"
              if (mercury__term_to_xml__succeeded)
#line 1322 "term_to_xml.m"
                {
#line 19256 "term_to_xml.c"
                  mercury__term_to_xml__TypeInfo_60_60 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1348 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                  if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
                    {
#line 1348 "term_to_xml.m"
                      mercury__term_to_xml__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_56_56, (MR_Integer) 0)));
#line 1348 "term_to_xml.m"
                      mercury__term_to_xml__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_56_56, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                      (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_86_86));
#line 1348 "term_to_xml.m"
                      mercury__term_to_xml__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_27_27, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                      {
#line 1348 "term_to_xml.m"
                        mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_60_60, mercury__term_to_xml__V_85_85, mercury__term_to_xml__V_87_87);
                      }
#line 1322 "term_to_xml.m"
                      if (mercury__term_to_xml__succeeded)
#line 1322 "term_to_xml.m"
                        {
#line 1323 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1323 "term_to_xml.m"
                          if (mercury__term_to_xml__succeeded)
#line 1323 "term_to_xml.m"
                            {
#line 1323 "term_to_xml.m"
                              mercury__term_to_xml__RootElement_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_25_25, (MR_Integer) 0)));
#line 1323 "term_to_xml.m"
                              mercury__term_to_xml__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_25_25, (MR_Integer) 1)));
#line 19291 "term_to_xml.c"
                              mercury__term_to_xml__TypeInfo_61_61 = (MR_Word) &mercury__term_to_xml_scalar_common_1[7];
#line 1323 "term_to_xml.m"
                              {
#line 1323 "term_to_xml.m"
                                mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_61_61, ((MR_Box) (mercury__term_to_xml__V_29_29)), ((MR_Box) (mercury__term_to_xml__V_57_57)));
                              }
#line 1322 "term_to_xml.m"
                              if (mercury__term_to_xml__succeeded)
#line 1322 "term_to_xml.m"
                                {
#line 1323 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1323 "term_to_xml.m"
                                  if (mercury__term_to_xml__succeeded)
#line 1323 "term_to_xml.m"
                                    {
#line 1323 "term_to_xml.m"
                                      mercury__term_to_xml__PseudoArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_28_28, (MR_Integer) 0)));
#line 1323 "term_to_xml.m"
                                      mercury__term_to_xml__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_28_28, (MR_Integer) 1)));
#line 19312 "term_to_xml.c"
                                      mercury__term_to_xml__TypeInfo_62_62 = (MR_Word) &mercury__term_to_xml_scalar_common_1[8];
#line 1323 "term_to_xml.m"
                                      {
#line 1323 "term_to_xml.m"
                                        mercury__term_to_xml__succeeded = mercury__builtin__unify_2_p_0(mercury__term_to_xml__TypeInfo_62_62, ((MR_Box) (mercury__term_to_xml__V_32_32)), ((MR_Box) (mercury__term_to_xml__V_58_58)));
                                      }
#line 1323 "term_to_xml.m"
                                    }
#line 1322 "term_to_xml.m"
                                }
#line 1323 "term_to_xml.m"
                            }
#line 1322 "term_to_xml.m"
                        }
#line 1348 "term_to_xml.m"
                    }
#line 1322 "term_to_xml.m"
                }
#line 1348 "term_to_xml.m"
            }
#line 1334 "term_to_xml.m"
          if (mercury__term_to_xml__succeeded)
#line 1326 "term_to_xml.m"
            {
#line 1326 "term_to_xml.m"
              MR_Word mercury__term_to_xml__ArgTypes_18;
#line 1326 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_35_35;
#line 1326 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_36_36;
#line 1326 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_38_38;
#line 1326 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_39_39;
#line 1326 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_40_40;
#line 1326 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_41_41;
#line 19351 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 19353 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 19355 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 19357 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1325 "term_to_xml.m"
              {
#line 1325 "term_to_xml.m"
                mercury__term_to_xml__ArgTypes_18 = mercury__term_to_xml__map__ho25_2_f_in__list_0(mercury__term_to_xml__PseudoArgTypes_16);
              }
#line 19365 "term_to_xml.c"
              mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_48, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19367 "term_to_xml.c"
              {
#line 19369 "term_to_xml.c"
                mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_48), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_0_23, &mercury__term_to_xml__STATE_VARIABLE_State_35_35);
              }
#line 19372 "term_to_xml.c"
              mercury__term_to_xml__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_48, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19374 "term_to_xml.c"
              {
#line 19376 "term_to_xml.c"
                mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_48), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootElement_13)), mercury__term_to_xml__STATE_VARIABLE_State_35_35, &mercury__term_to_xml__STATE_VARIABLE_State_36_36);
              }
#line 19379 "term_to_xml.c"
              mercury__term_to_xml__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_48, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19381 "term_to_xml.c"
              {
#line 19383 "term_to_xml.c"
                mercury__term_to_xml__func_6(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_48), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " [\n\n")), mercury__term_to_xml__STATE_VARIABLE_State_36_36, &mercury__term_to_xml__STATE_VARIABLE_State_38_38);
              }
#line 1330 "term_to_xml.m"
              {
#line 1330 "term_to_xml.m"
                mercury__term_to_xml__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_39_39, 0) = ((MR_Box) (mercury__term_to_xml__TypeDesc_8));
#line 1330 "term_to_xml.m"
                MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_39_39, 1) = ((MR_Box) (mercury__term_to_xml__ArgTypes_18));
#line 1330 "term_to_xml.m"
              }
#line 48 "tree234.opt"
              mercury__term_to_xml__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1330 "term_to_xml.m"
              {
#line 1330 "term_to_xml.m"
                mercury__term_to_xml__write_dtd_types_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_48, mercury__term_to_xml__Stream_7, mercury__term_to_xml__MakeElement_12, mercury__term_to_xml__V_39_39, mercury__term_to_xml__V_40_40, mercury__term_to_xml__STATE_VARIABLE_State_38_38, &mercury__term_to_xml__STATE_VARIABLE_State_41_41);
              }
#line 19403 "term_to_xml.c"
              mercury__term_to_xml__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_48, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19405 "term_to_xml.c"
              {
#line 19407 "term_to_xml.c"
                mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_48), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\n]>")), mercury__term_to_xml__STATE_VARIABLE_State_41_41, mercury__term_to_xml__STATE_VARIABLE_State_24);
#line 19409 "term_to_xml.c"
                return;
              }
#line 1326 "term_to_xml.m"
            }
#line 1334 "term_to_xml.m"
          else
#line 1335 "term_to_xml.m"
            {
#line 1335 "term_to_xml.m"
              MR_Word mercury__term_to_xml__TypeCtorInfo_54_54 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 1335 "term_to_xml.m"
              MR_Word mercury__term_to_xml__V_44_44 = (MR_Word) ((MR_Box) ((MR_String) "term_to_xml.write_dtd_from_type: not ok to generate DTD"));

#line 1335 "term_to_xml.m"
              {
#line 1335 "term_to_xml.m"
                mercury__exception__throw_1_p_0(mercury__term_to_xml__TypeCtorInfo_54_54, ((MR_Box) (mercury__term_to_xml__V_44_44)));
#line 1335 "term_to_xml.m"
                return;
              }
#line 1335 "term_to_xml.m"
            }
#line 1319 "term_to_xml.m"
        }
#line 1338 "term_to_xml.m"
      else
#line 1338 "term_to_xml.m"
        if (((MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 1340 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1338 "term_to_xml.m"
        else
#line 1338 "term_to_xml.m"
          if (((MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_10)) == (MR_mktag((MR_Integer) 3))))
#line 1342 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1338 "term_to_xml.m"
          else
#line 1341 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_24 = mercury__term_to_xml__STATE_VARIABLE_State_0_23;
#line 1316 "term_to_xml.m"
  }
#line 443 "term_to_xml.m"
}

#line 430 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_dtd_6_p_0(
#line 430 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_17,
#line 430 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_16,
#line 430 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 430 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_9,
#line 430 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_10,
#line 430 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_13,
#line 430 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_14)
#line 430 "term_to_xml.m"
{
#line 563 "term_to_xml.m"
  {
#line 563 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 563 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeDesc_12;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_dtd_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_17 ;
		{
#line 56 "type_desc.opt"
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
#line 19507 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__TypeDesc_12  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 565 "term_to_xml.m"
    {
#line 565 "term_to_xml.m"
      mercury__term_to_xml__write_dtd_from_type_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_16, mercury__term_to_xml__Stream_7, mercury__term_to_xml__TypeDesc_12, mercury__term_to_xml__ElementMapping_9, mercury__term_to_xml__DTDResult_10, mercury__term_to_xml__STATE_VARIABLE_State_0_13, mercury__term_to_xml__STATE_VARIABLE_State_14);
#line 565 "term_to_xml.m"
      return;
    }
#line 563 "term_to_xml.m"
  }
#line 430 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv3_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv2_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv3_Element_3, &mercury__term_to_xml__conv2_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv3_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv2_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv1_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv0_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv1_Element_3, &mercury__term_to_xml__conv0_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv1_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv0_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 418 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__can_generate_dtd_2_f_0(
#line 418 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_4,
#line 418 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeDesc_5)
#line 418 "term_to_xml.m"
{
#line 1346 "term_to_xml.m"
  {
#line 1346 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 1346 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Result_6;
#line 1346 "term_to_xml.m"
    MR_Word mercury__term_to_xml__MakeElement_7;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeCtorInfo_36_36;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_37_37;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_38_38;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_39_39;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__TypeInfo_40_40;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_14_14;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_15_15;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_16_16;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_17_17;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_18_18;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_19_19;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_20_20;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_21_21;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_22_22;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_31_31;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_32_32;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_33_33;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_34_34;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_35_35;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_53_53;
#line 1348 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_54_54;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_55_55;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_63_63;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_64_64;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_65_65;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_73_73;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_74_74;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_75_75;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_83_83;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_84_84;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_85_85;
#line 1348 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_8_8;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_9_9;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11;
#line 1348 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;

#line 705 "term_to_xml.m"
    if ((mercury__term_to_xml__ElementMapping_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
      mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[5];
#line 705 "term_to_xml.m"
    else
#line 705 "term_to_xml.m"
      if ((mercury__term_to_xml__ElementMapping_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_7 = (MR_Word) &mercury__term_to_xml_scalar_common_3[6];
#line 705 "term_to_xml.m"
      else
#line 707 "term_to_xml.m"
        mercury__term_to_xml__MakeElement_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_4, (MR_Integer) 0)));
#line 1348 "term_to_xml.m"
    mercury__term_to_xml__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "term_to_xml.m"
    {
#line 1348 "term_to_xml.m"
      mercury__term_to_xml__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, 0) = NULL;
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, 1) = ((MR_Box) (mercury__term_to_xml__V_19_19));
#line 1348 "term_to_xml.m"
    }
#line 1348 "term_to_xml.m"
    mercury__term_to_xml__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "term_to_xml.m"
    {
#line 1348 "term_to_xml.m"
      mercury__term_to_xml__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, 0) = NULL;
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, 1) = ((MR_Box) (mercury__term_to_xml__V_20_20));
#line 1348 "term_to_xml.m"
    }
#line 1348 "term_to_xml.m"
    mercury__term_to_xml__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "term_to_xml.m"
    {
#line 1348 "term_to_xml.m"
      mercury__term_to_xml__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, 0) = NULL;
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, 1) = ((MR_Box) (mercury__term_to_xml__V_21_21));
#line 1348 "term_to_xml.m"
    }
#line 1348 "term_to_xml.m"
    mercury__term_to_xml__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "term_to_xml.m"
    {
#line 1348 "term_to_xml.m"
      mercury__term_to_xml__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, 0) = NULL;
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, 1) = ((MR_Box) (mercury__term_to_xml__V_22_22));
#line 1348 "term_to_xml.m"
    }
#line 1348 "term_to_xml.m"
    mercury__term_to_xml__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "term_to_xml.m"
    {
#line 1348 "term_to_xml.m"
      mercury__term_to_xml__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_18_18, 0) = NULL;
#line 1348 "term_to_xml.m"
      MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_18_18, 1) = ((MR_Box) (mercury__term_to_xml__V_23_23));
#line 1348 "term_to_xml.m"
    }
#line 1348 "term_to_xml.m"
    {
#line 1348 "term_to_xml.m"
      mercury__term_to_xml__get_elements_and_args_7_p_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__TypeDesc_5, &mercury__term_to_xml__V_31_31, &mercury__term_to_xml__V_32_32, &mercury__term_to_xml__V_33_33, &mercury__term_to_xml__V_34_34, &mercury__term_to_xml__V_35_35);
    }
#line 19773 "term_to_xml.c"
    mercury__term_to_xml__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1348 "term_to_xml.m"
    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
      {
#line 1348 "term_to_xml.m"
        mercury__term_to_xml__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_31_31, (MR_Integer) 0)));
#line 1348 "term_to_xml.m"
        mercury__term_to_xml__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_31_31, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_54_54));
#line 1348 "term_to_xml.m"
        mercury__term_to_xml__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_14_14, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
        {
#line 1348 "term_to_xml.m"
          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeCtorInfo_36_36, mercury__term_to_xml__V_53_53, mercury__term_to_xml__V_55_55);
        }
#line 1348 "term_to_xml.m"
        if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
          {
#line 19798 "term_to_xml.c"
            mercury__term_to_xml__TypeInfo_37_37 = (MR_Word) &mercury__term_to_xml_scalar_common_1[1];
#line 1348 "term_to_xml.m"
            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "term_to_xml.m"
            if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
              {
#line 1348 "term_to_xml.m"
                mercury__term_to_xml__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_32_32, (MR_Integer) 0)));
#line 1348 "term_to_xml.m"
                mercury__term_to_xml__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_32_32, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_64_64));
#line 1348 "term_to_xml.m"
                mercury__term_to_xml__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_15_15, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                {
#line 1348 "term_to_xml.m"
                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_37_37, mercury__term_to_xml__V_63_63, mercury__term_to_xml__V_65_65);
                }
#line 1348 "term_to_xml.m"
                if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
                  {
#line 19823 "term_to_xml.c"
                    mercury__term_to_xml__TypeInfo_38_38 = (MR_Word) &mercury__term_to_xml_scalar_common_1[2];
#line 1348 "term_to_xml.m"
                    mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                    if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
                      {
#line 1348 "term_to_xml.m"
                        mercury__term_to_xml__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_33_33, (MR_Integer) 0)));
#line 1348 "term_to_xml.m"
                        mercury__term_to_xml__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_33_33, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                        (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_74_74));
#line 1348 "term_to_xml.m"
                        mercury__term_to_xml__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_16_16, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                        {
#line 1348 "term_to_xml.m"
                          mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_38_38, mercury__term_to_xml__V_73_73, mercury__term_to_xml__V_75_75);
                        }
#line 1348 "term_to_xml.m"
                        if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
                          {
#line 19848 "term_to_xml.c"
                            mercury__term_to_xml__TypeInfo_39_39 = (MR_Word) &mercury__term_to_xml_scalar_common_1[0];
#line 1348 "term_to_xml.m"
                            mercury__term_to_xml__succeeded = ((MR_tag((MR_Word) mercury__term_to_xml__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                            if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
                              {
#line 1348 "term_to_xml.m"
                                mercury__term_to_xml__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_34_34, (MR_Integer) 0)));
#line 1348 "term_to_xml.m"
                                mercury__term_to_xml__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_34_34, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                                (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, (MR_Integer) 0)) = ((MR_Box) (mercury__term_to_xml__V_84_84));
#line 1348 "term_to_xml.m"
                                mercury__term_to_xml__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_17_17, (MR_Integer) 1)));
#line 1348 "term_to_xml.m"
                                {
#line 1348 "term_to_xml.m"
                                  mercury__term_to_xml__succeeded = mercury__list____Unify____list_1_0(mercury__term_to_xml__TypeInfo_39_39, mercury__term_to_xml__V_83_83, mercury__term_to_xml__V_85_85);
                                }
#line 1348 "term_to_xml.m"
                                if (mercury__term_to_xml__succeeded)
#line 1348 "term_to_xml.m"
                                  {
#line 19873 "term_to_xml.c"
                                    mercury__term_to_xml__TypeInfo_40_40 = (MR_Word) &mercury__term_to_xml_scalar_common_1[3];
#line 1348 "term_to_xml.m"
                                    {
#line 1348 "term_to_xml.m"
                                      mercury__term_to_xml__succeeded = mercury__term_to_xml____Unify____list__list_1_1(mercury__term_to_xml__TypeInfo_40_40, mercury__term_to_xml__V_18_18, mercury__term_to_xml__V_35_35);
                                    }
#line 1348 "term_to_xml.m"
                                  }
#line 1348 "term_to_xml.m"
                              }
#line 1348 "term_to_xml.m"
                          }
#line 1348 "term_to_xml.m"
                      }
#line 1348 "term_to_xml.m"
                  }
#line 1348 "term_to_xml.m"
              }
#line 1348 "term_to_xml.m"
          }
#line 1348 "term_to_xml.m"
      }
#line 1352 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 1349 "term_to_xml.m"
      {
#line 1349 "term_to_xml.m"
        MR_Word mercury__term_to_xml__PseudoTypeDesc_13;
#line 1349 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_24_24;
#line 1349 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_25_25;
#line 1349 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_26_26;
#line 1349 "term_to_xml.m"
        MR_Word mercury__term_to_xml__V_27_27;

#line 53 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__can_generate_dtd_2_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__term_to_xml__TypeDesc_5 ;
		{
#line 53 "type_desc.opt"

    PseudoTypeDesc = TypeDesc;

#line 19924 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__PseudoTypeDesc_13  = PseudoTypeDesc;
#line 53 "type_desc.opt"
}
#line 1350 "term_to_xml.m"
        mercury__term_to_xml__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "term_to_xml.m"
        {
#line 1350 "term_to_xml.m"
          mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_24_24, 0) = ((MR_Box) (mercury__term_to_xml__PseudoTypeDesc_13));
#line 1350 "term_to_xml.m"
          MR_hl_field(MR_mktag(1), mercury__term_to_xml__V_24_24, 1) = ((MR_Box) (mercury__term_to_xml__V_25_25));
#line 1350 "term_to_xml.m"
        }
#line 48 "tree234.opt"
        mercury__term_to_xml__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
        mercury__term_to_xml__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "term_to_xml.m"
        {
#line 1350 "term_to_xml.m"
          return mercury__term_to_xml__Result_6 = mercury__term_to_xml__can_generate_dtd_for_types_4_f_0(mercury__term_to_xml__MakeElement_7, mercury__term_to_xml__V_24_24, mercury__term_to_xml__V_26_26, mercury__term_to_xml__V_27_27);
        }
#line 1349 "term_to_xml.m"
      }
#line 1352 "term_to_xml.m"
    else
#line 1353 "term_to_xml.m"
      mercury__term_to_xml__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1346 "term_to_xml.m"
    return mercury__term_to_xml__Result_6;
#line 1346 "term_to_xml.m"
  }
#line 418 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv8_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv7_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_3, &mercury__term_to_xml__conv7_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv6_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv5_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_3, &mercury__term_to_xml__conv5_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 405 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(
#line 405 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 405 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 405 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 405 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_10,
#line 405 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_11,
#line 405 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeStyleSheet_12,
#line 405 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 405 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 405 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_21,
#line 405 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_22)
#line 405 "term_to_xml.m"
{
#line 538 "term_to_xml.m"
  {
#line 538 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 538 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 56 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_34_34;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_cc_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 56 "type_desc.opt"
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
#line 20101 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 1359 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeDTD_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1362 "term_to_xml.m"
      {
#line 1362 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__V_23_23);
      }
#line 1359 "term_to_xml.m"
    else
#line 1359 "term_to_xml.m"
      if ((mercury__term_to_xml__MaybeDTD_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1359 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1359 "term_to_xml.m"
      else
#line 1360 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "term_to_xml.m"
    if ((*mercury__term_to_xml__DTDResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 549 "term_to_xml.m"
      *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 548 "term_to_xml.m"
    else
#line 548 "term_to_xml.m"
      if ((*mercury__term_to_xml__DTDResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "term_to_xml.m"
        {
#line 541 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 541 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
#line 541 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 541 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Univ_68;
#line 541 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_69;
#line 541 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_71_71;
#line 544 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_16_16;
#line 560 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_70_70;

#line 542 "term_to_xml.m"
          {
#line 542 "term_to_xml.m"
            mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__V_24_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
          }
#line 582 "term_to_xml.m"
          if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "term_to_xml.m"
            mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 582 "term_to_xml.m"
          else
#line 583 "term_to_xml.m"
            {
#line 583 "term_to_xml.m"
              MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
#line 583 "term_to_xml.m"
              MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_56;
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_57;
#line 20179 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20181 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20183 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20185 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20187 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20190 "term_to_xml.c"
              {
#line 20192 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
              }
#line 20195 "term_to_xml.c"
              mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20197 "term_to_xml.c"
              {
#line 20199 "term_to_xml.c"
                mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
              }
#line 20202 "term_to_xml.c"
              mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20204 "term_to_xml.c"
              {
#line 20206 "term_to_xml.c"
                mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_19_56);
              }
#line 20209 "term_to_xml.c"
              mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20211 "term_to_xml.c"
              {
#line 20213 "term_to_xml.c"
                mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_19_56, &mercury__term_to_xml__STATE_VARIABLE_State_20_57);
              }
#line 20216 "term_to_xml.c"
              mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20218 "term_to_xml.c"
              {
#line 20220 "term_to_xml.c"
                mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_20_57, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
              }
#line 583 "term_to_xml.m"
            }
#line 544 "term_to_xml.m"
          {
#line 544 "term_to_xml.m"
            mercury__term_to_xml__write_doctype_8_p_2(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
          }
#line 558 "term_to_xml.m"
          {
#line 558 "term_to_xml.m"
            mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_68);
          }
#line 705 "term_to_xml.m"
          if ((mercury__term_to_xml__ElementMapping_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_69 = (MR_Word) &mercury__term_to_xml_scalar_common_3[3];
#line 705 "term_to_xml.m"
          else
#line 705 "term_to_xml.m"
            if ((mercury__term_to_xml__ElementMapping_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_69 = (MR_Word) &mercury__term_to_xml_scalar_common_3[4];
#line 705 "term_to_xml.m"
            else
#line 707 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
#line 561 "term_to_xml.m"
          mercury__term_to_xml__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "term_to_xml.m"
          {
#line 560 "term_to_xml.m"
            mercury__term_to_xml__write_xml_element_univ_9_p_2(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 2, mercury__term_to_xml__MakeElement_69, (MR_Integer) 0, mercury__term_to_xml__Univ_68, mercury__term_to_xml__V_71_71, &mercury__term_to_xml__V_70_70, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
          }
#line 541 "term_to_xml.m"
        }
#line 548 "term_to_xml.m"
      else
#line 548 "term_to_xml.m"
        if (((MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 550 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 548 "term_to_xml.m"
        else
#line 548 "term_to_xml.m"
          if (((MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) == (MR_mktag((MR_Integer) 3))))
#line 552 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 548 "term_to_xml.m"
          else
#line 551 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 538 "term_to_xml.m"
  }
#line 405 "term_to_xml.m"
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
    MR_String mercury__term_to_xml__conv8_Element_3;
#line 706 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv7_HeadVar__4_4;

#line 706 "term_to_xml.m"
    {
#line 706 "term_to_xml.m"
      mercury__term_to_xml__make_unique_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv8_Element_3, &mercury__term_to_xml__conv7_HeadVar__4_4);
    }
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv8_Element_3));
#line 706 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv7_HeadVar__4_4));
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
    MR_String mercury__term_to_xml__conv6_Element_3;
#line 705 "term_to_xml.m"
    MR_Word mercury__term_to_xml__conv5_HeadVar__4_4;

#line 705 "term_to_xml.m"
    {
#line 705 "term_to_xml.m"
      mercury__term_to_xml__make_simple_element_4_p_0(((MR_Word) mercury__term_to_xml__wrapper_arg_1), ((MR_Word) mercury__term_to_xml__wrapper_arg_2), &mercury__term_to_xml__conv6_Element_3, &mercury__term_to_xml__conv5_HeadVar__4_4);
    }
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_3 = ((MR_Box) (mercury__term_to_xml__conv6_Element_3));
#line 705 "term_to_xml.m"
    *mercury__term_to_xml__wrapper_arg_4 = ((MR_Box) (mercury__term_to_xml__conv5_HeadVar__4_4));
#line 705 "term_to_xml.m"
  }
#line 705 "term_to_xml.m"
}

#line 387 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_general_8_p_0(
#line 387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeInfo_for_T_33,
#line 387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_32,
#line 387 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_9,
#line 387 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_10,
#line 387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__ElementMapping_11,
#line 387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeStyleSheet_12,
#line 387 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_13,
#line 387 "term_to_xml.m"
  MR_Word * mercury__term_to_xml__DTDResult_14,
#line 387 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_21,
#line 387 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_22)
#line 387 "term_to_xml.m"
{
#line 519 "term_to_xml.m"
  {
#line 519 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 519 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_23_23;
#line 56 "type_desc.opt"
    MR_Box mercury__term_to_xml__V_34_34;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_to_xml__write_xml_doc_general_8_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_to_xml__TypeInfo_for_T_33 ;
		{
#line 56 "type_desc.opt"
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
#line 20415 "term_to_xml.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_to_xml__V_23_23  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 1359 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeDTD_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1362 "term_to_xml.m"
      {
#line 1362 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = mercury__term_to_xml__can_generate_dtd_2_f_0(mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__V_23_23);
      }
#line 1359 "term_to_xml.m"
    else
#line 1359 "term_to_xml.m"
      if ((mercury__term_to_xml__MaybeDTD_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1359 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1359 "term_to_xml.m"
      else
#line 1360 "term_to_xml.m"
        *mercury__term_to_xml__DTDResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "term_to_xml.m"
    if ((*mercury__term_to_xml__DTDResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 530 "term_to_xml.m"
      *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 529 "term_to_xml.m"
    else
#line 529 "term_to_xml.m"
      if ((*mercury__term_to_xml__DTDResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "term_to_xml.m"
        {
#line 522 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 522 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 522 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_26_26;
#line 522 "term_to_xml.m"
          MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_28;
#line 522 "term_to_xml.m"
          MR_Word mercury__term_to_xml__Univ_68;
#line 522 "term_to_xml.m"
          MR_Word mercury__term_to_xml__MakeElement_69;
#line 522 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_71_71;
#line 525 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_16_16;
#line 560 "term_to_xml.m"
          MR_Word mercury__term_to_xml__V_70_70;

#line 523 "term_to_xml.m"
          {
#line 523 "term_to_xml.m"
            mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, mercury__term_to_xml__V_24_24, mercury__term_to_xml__STATE_VARIABLE_State_0_21, &mercury__term_to_xml__STATE_VARIABLE_State_25_25);
          }
#line 582 "term_to_xml.m"
          if ((mercury__term_to_xml__MaybeStyleSheet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "term_to_xml.m"
            mercury__term_to_xml__STATE_VARIABLE_State_26_26 = mercury__term_to_xml__STATE_VARIABLE_State_25_25;
#line 582 "term_to_xml.m"
          else
#line 583 "term_to_xml.m"
            {
#line 583 "term_to_xml.m"
              MR_String mercury__term_to_xml__Type_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 0)));
#line 583 "term_to_xml.m"
              MR_String mercury__term_to_xml__Href_48 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_12, (MR_Integer) 1)));
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_53;
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_54;
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_56;
#line 583 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_57;
#line 20493 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20495 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20497 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20499 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20501 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20504 "term_to_xml.c"
              {
#line 20506 "term_to_xml.c"
                mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_25_25, &mercury__term_to_xml__STATE_VARIABLE_State_16_53);
              }
#line 20509 "term_to_xml.c"
              mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20511 "term_to_xml.c"
              {
#line 20513 "term_to_xml.c"
                mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Type_47)), mercury__term_to_xml__STATE_VARIABLE_State_16_53, &mercury__term_to_xml__STATE_VARIABLE_State_17_54);
              }
#line 20516 "term_to_xml.c"
              mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20518 "term_to_xml.c"
              {
#line 20520 "term_to_xml.c"
                mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_17_54, &mercury__term_to_xml__STATE_VARIABLE_State_19_56);
              }
#line 20523 "term_to_xml.c"
              mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20525 "term_to_xml.c"
              {
#line 20527 "term_to_xml.c"
                mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) (mercury__term_to_xml__Href_48)), mercury__term_to_xml__STATE_VARIABLE_State_19_56, &mercury__term_to_xml__STATE_VARIABLE_State_20_57);
              }
#line 20530 "term_to_xml.c"
              mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20532 "term_to_xml.c"
              {
#line 20534 "term_to_xml.c"
                mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_32), mercury__term_to_xml__Stream_9, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_20_57, &mercury__term_to_xml__STATE_VARIABLE_State_26_26);
              }
#line 583 "term_to_xml.m"
            }
#line 525 "term_to_xml.m"
          {
#line 525 "term_to_xml.m"
            mercury__term_to_xml__write_doctype_8_p_0(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__Term_10, mercury__term_to_xml__ElementMapping_11, mercury__term_to_xml__MaybeDTD_13, &mercury__term_to_xml__V_16_16, mercury__term_to_xml__STATE_VARIABLE_State_26_26, &mercury__term_to_xml__STATE_VARIABLE_State_28_28);
          }
#line 558 "term_to_xml.m"
          {
#line 558 "term_to_xml.m"
            mercury__univ__type_to_univ_2_p_1(mercury__term_to_xml__TypeInfo_for_T_33, mercury__term_to_xml__Term_10, &mercury__term_to_xml__Univ_68);
          }
#line 705 "term_to_xml.m"
          if ((mercury__term_to_xml__ElementMapping_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "term_to_xml.m"
            mercury__term_to_xml__MakeElement_69 = (MR_Word) &mercury__term_to_xml_scalar_common_3[1];
#line 705 "term_to_xml.m"
          else
#line 705 "term_to_xml.m"
            if ((mercury__term_to_xml__ElementMapping_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 706 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_69 = (MR_Word) &mercury__term_to_xml_scalar_common_3[2];
#line 705 "term_to_xml.m"
            else
#line 707 "term_to_xml.m"
              mercury__term_to_xml__MakeElement_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__ElementMapping_11, (MR_Integer) 0)));
#line 561 "term_to_xml.m"
          mercury__term_to_xml__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "term_to_xml.m"
          {
#line 560 "term_to_xml.m"
            mercury__term_to_xml__write_xml_element_univ_9_p_1(mercury__term_to_xml__TypeClassInfo_for_writer_32, mercury__term_to_xml__Stream_9, (MR_Integer) 1, mercury__term_to_xml__MakeElement_69, (MR_Integer) 0, mercury__term_to_xml__Univ_68, mercury__term_to_xml__V_71_71, &mercury__term_to_xml__V_70_70, mercury__term_to_xml__STATE_VARIABLE_State_28_28, mercury__term_to_xml__STATE_VARIABLE_State_22);
          }
#line 522 "term_to_xml.m"
        }
#line 529 "term_to_xml.m"
      else
#line 529 "term_to_xml.m"
        if (((MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 531 "term_to_xml.m"
          *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 529 "term_to_xml.m"
        else
#line 529 "term_to_xml.m"
          if (((MR_tag((MR_Word) *mercury__term_to_xml__DTDResult_14)) == (MR_mktag((MR_Integer) 3))))
#line 533 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 529 "term_to_xml.m"
          else
#line 532 "term_to_xml.m"
            *mercury__term_to_xml__STATE_VARIABLE_State_22 = mercury__term_to_xml__STATE_VARIABLE_State_0_21;
#line 519 "term_to_xml.m"
  }
#line 387 "term_to_xml.m"
}

#line 201 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_header_4_p_0(
#line 201 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_20,
#line 201 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 201 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeEncoding_6,
#line 201 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_9,
#line 201 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_10)
#line 201 "term_to_xml.m"
{
#line 567 "term_to_xml.m"
  {
#line 567 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 567 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_12_12;
#line 20614 "term_to_xml.c"
    void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 20617 "term_to_xml.c"
    {
#line 20619 "term_to_xml.c"
      mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "<\?xml version=\"1.0\"")), mercury__term_to_xml__STATE_VARIABLE_State_0_9, &mercury__term_to_xml__STATE_VARIABLE_State_12_12);
    }
#line 574 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeEncoding_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "term_to_xml.m"
      {
#line 20626 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));

#line 20629 "term_to_xml.c"
        {
#line 20631 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 20633 "term_to_xml.c"
          return;
        }
#line 575 "term_to_xml.m"
      }
#line 574 "term_to_xml.m"
    else
#line 570 "term_to_xml.m"
      {
#line 570 "term_to_xml.m"
        MR_String mercury__term_to_xml__Encoding_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeEncoding_6, (MR_Integer) 0)));
#line 570 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_16;
#line 570 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_17;
#line 20648 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20650 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20652 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20655 "term_to_xml.c"
        {
#line 20657 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) " encoding=\"")), mercury__term_to_xml__STATE_VARIABLE_State_12_12, &mercury__term_to_xml__STATE_VARIABLE_State_16_16);
        }
#line 20660 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20662 "term_to_xml.c"
        {
#line 20664 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) (mercury__term_to_xml__Encoding_8)), mercury__term_to_xml__STATE_VARIABLE_State_16_16, &mercury__term_to_xml__STATE_VARIABLE_State_17_17);
        }
#line 20667 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20669 "term_to_xml.c"
        {
#line 20671 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_20), mercury__term_to_xml__Stream_5, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_17_17, mercury__term_to_xml__STATE_VARIABLE_State_10);
#line 20673 "term_to_xml.c"
          return;
        }
#line 570 "term_to_xml.m"
      }
#line 567 "term_to_xml.m"
  }
#line 201 "term_to_xml.m"
}

#line 190 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_element_5_p_0(
#line 190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_18,
#line 190 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_19,
#line 190 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_6,
#line 190 "term_to_xml.m"
  MR_Integer mercury__term_to_xml__Indent_7,
#line 190 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_8,
#line 190 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_15,
#line 190 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_16)
#line 190 "term_to_xml.m"
{
#line 508 "term_to_xml.m"
  {
#line 508 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 508 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Root_10;
#line 508 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Children_13;
#line 508 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ChildrenFormat_14;
#line 20712 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20714 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_Root_10;
#line 510 "term_to_xml.m"
    MR_String mercury__term_to_xml__V_11_11;
#line 510 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_12_12;

#line 20721 "term_to_xml.c"
    {
#line 20723 "term_to_xml.c"
      mercury__term_to_xml__conv1_Root_10 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_18), mercury__term_to_xml__Term_8);
    }
#line 20726 "term_to_xml.c"
    mercury__term_to_xml__Root_10 = ((MR_Word) mercury__term_to_xml__conv1_Root_10);
#line 510 "term_to_xml.m"
    mercury__term_to_xml__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 0)));
#line 510 "term_to_xml.m"
    mercury__term_to_xml__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 1)));
#line 510 "term_to_xml.m"
    mercury__term_to_xml__Children_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_10, (MR_Integer) 2)));
#line 511 "term_to_xml.m"
    {
#line 511 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_13);
    }
#line 513 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 512 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 1;
#line 513 "term_to_xml.m"
    else
#line 514 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_14 = (MR_Integer) 0;
#line 516 "term_to_xml.m"
    {
#line 516 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_19, mercury__term_to_xml__Stream_6, mercury__term_to_xml__ChildrenFormat_14, mercury__term_to_xml__Indent_7, mercury__term_to_xml__Root_10, mercury__term_to_xml__STATE_VARIABLE_State_0_15, mercury__term_to_xml__STATE_VARIABLE_State_16);
#line 516 "term_to_xml.m"
      return;
    }
#line 508 "term_to_xml.m"
  }
#line 190 "term_to_xml.m"
}

#line 178 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(
#line 178 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_26,
#line 178 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_27,
#line 178 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_7,
#line 178 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_8,
#line 178 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeStyleSheet_9,
#line 178 "term_to_xml.m"
  MR_Word mercury__term_to_xml__MaybeDTD_10,
#line 178 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_18,
#line 178 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_19)
#line 178 "term_to_xml.m"
{
#line 490 "term_to_xml.m"
  {
#line 490 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 490 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Root_12;
#line 490 "term_to_xml.m"
    MR_String mercury__term_to_xml__RootName_13;
#line 490 "term_to_xml.m"
    MR_Word mercury__term_to_xml__Children_15;
#line 490 "term_to_xml.m"
    MR_Word mercury__term_to_xml__ChildrenFormat_17;
#line 490 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 490 "term_to_xml.m"
    MR_Box mercury__term_to_xml__STATE_VARIABLE_State_23_23;
#line 20800 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_5)(MR_Box, MR_Box);
#line 20802 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv6_Root_12;
#line 494 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_14_14;

#line 491 "term_to_xml.m"
    {
#line 491 "term_to_xml.m"
      mercury__term_to_xml__write_xml_header_4_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__V_20_20, mercury__term_to_xml__STATE_VARIABLE_State_0_18, &mercury__term_to_xml__STATE_VARIABLE_State_21_21);
    }
#line 582 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeStyleSheet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "term_to_xml.m"
      mercury__term_to_xml__STATE_VARIABLE_State_22_22 = mercury__term_to_xml__STATE_VARIABLE_State_21_21;
#line 582 "term_to_xml.m"
    else
#line 583 "term_to_xml.m"
      {
#line 583 "term_to_xml.m"
        MR_String mercury__term_to_xml__Type_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 0)));
#line 583 "term_to_xml.m"
        MR_String mercury__term_to_xml__Href_34 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeStyleSheet_9, (MR_Integer) 1)));
#line 583 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_39;
#line 583 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_17_40;
#line 583 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_19_42;
#line 583 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_20_43;
#line 20832 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20834 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20836 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20838 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20840 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20843 "term_to_xml.c"
        {
#line 20845 "term_to_xml.c"
          mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<\?xml-stylesheet type=\"")), mercury__term_to_xml__STATE_VARIABLE_State_21_21, &mercury__term_to_xml__STATE_VARIABLE_State_16_39);
        }
#line 20848 "term_to_xml.c"
        mercury__term_to_xml__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20850 "term_to_xml.c"
        {
#line 20852 "term_to_xml.c"
          mercury__term_to_xml__func_1(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Type_33)), mercury__term_to_xml__STATE_VARIABLE_State_16_39, &mercury__term_to_xml__STATE_VARIABLE_State_17_40);
        }
#line 20855 "term_to_xml.c"
        mercury__term_to_xml__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20857 "term_to_xml.c"
        {
#line 20859 "term_to_xml.c"
          mercury__term_to_xml__func_2(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" href=\"")), mercury__term_to_xml__STATE_VARIABLE_State_17_40, &mercury__term_to_xml__STATE_VARIABLE_State_19_42);
        }
#line 20862 "term_to_xml.c"
        mercury__term_to_xml__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20864 "term_to_xml.c"
        {
#line 20866 "term_to_xml.c"
          mercury__term_to_xml__func_3(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__Href_34)), mercury__term_to_xml__STATE_VARIABLE_State_19_42, &mercury__term_to_xml__STATE_VARIABLE_State_20_43);
        }
#line 20869 "term_to_xml.c"
        mercury__term_to_xml__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20871 "term_to_xml.c"
        {
#line 20873 "term_to_xml.c"
          mercury__term_to_xml__func_4(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\"\?>\n")), mercury__term_to_xml__STATE_VARIABLE_State_20_43, &mercury__term_to_xml__STATE_VARIABLE_State_22_22);
        }
#line 583 "term_to_xml.m"
      }
#line 20878 "term_to_xml.c"
    mercury__term_to_xml__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20880 "term_to_xml.c"
    {
#line 20882 "term_to_xml.c"
      mercury__term_to_xml__conv6_Root_12 = mercury__term_to_xml__func_5(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_26), mercury__term_to_xml__Term_8);
    }
#line 20885 "term_to_xml.c"
    mercury__term_to_xml__Root_12 = ((MR_Word) mercury__term_to_xml__conv6_Root_12);
#line 494 "term_to_xml.m"
    mercury__term_to_xml__RootName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 0)));
#line 494 "term_to_xml.m"
    mercury__term_to_xml__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 1)));
#line 494 "term_to_xml.m"
    mercury__term_to_xml__Children_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__Root_12, (MR_Integer) 2)));
#line 497 "term_to_xml.m"
    if ((mercury__term_to_xml__MaybeDTD_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 496 "term_to_xml.m"
      mercury__term_to_xml__STATE_VARIABLE_State_23_23 = mercury__term_to_xml__STATE_VARIABLE_State_22_22;
#line 497 "term_to_xml.m"
    else
#line 498 "term_to_xml.m"
      {
#line 498 "term_to_xml.m"
        MR_Word mercury__term_to_xml__DocType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__MaybeDTD_10, (MR_Integer) 0)));
#line 498 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_15_55;
#line 498 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_16_56;
#line 498 "term_to_xml.m"
        MR_Box mercury__term_to_xml__STATE_VARIABLE_State_28_68;
#line 20909 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20911 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20913 "term_to_xml.c"
        void MR_CALL (* mercury__term_to_xml__func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20916 "term_to_xml.c"
        {
#line 20918 "term_to_xml.c"
          mercury__term_to_xml__func_7(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "<!DOCTYPE ")), mercury__term_to_xml__STATE_VARIABLE_State_22_22, &mercury__term_to_xml__STATE_VARIABLE_State_15_55);
        }
#line 20921 "term_to_xml.c"
        mercury__term_to_xml__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20923 "term_to_xml.c"
        {
#line 20925 "term_to_xml.c"
          mercury__term_to_xml__func_8(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__RootName_13)), mercury__term_to_xml__STATE_VARIABLE_State_15_55, &mercury__term_to_xml__STATE_VARIABLE_State_16_56);
        }
#line 628 "term_to_xml.m"
        if (((MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) == (MR_mktag((MR_Integer) 0))))
#line 625 "term_to_xml.m"
          {
#line 625 "term_to_xml.m"
            MR_String mercury__term_to_xml__PUBLIC_52 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 625 "term_to_xml.m"
            MR_Box mercury__term_to_xml__STATE_VARIABLE_State_27_67;
#line 20936 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20938 "term_to_xml.c"
            void MR_CALL (* mercury__term_to_xml__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20941 "term_to_xml.c"
            {
#line 20943 "term_to_xml.c"
              mercury__term_to_xml__func_9(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_56, &mercury__term_to_xml__STATE_VARIABLE_State_27_67);
            }
#line 20946 "term_to_xml.c"
            mercury__term_to_xml__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20948 "term_to_xml.c"
            {
#line 20950 "term_to_xml.c"
              mercury__term_to_xml__func_10(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_52)), mercury__term_to_xml__STATE_VARIABLE_State_27_67, &mercury__term_to_xml__STATE_VARIABLE_State_28_68);
            }
#line 625 "term_to_xml.m"
          }
#line 628 "term_to_xml.m"
        else
#line 628 "term_to_xml.m"
          if (((MR_tag((MR_Word) mercury__term_to_xml__DocType_16)) == (MR_mktag((MR_Integer) 1))))
#line 629 "term_to_xml.m"
            {
#line 629 "term_to_xml.m"
              MR_String mercury__term_to_xml__SYSTEM_53 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 1)));
#line 629 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_21_61;
#line 629 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_22_62;
#line 629 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_24_64;
#line 629 "term_to_xml.m"
              MR_String mercury__term_to_xml__PUBLIC_71 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 20971 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20973 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20975 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 20977 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 20980 "term_to_xml.c"
              {
#line 20982 "term_to_xml.c"
                mercury__term_to_xml__func_11(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " PUBLIC \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_56, &mercury__term_to_xml__STATE_VARIABLE_State_21_61);
              }
#line 20985 "term_to_xml.c"
              mercury__term_to_xml__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20987 "term_to_xml.c"
              {
#line 20989 "term_to_xml.c"
                mercury__term_to_xml__func_12(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__PUBLIC_71)), mercury__term_to_xml__STATE_VARIABLE_State_21_61, &mercury__term_to_xml__STATE_VARIABLE_State_22_62);
              }
#line 20992 "term_to_xml.c"
              mercury__term_to_xml__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20994 "term_to_xml.c"
              {
#line 20996 "term_to_xml.c"
                mercury__term_to_xml__func_13(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\" \"")), mercury__term_to_xml__STATE_VARIABLE_State_22_62, &mercury__term_to_xml__STATE_VARIABLE_State_24_64);
              }
#line 20999 "term_to_xml.c"
              mercury__term_to_xml__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21001 "term_to_xml.c"
              {
#line 21003 "term_to_xml.c"
                mercury__term_to_xml__func_14(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_53)), mercury__term_to_xml__STATE_VARIABLE_State_24_64, &mercury__term_to_xml__STATE_VARIABLE_State_28_68);
              }
#line 629 "term_to_xml.m"
            }
#line 628 "term_to_xml.m"
          else
#line 635 "term_to_xml.m"
            {
#line 635 "term_to_xml.m"
              MR_Box mercury__term_to_xml__STATE_VARIABLE_State_18_58;
#line 635 "term_to_xml.m"
              MR_String mercury__term_to_xml__SYSTEM_72 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_to_xml__DocType_16, (MR_Integer) 0)));
#line 21016 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21018 "term_to_xml.c"
              void MR_CALL (* mercury__term_to_xml__func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 21021 "term_to_xml.c"
              {
#line 21023 "term_to_xml.c"
                mercury__term_to_xml__func_15(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) " SYSTEM \"")), mercury__term_to_xml__STATE_VARIABLE_State_16_56, &mercury__term_to_xml__STATE_VARIABLE_State_18_58);
              }
#line 21026 "term_to_xml.c"
              mercury__term_to_xml__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21028 "term_to_xml.c"
              {
#line 21030 "term_to_xml.c"
                mercury__term_to_xml__func_16(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) (mercury__term_to_xml__SYSTEM_72)), mercury__term_to_xml__STATE_VARIABLE_State_18_58, &mercury__term_to_xml__STATE_VARIABLE_State_28_68);
              }
#line 635 "term_to_xml.m"
            }
#line 21035 "term_to_xml.c"
        mercury__term_to_xml__func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21037 "term_to_xml.c"
        {
#line 21039 "term_to_xml.c"
          mercury__term_to_xml__func_17(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_writer_27), mercury__term_to_xml__Stream_7, ((MR_Box) ((MR_String) "\">\n")), mercury__term_to_xml__STATE_VARIABLE_State_28_68, &mercury__term_to_xml__STATE_VARIABLE_State_23_23);
        }
#line 498 "term_to_xml.m"
      }
#line 501 "term_to_xml.m"
    {
#line 501 "term_to_xml.m"
      mercury__term_to_xml__succeeded = mercury__term_to_xml__contains_noformat_xml_1_p_0(mercury__term_to_xml__Children_15);
    }
#line 503 "term_to_xml.m"
    if (mercury__term_to_xml__succeeded)
#line 502 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 1;
#line 503 "term_to_xml.m"
    else
#line 504 "term_to_xml.m"
      mercury__term_to_xml__ChildrenFormat_17 = (MR_Integer) 0;
#line 506 "term_to_xml.m"
    {
#line 506 "term_to_xml.m"
      mercury__term_to_xml__write_xml_element_format_6_p_0(mercury__term_to_xml__TypeClassInfo_for_writer_27, mercury__term_to_xml__Stream_7, mercury__term_to_xml__ChildrenFormat_17, (MR_Integer) 0, mercury__term_to_xml__Root_12, mercury__term_to_xml__STATE_VARIABLE_State_23_23, mercury__term_to_xml__STATE_VARIABLE_State_19);
#line 506 "term_to_xml.m"
      return;
    }
#line 490 "term_to_xml.m"
  }
#line 178 "term_to_xml.m"
}

#line 165 "term_to_xml.m"
void MR_CALL 
mercury__term_to_xml__write_xml_doc_4_p_0(
#line 165 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_13,
#line 165 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_writer_14,
#line 165 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Stream_5,
#line 165 "term_to_xml.m"
  MR_Box mercury__term_to_xml__Term_6,
#line 165 "term_to_xml.m"
  MR_Box mercury__term_to_xml__STATE_VARIABLE_State_0_8,
#line 165 "term_to_xml.m"
  MR_Box * mercury__term_to_xml__STATE_VARIABLE_State_9)
#line 165 "term_to_xml.m"
{
#line 487 "term_to_xml.m"
  {
#line 487 "term_to_xml.m"
    MR_bool mercury__term_to_xml__succeeded;
#line 487 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "term_to_xml.m"
    MR_Word mercury__term_to_xml__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 488 "term_to_xml.m"
    {
#line 488 "term_to_xml.m"
      mercury__term_to_xml__write_xml_doc_style_dtd_6_p_0(mercury__term_to_xml__TypeClassInfo_for_xmlable_13, mercury__term_to_xml__TypeClassInfo_for_writer_14, mercury__term_to_xml__Stream_5, mercury__term_to_xml__Term_6, mercury__term_to_xml__V_10_10, mercury__term_to_xml__V_11_11, mercury__term_to_xml__STATE_VARIABLE_State_0_8, mercury__term_to_xml__STATE_VARIABLE_State_9);
#line 488 "term_to_xml.m"
      return;
    }
#line 487 "term_to_xml.m"
  }
#line 165 "term_to_xml.m"
}

#line 70 "term_to_xml.m"
MR_Word MR_CALL 
mercury__term_to_xml__to_xml_1_f_0(
#line 70 "term_to_xml.m"
  MR_Word mercury__term_to_xml__TypeClassInfo_for_xmlable_3,
#line 70 "term_to_xml.m"
  MR_Box mercury__term_to_xml__HeadVar__1_1)
#line 70 "term_to_xml.m"
{
#line 21116 "term_to_xml.c"
  {
#line 21118 "term_to_xml.c"
    MR_bool mercury__term_to_xml__succeeded;
#line 21120 "term_to_xml.c"
    MR_Word mercury__term_to_xml__HeadVar__2_2;
#line 21122 "term_to_xml.c"
    MR_Box MR_CALL (* mercury__term_to_xml__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_to_xml__TypeClassInfo_for_xmlable_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21124 "term_to_xml.c"
    MR_Box mercury__term_to_xml__conv1_HeadVar__2_2;

#line 21127 "term_to_xml.c"
    {
#line 21129 "term_to_xml.c"
      mercury__term_to_xml__conv1_HeadVar__2_2 = mercury__term_to_xml__func_0(((MR_Box) mercury__term_to_xml__TypeClassInfo_for_xmlable_3), mercury__term_to_xml__HeadVar__1_1);
    }
#line 21132 "term_to_xml.c"
    mercury__term_to_xml__HeadVar__2_2 = ((MR_Word) mercury__term_to_xml__conv1_HeadVar__2_2);
#line 21134 "term_to_xml.c"
    return mercury__term_to_xml__HeadVar__2_2;
#line 21136 "term_to_xml.c"
  }
#line 70 "term_to_xml.m"
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
