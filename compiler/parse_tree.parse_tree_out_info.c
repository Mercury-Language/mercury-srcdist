/*
** Automatically generated from `parse_tree_out_info.m'
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


/* :- module parse_tree.parse_tree_out_info. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out_info__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_info.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 99 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0;

#line 102 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1;

#line 105 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0[2];

#line 108 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2];

#line 111 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2];

#line 114 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0;

#line 117 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1;

#line 120 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0[2];

#line 123 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2];

#line 126 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2];

#line 129 "parse_tree.parse_tree_out_info.c"
static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[3];

#line 132 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[3];

#line 135 "parse_tree.parse_tree_out_info.c"
static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[3];

#line 138 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0;

#line 141 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1];

#line 144 "parse_tree.parse_tree_out_info.c"
static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1];

#line 147 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1];

#line 150 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1];

#line 153 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0;

#line 156 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1;

#line 159 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0[2];

#line 162 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2];

#line 165 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2];

#line 168 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1[1];

#line 171 "parse_tree.parse_tree_out_info.c"
static const MR_TypeClassMethod parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1[14];

#line 174 "parse_tree.parse_tree_out_info.c"
static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1;

#line 177 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
#line 180 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 182 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 185 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
#line 188 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 190 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 192 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 195 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
#line 198 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 200 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 203 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
#line 206 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 208 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 210 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 213 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
#line 216 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 218 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 221 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
#line 224 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 226 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 228 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 231 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
#line 234 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 236 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 239 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
#line 242 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 244 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 246 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 249 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 252 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 254 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 256 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 258 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 261 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 264 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 266 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 268 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 270 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 273 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 276 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 278 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 280 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 282 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 285 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 288 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 290 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 292 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 294 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 297 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 300 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 302 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 304 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 306 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 309 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 312 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 314 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 316 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 318 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 321 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 324 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 326 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 328 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 330 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 333 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 336 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 338 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 340 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 342 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 345 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 348 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 350 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 352 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 354 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 357 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 360 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 362 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 364 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 366 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 369 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 372 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 374 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 376 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 378 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 381 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 384 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 386 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 388 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 390 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 393 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 396 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 398 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 400 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 402 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 404 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4);

#line 407 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 410 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 412 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 414 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 416 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 418 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 420 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 422 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_6);

#line 425 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 428 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 430 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 432 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 434 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 437 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 440 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 442 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 444 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 446 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 449 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 452 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 454 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 456 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 458 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 461 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 464 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 466 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 468 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 470 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 473 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 476 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 478 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 480 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 482 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 485 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 488 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 490 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 492 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 494 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 497 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 500 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 502 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 504 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 506 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 509 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 512 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 514 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 516 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 518 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 521 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 524 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 526 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 528 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 530 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 533 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 536 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 538 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 540 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 542 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 545 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 548 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 550 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 552 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 554 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 557 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 560 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 562 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 564 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 566 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 569 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 572 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 574 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 576 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 578 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 580 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4);

#line 583 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 586 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 588 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 590 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 592 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 594 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 596 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 598 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_6);

#line 198 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(void);

#line 215 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(
#line 215 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 215 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 316 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
#line 316 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 316 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__Sep_2,
#line 316 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Pred_3,
#line 316 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_0_4,
#line 316 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_5);

#line 201 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
#line 201 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeInfo_for_T_6,
#line 201 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 201 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 201 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 200 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
#line 200 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 200 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2);

#line 199 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
#line 199 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 198 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(void);

#line 197 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
#line 197 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 196 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
#line 196 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 195 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
#line 195 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 194 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
#line 194 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 193 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
#line 193 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 192 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
#line 192 "parse_tree_out_info.m"
  MR_Float parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 191 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
#line 191 "parse_tree_out_info.m"
  MR_Integer parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 190 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
#line 190 "parse_tree_out_info.m"
  MR_Char parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 189 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
#line 189 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 188 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
#line 188 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1);

#line 218 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
#line 218 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeInfo_for_T_6,
#line 218 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 218 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 218 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3,
#line 218 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__4_4,
#line 218 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__5_5);

#line 217 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
#line 217 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 217 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 217 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__3_3,
#line 217 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__4_4);

#line 216 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
#line 216 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 216 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 216 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 215 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(
#line 215 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 215 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 214 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
#line 214 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 214 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 214 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 213 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
#line 213 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 213 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 213 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 212 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
#line 212 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 212 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 212 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 211 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
#line 211 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 211 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 211 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 210 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
#line 210 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 210 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 210 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 209 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
#line 209 "parse_tree_out_info.m"
  MR_Float parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 209 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 209 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 208 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
#line 208 "parse_tree_out_info.m"
  MR_Integer parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 208 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 208 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 207 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
#line 207 "parse_tree_out_info.m"
  MR_Char parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 207 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 207 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 206 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
#line 206 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 206 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 206 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);

#line 205 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
#line 205 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 205 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 205 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[1][1];




static /* final */ const MR_Box parse_tree__parse_tree_out_info_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 885 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0 = {
  (MR_String) "dont_output_line_numbers",
  (MR_Integer) 0
};

#line 891 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1 = {
  (MR_String) "do_output_line_numbers",
  (MR_Integer) 1
};

#line 897 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1
};

#line 903 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0
};

#line 909 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 915 "parse_tree.parse_tree_out_info.c"
const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_output_line_numbers",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0
};

#line 932 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0 = {
  (MR_String) "unqualified_item_names",
  (MR_Integer) 0
};

#line 938 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1 = {
  (MR_String) "qualified_item_names",
  (MR_Integer) 1
};

#line 944 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1
};

#line 950 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0
};

#line 956 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 962 "parse_tree.parse_tree_out_info.c"
const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "maybe_qualified_item_names",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0
};

#line 979 "parse_tree.parse_tree_out_info.c"
static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0
};

#line 986 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[3] = {
  (MR_String) "moi_qualify_item_names",
  (MR_String) "moi_output_line_numbers",
  (MR_String) "moi_output_lang"
};

#line 993 "parse_tree.parse_tree_out_info.c"
static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

#line 1012 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0 = {
  (MR_String) "merc_out_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0,
  NULL
};

#line 1027 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0
};

#line 1032 "parse_tree.parse_tree_out_info.c"
static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0
  }
};

#line 1041 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0
};

#line 1046 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1] = {
  (MR_Integer) 0
};

#line 1051 "parse_tree.parse_tree_out_info.c"
const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "merc_out_info",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0
};

#line 1068 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  (MR_Integer) 0
};

#line 1074 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  (MR_Integer) 1
};

#line 1080 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1
};

#line 1086 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0
};

#line 1092 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1098 "parse_tree.parse_tree_out_info.c"
const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output_lang",
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0 },
  {     parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0
};

#line 1115 "parse_tree.parse_tree_out_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__[19] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 14)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001))
};

#line 1138 "parse_tree.parse_tree_out_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__[19] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 14)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001))
};

#line 1161 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1[1] = {
  (MR_String) "U"
};

