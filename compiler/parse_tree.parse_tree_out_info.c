/*
** Automatically generated from `parse_tree_out_info.m'
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




#line 100 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0;

#line 103 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1;

#line 106 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0[2];

#line 109 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2];

#line 112 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2];

#line 115 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0;

#line 118 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1;

#line 121 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0[2];

#line 124 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2];

#line 127 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2];

#line 130 "parse_tree.parse_tree_out_info.c"
static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[3];

#line 133 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[3];

#line 136 "parse_tree.parse_tree_out_info.c"
static const MR_DuArgLocn parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_locns_merc_out_info_0_0[3];

#line 139 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0;

#line 142 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1];

#line 145 "parse_tree.parse_tree_out_info.c"
static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1];

#line 148 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1];

#line 151 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1];

#line 154 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0;

#line 157 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1;

#line 160 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0[2];

#line 163 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2];

#line 166 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2];

#line 169 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1[1];

#line 172 "parse_tree.parse_tree_out_info.c"
static const MR_TypeClassMethod parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1[14];

#line 175 "parse_tree.parse_tree_out_info.c"
static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1;

#line 178 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
#line 181 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 183 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 186 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
#line 189 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 191 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 193 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 196 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
#line 199 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 201 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 204 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
#line 207 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 209 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 211 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 214 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
#line 217 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 219 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 222 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
#line 225 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 227 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 229 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 232 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
#line 235 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 237 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2);

#line 240 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
#line 243 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 245 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 247 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 250 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 253 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 255 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 257 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 259 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 262 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 265 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 267 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 269 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 271 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 274 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 277 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 279 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 281 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 283 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 286 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 289 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 291 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 293 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 295 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 298 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 301 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 303 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 305 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 307 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 310 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 313 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 315 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 317 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 319 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 322 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 325 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 327 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 329 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 331 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 334 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 337 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 339 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 341 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 343 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 346 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 349 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 351 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 353 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 355 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 358 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 361 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 363 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 365 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 367 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 370 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 373 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 375 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 377 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 379 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 382 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 385 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 387 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 389 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 391 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 394 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 397 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 399 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 401 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 403 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 405 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4);

#line 408 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 411 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 413 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 415 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 417 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 419 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 421 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 423 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_6);

#line 426 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 429 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 431 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 433 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 435 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 438 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 441 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 443 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 445 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 447 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 450 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 453 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 455 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 457 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 459 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 462 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 465 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 467 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 469 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 471 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 474 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 477 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 479 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 481 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 483 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 486 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 489 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 491 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 493 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 495 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 498 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 501 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 503 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 505 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 507 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 510 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 513 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 515 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 517 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 519 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 522 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 525 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 527 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 529 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 531 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 534 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 537 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 539 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 541 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 543 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 546 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 549 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 551 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 553 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 555 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 558 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 561 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 563 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 565 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 567 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3);

#line 570 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 573 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 575 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 577 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 579 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 581 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4);

#line 584 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 587 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 589 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 591 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 593 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 595 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 597 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 599 "parse_tree.parse_tree_out_info.c"
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



#line 886 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0 = {
  (MR_String) "dont_output_line_numbers",
  (MR_Integer) 0
};

#line 892 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1 = {
  (MR_String) "do_output_line_numbers",
  (MR_Integer) 1
};

#line 898 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1
};

#line 904 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_output_line_numbers_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_output_line_numbers_0_0
};

#line 910 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_output_line_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 916 "parse_tree.parse_tree_out_info.c"
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

#line 933 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0 = {
  (MR_String) "unqualified_item_names",
  (MR_Integer) 0
};

#line 939 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1 = {
  (MR_String) "qualified_item_names",
  (MR_Integer) 1
};

#line 945 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1
};

#line 951 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_maybe_qualified_item_names_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_maybe_qualified_item_names_0_0
};

#line 957 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_maybe_qualified_item_names_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 963 "parse_tree.parse_tree_out_info.c"
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

#line 980 "parse_tree.parse_tree_out_info.c"
static const MR_PseudoTypeInfo parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_types_merc_out_info_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_qualified_item_names_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_maybe_output_line_numbers_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0
};

#line 987 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__field_names_merc_out_info_0_0[3] = {
  (MR_String) "moi_qualify_item_names",
  (MR_String) "moi_output_line_numbers",
  (MR_String) "moi_output_lang"
};

#line 994 "parse_tree.parse_tree_out_info.c"
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

#line 1013 "parse_tree.parse_tree_out_info.c"
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

#line 1028 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0[1] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0
};

#line 1033 "parse_tree.parse_tree_out_info.c"
static const MR_DuPtagLayout parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_ptag_ordered_merc_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_stag_ordered_merc_out_info_0_0
  }
};

#line 1042 "parse_tree.parse_tree_out_info.c"
static const MR_DuFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_name_ordered_merc_out_info_0[1] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__du_functor_desc_merc_out_info_0_0
};

#line 1047 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_merc_out_info_0[1] = {
  (MR_Integer) 0
};

#line 1052 "parse_tree.parse_tree_out_info.c"
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

#line 1069 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  (MR_Integer) 0
};

#line 1075 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  (MR_Integer) 1
};

#line 1081 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_value_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1
};

#line 1087 "parse_tree.parse_tree_out_info.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_name_ordered_output_lang_0[2] = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_1,
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__enum_functor_desc_output_lang_0_0
};

#line 1093 "parse_tree.parse_tree_out_info.c"
static const MR_Integer parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__functor_number_map_output_lang_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1099 "parse_tree.parse_tree_out_info.c"
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

#line 1116 "parse_tree.parse_tree_out_info.c"
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

#line 1139 "parse_tree.parse_tree_out_info.c"
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

#line 1162 "parse_tree.parse_tree_out_info.c"
static const MR_ConstString parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1[1] = {
  (MR_String) "U"
};

#line 1167 "parse_tree.parse_tree_out_info.c"
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

#line 1241 "parse_tree.parse_tree_out_info.c"
static const MR_TypeClassId parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1 = {
  (MR_String) "parse_tree.parse_tree_out_info",
  (MR_String) "output",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 14,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_var_names_output_1,
  parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_method_ids_output_1
};

#line 1252 "parse_tree.parse_tree_out_info.c"
const MR_TypeClassDeclStruct parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_decl_output_1 = {
  &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_class_id_output_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1260 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0_10001(
#line 1263 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1265 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1267 "parse_tree.parse_tree_out_info.c"
{
#line 1269 "parse_tree.parse_tree_out_info.c"
  {
#line 1271 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1274 "parse_tree.parse_tree_out_info.c"
    {
#line 1276 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____maybe_output_line_numbers_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1279 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1281 "parse_tree.parse_tree_out_info.c"
  }
#line 1283 "parse_tree.parse_tree_out_info.c"
}

#line 1286 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0_10001(
#line 1289 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1291 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1293 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1295 "parse_tree.parse_tree_out_info.c"
{
#line 1297 "parse_tree.parse_tree_out_info.c"
  {
#line 1299 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1302 "parse_tree.parse_tree_out_info.c"
    {
#line 1304 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____maybe_output_line_numbers_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1307 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1309 "parse_tree.parse_tree_out_info.c"
  }
#line 1311 "parse_tree.parse_tree_out_info.c"
}

#line 1314 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0_10001(
#line 1317 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1319 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1321 "parse_tree.parse_tree_out_info.c"
{
#line 1323 "parse_tree.parse_tree_out_info.c"
  {
#line 1325 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1328 "parse_tree.parse_tree_out_info.c"
    {
#line 1330 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____maybe_qualified_item_names_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1333 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1335 "parse_tree.parse_tree_out_info.c"
  }
#line 1337 "parse_tree.parse_tree_out_info.c"
}

#line 1340 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0_10001(
#line 1343 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1345 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1347 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1349 "parse_tree.parse_tree_out_info.c"
{
#line 1351 "parse_tree.parse_tree_out_info.c"
  {
#line 1353 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1356 "parse_tree.parse_tree_out_info.c"
    {
#line 1358 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____maybe_qualified_item_names_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1361 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1363 "parse_tree.parse_tree_out_info.c"
  }
#line 1365 "parse_tree.parse_tree_out_info.c"
}

#line 1368 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0_10001(
#line 1371 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1373 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1375 "parse_tree.parse_tree_out_info.c"
{
#line 1377 "parse_tree.parse_tree_out_info.c"
  {
#line 1379 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1382 "parse_tree.parse_tree_out_info.c"
    {
#line 1384 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1387 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1389 "parse_tree.parse_tree_out_info.c"
  }
#line 1391 "parse_tree.parse_tree_out_info.c"
}

#line 1394 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0_10001(
#line 1397 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1399 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1401 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1403 "parse_tree.parse_tree_out_info.c"
{
#line 1405 "parse_tree.parse_tree_out_info.c"
  {
#line 1407 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1410 "parse_tree.parse_tree_out_info.c"
    {
#line 1412 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1415 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1417 "parse_tree.parse_tree_out_info.c"
  }
#line 1419 "parse_tree.parse_tree_out_info.c"
}

#line 1422 "parse_tree.parse_tree_out_info.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_info____Unify____output_lang_0_0_10001(
#line 1425 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1427 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2)
#line 1429 "parse_tree.parse_tree_out_info.c"
{
#line 1431 "parse_tree.parse_tree_out_info.c"
  {
#line 1433 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded;

#line 1436 "parse_tree.parse_tree_out_info.c"
    {
#line 1438 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__succeeded = parse_tree__parse_tree_out_info____Unify____output_lang_0_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 1441 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 1443 "parse_tree.parse_tree_out_info.c"
  }
#line 1445 "parse_tree.parse_tree_out_info.c"
}

#line 1448 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info____Compare____output_lang_0_0_10001(
#line 1451 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1453 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1455 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1457 "parse_tree.parse_tree_out_info.c"
{
#line 1459 "parse_tree.parse_tree_out_info.c"
  {
#line 1461 "parse_tree.parse_tree_out_info.c"
    MR_Word parse_tree__parse_tree_out_info__conv0_HeadVar__1_1;

#line 1464 "parse_tree.parse_tree_out_info.c"
    {
#line 1466 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info____Compare____output_lang_0_0(&parse_tree__parse_tree_out_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_3));
    }
#line 1469 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__1_1));
#line 1471 "parse_tree.parse_tree_out_info.c"
  }
#line 1473 "parse_tree.parse_tree_out_info.c"
}

#line 1476 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 1479 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1481 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1483 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1485 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1487 "parse_tree.parse_tree_out_info.c"
{
#line 1489 "parse_tree.parse_tree_out_info.c"
  {
#line 1491 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1493 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1496 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1498 "parse_tree.parse_tree_out_info.c"
    {
#line 1500 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1503 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1505 "parse_tree.parse_tree_out_info.c"
  }
#line 1507 "parse_tree.parse_tree_out_info.c"
}

#line 1510 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 1513 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1515 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1517 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1519 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1521 "parse_tree.parse_tree_out_info.c"
{
#line 1523 "parse_tree.parse_tree_out_info.c"
  {
#line 1525 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1527 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1530 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1532 "parse_tree.parse_tree_out_info.c"
    {
#line 1534 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1537 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1539 "parse_tree.parse_tree_out_info.c"
  }
#line 1541 "parse_tree.parse_tree_out_info.c"
}

#line 1544 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 1547 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1549 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1551 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1553 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1555 "parse_tree.parse_tree_out_info.c"
{
#line 1557 "parse_tree.parse_tree_out_info.c"
  {
#line 1559 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1561 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1564 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1566 "parse_tree.parse_tree_out_info.c"
    {
#line 1568 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(((MR_Char) (MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1571 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1573 "parse_tree.parse_tree_out_info.c"
  }
#line 1575 "parse_tree.parse_tree_out_info.c"
}

#line 1578 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 1581 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1583 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1585 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1587 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1589 "parse_tree.parse_tree_out_info.c"
{
#line 1591 "parse_tree.parse_tree_out_info.c"
  {
#line 1593 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1595 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1598 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1600 "parse_tree.parse_tree_out_info.c"
    {
#line 1602 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(((MR_Integer) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1605 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1607 "parse_tree.parse_tree_out_info.c"
  }
#line 1609 "parse_tree.parse_tree_out_info.c"
}

#line 1612 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 1615 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1617 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1619 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1621 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1623 "parse_tree.parse_tree_out_info.c"
{
#line 1625 "parse_tree.parse_tree_out_info.c"
  {
#line 1627 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1629 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1632 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1634 "parse_tree.parse_tree_out_info.c"
    {
#line 1636 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(MR_unbox_float(parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1639 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1641 "parse_tree.parse_tree_out_info.c"
  }
#line 1643 "parse_tree.parse_tree_out_info.c"
}

#line 1646 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 1649 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1651 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1653 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1655 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1657 "parse_tree.parse_tree_out_info.c"
{
#line 1659 "parse_tree.parse_tree_out_info.c"
  {
#line 1661 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1663 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1666 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1668 "parse_tree.parse_tree_out_info.c"
    {
#line 1670 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1673 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1675 "parse_tree.parse_tree_out_info.c"
  }
#line 1677 "parse_tree.parse_tree_out_info.c"
}

#line 1680 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 1683 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1685 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1687 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1689 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1691 "parse_tree.parse_tree_out_info.c"
{
#line 1693 "parse_tree.parse_tree_out_info.c"
  {
#line 1695 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1697 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1700 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1702 "parse_tree.parse_tree_out_info.c"
    {
#line 1704 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1707 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1709 "parse_tree.parse_tree_out_info.c"
  }
#line 1711 "parse_tree.parse_tree_out_info.c"
}

#line 1714 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 1717 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1719 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1721 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1723 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1725 "parse_tree.parse_tree_out_info.c"
{
#line 1727 "parse_tree.parse_tree_out_info.c"
  {
#line 1729 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1731 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1734 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1736 "parse_tree.parse_tree_out_info.c"
    {
#line 1738 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1741 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1743 "parse_tree.parse_tree_out_info.c"
  }
#line 1745 "parse_tree.parse_tree_out_info.c"
}

#line 1748 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 1751 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1753 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1755 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1757 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1759 "parse_tree.parse_tree_out_info.c"
{
#line 1761 "parse_tree.parse_tree_out_info.c"
  {
#line 1763 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1765 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1768 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1770 "parse_tree.parse_tree_out_info.c"
    {
#line 1772 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1775 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1777 "parse_tree.parse_tree_out_info.c"
  }
#line 1779 "parse_tree.parse_tree_out_info.c"
}

#line 1782 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 1785 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1787 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1789 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1791 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1793 "parse_tree.parse_tree_out_info.c"
{
#line 1795 "parse_tree.parse_tree_out_info.c"
  {
#line 1797 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1799 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1802 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1804 "parse_tree.parse_tree_out_info.c"
    {
#line 1806 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1809 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1811 "parse_tree.parse_tree_out_info.c"
  }
#line 1813 "parse_tree.parse_tree_out_info.c"
}

#line 1816 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 1819 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1821 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1823 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1825 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1827 "parse_tree.parse_tree_out_info.c"
{
#line 1829 "parse_tree.parse_tree_out_info.c"
  {
#line 1831 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1833 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1836 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1838 "parse_tree.parse_tree_out_info.c"
    {
#line 1840 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1843 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1845 "parse_tree.parse_tree_out_info.c"
  }
#line 1847 "parse_tree.parse_tree_out_info.c"
}

#line 1850 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 1853 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1855 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1857 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1859 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1861 "parse_tree.parse_tree_out_info.c"
{
#line 1863 "parse_tree.parse_tree_out_info.c"
  {
#line 1865 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1867 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__3_3;

#line 1870 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1872 "parse_tree.parse_tree_out_info.c"
    {
#line 1874 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_2), &parse_tree__parse_tree_out_info__conv0_HeadVar__3_3);
    }
#line 1877 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__3_3));
#line 1879 "parse_tree.parse_tree_out_info.c"
  }
#line 1881 "parse_tree.parse_tree_out_info.c"
}

#line 1884 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 1887 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1889 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1891 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1893 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 1895 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4)
#line 1897 "parse_tree.parse_tree_out_info.c"
{
#line 1899 "parse_tree.parse_tree_out_info.c"
  {
#line 1901 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1903 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__4_4;

#line 1906 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1908 "parse_tree.parse_tree_out_info.c"
    {
#line 1910 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_3), &parse_tree__parse_tree_out_info__conv0_HeadVar__4_4);
    }
#line 1913 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_4 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__4_4));
#line 1915 "parse_tree.parse_tree_out_info.c"
  }
#line 1917 "parse_tree.parse_tree_out_info.c"
}

#line 1920 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 1923 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1925 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1927 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1929 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 1931 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 1933 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 1935 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_6)
#line 1937 "parse_tree.parse_tree_out_info.c"
{
#line 1939 "parse_tree.parse_tree_out_info.c"
  {
#line 1941 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;
#line 1943 "parse_tree.parse_tree_out_info.c"
    MR_String parse_tree__parse_tree_out_info__conv0_HeadVar__5_5;

#line 1946 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1948 "parse_tree.parse_tree_out_info.c"
    {
#line 1950 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____string__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_3), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_4), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_5), &parse_tree__parse_tree_out_info__conv0_HeadVar__5_5);
    }
#line 1953 "parse_tree.parse_tree_out_info.c"
    *parse_tree__parse_tree_out_info__wrapper_arg_6 = ((MR_Box) (parse_tree__parse_tree_out_info__conv0_HeadVar__5_5));
#line 1955 "parse_tree.parse_tree_out_info.c"
  }
#line 1957 "parse_tree.parse_tree_out_info.c"
}

#line 1960 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0_10001(
#line 1963 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1965 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1967 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1969 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 1971 "parse_tree.parse_tree_out_info.c"
{
#line 1973 "parse_tree.parse_tree_out_info.c"
  {
#line 1975 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 1978 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 1980 "parse_tree.parse_tree_out_info.c"
    {
#line 1982 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 1985 "parse_tree.parse_tree_out_info.c"
  }
#line 1987 "parse_tree.parse_tree_out_info.c"
}

#line 1990 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0_10001(
#line 1993 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 1995 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 1997 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 1999 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2001 "parse_tree.parse_tree_out_info.c"
{
#line 2003 "parse_tree.parse_tree_out_info.c"
  {
#line 2005 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2008 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2010 "parse_tree.parse_tree_out_info.c"
    {
#line 2012 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_strings_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2015 "parse_tree.parse_tree_out_info.c"
  }
#line 2017 "parse_tree.parse_tree_out_info.c"
}

#line 2020 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0_10001(
#line 2023 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2025 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2027 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2029 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2031 "parse_tree.parse_tree_out_info.c"
{
#line 2033 "parse_tree.parse_tree_out_info.c"
  {
#line 2035 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2038 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2040 "parse_tree.parse_tree_out_info.c"
    {
#line 2042 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_char_3_3_p_0(((MR_Char) (MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2045 "parse_tree.parse_tree_out_info.c"
  }
#line 2047 "parse_tree.parse_tree_out_info.c"
}

#line 2050 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0_10001(
#line 2053 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2055 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2057 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2059 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2061 "parse_tree.parse_tree_out_info.c"
{
#line 2063 "parse_tree.parse_tree_out_info.c"
  {
#line 2065 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2068 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2070 "parse_tree.parse_tree_out_info.c"
    {
#line 2072 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_int_3_3_p_0(((MR_Integer) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2075 "parse_tree.parse_tree_out_info.c"
  }
#line 2077 "parse_tree.parse_tree_out_info.c"
}

#line 2080 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0_10001(
#line 2083 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2085 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2087 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2089 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2091 "parse_tree.parse_tree_out_info.c"
{
#line 2093 "parse_tree.parse_tree_out_info.c"
  {
#line 2095 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2098 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2100 "parse_tree.parse_tree_out_info.c"
    {
#line 2102 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_float_3_3_p_0(MR_unbox_float(parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2105 "parse_tree.parse_tree_out_info.c"
  }
#line 2107 "parse_tree.parse_tree_out_info.c"
}

#line 2110 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0_10001(
#line 2113 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2115 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2117 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2119 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2121 "parse_tree.parse_tree_out_info.c"
{
#line 2123 "parse_tree.parse_tree_out_info.c"
  {
#line 2125 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2128 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2130 "parse_tree.parse_tree_out_info.c"
    {
#line 2132 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_purity_prefix_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2135 "parse_tree.parse_tree_out_info.c"
  }
#line 2137 "parse_tree.parse_tree_out_info.c"
}

#line 2140 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0_10001(
#line 2143 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2145 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2147 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2149 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2151 "parse_tree.parse_tree_out_info.c"
{
#line 2153 "parse_tree.parse_tree_out_info.c"
  {
#line 2155 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2158 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2160 "parse_tree.parse_tree_out_info.c"
    {
#line 2162 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_atom_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2165 "parse_tree.parse_tree_out_info.c"
  }
#line 2167 "parse_tree.parse_tree_out_info.c"
}

#line 2170 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0_10001(
#line 2173 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2175 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2177 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2179 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2181 "parse_tree.parse_tree_out_info.c"
{
#line 2183 "parse_tree.parse_tree_out_info.c"
  {
#line 2185 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2188 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2190 "parse_tree.parse_tree_out_info.c"
    {
#line 2192 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_quoted_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2195 "parse_tree.parse_tree_out_info.c"
  }
#line 2197 "parse_tree.parse_tree_out_info.c"
}

#line 2200 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0_10001(
#line 2203 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2205 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2207 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2209 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2211 "parse_tree.parse_tree_out_info.c"
{
#line 2213 "parse_tree.parse_tree_out_info.c"
  {
#line 2215 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2218 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2220 "parse_tree.parse_tree_out_info.c"
    {
#line 2222 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_constant_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2225 "parse_tree.parse_tree_out_info.c"
  }
#line 2227 "parse_tree.parse_tree_out_info.c"
}

#line 2230 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0_10001(
#line 2233 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2235 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2237 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2239 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2241 "parse_tree.parse_tree_out_info.c"
{
#line 2243 "parse_tree.parse_tree_out_info.c"
  {
#line 2245 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2248 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2250 "parse_tree.parse_tree_out_info.c"
    {
#line 2252 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_eval_method_3_3_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2255 "parse_tree.parse_tree_out_info.c"
  }
#line 2257 "parse_tree.parse_tree_out_info.c"
}

#line 2260 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0_10001(
#line 2263 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2265 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2267 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2269 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2271 "parse_tree.parse_tree_out_info.c"
{
#line 2273 "parse_tree.parse_tree_out_info.c"
  {
#line 2275 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2278 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2280 "parse_tree.parse_tree_out_info.c"
    {
#line 2282 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_lambda_eval_method_3_3_p_0();
    }
#line 2285 "parse_tree.parse_tree_out_info.c"
  }
#line 2287 "parse_tree.parse_tree_out_info.c"
}

#line 2290 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0_10001(
#line 2293 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2295 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2297 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2299 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_3)
#line 2301 "parse_tree.parse_tree_out_info.c"
{
#line 2303 "parse_tree.parse_tree_out_info.c"
  {
#line 2305 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2308 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2310 "parse_tree.parse_tree_out_info.c"
    {
#line 2312 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_escaped_string_3_3_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1));
    }
#line 2315 "parse_tree.parse_tree_out_info.c"
  }
#line 2317 "parse_tree.parse_tree_out_info.c"
}

#line 2320 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0_10001(
#line 2323 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2325 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2327 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2329 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 2331 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_4)
#line 2333 "parse_tree.parse_tree_out_info.c"
{
#line 2335 "parse_tree.parse_tree_out_info.c"
  {
#line 2337 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2340 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2342 "parse_tree.parse_tree_out_info.c"
    {
#line 2344 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_format_4_4_p_0(((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2));
    }
#line 2347 "parse_tree.parse_tree_out_info.c"
  }
#line 2349 "parse_tree.parse_tree_out_info.c"
}

#line 2352 "parse_tree.parse_tree_out_info.c"
static void MR_CALL 
parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0_10001(
#line 2355 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__closure_arg,
#line 2357 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_1,
#line 2359 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_2,
#line 2361 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_3,
#line 2363 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_4,
#line 2365 "parse_tree.parse_tree_out_info.c"
  MR_Box parse_tree__parse_tree_out_info__wrapper_arg_5,
#line 2367 "parse_tree.parse_tree_out_info.c"
  MR_Box * parse_tree__parse_tree_out_info__wrapper_arg_6)
#line 2369 "parse_tree.parse_tree_out_info.c"
{
#line 2371 "parse_tree.parse_tree_out_info.c"
  {
#line 2373 "parse_tree.parse_tree_out_info.c"
    MR_Box parse_tree__parse_tree_out_info__closure;

#line 2376 "parse_tree.parse_tree_out_info.c"
    parse_tree__parse_tree_out_info__closure = parse_tree__parse_tree_out_info__closure_arg;
#line 2378 "parse_tree.parse_tree_out_info.c"
    {
#line 2380 "parse_tree.parse_tree_out_info.c"
      parse_tree__parse_tree_out_info__ClassMethod_for_parse_tree__parse_tree_out_info__output____io__state__arity0______parse_tree__parse_tree_out_info__add_list_5_5_p_0(((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_2), ((MR_String) parse_tree__parse_tree_out_info__wrapper_arg_3), ((MR_Word) parse_tree__parse_tree_out_info__wrapper_arg_4));
    }
#line 2383 "parse_tree.parse_tree_out_info.c"
  }
#line 2385 "parse_tree.parse_tree_out_info.c"
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
#line 3411 "parse_tree.parse_tree_out_info.c"
  {
#line 3413 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__HeadVar__2_1 == parse_tree__parse_tree_out_info__HeadVar__2_2);

#line 3416 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 3418 "parse_tree.parse_tree_out_info.c"
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
#line 3447 "parse_tree.parse_tree_out_info.c"
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
#line 3477 "parse_tree.parse_tree_out_info.c"
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
#line 3501 "parse_tree.parse_tree_out_info.c"
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

#line 3575 "parse_tree.parse_tree_out_info.c"
        parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__V_3_3 == parse_tree__parse_tree_out_info__V_6_6);
#line 137 "parse_tree_out_info.m"
        if (parse_tree__parse_tree_out_info__succeeded)
#line 137 "parse_tree_out_info.m"
          {
#line 3581 "parse_tree.parse_tree_out_info.c"
            parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__V_4_4 == parse_tree__parse_tree_out_info__V_7_7);
#line 137 "parse_tree_out_info.m"
            if (parse_tree__parse_tree_out_info__succeeded)
#line 3585 "parse_tree.parse_tree_out_info.c"
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
#line 3637 "parse_tree.parse_tree_out_info.c"
  {
#line 3639 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__HeadVar__2_1 == parse_tree__parse_tree_out_info__HeadVar__2_2);

#line 3642 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 3644 "parse_tree.parse_tree_out_info.c"
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
#line 3688 "parse_tree.parse_tree_out_info.c"
  {
#line 3690 "parse_tree.parse_tree_out_info.c"
    MR_bool parse_tree__parse_tree_out_info__succeeded = (parse_tree__parse_tree_out_info__HeadVar__2_1 == parse_tree__parse_tree_out_info__HeadVar__2_2);

#line 3693 "parse_tree.parse_tree_out_info.c"
    return parse_tree__parse_tree_out_info__succeeded;
#line 3695 "parse_tree.parse_tree_out_info.c"
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
#line 115 "parse_tree_out_info.m"
  {
#line 115 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 115 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 18)));

#line 115 "parse_tree_out_info.m"
    {
#line 115 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_6), ((MR_Box) (parse_tree__parse_tree_out_info__TypeInfo_for_T_7)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__2_2)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__3_3)), parse_tree__parse_tree_out_info__HeadVar__4_4, parse_tree__parse_tree_out_info__HeadVar__5_5);
    }
#line 115 "parse_tree_out_info.m"
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
#line 114 "parse_tree_out_info.m"
  {
#line 114 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 114 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 17)));

#line 114 "parse_tree_out_info.m"
    {
#line 114 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_5), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__2_2)), parse_tree__parse_tree_out_info__HeadVar__3_3, parse_tree__parse_tree_out_info__HeadVar__4_4);
    }
#line 114 "parse_tree_out_info.m"
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
#line 113 "parse_tree_out_info.m"
  {
#line 113 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 113 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 16)));

#line 113 "parse_tree_out_info.m"
    {
#line 113 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 113 "parse_tree_out_info.m"
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
#line 112 "parse_tree_out_info.m"
  {
#line 112 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 112 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 15)));

#line 112 "parse_tree_out_info.m"
    {
#line 112 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) ((MR_Integer) 0)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 112 "parse_tree_out_info.m"
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
#line 111 "parse_tree_out_info.m"
  {
#line 111 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 111 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 14)));

#line 111 "parse_tree_out_info.m"
    {
#line 111 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 111 "parse_tree_out_info.m"
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
#line 110 "parse_tree_out_info.m"
  {
#line 110 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 110 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 13)));

#line 110 "parse_tree_out_info.m"
    {
#line 110 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 110 "parse_tree_out_info.m"
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
#line 109 "parse_tree_out_info.m"
  {
#line 109 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 109 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 12)));

#line 109 "parse_tree_out_info.m"
    {
#line 109 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 109 "parse_tree_out_info.m"
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
#line 108 "parse_tree_out_info.m"
  {
#line 108 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 108 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 11)));

#line 108 "parse_tree_out_info.m"
    {
#line 108 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 108 "parse_tree_out_info.m"
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
#line 107 "parse_tree_out_info.m"
  {
#line 107 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 107 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 10)));

#line 107 "parse_tree_out_info.m"
    {
#line 107 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 107 "parse_tree_out_info.m"
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
#line 106 "parse_tree_out_info.m"
  {
#line 106 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 106 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 9)));

#line 106 "parse_tree_out_info.m"
    {
#line 106 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), MR_box_float(parse_tree__parse_tree_out_info__HeadVar__1_1), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 106 "parse_tree_out_info.m"
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
#line 105 "parse_tree_out_info.m"
  {
#line 105 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 105 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 105 "parse_tree_out_info.m"
    {
#line 105 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 105 "parse_tree_out_info.m"
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
#line 104 "parse_tree_out_info.m"
  {
#line 104 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 104 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 7)));

#line 104 "parse_tree_out_info.m"
    {
#line 104 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (MR_Word) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 104 "parse_tree_out_info.m"
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
#line 103 "parse_tree_out_info.m"
  {
#line 103 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 103 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 6)));

#line 103 "parse_tree_out_info.m"
    {
#line 103 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 103 "parse_tree_out_info.m"
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
#line 102 "parse_tree_out_info.m"
  {
#line 102 "parse_tree_out_info.m"
    MR_bool parse_tree__parse_tree_out_info__succeeded;
#line 102 "parse_tree_out_info.m"
    void MR_CALL (* parse_tree__parse_tree_out_info__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 102 "parse_tree_out_info.m"
    {
#line 102 "parse_tree_out_info.m"
      parse_tree__parse_tree_out_info__func_0(((MR_Box) parse_tree__parse_tree_out_info__TypeClassInfo_for_output_4), ((MR_Box) (parse_tree__parse_tree_out_info__HeadVar__1_1)), parse_tree__parse_tree_out_info__HeadVar__2_2, parse_tree__parse_tree_out_info__HeadVar__3_3);
    }
#line 102 "parse_tree_out_info.m"
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
      libs__globals__lookup_bool_option_3_p_0(parse_tree__parse_tree_out_info__Globals_5, (MR_Integer) 137, &parse_tree__parse_tree_out_info__LineNumbersOpt_9);
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