#line 1166 "parse_tree.parse_tree_out_info.c"
static const MR_TypeClassMethod parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1[14] = {
  {
    (MR_String) "add_string",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_strings",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_char",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_int",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_float",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_purity_prefix",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_quoted_atom",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_quoted_string",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_constant",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_eval_method",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_lambda_eval_method",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_escaped_string",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_format",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_list",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1240 "parse_tree.parse_tree_out_info.c"
static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1 = {
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 14,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1
};

#line 1251 "parse_tree.parse_tree_out_info.c"
const MR_TypeClassDeclStruct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_decl_output_1 = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1259 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
#line 1262 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1264 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1266 "parse_tree.parse_tree_out_info.c"
{
#line 1268 "parse_tree.parse_tree_out_info.c"
  {
#line 1270 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1273 "parse_tree.parse_tree_out_info.c"
    {
#line 1275 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1278 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1280 "parse_tree.parse_tree_out_info.c"
  }
#line 1282 "parse_tree.parse_tree_out_info.c"
}

#line 1285 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
#line 1288 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1290 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1292 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1294 "parse_tree.parse_tree_out_info.c"
{
#line 1296 "parse_tree.parse_tree_out_info.c"
  {
#line 1298 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1301 "parse_tree.parse_tree_out_info.c"
    {
#line 1303 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1306 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1308 "parse_tree.parse_tree_out_info.c"
  }
#line 1310 "parse_tree.parse_tree_out_info.c"
}

#line 1313 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
#line 1316 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1318 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1320 "parse_tree.parse_tree_out_info.c"
{
#line 1322 "parse_tree.parse_tree_out_info.c"
  {
#line 1324 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1327 "parse_tree.parse_tree_out_info.c"
    {
#line 1329 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1332 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1334 "parse_tree.parse_tree_out_info.c"
  }
#line 1336 "parse_tree.parse_tree_out_info.c"
}

#line 1339 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
#line 1342 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1344 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1346 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1348 "parse_tree.parse_tree_out_info.c"
{
#line 1350 "parse_tree.parse_tree_out_info.c"
  {
#line 1352 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1355 "parse_tree.parse_tree_out_info.c"
    {
#line 1357 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1360 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1362 "parse_tree.parse_tree_out_info.c"
  }
#line 1364 "parse_tree.parse_tree_out_info.c"
}

#line 1367 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
#line 1370 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1372 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1374 "parse_tree.parse_tree_out_info.c"
{
#line 1376 "parse_tree.parse_tree_out_info.c"
  {
#line 1378 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1381 "parse_tree.parse_tree_out_info.c"
    {
#line 1383 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1386 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1388 "parse_tree.parse_tree_out_info.c"
  }
#line 1390 "parse_tree.parse_tree_out_info.c"
}

#line 1393 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
#line 1396 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1398 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1400 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1402 "parse_tree.parse_tree_out_info.c"
{
#line 1404 "parse_tree.parse_tree_out_info.c"
  {
#line 1406 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1409 "parse_tree.parse_tree_out_info.c"
    {
#line 1411 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1414 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1416 "parse_tree.parse_tree_out_info.c"
  }
#line 1418 "parse_tree.parse_tree_out_info.c"
}

#line 1421 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
#line 1424 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1426 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1428 "parse_tree.parse_tree_out_info.c"
{
#line 1430 "parse_tree.parse_tree_out_info.c"
  {
#line 1432 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1435 "parse_tree.parse_tree_out_info.c"
    {
#line 1437 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____output_lang_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1440 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1442 "parse_tree.parse_tree_out_info.c"
  }
#line 1444 "parse_tree.parse_tree_out_info.c"
}

#line 1447 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
#line 1450 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1452 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1454 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1456 "parse_tree.parse_tree_out_info.c"
{
#line 1458 "parse_tree.parse_tree_out_info.c"
  {
#line 1460 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1463 "parse_tree.parse_tree_out_info.c"
    {
#line 1465 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____output_lang_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1468 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1470 "parse_tree.parse_tree_out_info.c"
  }
#line 1472 "parse_tree.parse_tree_out_info.c"
}

#line 1475 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 1478 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1480 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1482 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1484 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1486 "parse_tree.parse_tree_out_info.c"
{
#line 1488 "parse_tree.parse_tree_out_info.c"
  {
#line 1490 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1492 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1495 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1497 "parse_tree.parse_tree_out_info.c"
    {
#line 1499 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1502 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1504 "parse_tree.parse_tree_out_info.c"
  }
#line 1506 "parse_tree.parse_tree_out_info.c"
}

#line 1509 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 1512 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1514 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1516 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1518 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1520 "parse_tree.parse_tree_out_info.c"
{
#line 1522 "parse_tree.parse_tree_out_info.c"
  {
#line 1524 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1526 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1529 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1531 "parse_tree.parse_tree_out_info.c"
    {
#line 1533 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1536 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1538 "parse_tree.parse_tree_out_info.c"
  }
#line 1540 "parse_tree.parse_tree_out_info.c"
}

#line 1543 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 1546 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1548 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1550 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1552 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1554 "parse_tree.parse_tree_out_info.c"
{
#line 1556 "parse_tree.parse_tree_out_info.c"
  {
#line 1558 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1560 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1563 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1565 "parse_tree.parse_tree_out_info.c"
    {
#line 1567 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(((MR_Char) (MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1570 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1572 "parse_tree.parse_tree_out_info.c"
  }
#line 1574 "parse_tree.parse_tree_out_info.c"
}

#line 1577 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 1580 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1582 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1584 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1586 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1588 "parse_tree.parse_tree_out_info.c"
{
#line 1590 "parse_tree.parse_tree_out_info.c"
  {
#line 1592 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1594 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1597 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1599 "parse_tree.parse_tree_out_info.c"
    {
#line 1601 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(((MR_Integer) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1604 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1606 "parse_tree.parse_tree_out_info.c"
  }
#line 1608 "parse_tree.parse_tree_out_info.c"
}

#line 1611 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 1614 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1616 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1618 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1620 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1622 "parse_tree.parse_tree_out_info.c"
{
#line 1624 "parse_tree.parse_tree_out_info.c"
  {
#line 1626 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1628 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1631 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1633 "parse_tree.parse_tree_out_info.c"
    {
#line 1635 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(MR_unbox_float(parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1638 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1640 "parse_tree.parse_tree_out_info.c"
  }
#line 1642 "parse_tree.parse_tree_out_info.c"
}

#line 1645 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 1648 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1650 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1652 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1654 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1656 "parse_tree.parse_tree_out_info.c"
{
#line 1658 "parse_tree.parse_tree_out_info.c"
  {
#line 1660 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1662 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1665 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1667 "parse_tree.parse_tree_out_info.c"
    {
#line 1669 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1672 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1674 "parse_tree.parse_tree_out_info.c"
  }
#line 1676 "parse_tree.parse_tree_out_info.c"
}

#line 1679 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 1682 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1684 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1686 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1688 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1690 "parse_tree.parse_tree_out_info.c"
{
#line 1692 "parse_tree.parse_tree_out_info.c"
  {
#line 1694 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1696 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1699 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1701 "parse_tree.parse_tree_out_info.c"
    {
#line 1703 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1706 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1708 "parse_tree.parse_tree_out_info.c"
  }
#line 1710 "parse_tree.parse_tree_out_info.c"
}

#line 1713 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 1716 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1718 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1720 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1722 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1724 "parse_tree.parse_tree_out_info.c"
{
#line 1726 "parse_tree.parse_tree_out_info.c"
  {
#line 1728 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1730 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1733 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1735 "parse_tree.parse_tree_out_info.c"
    {
#line 1737 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1740 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1742 "parse_tree.parse_tree_out_info.c"
  }
#line 1744 "parse_tree.parse_tree_out_info.c"
}

#line 1747 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 1750 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1752 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1754 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1756 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1758 "parse_tree.parse_tree_out_info.c"
{
#line 1760 "parse_tree.parse_tree_out_info.c"
  {
#line 1762 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1764 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1767 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1769 "parse_tree.parse_tree_out_info.c"
    {
#line 1771 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1774 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1776 "parse_tree.parse_tree_out_info.c"
  }
#line 1778 "parse_tree.parse_tree_out_info.c"
}

#line 1781 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 1784 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1786 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1788 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1790 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1792 "parse_tree.parse_tree_out_info.c"
{
#line 1794 "parse_tree.parse_tree_out_info.c"
  {
#line 1796 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1798 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1801 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1803 "parse_tree.parse_tree_out_info.c"
    {
#line 1805 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1808 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1810 "parse_tree.parse_tree_out_info.c"
  }
#line 1812 "parse_tree.parse_tree_out_info.c"
}

#line 1815 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 1818 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1820 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1822 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1824 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1826 "parse_tree.parse_tree_out_info.c"
{
#line 1828 "parse_tree.parse_tree_out_info.c"
  {
#line 1830 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1832 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1835 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1837 "parse_tree.parse_tree_out_info.c"
    {
#line 1839 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1842 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1844 "parse_tree.parse_tree_out_info.c"
  }
#line 1846 "parse_tree.parse_tree_out_info.c"
}

#line 1849 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 1852 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1854 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1856 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1858 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1860 "parse_tree.parse_tree_out_info.c"
{
#line 1862 "parse_tree.parse_tree_out_info.c"
  {
#line 1864 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1866 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1869 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1871 "parse_tree.parse_tree_out_info.c"
    {
#line 1873 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1876 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1878 "parse_tree.parse_tree_out_info.c"
  }
#line 1880 "parse_tree.parse_tree_out_info.c"
}

#line 1883 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 1886 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1888 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1890 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1892 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 1894 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4)
#line 1896 "parse_tree.parse_tree_out_info.c"
{
#line 1898 "parse_tree.parse_tree_out_info.c"
  {
#line 1900 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1902 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__4_4;

#line 1905 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1907 "parse_tree.parse_tree_out_info.c"
    {
#line 1909 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_3), &parse_tree__parse_tree_out_info__conv0_HeadVar__4_4);
    }
#line 1912 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_4 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__4_4));
#line 1914 "parse_tree.parse_tree_out_info.c"
  }
#line 1916 "parse_tree.parse_tree_out_info.c"
}

#line 1919 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 1922 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1924 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1926 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1928 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 1930 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 1932 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 1934 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_6)
#line 1936 "parse_tree.parse_tree_out_info.c"
{
#line 1938 "parse_tree.parse_tree_out_info.c"
  {
#line 1940 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1942 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__5_5;

#line 1945 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1947 "parse_tree.parse_tree_out_info.c"
    {
#line 1949 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_3), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_4), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_5), &parse_tree__parse_tree_out_info__conv0_HeadVar__5_5);
    }
#line 1952 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_6 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__5_5));
#line 1954 "parse_tree.parse_tree_out_info.c"
  }
#line 1956 "parse_tree.parse_tree_out_info.c"
}

#line 1959 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 1962 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1964 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1966 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1968 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1970 "parse_tree.parse_tree_out_info.c"
{
#line 1972 "parse_tree.parse_tree_out_info.c"
  {
#line 1974 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 1977 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1979 "parse_tree.parse_tree_out_info.c"
    {
#line 1981 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 1984 "parse_tree.parse_tree_out_info.c"
  }
#line 1986 "parse_tree.parse_tree_out_info.c"
}

#line 1989 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 1992 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1994 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1996 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1998 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2000 "parse_tree.parse_tree_out_info.c"
{
#line 2002 "parse_tree.parse_tree_out_info.c"
  {
#line 2004 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2007 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2009 "parse_tree.parse_tree_out_info.c"
    {
#line 2011 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2014 "parse_tree.parse_tree_out_info.c"
  }
#line 2016 "parse_tree.parse_tree_out_info.c"
}

#line 2019 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 2022 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2024 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2026 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2028 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2030 "parse_tree.parse_tree_out_info.c"
{
#line 2032 "parse_tree.parse_tree_out_info.c"
  {
#line 2034 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2037 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2039 "parse_tree.parse_tree_out_info.c"
    {
#line 2041 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(((MR_Char) (MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2044 "parse_tree.parse_tree_out_info.c"
  }
#line 2046 "parse_tree.parse_tree_out_info.c"
}

#line 2049 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 2052 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2054 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2056 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2058 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2060 "parse_tree.parse_tree_out_info.c"
{
#line 2062 "parse_tree.parse_tree_out_info.c"
  {
#line 2064 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2067 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2069 "parse_tree.parse_tree_out_info.c"
    {
#line 2071 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(((MR_Integer) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2074 "parse_tree.parse_tree_out_info.c"
  }
#line 2076 "parse_tree.parse_tree_out_info.c"
}

#line 2079 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 2082 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2084 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2086 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2088 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2090 "parse_tree.parse_tree_out_info.c"
{
#line 2092 "parse_tree.parse_tree_out_info.c"
  {
#line 2094 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2097 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2099 "parse_tree.parse_tree_out_info.c"
    {
#line 2101 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(MR_unbox_float(parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2104 "parse_tree.parse_tree_out_info.c"
  }
#line 2106 "parse_tree.parse_tree_out_info.c"
}

#line 2109 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 2112 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2114 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2116 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2118 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2120 "parse_tree.parse_tree_out_info.c"
{
#line 2122 "parse_tree.parse_tree_out_info.c"
  {
#line 2124 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2127 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2129 "parse_tree.parse_tree_out_info.c"
    {
#line 2131 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2134 "parse_tree.parse_tree_out_info.c"
  }
#line 2136 "parse_tree.parse_tree_out_info.c"
}

#line 2139 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 2142 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2144 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2146 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2148 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2150 "parse_tree.parse_tree_out_info.c"
{
#line 2152 "parse_tree.parse_tree_out_info.c"
  {
#line 2154 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2157 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2159 "parse_tree.parse_tree_out_info.c"
    {
#line 2161 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2164 "parse_tree.parse_tree_out_info.c"
  }
#line 2166 "parse_tree.parse_tree_out_info.c"
}

#line 2169 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 2172 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2174 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2176 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2178 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2180 "parse_tree.parse_tree_out_info.c"
{
#line 2182 "parse_tree.parse_tree_out_info.c"
  {
#line 2184 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2187 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2189 "parse_tree.parse_tree_out_info.c"
    {
#line 2191 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2194 "parse_tree.parse_tree_out_info.c"
  }
#line 2196 "parse_tree.parse_tree_out_info.c"
}

#line 2199 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 2202 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2204 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2206 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2208 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2210 "parse_tree.parse_tree_out_info.c"
{
#line 2212 "parse_tree.parse_tree_out_info.c"
  {
#line 2214 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2217 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2219 "parse_tree.parse_tree_out_info.c"
    {
#line 2221 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2224 "parse_tree.parse_tree_out_info.c"
  }
#line 2226 "parse_tree.parse_tree_out_info.c"
}

#line 2229 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 2232 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2234 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2236 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2238 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2240 "parse_tree.parse_tree_out_info.c"
{
#line 2242 "parse_tree.parse_tree_out_info.c"
  {
#line 2244 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2247 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2249 "parse_tree.parse_tree_out_info.c"
    {
#line 2251 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2254 "parse_tree.parse_tree_out_info.c"
  }
#line 2256 "parse_tree.parse_tree_out_info.c"
}

#line 2259 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 2262 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2264 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2266 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2268 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2270 "parse_tree.parse_tree_out_info.c"
{
#line 2272 "parse_tree.parse_tree_out_info.c"
  {
#line 2274 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2277 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2279 "parse_tree.parse_tree_out_info.c"
    {
#line 2281 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0();
    }
#line 2284 "parse_tree.parse_tree_out_info.c"
  }
#line 2286 "parse_tree.parse_tree_out_info.c"
}

#line 2289 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 2292 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2294 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2296 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2298 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2300 "parse_tree.parse_tree_out_info.c"
{
#line 2302 "parse_tree.parse_tree_out_info.c"
  {
#line 2304 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2307 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2309 "parse_tree.parse_tree_out_info.c"
    {
#line 2311 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2314 "parse_tree.parse_tree_out_info.c"
  }
#line 2316 "parse_tree.parse_tree_out_info.c"
}

#line 2319 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 2322 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2324 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2326 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2328 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 2330 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4)
#line 2332 "parse_tree.parse_tree_out_info.c"
{
#line 2334 "parse_tree.parse_tree_out_info.c"
  {
#line 2336 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2339 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2341 "parse_tree.parse_tree_out_info.c"
    {
#line 2343 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 2346 "parse_tree.parse_tree_out_info.c"
  }
#line 2348 "parse_tree.parse_tree_out_info.c"
}

#line 2351 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 2354 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2356 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2358 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2360 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 2362 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 2364 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 2366 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_6)
#line 2368 "parse_tree.parse_tree_out_info.c"
{
#line 2370 "parse_tree.parse_tree_out_info.c"
  {
#line 2372 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2375 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2377 "parse_tree.parse_tree_out_info.c"
    {
#line 2379 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_3), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_4));
    }
#line 2382 "parse_tree.parse_tree_out_info.c"
  }
#line 2384 "parse_tree.parse_tree_out_info.c"
}

#line 198 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(void)
#line 198 "parse_tree_out_info.m"
{
#line 232 "parse_tree_out_info.m"
  {
#line 232 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 232 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__LambdaEvalMethodStr_8;

#line 241 "parse_tree_out_info.m"
    {
#line 241 "parse_tree_out_info.m"
      mercury__string__append_3_p_2((MR_String) "", (MR_String) "normal", &parse_tree__parse_tree_out_info__LambdaEvalMethodStr_8);
    }
#line 234 "parse_tree_out_info.m"
    {
#line 234 "parse_tree_out_info.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_info__LambdaEvalMethodStr_8);
#line 234 "parse_tree_out_info.m"
      return;
    }
#line 232 "parse_tree_out_info.m"
  }
#line 198 "parse_tree_out_info.m"
}

#line 215 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(
#line 215 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 215 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 215 "parse_tree_out_info.m"
{
#line 306 "parse_tree_out_info.m"
  {
#line 306 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 241 "parse_tree_out_info.m"
    {
#line 241 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_String) "normal", parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 241 "parse_tree_out_info.m"
      return;
    }
#line 306 "parse_tree_out_info.m"
  }
#line 215 "parse_tree_out_info.m"
}

#line 316 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(
#line 316 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 316 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__Sep_2,
#line 316 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Pred_3,
#line 316 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_0_4,
#line 316 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_5)
#line 316 "parse_tree_out_info.m"
{
#line 320 "parse_tree_out_info.m"
  while (MR_TRUE)
#line 320 "parse_tree_out_info.m"
    {
#line 320 "parse_tree_out_info.m"
      /* tailcall optimized into a loop */
#line 320 "parse_tree_out_info.m"
      {
#line 320 "parse_tree_out_info.m"
        MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 320 "parse_tree_out_info.m"
        if ((parse_tree__parse_tree_out_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "parse_tree_out_info.m"
          *parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_5 = parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_0_4;
#line 320 "parse_tree_out_info.m"
        else
#line 321 "parse_tree_out_info.m"
          {
#line 321 "parse_tree_out_info.m"
            MR_Box parse_tree__parse_tree_out_info__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_info__HeadVar__1_1, (MR_Integer) 0));
#line 321 "parse_tree_out_info.m"
            MR_Word parse_tree__parse_tree_out_info__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_info__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "parse_tree_out_info.m"
            MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_20;
#line 322 "parse_tree_out_info.m"
            void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Pred_3, (MR_Integer) 1)));
#line 322 "parse_tree_out_info.m"
            MR_Box parse_tree__parse_tree_out_info__conv1_STATE_VARIABLE_Str_20_20;

#line 322 "parse_tree_out_info.m"
            {
#line 322 "parse_tree_out_info.m"
              parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__Pred_3), parse_tree__parse_tree_out_info__Item_11, ((MR_Box) (parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_0_4)), &parse_tree__parse_tree_out_info__conv1_STATE_VARIABLE_Str_20_20);
            }
#line 322 "parse_tree_out_info.m"
            parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_20 = ((MR_String) parse_tree__parse_tree_out_info__conv1_STATE_VARIABLE_Str_20_20);
#line 325 "parse_tree_out_info.m"
            if ((parse_tree__parse_tree_out_info__Items_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "parse_tree_out_info.m"
              *parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_5 = parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_20;
#line 325 "parse_tree_out_info.m"
            else
#line 326 "parse_tree_out_info.m"
              {
#line 326 "parse_tree_out_info.m"
                MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_21_21;
#line 326 "parse_tree_out_info.m"
                MR_Box parse_tree__parse_tree_out_info__Item_32;
#line 326 "parse_tree_out_info.m"
                MR_Word parse_tree__parse_tree_out_info__Items_33;
#line 326 "parse_tree_out_info.m"
                MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_41;
#line 322 "parse_tree_out_info.m"
                void MR_CALL (* parse_tree__parse_tree_out_info__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 322 "parse_tree_out_info.m"
                MR_Box parse_tree__parse_tree_out_info__conv3_STATE_VARIABLE_Str_20_41;

#line 241 "parse_tree_out_info.m"
                {
#line 241 "parse_tree_out_info.m"
                  mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_20, parse_tree__parse_tree_out_info__Sep_2, &parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_21_21);
                }
#line 321 "parse_tree_out_info.m"
                parse_tree__parse_tree_out_info__Item_32 = (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_info__Items_12, (MR_Integer) 0));
#line 321 "parse_tree_out_info.m"
                parse_tree__parse_tree_out_info__Items_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_info__Items_12, (MR_Integer) 1)));
#line 322 "parse_tree_out_info.m"
                parse_tree__parse_tree_out_info__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Pred_3, (MR_Integer) 1)));
#line 322 "parse_tree_out_info.m"
                {
#line 322 "parse_tree_out_info.m"
                  parse_tree__parse_tree_out_info__func_2(((MR_Box) parse_tree__parse_tree_out_info__Pred_3), parse_tree__parse_tree_out_info__Item_32, ((MR_Box) (parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_21_21)), &parse_tree__parse_tree_out_info__conv3_STATE_VARIABLE_Str_20_41);
                }
#line 322 "parse_tree_out_info.m"
                parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_41 = ((MR_String) parse_tree__parse_tree_out_info__conv3_STATE_VARIABLE_Str_20_41);
#line 325 "parse_tree_out_info.m"
                if ((parse_tree__parse_tree_out_info__Items_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "parse_tree_out_info.m"
                  *parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_5 = parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_41;
#line 325 "parse_tree_out_info.m"
                else
#line 326 "parse_tree_out_info.m"
                  {
#line 326 "parse_tree_out_info.m"
                    MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_21_42;

#line 241 "parse_tree_out_info.m"
                    {
#line 241 "parse_tree_out_info.m"
                      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_20_41, parse_tree__parse_tree_out_info__Sep_2, &parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_21_42);
                    }
#line 328 "parse_tree_out_info.m"
                    /* direct tailcall eliminated */
#line 328 "parse_tree_out_info.m"
                    {
#line 328 "parse_tree_out_info.m"
                      MR_Word parse_tree__parse_tree_out_info__HeadVar__1__tmp_copy_1 = parse_tree__parse_tree_out_info__Items_33;
#line 328 "parse_tree_out_info.m"
                      MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_0__tmp_copy_4 = parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_21_42;

#line 328 "parse_tree_out_info.m"
                      parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_0_4 = parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_0__tmp_copy_4;
#line 328 "parse_tree_out_info.m"
                      parse_tree__parse_tree_out_info__HeadVar__1_1 = parse_tree__parse_tree_out_info__HeadVar__1__tmp_copy_1;
#line 328 "parse_tree_out_info.m"
                    }
#line 328 "parse_tree_out_info.m"
                    continue;
#line 326 "parse_tree_out_info.m"
                  }
#line 326 "parse_tree_out_info.m"
              }
#line 321 "parse_tree_out_info.m"
          }
#line 320 "parse_tree_out_info.m"
      }
#line 320 "parse_tree_out_info.m"
      break;
#line 320 "parse_tree_out_info.m"
    }
#line 316 "parse_tree_out_info.m"
}

#line 201 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
#line 201 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeInfo_for_T_6,
#line 201 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 201 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 201 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 201 "parse_tree_out_info.m"
{
#line 201 "parse_tree_out_info.m"
  {
#line 201 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 201 "parse_tree_out_info.m"
    {
#line 201 "parse_tree_out_info.m"
      mercury__io__write_list_5_p_0(parse_tree__parse_tree_out_info__TypeInfo_for_T_6, parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 201 "parse_tree_out_info.m"
      return;
    }
#line 201 "parse_tree_out_info.m"
  }
#line 201 "parse_tree_out_info.m"
}

#line 200 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
#line 200 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 200 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2)
#line 200 "parse_tree_out_info.m"
{
#line 200 "parse_tree_out_info.m"
  {
#line 200 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 200 "parse_tree_out_info.m"
    {
#line 200 "parse_tree_out_info.m"
      mercury__io__format_4_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__HeadVar__2_2);
#line 200 "parse_tree_out_info.m"
      return;
    }
#line 200 "parse_tree_out_info.m"
  }
#line 200 "parse_tree_out_info.m"
}

#line 199 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
#line 199 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 199 "parse_tree_out_info.m"
{
#line 199 "parse_tree_out_info.m"
  {
#line 199 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 199 "parse_tree_out_info.m"
    {
#line 199 "parse_tree_out_info.m"
      mercury__term_io__write_escaped_string_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 199 "parse_tree_out_info.m"
      return;
    }
#line 199 "parse_tree_out_info.m"
  }
#line 199 "parse_tree_out_info.m"
}

#line 198 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(void)
#line 198 "parse_tree_out_info.m"
{
#line 232 "parse_tree_out_info.m"
  {
#line 232 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 232 "parse_tree_out_info.m"
    {
#line 232 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0();
#line 232 "parse_tree_out_info.m"
      return;
    }
#line 232 "parse_tree_out_info.m"
  }
#line 198 "parse_tree_out_info.m"
}

#line 197 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
#line 197 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 197 "parse_tree_out_info.m"
{
#line 225 "parse_tree_out_info.m"
  {
#line 225 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 225 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__EvalMethodStr_8;
#line 225 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_9_16;
#line 225 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__V_17_17;

#line 241 "parse_tree_out_info.m"
    {
#line 241 "parse_tree_out_info.m"
      mercury__string__append_3_p_2((MR_String) "", (MR_String) "eval_", &parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_9_16);
    }
#line 301 "parse_tree_out_info.m"
    {
#line 301 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__V_17_17 = parse_tree__prog_out__eval_method_to_string_1_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
    }
#line 241 "parse_tree_out_info.m"
    {
#line 241 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_9_16, parse_tree__parse_tree_out_info__V_17_17, &parse_tree__parse_tree_out_info__EvalMethodStr_8);
    }
#line 227 "parse_tree_out_info.m"
    {
#line 227 "parse_tree_out_info.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_info__EvalMethodStr_8);
#line 227 "parse_tree_out_info.m"
      return;
    }
#line 225 "parse_tree_out_info.m"
  }
#line 197 "parse_tree_out_info.m"
}

#line 196 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
#line 196 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 196 "parse_tree_out_info.m"
{
#line 196 "parse_tree_out_info.m"
  {
#line 196 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 196 "parse_tree_out_info.m"
    {
#line 196 "parse_tree_out_info.m"
      mercury__term_io__write_constant_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 196 "parse_tree_out_info.m"
      return;
    }
#line 196 "parse_tree_out_info.m"
  }
#line 196 "parse_tree_out_info.m"
}

#line 195 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
#line 195 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 195 "parse_tree_out_info.m"
{
#line 195 "parse_tree_out_info.m"
  {
#line 195 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 195 "parse_tree_out_info.m"
    {
#line 195 "parse_tree_out_info.m"
      mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 195 "parse_tree_out_info.m"
      return;
    }
#line 195 "parse_tree_out_info.m"
  }
#line 195 "parse_tree_out_info.m"
}

#line 194 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
#line 194 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 194 "parse_tree_out_info.m"
{
#line 194 "parse_tree_out_info.m"
  {
#line 194 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 194 "parse_tree_out_info.m"
    {
#line 194 "parse_tree_out_info.m"
      mercury__term_io__quote_atom_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 194 "parse_tree_out_info.m"
      return;
    }
#line 194 "parse_tree_out_info.m"
  }
#line 194 "parse_tree_out_info.m"
}

#line 193 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
#line 193 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 193 "parse_tree_out_info.m"
{
#line 193 "parse_tree_out_info.m"
  {
#line 193 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 193 "parse_tree_out_info.m"
    {
#line 193 "parse_tree_out_info.m"
      parse_tree__prog_out__write_purity_prefix_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 193 "parse_tree_out_info.m"
      return;
    }
#line 193 "parse_tree_out_info.m"
  }
#line 193 "parse_tree_out_info.m"
}

#line 192 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
#line 192 "parse_tree_out_info.m"
  MR_Float parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 192 "parse_tree_out_info.m"
{
#line 192 "parse_tree_out_info.m"
  {
#line 192 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 192 "parse_tree_out_info.m"
    {
#line 192 "parse_tree_out_info.m"
      mercury__io__write_float_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 192 "parse_tree_out_info.m"
      return;
    }
#line 192 "parse_tree_out_info.m"
  }
#line 192 "parse_tree_out_info.m"
}

#line 191 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
#line 191 "parse_tree_out_info.m"
  MR_Integer parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 191 "parse_tree_out_info.m"
{
#line 191 "parse_tree_out_info.m"
  {
#line 191 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 191 "parse_tree_out_info.m"
    {
#line 191 "parse_tree_out_info.m"
      mercury__io__write_int_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 191 "parse_tree_out_info.m"
      return;
    }
#line 191 "parse_tree_out_info.m"
  }
#line 191 "parse_tree_out_info.m"
}

#line 190 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
#line 190 "parse_tree_out_info.m"
  MR_Char parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 190 "parse_tree_out_info.m"
{
#line 190 "parse_tree_out_info.m"
  {
#line 190 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 190 "parse_tree_out_info.m"
    {
#line 190 "parse_tree_out_info.m"
      mercury__io__write_char_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 190 "parse_tree_out_info.m"
      return;
    }
#line 190 "parse_tree_out_info.m"
  }
#line 190 "parse_tree_out_info.m"
}

#line 189 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
#line 189 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 189 "parse_tree_out_info.m"
{
#line 189 "parse_tree_out_info.m"
  {
#line 189 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 189 "parse_tree_out_info.m"
    {
#line 189 "parse_tree_out_info.m"
      mercury__io__write_strings_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 189 "parse_tree_out_info.m"
      return;
    }
#line 189 "parse_tree_out_info.m"
  }
#line 189 "parse_tree_out_info.m"
}

#line 188 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
#line 188 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1)
#line 188 "parse_tree_out_info.m"
{
#line 188 "parse_tree_out_info.m"
  {
#line 188 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 188 "parse_tree_out_info.m"
    {
#line 188 "parse_tree_out_info.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
#line 188 "parse_tree_out_info.m"
      return;
    }
#line 188 "parse_tree_out_info.m"
  }
#line 188 "parse_tree_out_info.m"
}

#line 218 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(
#line 218 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeInfo_for_T_6,
#line 218 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 218 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 218 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3,
#line 218 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__4_4,
#line 218 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__5_5)
#line 218 "parse_tree_out_info.m"
{
#line 218 "parse_tree_out_info.m"
  {
#line 218 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 218 "parse_tree_out_info.m"
    {
#line 218 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_108_105_115_116_95_95_91_49_93_95_48_5_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3, parse_tree__parse_tree_out_info__HeadVar__4_4, parse_tree__parse_tree_out_info__HeadVar__5_5);
#line 218 "parse_tree_out_info.m"
      return;
    }
#line 218 "parse_tree_out_info.m"
  }
#line 218 "parse_tree_out_info.m"
}

#line 217 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(
#line 217 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 217 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 217 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__3_3,
#line 217 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__4_4)
#line 217 "parse_tree_out_info.m"
{
#line 312 "parse_tree_out_info.m"
  {
#line 312 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 312 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__S_9;

#line 313 "parse_tree_out_info.m"
    {
#line 313 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__S_9 = mercury__string__format_2_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__HeadVar__2_2);
    }
#line 314 "parse_tree_out_info.m"
    {
#line 314 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__3_3, parse_tree__parse_tree_out_info__S_9, parse_tree__parse_tree_out_info__HeadVar__4_4);
#line 314 "parse_tree_out_info.m"
      return;
    }
#line 312 "parse_tree_out_info.m"
  }
#line 217 "parse_tree_out_info.m"
}

#line 216 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(
#line 216 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 216 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 216 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 216 "parse_tree_out_info.m"
{
#line 292 "parse_tree_out_info.m"
  {
#line 292 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 292 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__ES_7;

#line 293 "parse_tree_out_info.m"
    {
#line 293 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__ES_7 = mercury__term_io__escaped_string_1_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
    }
#line 294 "parse_tree_out_info.m"
    {
#line 294 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__ES_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 294 "parse_tree_out_info.m"
      return;
    }
#line 292 "parse_tree_out_info.m"
  }
#line 216 "parse_tree_out_info.m"
}

#line 215 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(
#line 215 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 215 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 215 "parse_tree_out_info.m"
{
#line 306 "parse_tree_out_info.m"
  {
#line 306 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 306 "parse_tree_out_info.m"
    {
#line 306 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_97_114_115_101_95_116_114_101_101_95_111_117_116_95_105_110_102_111_95_95_97_100_100_95_108_97_109_98_100_97_95_101_118_97_108_95_109_101_116_104_111_100_95_51_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 306 "parse_tree_out_info.m"
      return;
    }
#line 306 "parse_tree_out_info.m"
  }
#line 215 "parse_tree_out_info.m"
}

#line 214 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(
#line 214 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 214 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 214 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 214 "parse_tree_out_info.m"
{
#line 299 "parse_tree_out_info.m"
  {
#line 299 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 299 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_9_9;
#line 299 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__V_10_10;

#line 241 "parse_tree_out_info.m"
    {
#line 241 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_String) "eval_", &parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_9_9);
    }
#line 301 "parse_tree_out_info.m"
    {
#line 301 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__V_10_10 = parse_tree__prog_out__eval_method_to_string_1_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
    }
#line 241 "parse_tree_out_info.m"
    {
#line 241 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__STATE_VARIABLE_Str_9_9, parse_tree__parse_tree_out_info__V_10_10, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 241 "parse_tree_out_info.m"
      return;
    }
#line 299 "parse_tree_out_info.m"
  }
#line 214 "parse_tree_out_info.m"
}

#line 213 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(
#line 213 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 213 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 213 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 213 "parse_tree_out_info.m"
{
#line 286 "parse_tree_out_info.m"
  {
#line 286 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 286 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__CS_7;

#line 287 "parse_tree_out_info.m"
    {
#line 287 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__CS_7 = mercury__term_io__format_constant_1_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
    }
#line 288 "parse_tree_out_info.m"
    {
#line 288 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__CS_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 288 "parse_tree_out_info.m"
      return;
    }
#line 286 "parse_tree_out_info.m"
  }
#line 213 "parse_tree_out_info.m"
}

#line 212 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(
#line 212 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 212 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 212 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 212 "parse_tree_out_info.m"
{
#line 280 "parse_tree_out_info.m"
  {
#line 280 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 280 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__QA_7;

#line 281 "parse_tree_out_info.m"
    {
#line 281 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__QA_7 = mercury__term_io__quoted_string_1_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
    }
#line 282 "parse_tree_out_info.m"
    {
#line 282 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__QA_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 282 "parse_tree_out_info.m"
      return;
    }
#line 280 "parse_tree_out_info.m"
  }
#line 212 "parse_tree_out_info.m"
}

#line 211 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(
#line 211 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 211 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 211 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 211 "parse_tree_out_info.m"
{
#line 274 "parse_tree_out_info.m"
  {
#line 274 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 274 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__QA_7;

#line 275 "parse_tree_out_info.m"
    {
#line 275 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__QA_7 = mercury__term_io__quoted_atom_1_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
    }
#line 276 "parse_tree_out_info.m"
    {
#line 276 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__QA_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 276 "parse_tree_out_info.m"
      return;
    }
#line 274 "parse_tree_out_info.m"
  }
#line 211 "parse_tree_out_info.m"
}

#line 210 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(
#line 210 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 210 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 210 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 210 "parse_tree_out_info.m"
{
#line 268 "parse_tree_out_info.m"
  {
#line 268 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 268 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__S_7;

#line 269 "parse_tree_out_info.m"
    {
#line 269 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__S_7 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(parse_tree__parse_tree_out_info__HeadVar__1_1);
    }
#line 270 "parse_tree_out_info.m"
    {
#line 270 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__S_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 270 "parse_tree_out_info.m"
      return;
    }
#line 268 "parse_tree_out_info.m"
  }
#line 210 "parse_tree_out_info.m"
}

#line 209 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(
#line 209 "parse_tree_out_info.m"
  MR_Float parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 209 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 209 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 209 "parse_tree_out_info.m"
{
#line 262 "parse_tree_out_info.m"
  {
#line 262 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 262 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__S_7;

#line 263 "parse_tree_out_info.m"
    {
#line 263 "parse_tree_out_info.m"
      mercury__string__float_to_string_2_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, &parse_tree__parse_tree_out_info__S_7);
    }
#line 264 "parse_tree_out_info.m"
    {
#line 264 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__S_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 264 "parse_tree_out_info.m"
      return;
    }
#line 262 "parse_tree_out_info.m"
  }
#line 209 "parse_tree_out_info.m"
}

#line 208 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(
#line 208 "parse_tree_out_info.m"
  MR_Integer parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 208 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 208 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 208 "parse_tree_out_info.m"
{
#line 256 "parse_tree_out_info.m"
  {
#line 256 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 256 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__S_7;

#line 257 "parse_tree_out_info.m"
    {
#line 257 "parse_tree_out_info.m"
      mercury__string__int_to_string_2_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, &parse_tree__parse_tree_out_info__S_7);
    }
#line 258 "parse_tree_out_info.m"
    {
#line 258 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__S_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 258 "parse_tree_out_info.m"
      return;
    }
#line 256 "parse_tree_out_info.m"
  }
#line 208 "parse_tree_out_info.m"
}

#line 207 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(
#line 207 "parse_tree_out_info.m"
  MR_Char parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 207 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 207 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 207 "parse_tree_out_info.m"
{
#line 250 "parse_tree_out_info.m"
  {
#line 250 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 250 "parse_tree_out_info.m"
    MR_String parse_tree__parse_tree_out_info__S_7;

#line 251 "parse_tree_out_info.m"
    {
#line 251 "parse_tree_out_info.m"
      mercury__string__char_to_string_2_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, &parse_tree__parse_tree_out_info__S_7);
    }
#line 252 "parse_tree_out_info.m"
    {
#line 252 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__S_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 252 "parse_tree_out_info.m"
      return;
    }
#line 250 "parse_tree_out_info.m"
  }
#line 207 "parse_tree_out_info.m"
}

#line 206 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(
#line 206 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 206 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 206 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 206 "parse_tree_out_info.m"
{
#line 245 "parse_tree_out_info.m"
  {
#line 245 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 245 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_7_7;

#line 246 "parse_tree_out_info.m"
    {
#line 246 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "parse_tree_out_info.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_info__V_7_7, 0) = ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__2_2));
#line 246 "parse_tree_out_info.m"
      MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_info__V_7_7, 1) = ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1));
#line 246 "parse_tree_out_info.m"
    }
#line 246 "parse_tree_out_info.m"
    {
#line 246 "parse_tree_out_info.m"
      mercury__string__append_list_2_p_0(parse_tree__parse_tree_out_info__V_7_7, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 246 "parse_tree_out_info.m"
      return;
    }
#line 245 "parse_tree_out_info.m"
  }
#line 206 "parse_tree_out_info.m"
}

#line 205 "parse_tree_out_info.m"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(
#line 205 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 205 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 205 "parse_tree_out_info.m"
  MR_String * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 205 "parse_tree_out_info.m"
{
#line 241 "parse_tree_out_info.m"
  {
#line 241 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 241 "parse_tree_out_info.m"
    {
#line 241 "parse_tree_out_info.m"
      mercury__string__append_3_p_2(parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 241 "parse_tree_out_info.m"
      return;
    }
#line 241 "parse_tree_out_info.m"
  }
#line 205 "parse_tree_out_info.m"
}

#line 77 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0(
#line 77 "parse_tree_out_info.m"
  MR_Word * parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 77 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 77 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 77 "parse_tree_out_info.m"
{
#line 77 "parse_tree_out_info.m"
  {
#line 77 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 77 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__2_2;
#line 77 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__3_3;

#line 77 "parse_tree_out_info.m"
    {
#line 77 "parse_tree_out_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__Cast_HeadVar1_4, parse_tree__parse_tree_out_info__Cast_HeadVar2_5);
#line 77 "parse_tree_out_info.m"
      return;
    }
#line 77 "parse_tree_out_info.m"
  }
#line 77 "parse_tree_out_info.m"
}

#line 77 "parse_tree_out_info.m"
MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0(
#line 77 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_1,
#line 77 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2)
#line 77 "parse_tree_out_info.m"
{
#line 3472 "parse_tree.parse_tree_out_info.c"
  {
#line 3474 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__HeadVar__2_1 == parse_tree__parse_tree_out_info__HeadVar__2_2);

#line 3477 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 3479 "parse_tree.parse_tree_out_info.c"
  }
#line 77 "parse_tree_out_info.m"
}

#line 137 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(
#line 137 "parse_tree_out_info.m"
  MR_Word * parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 137 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 137 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 137 "parse_tree_out_info.m"
{
#line 137 "parse_tree_out_info.m"
  {
#line 137 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 137 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__CastX_12 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__2_2;
#line 137 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__CastY_13 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__3_3;

#line 137 "parse_tree_out_info.m"
    parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__CastX_12 == parse_tree__parse_tree_out_info__CastY_13);
#line 137 "parse_tree_out_info.m"
    if (parse_tree__parse_tree_out_info__succeeded)
#line 3508 "parse_tree.parse_tree_out_info.c"
      *parse_tree__parse_tree_out_info__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "parse_tree_out_info.m"
    else
#line 137 "parse_tree_out_info.m"
      {
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_10_10;
#line 137 "parse_tree_out_info.m"
        MR_Integer parse_tree__parse_tree_out_info__V_17_17 = (MR_Integer) parse_tree__parse_tree_out_info__V_4_4;
#line 137 "parse_tree_out_info.m"
        MR_Integer parse_tree__parse_tree_out_info__V_18_18 = (MR_Integer) parse_tree__parse_tree_out_info__V_7_7;

#line 137 "parse_tree_out_info.m"
        {
#line 137 "parse_tree_out_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__parse_tree_out_info__V_10_10, parse_tree__parse_tree_out_info__V_17_17, parse_tree__parse_tree_out_info__V_18_18);
        }
#line 3538 "parse_tree.parse_tree_out_info.c"
        parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__V_10_10 == (MR_Integer) 0);
#line 137 "parse_tree_out_info.m"
        parse_tree__parse_tree_out_info__succeeded = !(parse_tree__parse_tree_out_info__succeeded);
#line 137 "parse_tree_out_info.m"
        if (parse_tree__parse_tree_out_info__succeeded)
#line 137 "parse_tree_out_info.m"
          *parse_tree__parse_tree_out_info__HeadVar__1_1 = parse_tree__parse_tree_out_info__V_10_10;
#line 137 "parse_tree_out_info.m"
        else
#line 137 "parse_tree_out_info.m"
          {
#line 137 "parse_tree_out_info.m"
            MR_Word parse_tree__parse_tree_out_info__V_11_11;
#line 137 "parse_tree_out_info.m"
            MR_Integer parse_tree__parse_tree_out_info__V_19_19 = (MR_Integer) parse_tree__parse_tree_out_info__V_5_5;
#line 137 "parse_tree_out_info.m"
            MR_Integer parse_tree__parse_tree_out_info__V_20_20 = (MR_Integer) parse_tree__parse_tree_out_info__V_8_8;

#line 137 "parse_tree_out_info.m"
            {
#line 137 "parse_tree_out_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__parse_tree_out_info__V_11_11, parse_tree__parse_tree_out_info__V_19_19, parse_tree__parse_tree_out_info__V_20_20);
            }
#line 3562 "parse_tree.parse_tree_out_info.c"
            parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__V_11_11 == (MR_Integer) 0);
#line 137 "parse_tree_out_info.m"
            parse_tree__parse_tree_out_info__succeeded = !(parse_tree__parse_tree_out_info__succeeded);
#line 137 "parse_tree_out_info.m"
            if (parse_tree__parse_tree_out_info__succeeded)
#line 137 "parse_tree_out_info.m"
              *parse_tree__parse_tree_out_info__HeadVar__1_1 = parse_tree__parse_tree_out_info__V_11_11;
#line 137 "parse_tree_out_info.m"
            else
#line 137 "parse_tree_out_info.m"
              {
#line 137 "parse_tree_out_info.m"
                MR_Integer parse_tree__parse_tree_out_info__V_21_21 = (MR_Integer) parse_tree__parse_tree_out_info__V_6_6;
#line 137 "parse_tree_out_info.m"
                MR_Integer parse_tree__parse_tree_out_info__V_22_22 = (MR_Integer) parse_tree__parse_tree_out_info__V_9_9;

#line 137 "parse_tree_out_info.m"
                {
#line 137 "parse_tree_out_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__V_21_21, parse_tree__parse_tree_out_info__V_22_22);
#line 137 "parse_tree_out_info.m"
                  return;
                }
#line 137 "parse_tree_out_info.m"
              }
#line 137 "parse_tree_out_info.m"
          }
#line 137 "parse_tree_out_info.m"
      }
#line 137 "parse_tree_out_info.m"
  }
#line 137 "parse_tree_out_info.m"
}

#line 137 "parse_tree_out_info.m"
MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(
#line 137 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 137 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2)
#line 137 "parse_tree_out_info.m"
{
#line 137 "parse_tree_out_info.m"
  {
#line 137 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 137 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__CastX_9 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__1_1;
#line 137 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__CastY_10 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__2_2;

#line 137 "parse_tree_out_info.m"
    parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__CastX_9 == parse_tree__parse_tree_out_info__CastY_10);
#line 137 "parse_tree_out_info.m"
    if (parse_tree__parse_tree_out_info__succeeded)
#line 137 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__succeeded = MR_TRUE;
#line 137 "parse_tree_out_info.m"
    else
#line 137 "parse_tree_out_info.m"
      {
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 137 "parse_tree_out_info.m"
        MR_Word parse_tree__parse_tree_out_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 3638 "parse_tree.parse_tree_out_info.c"
        parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__V_3_3 == parse_tree__parse_tree_out_info__V_6_6);
#line 137 "parse_tree_out_info.m"
        if (parse_tree__parse_tree_out_info__succeeded)
#line 137 "parse_tree_out_info.m"
          {
#line 3644 "parse_tree.parse_tree_out_info.c"
            parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__V_4_4 == parse_tree__parse_tree_out_info__V_7_7);
#line 137 "parse_tree_out_info.m"
            if (parse_tree__parse_tree_out_info__succeeded)
#line 3648 "parse_tree.parse_tree_out_info.c"
              parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__V_5_5 == parse_tree__parse_tree_out_info__V_8_8);
#line 137 "parse_tree_out_info.m"
          }
#line 137 "parse_tree_out_info.m"
      }
#line 137 "parse_tree_out_info.m"
    return parse_tree__parse_tree_out_info__succeeded;
#line 137 "parse_tree_out_info.m"
  }
#line 137 "parse_tree_out_info.m"
}

#line 69 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(
#line 69 "parse_tree_out_info.m"
  MR_Word * parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 69 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 69 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 69 "parse_tree_out_info.m"
{
#line 69 "parse_tree_out_info.m"
  {
#line 69 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 69 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__2_2;
#line 69 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__3_3;

#line 69 "parse_tree_out_info.m"
    {
#line 69 "parse_tree_out_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__Cast_HeadVar1_4, parse_tree__parse_tree_out_info__Cast_HeadVar2_5);
#line 69 "parse_tree_out_info.m"
      return;
    }
#line 69 "parse_tree_out_info.m"
  }
#line 69 "parse_tree_out_info.m"
}

#line 69 "parse_tree_out_info.m"
MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(
#line 69 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_1,
#line 69 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2)
#line 69 "parse_tree_out_info.m"
{
#line 3702 "parse_tree.parse_tree_out_info.c"
  {
#line 3704 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__HeadVar__2_1 == parse_tree__parse_tree_out_info__HeadVar__2_2);

#line 3707 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 3709 "parse_tree.parse_tree_out_info.c"
  }
#line 69 "parse_tree_out_info.m"
}

#line 73 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(
#line 73 "parse_tree_out_info.m"
  MR_Word * parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 73 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 73 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 73 "parse_tree_out_info.m"
{
#line 73 "parse_tree_out_info.m"
  {
#line 73 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 73 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__2_2;
#line 73 "parse_tree_out_info.m"
    MR_Integer parse_tree__parse_tree_out_info__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_tree_out_info__HeadVar__3_3;

#line 73 "parse_tree_out_info.m"
    {
#line 73 "parse_tree_out_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_tree_out_info__HeadVar__1_1, parse_tree__parse_tree_out_info__Cast_HeadVar1_4, parse_tree__parse_tree_out_info__Cast_HeadVar2_5);
#line 73 "parse_tree_out_info.m"
      return;
    }
#line 73 "parse_tree_out_info.m"
  }
#line 73 "parse_tree_out_info.m"
}

#line 73 "parse_tree_out_info.m"
MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(
#line 73 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_1,
#line 73 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2)
#line 73 "parse_tree_out_info.m"
{
#line 3755 "parse_tree.parse_tree_out_info.c"
  {
#line 3757 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__HeadVar__2_1 == parse_tree__parse_tree_out_info__HeadVar__2_2);

#line 3760 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 3762 "parse_tree.parse_tree_out_info.c"
  }
#line 73 "parse_tree_out_info.m"
}

#line 115 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_list_5_p_0(
#line 115 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeInfo_for_T_7,
#line 115 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_6,
#line 115 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 115 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 115 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__3_3,
#line 115 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__4_4,
#line 115 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__5_5)
#line 115 "parse_tree_out_info.m"
{
#line 3786 "parse_tree.parse_tree_out_info.c"
  {
#line 3788 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 3790 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 18)));

#line 3793 "parse_tree.parse_tree_out_info.c"
    {
#line 3795 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__parse_tree_out_info__TypeInfo_for_T_7)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__2_2)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__3_3)), parse_tree__parse_tree_out_info__HeadVar__4_4, parse_tree__parse_tree_out_info__HeadVar__5_5);
#line 3797 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 3800 "parse_tree.parse_tree_out_info.c"
  }
#line 115 "parse_tree_out_info.m"
}

#line 114 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_format_4_p_0(
#line 114 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_5,
#line 114 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 114 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 114 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__3_3,
#line 114 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__4_4)
#line 114 "parse_tree_out_info.m"
{
#line 3820 "parse_tree.parse_tree_out_info.c"
  {
#line 3822 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 3824 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 17)));

#line 3827 "parse_tree.parse_tree_out_info.c"
    {
#line 3829 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_5), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__2_2)), parse_tree__parse_tree_out_info__HeadVar__3_3, parse_tree__parse_tree_out_info__HeadVar__4_4);
#line 3831 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 3834 "parse_tree.parse_tree_out_info.c"
  }
#line 114 "parse_tree_out_info.m"
}

#line 113 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_escaped_string_3_p_0(
#line 113 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 113 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 113 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 113 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 113 "parse_tree_out_info.m"
{
#line 3852 "parse_tree.parse_tree_out_info.c"
  {
#line 3854 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 3856 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 16)));

#line 3859 "parse_tree.parse_tree_out_info.c"
    {
#line 3861 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 3863 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 3866 "parse_tree.parse_tree_out_info.c"
  }
#line 113 "parse_tree_out_info.m"
}

#line 112 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_lambda_eval_method_3_p_0(
#line 112 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 112 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 112 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 112 "parse_tree_out_info.m"
{
#line 3882 "parse_tree.parse_tree_out_info.c"
  {
#line 3884 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 3886 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 15)));

#line 3889 "parse_tree.parse_tree_out_info.c"
    {
#line 3891 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) ((MR_Integer) 0)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 3893 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 3896 "parse_tree.parse_tree_out_info.c"
  }
#line 112 "parse_tree_out_info.m"
}

#line 111 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_eval_method_3_p_0(
#line 111 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 111 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 111 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 111 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 111 "parse_tree_out_info.m"
{
#line 3914 "parse_tree.parse_tree_out_info.c"
  {
#line 3916 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 3918 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 14)));

#line 3921 "parse_tree.parse_tree_out_info.c"
    {
#line 3923 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 3925 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 3928 "parse_tree.parse_tree_out_info.c"
  }
#line 111 "parse_tree_out_info.m"
}

#line 110 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_constant_3_p_0(
#line 110 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 110 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 110 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 110 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 110 "parse_tree_out_info.m"
{
#line 3946 "parse_tree.parse_tree_out_info.c"
  {
#line 3948 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 3950 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 13)));

#line 3953 "parse_tree.parse_tree_out_info.c"
    {
#line 3955 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 3957 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 3960 "parse_tree.parse_tree_out_info.c"
  }
#line 110 "parse_tree_out_info.m"
}

#line 109 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_quoted_string_3_p_0(
#line 109 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 109 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 109 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 109 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 109 "parse_tree_out_info.m"
{
#line 3978 "parse_tree.parse_tree_out_info.c"
  {
#line 3980 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 3982 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 12)));

#line 3985 "parse_tree.parse_tree_out_info.c"
    {
#line 3987 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 3989 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 3992 "parse_tree.parse_tree_out_info.c"
  }
#line 109 "parse_tree_out_info.m"
}

#line 108 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_quoted_atom_3_p_0(
#line 108 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 108 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 108 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 108 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 108 "parse_tree_out_info.m"
{
#line 4010 "parse_tree.parse_tree_out_info.c"
  {
#line 4012 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 4014 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 11)));

#line 4017 "parse_tree.parse_tree_out_info.c"
    {
#line 4019 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 4021 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 4024 "parse_tree.parse_tree_out_info.c"
  }
#line 108 "parse_tree_out_info.m"
}

#line 107 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_purity_prefix_3_p_0(
#line 107 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 107 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 107 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 107 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 107 "parse_tree_out_info.m"
{
#line 4042 "parse_tree.parse_tree_out_info.c"
  {
#line 4044 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 4046 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 10)));

#line 4049 "parse_tree.parse_tree_out_info.c"
    {
#line 4051 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 4053 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 4056 "parse_tree.parse_tree_out_info.c"
  }
#line 107 "parse_tree_out_info.m"
}

#line 106 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_float_3_p_0(
#line 106 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 106 "parse_tree_out_info.m"
  MR_Float parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 106 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 106 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 106 "parse_tree_out_info.m"
{
#line 4074 "parse_tree.parse_tree_out_info.c"
  {
#line 4076 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 4078 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 9)));

#line 4081 "parse_tree.parse_tree_out_info.c"
    {
#line 4083 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), MR_box_float(parse_tree__parse_tree_out_info__HeadVar__1_1), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 4085 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 4088 "parse_tree.parse_tree_out_info.c"
  }
#line 106 "parse_tree_out_info.m"
}

#line 105 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_int_3_p_0(
#line 105 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 105 "parse_tree_out_info.m"
  MR_Integer parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 105 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 105 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 105 "parse_tree_out_info.m"
{
#line 4106 "parse_tree.parse_tree_out_info.c"
  {
#line 4108 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 4110 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 4113 "parse_tree.parse_tree_out_info.c"
    {
#line 4115 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 4117 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 4120 "parse_tree.parse_tree_out_info.c"
  }
#line 105 "parse_tree_out_info.m"
}

#line 104 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_char_3_p_0(
#line 104 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 104 "parse_tree_out_info.m"
  MR_Char parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 104 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 104 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 104 "parse_tree_out_info.m"
{
#line 4138 "parse_tree.parse_tree_out_info.c"
  {
#line 4140 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 4142 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 7)));

#line 4145 "parse_tree.parse_tree_out_info.c"
    {
#line 4147 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 4149 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 4152 "parse_tree.parse_tree_out_info.c"
  }
#line 104 "parse_tree_out_info.m"
}

#line 103 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_strings_3_p_0(
#line 103 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 103 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 103 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 103 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 103 "parse_tree_out_info.m"
{
#line 4170 "parse_tree.parse_tree_out_info.c"
  {
#line 4172 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 4174 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 6)));

#line 4177 "parse_tree.parse_tree_out_info.c"
    {
#line 4179 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 4181 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 4184 "parse_tree.parse_tree_out_info.c"
  }
#line 103 "parse_tree_out_info.m"
}

#line 102 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__add_string_3_p_0(
#line 102 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4,
#line 102 "parse_tree_out_info.m"
  MR_String parse_tree__parse_tree_out_info__HeadVar__1_1,
#line 102 "parse_tree_out_info.m"
  MR_Box parse_tree__parse_tree_out_info__HeadVar__2_2,
#line 102 "parse_tree_out_info.m"
  MR_Box * parse_tree__parse_tree_out_info__HeadVar__3_3)
#line 102 "parse_tree_out_info.m"
{
#line 4202 "parse_tree.parse_tree_out_info.c"
  {
#line 4204 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 4206 "parse_tree.parse_tree_out_info.c"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4209 "parse_tree.parse_tree_out_info.c"
    {
#line 4211 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
#line 4213 "parse_tree.parse_tree_out_info.c"
      return;
    }
#line 4216 "parse_tree.parse_tree_out_info.c"
  }
#line 102 "parse_tree_out_info.m"
}

#line 96 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(
#line 96 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Info_4,
#line 96 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__SymName_5,
#line 96 "parse_tree_out_info.m"
  MR_Word * parse_tree__parse_tree_out_info__OutSymName_6)
#line 96 "parse_tree_out_info.m"
{
#line 175 "parse_tree_out_info.m"
  {
#line 175 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 175 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__MaybeQualifiedItemNames_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_4, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 158 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 158 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 180 "parse_tree_out_info.m"
#line 180 "parse_tree_out_info.m"
    switch (parse_tree__parse_tree_out_info__MaybeQualifiedItemNames_7) {
#line 180 "parse_tree_out_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 180 "parse_tree_out_info.m"
      case (MR_Integer) 1:
#line 179 "parse_tree_out_info.m"
        *parse_tree__parse_tree_out_info__OutSymName_6 = parse_tree__parse_tree_out_info__SymName_5;
#line 180 "parse_tree_out_info.m"
        break;
#line 180 "parse_tree_out_info.m"
      case (MR_Integer) 0:
#line 181 "parse_tree_out_info.m"
        {
#line 181 "parse_tree_out_info.m"
          MR_String parse_tree__parse_tree_out_info__V_8_8;

#line 182 "parse_tree_out_info.m"
          {
#line 182 "parse_tree_out_info.m"
            parse_tree__parse_tree_out_info__V_8_8 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out_info__SymName_5);
          }
#line 182 "parse_tree_out_info.m"
          {
#line 182 "parse_tree_out_info.m"
            MR_Word base;
#line 182 "parse_tree_out_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 182 "parse_tree_out_info.m"
            *parse_tree__parse_tree_out_info__OutSymName_6 = base;
#line 182 "parse_tree_out_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_tree_out_info__V_8_8));
#line 182 "parse_tree_out_info.m"
          }
#line 181 "parse_tree_out_info.m"
        }
#line 180 "parse_tree_out_info.m"
        break;
#line 180 "parse_tree_out_info.m"
    }
#line 175 "parse_tree_out_info.m"
  }
#line 96 "parse_tree_out_info.m"
}

#line 93 "parse_tree_out_info.m"
void MR_CALL 
parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(
#line 93 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Info_5,
#line 93 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Context_6)
#line 93 "parse_tree_out_info.m"
{
#line 164 "parse_tree_out_info.m"
  {
#line 164 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 164 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__LineNumbers_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 159 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 159 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 171 "parse_tree_out_info.m"
#line 171 "parse_tree_out_info.m"
    switch (parse_tree__parse_tree_out_info__LineNumbers_8) {
#line 171 "parse_tree_out_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 171 "parse_tree_out_info.m"
      case (MR_Integer) 1:
#line 167 "parse_tree_out_info.m"
        {
#line 168 "parse_tree_out_info.m"
          {
#line 168 "parse_tree_out_info.m"
            mercury__io__write_string_3_p_0((MR_String) "\t% ");
          }
#line 169 "parse_tree_out_info.m"
          {
#line 169 "parse_tree_out_info.m"
            parse_tree__prog_out__write_context_3_p_0(parse_tree__parse_tree_out_info__Context_6);
          }
#line 170 "parse_tree_out_info.m"
          {
#line 170 "parse_tree_out_info.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
#line 170 "parse_tree_out_info.m"
            return;
          }
#line 167 "parse_tree_out_info.m"
        }
#line 171 "parse_tree_out_info.m"
        break;
#line 171 "parse_tree_out_info.m"
      case (MR_Integer) 0:
#line 172 "parse_tree_out_info.m"
        {
#line 172 "parse_tree_out_info.m"
        }
#line 171 "parse_tree_out_info.m"
        break;
#line 171 "parse_tree_out_info.m"
    }
#line 164 "parse_tree_out_info.m"
  }
#line 93 "parse_tree_out_info.m"
}

#line 90 "parse_tree_out_info.m"
MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_lang_1_f_0(
#line 90 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Info_3)
#line 90 "parse_tree_out_info.m"
{
#line 160 "parse_tree_out_info.m"
  {
#line 160 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 160 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 160 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 160 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 160 "parse_tree_out_info.m"
    return parse_tree__parse_tree_out_info__HeadVar__2_2;
#line 160 "parse_tree_out_info.m"
  }
#line 90 "parse_tree_out_info.m"
}

#line 88 "parse_tree_out_info.m"
MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_output_line_numbers_1_f_0(
#line 88 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Info_3)
#line 88 "parse_tree_out_info.m"
{
#line 159 "parse_tree_out_info.m"
  {
#line 159 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 159 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 159 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 159 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 159 "parse_tree_out_info.m"
    return parse_tree__parse_tree_out_info__HeadVar__2_2;
#line 159 "parse_tree_out_info.m"
  }
#line 88 "parse_tree_out_info.m"
}

#line 86 "parse_tree_out_info.m"
MR_Word MR_CALL 
parse_tree__parse_tree_out_info__get_maybe_qualified_item_names_1_f_0(
#line 86 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Info_3)
#line 86 "parse_tree_out_info.m"
{
#line 158 "parse_tree_out_info.m"
  {
#line 158 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 158 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 158 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 158 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 158 "parse_tree_out_info.m"
    return parse_tree__parse_tree_out_info__HeadVar__2_2;
#line 158 "parse_tree_out_info.m"
  }
#line 86 "parse_tree_out_info.m"
}

#line 84 "parse_tree_out_info.m"
MR_Word MR_CALL 
parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(
#line 84 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Info0_3)
#line 84 "parse_tree_out_info.m"
{
#line 155 "parse_tree_out_info.m"
  {
#line 155 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 155 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__Info_4;
#line 156 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info0_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 156 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info0_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 156 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info0_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 156 "parse_tree_out_info.m"
    {
#line 156 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 156 "parse_tree_out_info.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_4, 0) = ((MR_Box) ((parse_tree__parse_tree_out_info__V_6_6 | (((((MR_Integer) 0 << (MR_Integer) 1)) | ((parse_tree__parse_tree_out_info__V_8_8 << (MR_Integer) 2)))))));
#line 156 "parse_tree_out_info.m"
    }
#line 155 "parse_tree_out_info.m"
    return parse_tree__parse_tree_out_info__Info_4;
#line 155 "parse_tree_out_info.m"
  }
#line 84 "parse_tree_out_info.m"
}

#line 82 "parse_tree_out_info.m"
MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(
#line 82 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Globals_5,
#line 82 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__MaybeQualifiedItemNames_6,
#line 82 "parse_tree_out_info.m"
  MR_Word parse_tree__parse_tree_out_info__Lang_7)
#line 82 "parse_tree_out_info.m"
{
#line 148 "parse_tree_out_info.m"
  {
#line 148 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 148 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__Info_8;
#line 148 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__LineNumbersOpt_9;
#line 148 "parse_tree_out_info.m"
    MR_Word parse_tree__parse_tree_out_info__LineNumbers_10;

#line 149 "parse_tree_out_info.m"
    {
#line 149 "parse_tree_out_info.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out_info__Globals_5, (MR_Integer) 138, &parse_tree__parse_tree_out_info__LineNumbersOpt_9);
    }
#line 151 "parse_tree_out_info.m"
#line 151 "parse_tree_out_info.m"
    switch (parse_tree__parse_tree_out_info__LineNumbersOpt_9) {
#line 151 "parse_tree_out_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 151 "parse_tree_out_info.m"
      case (MR_Integer) 0:
#line 150 "parse_tree_out_info.m"
        parse_tree__parse_tree_out_info__LineNumbers_10 = (MR_Integer) 0;
#line 151 "parse_tree_out_info.m"
        break;
#line 151 "parse_tree_out_info.m"
      case (MR_Integer) 1:
#line 151 "parse_tree_out_info.m"
        parse_tree__parse_tree_out_info__LineNumbers_10 = (MR_Integer) 1;
#line 151 "parse_tree_out_info.m"
        break;
#line 151 "parse_tree_out_info.m"
    }
#line 153 "parse_tree_out_info.m"
    {
#line 153 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 153 "parse_tree_out_info.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__Info_8, 0) = ((MR_Box) ((parse_tree__parse_tree_out_info__MaybeQualifiedItemNames_6 | ((((parse_tree__parse_tree_out_info__LineNumbers_10 << (MR_Integer) 1)) | ((parse_tree__parse_tree_out_info__Lang_7 << (MR_Integer) 2)))))));
#line 153 "parse_tree_out_info.m"
    }
#line 148 "parse_tree_out_info.m"
    return parse_tree__parse_tree_out_info__Info_8;
#line 148 "parse_tree_out_info.m"
  }
#line 82 "parse_tree_out_info.m"
}

#line 81 "parse_tree_out_info.m"
MR_Word MR_CALL 
parse_tree__parse_tree_out_info__init_debug_merc_out_info_0_f_0(void)
#line 81 "parse_tree_out_info.m"
{
#line 144 "parse_tree_out_info.m"
  {
#line 144 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 144 "parse_tree_out_info.m"
    return (MR_Word) &parse_tree__parse_tree_out_info_scalar_common_1[0];
#line 144 "parse_tree_out_info.m"
  }
#line 81 "parse_tree_out_info.m"
}

void mercury__parse_tree__parse_tree_out_info__init(void)
{
}

void mercury__parse_tree__parse_tree_out_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0);
}

void mercury__parse_tree__parse_tree_out_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_out_info. */
