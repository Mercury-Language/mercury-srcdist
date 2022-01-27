/*
** Automatically generated from `module_qual.m'
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


/* :- module parse_tree.module_qual. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_qual__init
ENDINIT
*/

#include "parse_tree.module_qual.mih"


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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




#line 100 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 103 "parse_tree.module_qual.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 106 "parse_tree.module_qual.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 109 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0;

#line 112 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1;

#line 115 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_inst_0[2];

#line 118 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0[2];

#line 121 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0[2];

#line 124 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0;

#line 127 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1;

#line 130 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_mode_0[2];

#line 133 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0[2];

#line 136 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0[2];

#line 139 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0;

#line 142 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1;

#line 145 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_type_0[2];

#line 148 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0[2];

#line 151 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0[2];

#line 154 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0;

#line 157 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1;

#line 160 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_typeclass_0[2];

#line 163 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0[2];

#line 166 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0[2];

#line 169 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0;

#line 172 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1;

#line 175 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_should_report_errors_0[2];

#line 178 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0[2];

#line 181 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0[2];

#line 184 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0;

#line 187 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1;

#line 190 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_warn_unused_imports_in_parents_0[2];

#line 193 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0[2];

#line 196 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0[2];

#line 199 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0;

#line 202 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1;

#line 205 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_mq_in_interface_0[2];

#line 208 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0[2];

#line 211 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0[2];

#line 214 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 217 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 220 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 223 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 226 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0;

#line 229 "parse_tree.module_qual.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0[8];

#line 232 "parse_tree.module_qual.c"
static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0[8];

#line 235 "parse_tree.module_qual.c"
static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0;

#line 238 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0[1];

#line 241 "parse_tree.module_qual.c"
static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0[1];

#line 244 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0[1];

#line 247 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0[1];

#line 250 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 253 "parse_tree.module_qual.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0[11];

#line 256 "parse_tree.module_qual.c"
static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0[11];

#line 259 "parse_tree.module_qual.c"
static const MR_DuArgLocn parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0[11];

#line 262 "parse_tree.module_qual.c"
static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0;

#line 265 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0[1];

#line 268 "parse_tree.module_qual.c"
static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0[1];

#line 271 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0[1];

#line 274 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0[1];

#line 277 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0[1];

#line 280 "parse_tree.module_qual.c"
static const MR_NotagFunctorDesc parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0;

#line 283 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001(
#line 286 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 288 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 291 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001(
#line 294 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 296 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 298 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 301 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001(
#line 304 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 306 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 309 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001(
#line 312 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 314 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 316 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 319 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001(
#line 322 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 324 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 327 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001(
#line 330 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 332 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 334 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 337 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001(
#line 340 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 342 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 345 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001(
#line 348 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 350 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 352 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 355 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001(
#line 358 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 360 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 363 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001(
#line 366 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 368 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 370 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 373 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001(
#line 376 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 378 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 381 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001(
#line 384 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 386 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 388 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 391 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0_10001(
#line 394 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 396 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 399 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0_10001(
#line 402 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 404 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 406 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 409 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0_10001(
#line 412 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 414 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 417 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0_10001(
#line 420 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 422 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 424 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 427 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0_10001(
#line 430 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 432 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 435 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0_10001(
#line 438 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 440 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 442 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 445 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001(
#line 448 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 450 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2);

#line 453 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001(
#line 456 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 458 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 460 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3);

#line 351 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2(
#line 351 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 351 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 351 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 351 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

#line 342 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1(
#line 342 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 342 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 342 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 342 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

#line 314 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3(
#line 314 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 314 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 314 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 314 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

#line 255 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
#line 255 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 255 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 255 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 255 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3);

#line 253 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
#line 253 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 253 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 253 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 253 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_3[2][6];

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_4[1][7];




static /* final */ const MR_Box parse_tree__module_qual_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__module_qual_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 663 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 671 "parse_tree.module_qual.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 680 "parse_tree.module_qual.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 688 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0 = {
  (MR_String) "did_not_find_undef_inst",
  (MR_Integer) 0
};

#line 694 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1 = {
  (MR_String) "found_undef_inst",
  (MR_Integer) 1
};

#line 700 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_inst_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1
};

#line 706 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_inst_0_1
};

#line 712 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 718 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_inst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_inst",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_inst_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_inst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_inst_0
};

#line 735 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0 = {
  (MR_String) "did_not_find_undef_mode",
  (MR_Integer) 0
};

#line 741 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1 = {
  (MR_String) "found_undef_mode",
  (MR_Integer) 1
};

#line 747 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_mode_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1
};

#line 753 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_mode_0_1
};

#line 759 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 765 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_mode",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_mode_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_mode_0
};

#line 782 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0 = {
  (MR_String) "did_not_find_undef_type",
  (MR_Integer) 0
};

#line 788 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1 = {
  (MR_String) "found_undef_type",
  (MR_Integer) 1
};

#line 794 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_type_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1
};

#line 800 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_type_0_1
};

#line 806 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 812 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_type",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_type_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_type_0
};

#line 829 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0 = {
  (MR_String) "did_not_find_undef_typeclass",
  (MR_Integer) 0
};

#line 835 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1 = {
  (MR_String) "found_undef_typeclass",
  (MR_Integer) 1
};

#line 841 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_typeclass_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1
};

#line 847 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_found_undef_typeclass_0_1
};

#line 853 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 859 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_typeclass_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_found_undef_typeclass",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_found_undef_typeclass_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_found_undef_typeclass_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_found_undef_typeclass_0
};

#line 876 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0 = {
  (MR_String) "should_not_report_errors",
  (MR_Integer) 0
};

#line 882 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1 = {
  (MR_String) "should_report_errors",
  (MR_Integer) 1
};

#line 888 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_should_report_errors_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1
};

#line 894 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_should_report_errors_0_1
};

#line 900 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 906 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_should_report_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_should_report_errors",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_should_report_errors_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_should_report_errors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_should_report_errors_0
};

#line 923 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0 = {
  (MR_String) "should_not_warn_unused_imports_in_parents",
  (MR_Integer) 0
};

#line 929 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1 = {
  (MR_String) "should_warn_unused_imports_in_parents",
  (MR_Integer) 1
};

#line 935 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_warn_unused_imports_in_parents_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1
};

#line 941 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_maybe_warn_unused_imports_in_parents_0_1
};

#line 947 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 953 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_warn_unused_imports_in_parents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "maybe_warn_unused_imports_in_parents",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_maybe_warn_unused_imports_in_parents_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_maybe_warn_unused_imports_in_parents_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_maybe_warn_unused_imports_in_parents_0
};

#line 970 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0 = {
  (MR_String) "mq_not_used_in_interface",
  (MR_Integer) 0
};

#line 976 "parse_tree.module_qual.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1 = {
  (MR_String) "mq_used_in_interface",
  (MR_Integer) 1
};

#line 982 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_mq_in_interface_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1
};

#line 988 "parse_tree.module_qual.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0[2] = {
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_0,
  &parse_tree__module_qual__parse_tree__module_qual__enum_functor_desc_mq_in_interface_0_1
};

#line 994 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1000 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_in_interface_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_in_interface_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_in_interface",
  {     parse_tree__module_qual__parse_tree__module_qual__enum_name_ordered_mq_in_interface_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__enum_value_ordered_mq_in_interface_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_in_interface_0
};

#line 1017 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 1026 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 1035 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 1044 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 1053 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_recompilation_info_0
  }
};

#line 1061 "parse_tree.module_qual.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0[8] = {
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0
};

#line 1073 "parse_tree.module_qual.c"
static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0[8] = {
  (MR_String) "mqi_sub_info",
  (MR_String) "mqi_modules",
  (MR_String) "mqi_types",
  (MR_String) "mqi_insts",
  (MR_String) "mqi_modes",
  (MR_String) "mqi_classes",
  (MR_String) "mqi_as_yet_unused_interface_modules",
  (MR_String) "mqi_maybe_recompilation_info"
};

#line 1085 "parse_tree.module_qual.c"
static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0 = {
  (MR_String) "mq_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_info_0_0,
  NULL,
  NULL
};

#line 1100 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0
};

#line 1105 "parse_tree.module_qual.c"
static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_info_0_0
  }
};

#line 1114 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_info_0_0
};

#line 1119 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0[1] = {
  (MR_Integer) 0
};

#line 1124 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_info",
  {     parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_info_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_info_0
};

#line 1141 "parse_tree.module_qual.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1149 "parse_tree.module_qual.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0[11] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_type_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_inst_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_typeclass_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_should_report_errors_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_warn_unused_imports_in_parents_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1164 "parse_tree.module_qual.c"
static const MR_ConstString parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0[11] = {
  (MR_String) "mqsi_this_module",
  (MR_String) "mqsi_imported_modules",
  (MR_String) "mqsi_imported_instance_modules",
  (MR_String) "mqsi_exported_instances_flag",
  (MR_String) "mqsi_found_undef_type",
  (MR_String) "mqsi_found_undef_inst",
  (MR_String) "mqsi_found_undef_mode",
  (MR_String) "mqsi_found_undef_typeclass",
  (MR_String) "mqsi_should_report_errors",
  (MR_String) "mqsi_warn_parents_imports",
  (MR_String) "mqsi_num_errors"
};

#line 1179 "parse_tree.module_qual.c"
static const MR_DuArgLocn parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0[11] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 1238 "parse_tree.module_qual.c"
static const MR_DuFunctorDesc parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0 = {
  (MR_String) "mq_sub_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__parse_tree__module_qual__field_types_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_names_mq_sub_info_0_0,
  parse_tree__module_qual__parse_tree__module_qual__field_locns_mq_sub_info_0_0,
  NULL
};

#line 1253 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0
};

#line 1258 "parse_tree.module_qual.c"
static const MR_DuPtagLayout parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__parse_tree__module_qual__du_stag_ordered_mq_sub_info_0_0
  }
};

#line 1267 "parse_tree.module_qual.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0[1] = {
  &parse_tree__module_qual__parse_tree__module_qual__du_functor_desc_mq_sub_info_0_0
};

#line 1272 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 1277 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual____Unify____mq_sub_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____mq_sub_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "mq_sub_info",
  {     parse_tree__module_qual__parse_tree__module_qual__du_name_ordered_mq_sub_info_0 },
  {     parse_tree__module_qual__parse_tree__module_qual__du_ptag_ordered_mq_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_mq_sub_info_0
};

#line 1294 "parse_tree.module_qual.c"
static const MR_Integer parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0[1] = {
  (MR_Integer) 0
};

#line 1299 "parse_tree.module_qual.c"
static const MR_NotagFunctorDesc parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 = {
  (MR_String) "partial_qualifier_info",
  (MR_PseudoTypeInfo) &parse_tree__module_qual__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0,
  NULL
};

#line 1306 "parse_tree.module_qual.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001)),
  (MR_String) "parse_tree.module_qual",
  (MR_String) "partial_qualifier_info",
  {     &parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 },
  {     &parse_tree__module_qual__parse_tree__module_qual__notag_functor_desc_partial_qualifier_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__parse_tree__module_qual__functor_number_map_partial_qualifier_info_0
};

#line 1323 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0_10001(
#line 1326 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1328 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1330 "parse_tree.module_qual.c"
{
#line 1332 "parse_tree.module_qual.c"
  {
#line 1334 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1337 "parse_tree.module_qual.c"
    {
#line 1339 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1342 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1344 "parse_tree.module_qual.c"
  }
#line 1346 "parse_tree.module_qual.c"
}

#line 1349 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0_10001(
#line 1352 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1354 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1356 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1358 "parse_tree.module_qual.c"
{
#line 1360 "parse_tree.module_qual.c"
  {
#line 1362 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1365 "parse_tree.module_qual.c"
    {
#line 1367 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1370 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1372 "parse_tree.module_qual.c"
  }
#line 1374 "parse_tree.module_qual.c"
}

#line 1377 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0_10001(
#line 1380 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1382 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1384 "parse_tree.module_qual.c"
{
#line 1386 "parse_tree.module_qual.c"
  {
#line 1388 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1391 "parse_tree.module_qual.c"
    {
#line 1393 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1396 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1398 "parse_tree.module_qual.c"
  }
#line 1400 "parse_tree.module_qual.c"
}

#line 1403 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0_10001(
#line 1406 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1408 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1410 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1412 "parse_tree.module_qual.c"
{
#line 1414 "parse_tree.module_qual.c"
  {
#line 1416 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1419 "parse_tree.module_qual.c"
    {
#line 1421 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1424 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1426 "parse_tree.module_qual.c"
  }
#line 1428 "parse_tree.module_qual.c"
}

#line 1431 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0_10001(
#line 1434 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1436 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1438 "parse_tree.module_qual.c"
{
#line 1440 "parse_tree.module_qual.c"
  {
#line 1442 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1445 "parse_tree.module_qual.c"
    {
#line 1447 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1450 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1452 "parse_tree.module_qual.c"
  }
#line 1454 "parse_tree.module_qual.c"
}

#line 1457 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0_10001(
#line 1460 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1462 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1464 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1466 "parse_tree.module_qual.c"
{
#line 1468 "parse_tree.module_qual.c"
  {
#line 1470 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1473 "parse_tree.module_qual.c"
    {
#line 1475 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1478 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1480 "parse_tree.module_qual.c"
  }
#line 1482 "parse_tree.module_qual.c"
}

#line 1485 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0_10001(
#line 1488 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1490 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1492 "parse_tree.module_qual.c"
{
#line 1494 "parse_tree.module_qual.c"
  {
#line 1496 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1499 "parse_tree.module_qual.c"
    {
#line 1501 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1504 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1506 "parse_tree.module_qual.c"
  }
#line 1508 "parse_tree.module_qual.c"
}

#line 1511 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0_10001(
#line 1514 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1516 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1518 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1520 "parse_tree.module_qual.c"
{
#line 1522 "parse_tree.module_qual.c"
  {
#line 1524 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1527 "parse_tree.module_qual.c"
    {
#line 1529 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1532 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1534 "parse_tree.module_qual.c"
  }
#line 1536 "parse_tree.module_qual.c"
}

#line 1539 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0_10001(
#line 1542 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1544 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1546 "parse_tree.module_qual.c"
{
#line 1548 "parse_tree.module_qual.c"
  {
#line 1550 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1553 "parse_tree.module_qual.c"
    {
#line 1555 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1558 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1560 "parse_tree.module_qual.c"
  }
#line 1562 "parse_tree.module_qual.c"
}

#line 1565 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0_10001(
#line 1568 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1570 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1572 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1574 "parse_tree.module_qual.c"
{
#line 1576 "parse_tree.module_qual.c"
  {
#line 1578 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1581 "parse_tree.module_qual.c"
    {
#line 1583 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1586 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1588 "parse_tree.module_qual.c"
  }
#line 1590 "parse_tree.module_qual.c"
}

#line 1593 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0_10001(
#line 1596 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1598 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1600 "parse_tree.module_qual.c"
{
#line 1602 "parse_tree.module_qual.c"
  {
#line 1604 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1607 "parse_tree.module_qual.c"
    {
#line 1609 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1612 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1614 "parse_tree.module_qual.c"
  }
#line 1616 "parse_tree.module_qual.c"
}

#line 1619 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0_10001(
#line 1622 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1624 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1626 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1628 "parse_tree.module_qual.c"
{
#line 1630 "parse_tree.module_qual.c"
  {
#line 1632 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1635 "parse_tree.module_qual.c"
    {
#line 1637 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1640 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1642 "parse_tree.module_qual.c"
  }
#line 1644 "parse_tree.module_qual.c"
}

#line 1647 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0_10001(
#line 1650 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1652 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1654 "parse_tree.module_qual.c"
{
#line 1656 "parse_tree.module_qual.c"
  {
#line 1658 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1661 "parse_tree.module_qual.c"
    {
#line 1663 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_in_interface_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1666 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1668 "parse_tree.module_qual.c"
  }
#line 1670 "parse_tree.module_qual.c"
}

#line 1673 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0_10001(
#line 1676 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1678 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1680 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1682 "parse_tree.module_qual.c"
{
#line 1684 "parse_tree.module_qual.c"
  {
#line 1686 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1689 "parse_tree.module_qual.c"
    {
#line 1691 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____mq_in_interface_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1694 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1696 "parse_tree.module_qual.c"
  }
#line 1698 "parse_tree.module_qual.c"
}

#line 1701 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0_10001(
#line 1704 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1706 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1708 "parse_tree.module_qual.c"
{
#line 1710 "parse_tree.module_qual.c"
  {
#line 1712 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1715 "parse_tree.module_qual.c"
    {
#line 1717 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_info_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1720 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1722 "parse_tree.module_qual.c"
  }
#line 1724 "parse_tree.module_qual.c"
}

#line 1727 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0_10001(
#line 1730 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1732 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1734 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1736 "parse_tree.module_qual.c"
{
#line 1738 "parse_tree.module_qual.c"
  {
#line 1740 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1743 "parse_tree.module_qual.c"
    {
#line 1745 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____mq_info_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1748 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1750 "parse_tree.module_qual.c"
  }
#line 1752 "parse_tree.module_qual.c"
}

#line 1755 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0_10001(
#line 1758 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1760 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1762 "parse_tree.module_qual.c"
{
#line 1764 "parse_tree.module_qual.c"
  {
#line 1766 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1769 "parse_tree.module_qual.c"
    {
#line 1771 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1774 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1776 "parse_tree.module_qual.c"
  }
#line 1778 "parse_tree.module_qual.c"
}

#line 1781 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0_10001(
#line 1784 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1786 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1788 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1790 "parse_tree.module_qual.c"
{
#line 1792 "parse_tree.module_qual.c"
  {
#line 1794 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1797 "parse_tree.module_qual.c"
    {
#line 1799 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____mq_sub_info_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1802 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1804 "parse_tree.module_qual.c"
  }
#line 1806 "parse_tree.module_qual.c"
}

#line 1809 "parse_tree.module_qual.c"
static MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0_10001(
#line 1812 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 1814 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2)
#line 1816 "parse_tree.module_qual.c"
{
#line 1818 "parse_tree.module_qual.c"
  {
#line 1820 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded;

#line 1823 "parse_tree.module_qual.c"
    {
#line 1825 "parse_tree.module_qual.c"
      parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____partial_qualifier_info_0_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2));
    }
#line 1828 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 1830 "parse_tree.module_qual.c"
  }
#line 1832 "parse_tree.module_qual.c"
}

#line 1835 "parse_tree.module_qual.c"
static void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0_10001(
#line 1838 "parse_tree.module_qual.c"
  MR_Box * parse_tree__module_qual__wrapper_arg_1,
#line 1840 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 1842 "parse_tree.module_qual.c"
  MR_Box parse_tree__module_qual__wrapper_arg_3)
#line 1844 "parse_tree.module_qual.c"
{
#line 1846 "parse_tree.module_qual.c"
  {
#line 1848 "parse_tree.module_qual.c"
    MR_Word parse_tree__module_qual__conv0_HeadVar__1_1;

#line 1851 "parse_tree.module_qual.c"
    {
#line 1853 "parse_tree.module_qual.c"
      parse_tree__module_qual____Compare____partial_qualifier_info_0_0(&parse_tree__module_qual__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__wrapper_arg_3));
    }
#line 1856 "parse_tree.module_qual.c"
    *parse_tree__module_qual__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__1_1));
#line 1858 "parse_tree.module_qual.c"
  }
#line 1860 "parse_tree.module_qual.c"
}

#line 376 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____partial_qualifier_info_0_0(
#line 376 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 376 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 376 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 376 "module_qual.m"
{
#line 376 "module_qual.m"
  {
#line 376 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 376 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastX_6 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 376 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastY_7 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 376 "module_qual.m"
    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_6 == parse_tree__module_qual__CastY_7);
#line 376 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 1887 "parse_tree.module_qual.c"
      *parse_tree__module_qual__HeadVar__1_1 = (MR_Integer) 0;
#line 376 "module_qual.m"
    else
#line 376 "module_qual.m"
      {
#line 376 "module_qual.m"
        MR_Word parse_tree__module_qual__V_4_4 = (MR_Word) parse_tree__module_qual__HeadVar__2_2;
#line 376 "module_qual.m"
        MR_Word parse_tree__module_qual__V_5_5 = (MR_Word) parse_tree__module_qual__HeadVar__3_3;

#line 376 "module_qual.m"
        {
#line 376 "module_qual.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], parse_tree__module_qual__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__V_4_4)), ((MR_Box) (parse_tree__module_qual__V_5_5)));
        }
#line 376 "module_qual.m"
      }
#line 376 "module_qual.m"
  }
#line 376 "module_qual.m"
}

#line 376 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____partial_qualifier_info_0_0(
#line 376 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__1_1,
#line 376 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 376 "module_qual.m"
{
#line 376 "module_qual.m"
  {
#line 376 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 376 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastX_5 = (MR_Integer) parse_tree__module_qual__HeadVar__1_1;
#line 376 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastY_6 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;

#line 376 "module_qual.m"
    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_5 == parse_tree__module_qual__CastY_6);
#line 376 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 376 "module_qual.m"
      parse_tree__module_qual__succeeded = MR_TRUE;
#line 376 "module_qual.m"
    else
#line 376 "module_qual.m"
      {
#line 376 "module_qual.m"
        MR_Word parse_tree__module_qual__V_3_3 = (MR_Word) parse_tree__module_qual__HeadVar__1_1;
#line 376 "module_qual.m"
        MR_Word parse_tree__module_qual__V_4_4 = (MR_Word) parse_tree__module_qual__HeadVar__2_2;

#line 1943 "parse_tree.module_qual.c"
        {
#line 1945 "parse_tree.module_qual.c"
          parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], ((MR_Box) (parse_tree__module_qual__V_3_3)), ((MR_Box) (parse_tree__module_qual__V_4_4)));
        }
#line 376 "module_qual.m"
      }
#line 376 "module_qual.m"
    return parse_tree__module_qual__succeeded;
#line 376 "module_qual.m"
  }
#line 376 "module_qual.m"
}

#line 483 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____mq_sub_info_0_0(
#line 483 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 483 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 483 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 483 "module_qual.m"
{
#line 483 "module_qual.m"
  {
#line 483 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 483 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastX_36 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 483 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastY_37 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 483 "module_qual.m"
    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_36 == parse_tree__module_qual__CastY_37);
#line 483 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 1981 "parse_tree.module_qual.c"
      *parse_tree__module_qual__HeadVar__1_1 = (MR_Integer) 0;
#line 483 "module_qual.m"
    else
#line 483 "module_qual.m"
      {
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Integer parse_tree__module_qual__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 0)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 1)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 2)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Integer parse_tree__module_qual__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 4)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_26_26;

#line 483 "module_qual.m"
        {
#line 483 "module_qual.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__V_26_26, parse_tree__module_qual__V_4_4, parse_tree__module_qual__V_15_15);
        }
#line 2039 "parse_tree.module_qual.c"
        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_26_26 == (MR_Integer) 0);
#line 483 "module_qual.m"
        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
        if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_26_26;
#line 483 "module_qual.m"
        else
#line 483 "module_qual.m"
          {
#line 483 "module_qual.m"
            MR_Word parse_tree__module_qual__V_27_27;

#line 483 "module_qual.m"
            {
#line 483 "module_qual.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[4], &parse_tree__module_qual__V_27_27, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
            }
#line 2059 "parse_tree.module_qual.c"
            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_27_27 == (MR_Integer) 0);
#line 483 "module_qual.m"
            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
            if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_27_27;
#line 483 "module_qual.m"
            else
#line 483 "module_qual.m"
              {
#line 483 "module_qual.m"
                MR_Word parse_tree__module_qual__V_28_28;

#line 483 "module_qual.m"
                {
#line 483 "module_qual.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[4], &parse_tree__module_qual__V_28_28, ((MR_Box) (parse_tree__module_qual__V_6_6)), ((MR_Box) (parse_tree__module_qual__V_17_17)));
                }
#line 2079 "parse_tree.module_qual.c"
                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_28_28 == (MR_Integer) 0);
#line 483 "module_qual.m"
                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_28_28;
#line 483 "module_qual.m"
                else
#line 483 "module_qual.m"
                  {
#line 483 "module_qual.m"
                    MR_Word parse_tree__module_qual__V_29_29;
#line 483 "module_qual.m"
                    MR_Integer parse_tree__module_qual__V_49_49 = (MR_Integer) parse_tree__module_qual__V_7_7;
#line 483 "module_qual.m"
                    MR_Integer parse_tree__module_qual__V_50_50 = (MR_Integer) parse_tree__module_qual__V_18_18;

#line 483 "module_qual.m"
                    {
#line 483 "module_qual.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_29_29, parse_tree__module_qual__V_49_49, parse_tree__module_qual__V_50_50);
                    }
#line 2103 "parse_tree.module_qual.c"
                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_29_29 == (MR_Integer) 0);
#line 483 "module_qual.m"
                    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                    if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                      *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_29_29;
#line 483 "module_qual.m"
                    else
#line 483 "module_qual.m"
                      {
#line 483 "module_qual.m"
                        MR_Word parse_tree__module_qual__V_30_30;
#line 483 "module_qual.m"
                        MR_Integer parse_tree__module_qual__V_51_51 = (MR_Integer) parse_tree__module_qual__V_8_8;
#line 483 "module_qual.m"
                        MR_Integer parse_tree__module_qual__V_52_52 = (MR_Integer) parse_tree__module_qual__V_19_19;

#line 483 "module_qual.m"
                        {
#line 483 "module_qual.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_30_30, parse_tree__module_qual__V_51_51, parse_tree__module_qual__V_52_52);
                        }
#line 2127 "parse_tree.module_qual.c"
                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_30_30 == (MR_Integer) 0);
#line 483 "module_qual.m"
                        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                        if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_30_30;
#line 483 "module_qual.m"
                        else
#line 483 "module_qual.m"
                          {
#line 483 "module_qual.m"
                            MR_Word parse_tree__module_qual__V_31_31;
#line 483 "module_qual.m"
                            MR_Integer parse_tree__module_qual__V_53_53 = (MR_Integer) parse_tree__module_qual__V_9_9;
#line 483 "module_qual.m"
                            MR_Integer parse_tree__module_qual__V_54_54 = (MR_Integer) parse_tree__module_qual__V_20_20;

#line 483 "module_qual.m"
                            {
#line 483 "module_qual.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_31_31, parse_tree__module_qual__V_53_53, parse_tree__module_qual__V_54_54);
                            }
#line 2151 "parse_tree.module_qual.c"
                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_31_31 == (MR_Integer) 0);
#line 483 "module_qual.m"
                            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                            if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_31_31;
#line 483 "module_qual.m"
                            else
#line 483 "module_qual.m"
                              {
#line 483 "module_qual.m"
                                MR_Word parse_tree__module_qual__V_32_32;
#line 483 "module_qual.m"
                                MR_Integer parse_tree__module_qual__V_55_55 = (MR_Integer) parse_tree__module_qual__V_10_10;
#line 483 "module_qual.m"
                                MR_Integer parse_tree__module_qual__V_56_56 = (MR_Integer) parse_tree__module_qual__V_21_21;

#line 483 "module_qual.m"
                                {
#line 483 "module_qual.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_32_32, parse_tree__module_qual__V_55_55, parse_tree__module_qual__V_56_56);
                                }
#line 2175 "parse_tree.module_qual.c"
                                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_32_32 == (MR_Integer) 0);
#line 483 "module_qual.m"
                                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                                if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_32_32;
#line 483 "module_qual.m"
                                else
#line 483 "module_qual.m"
                                  {
#line 483 "module_qual.m"
                                    MR_Word parse_tree__module_qual__V_33_33;
#line 483 "module_qual.m"
                                    MR_Integer parse_tree__module_qual__V_57_57 = (MR_Integer) parse_tree__module_qual__V_11_11;
#line 483 "module_qual.m"
                                    MR_Integer parse_tree__module_qual__V_58_58 = (MR_Integer) parse_tree__module_qual__V_22_22;

#line 483 "module_qual.m"
                                    {
#line 483 "module_qual.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_33_33, parse_tree__module_qual__V_57_57, parse_tree__module_qual__V_58_58);
                                    }
#line 2199 "parse_tree.module_qual.c"
                                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_33_33 == (MR_Integer) 0);
#line 483 "module_qual.m"
                                    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                                    if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                                      *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_33_33;
#line 483 "module_qual.m"
                                    else
#line 483 "module_qual.m"
                                      {
#line 483 "module_qual.m"
                                        MR_Word parse_tree__module_qual__V_34_34;
#line 483 "module_qual.m"
                                        MR_Integer parse_tree__module_qual__V_59_59 = (MR_Integer) parse_tree__module_qual__V_12_12;
#line 483 "module_qual.m"
                                        MR_Integer parse_tree__module_qual__V_60_60 = (MR_Integer) parse_tree__module_qual__V_23_23;

#line 483 "module_qual.m"
                                        {
#line 483 "module_qual.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_34_34, parse_tree__module_qual__V_59_59, parse_tree__module_qual__V_60_60);
                                        }
#line 2223 "parse_tree.module_qual.c"
                                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_34_34 == (MR_Integer) 0);
#line 483 "module_qual.m"
                                        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                                        if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                                          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_34_34;
#line 483 "module_qual.m"
                                        else
#line 483 "module_qual.m"
                                          {
#line 483 "module_qual.m"
                                            MR_Word parse_tree__module_qual__V_35_35;
#line 483 "module_qual.m"
                                            MR_Integer parse_tree__module_qual__V_61_61 = (MR_Integer) parse_tree__module_qual__V_13_13;
#line 483 "module_qual.m"
                                            MR_Integer parse_tree__module_qual__V_62_62 = (MR_Integer) parse_tree__module_qual__V_24_24;

#line 483 "module_qual.m"
                                            {
#line 483 "module_qual.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__V_35_35, parse_tree__module_qual__V_61_61, parse_tree__module_qual__V_62_62);
                                            }
#line 2247 "parse_tree.module_qual.c"
                                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_35_35 == (MR_Integer) 0);
#line 483 "module_qual.m"
                                            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 483 "module_qual.m"
                                            if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                                              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_35_35;
#line 483 "module_qual.m"
                                            else
#line 483 "module_qual.m"
                                              {
#line 483 "module_qual.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__V_14_14, parse_tree__module_qual__V_25_25);
                                              }
#line 483 "module_qual.m"
                                          }
#line 483 "module_qual.m"
                                      }
#line 483 "module_qual.m"
                                  }
#line 483 "module_qual.m"
                              }
#line 483 "module_qual.m"
                          }
#line 483 "module_qual.m"
                      }
#line 483 "module_qual.m"
                  }
#line 483 "module_qual.m"
              }
#line 483 "module_qual.m"
          }
#line 483 "module_qual.m"
      }
#line 483 "module_qual.m"
  }
#line 483 "module_qual.m"
}

#line 483 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_sub_info_0_0(
#line 483 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__1_1,
#line 483 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 483 "module_qual.m"
{
#line 483 "module_qual.m"
  {
#line 483 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 483 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastX_25 = (MR_Integer) parse_tree__module_qual__HeadVar__1_1;
#line 483 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastY_26 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;

#line 483 "module_qual.m"
    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_25 == parse_tree__module_qual__CastY_26);
#line 483 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
      parse_tree__module_qual__succeeded = MR_TRUE;
#line 483 "module_qual.m"
    else
#line 483 "module_qual.m"
      {
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_28_28;
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_29_29;
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 2)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Integer parse_tree__module_qual__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 4)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 483 "module_qual.m"
        MR_Integer parse_tree__module_qual__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));

#line 2364 "parse_tree.module_qual.c"
        {
#line 2366 "parse_tree.module_qual.c"
          parse_tree__module_qual__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__V_3_3, parse_tree__module_qual__V_14_14);
        }
#line 483 "module_qual.m"
        if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
          {
#line 2373 "parse_tree.module_qual.c"
            parse_tree__module_qual__TypeInfo_28_28 = (MR_Word) &parse_tree__module_qual_scalar_common_1[4];
#line 2375 "parse_tree.module_qual.c"
            {
#line 2377 "parse_tree.module_qual.c"
              parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_28_28, ((MR_Box) (parse_tree__module_qual__V_4_4)), ((MR_Box) (parse_tree__module_qual__V_15_15)));
            }
#line 483 "module_qual.m"
            if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
              {
#line 2384 "parse_tree.module_qual.c"
                parse_tree__module_qual__TypeInfo_29_29 = (MR_Word) &parse_tree__module_qual_scalar_common_1[4];
#line 2386 "parse_tree.module_qual.c"
                {
#line 2388 "parse_tree.module_qual.c"
                  parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_29_29, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
                }
#line 483 "module_qual.m"
                if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                  {
#line 2395 "parse_tree.module_qual.c"
                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_6_6 == parse_tree__module_qual__V_17_17);
#line 483 "module_qual.m"
                    if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                      {
#line 2401 "parse_tree.module_qual.c"
                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_7_7 == parse_tree__module_qual__V_18_18);
#line 483 "module_qual.m"
                        if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                          {
#line 2407 "parse_tree.module_qual.c"
                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_8_8 == parse_tree__module_qual__V_19_19);
#line 483 "module_qual.m"
                            if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                              {
#line 2413 "parse_tree.module_qual.c"
                                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_9_9 == parse_tree__module_qual__V_20_20);
#line 483 "module_qual.m"
                                if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                                  {
#line 2419 "parse_tree.module_qual.c"
                                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_10_10 == parse_tree__module_qual__V_21_21);
#line 483 "module_qual.m"
                                    if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                                      {
#line 2425 "parse_tree.module_qual.c"
                                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_11_11 == parse_tree__module_qual__V_22_22);
#line 483 "module_qual.m"
                                        if (parse_tree__module_qual__succeeded)
#line 483 "module_qual.m"
                                          {
#line 2431 "parse_tree.module_qual.c"
                                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_12_12 == parse_tree__module_qual__V_23_23);
#line 483 "module_qual.m"
                                            if (parse_tree__module_qual__succeeded)
#line 2435 "parse_tree.module_qual.c"
                                              parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_13_13 == parse_tree__module_qual__V_24_24);
#line 483 "module_qual.m"
                                          }
#line 483 "module_qual.m"
                                      }
#line 483 "module_qual.m"
                                  }
#line 483 "module_qual.m"
                              }
#line 483 "module_qual.m"
                          }
#line 483 "module_qual.m"
                      }
#line 483 "module_qual.m"
                  }
#line 483 "module_qual.m"
              }
#line 483 "module_qual.m"
          }
#line 483 "module_qual.m"
      }
#line 483 "module_qual.m"
    return parse_tree__module_qual__succeeded;
#line 483 "module_qual.m"
  }
#line 483 "module_qual.m"
}

#line 515 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____mq_info_0_0(
#line 515 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 515 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 515 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 515 "module_qual.m"
{
#line 515 "module_qual.m"
  {
#line 515 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 515 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastX_27 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 515 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastY_28 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 515 "module_qual.m"
    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_27 == parse_tree__module_qual__CastY_28);
#line 515 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 2488 "parse_tree.module_qual.c"
      *parse_tree__module_qual__HeadVar__1_1 = (MR_Integer) 0;
#line 515 "module_qual.m"
    else
#line 515 "module_qual.m"
      {
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 5)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 6)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 7)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 0)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 1)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 2)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 3)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 4)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 5)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 6)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__3_3, (MR_Integer) 7)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_20_20;

#line 515 "module_qual.m"
        {
#line 515 "module_qual.m"
          parse_tree__module_qual____Compare____mq_sub_info_0_0(&parse_tree__module_qual__V_20_20, parse_tree__module_qual__V_4_4, parse_tree__module_qual__V_12_12);
        }
#line 2534 "parse_tree.module_qual.c"
        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_20_20 == (MR_Integer) 0);
#line 515 "module_qual.m"
        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 515 "module_qual.m"
        if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_20_20;
#line 515 "module_qual.m"
        else
#line 515 "module_qual.m"
          {
#line 515 "module_qual.m"
            MR_Word parse_tree__module_qual__V_21_21;

#line 515 "module_qual.m"
            {
#line 515 "module_qual.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_21_21, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_13_13)));
            }
#line 2554 "parse_tree.module_qual.c"
            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_21_21 == (MR_Integer) 0);
#line 515 "module_qual.m"
            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 515 "module_qual.m"
            if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_21_21;
#line 515 "module_qual.m"
            else
#line 515 "module_qual.m"
              {
#line 515 "module_qual.m"
                MR_Word parse_tree__module_qual__V_22_22;

#line 515 "module_qual.m"
                {
#line 515 "module_qual.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_22_22, ((MR_Box) (parse_tree__module_qual__V_6_6)), ((MR_Box) (parse_tree__module_qual__V_14_14)));
                }
#line 2574 "parse_tree.module_qual.c"
                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_22_22 == (MR_Integer) 0);
#line 515 "module_qual.m"
                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 515 "module_qual.m"
                if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_22_22;
#line 515 "module_qual.m"
                else
#line 515 "module_qual.m"
                  {
#line 515 "module_qual.m"
                    MR_Word parse_tree__module_qual__V_23_23;

#line 515 "module_qual.m"
                    {
#line 515 "module_qual.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_23_23, ((MR_Box) (parse_tree__module_qual__V_7_7)), ((MR_Box) (parse_tree__module_qual__V_15_15)));
                    }
#line 2594 "parse_tree.module_qual.c"
                    parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_23_23 == (MR_Integer) 0);
#line 515 "module_qual.m"
                    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 515 "module_qual.m"
                    if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                      *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_23_23;
#line 515 "module_qual.m"
                    else
#line 515 "module_qual.m"
                      {
#line 515 "module_qual.m"
                        MR_Word parse_tree__module_qual__V_24_24;

#line 515 "module_qual.m"
                        {
#line 515 "module_qual.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_24_24, ((MR_Box) (parse_tree__module_qual__V_8_8)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
                        }
#line 2614 "parse_tree.module_qual.c"
                        parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_24_24 == (MR_Integer) 0);
#line 515 "module_qual.m"
                        parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 515 "module_qual.m"
                        if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                          *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_24_24;
#line 515 "module_qual.m"
                        else
#line 515 "module_qual.m"
                          {
#line 515 "module_qual.m"
                            MR_Word parse_tree__module_qual__V_25_25;

#line 515 "module_qual.m"
                            {
#line 515 "module_qual.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[3], &parse_tree__module_qual__V_25_25, ((MR_Box) (parse_tree__module_qual__V_9_9)), ((MR_Box) (parse_tree__module_qual__V_17_17)));
                            }
#line 2634 "parse_tree.module_qual.c"
                            parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_25_25 == (MR_Integer) 0);
#line 515 "module_qual.m"
                            parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 515 "module_qual.m"
                            if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                              *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_25_25;
#line 515 "module_qual.m"
                            else
#line 515 "module_qual.m"
                              {
#line 515 "module_qual.m"
                                MR_Word parse_tree__module_qual__V_26_26;

#line 515 "module_qual.m"
                                {
#line 515 "module_qual.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[4], &parse_tree__module_qual__V_26_26, ((MR_Box) (parse_tree__module_qual__V_10_10)), ((MR_Box) (parse_tree__module_qual__V_18_18)));
                                }
#line 2654 "parse_tree.module_qual.c"
                                parse_tree__module_qual__succeeded = (parse_tree__module_qual__V_26_26 == (MR_Integer) 0);
#line 515 "module_qual.m"
                                parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 515 "module_qual.m"
                                if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                                  *parse_tree__module_qual__HeadVar__1_1 = parse_tree__module_qual__V_26_26;
#line 515 "module_qual.m"
                                else
#line 515 "module_qual.m"
                                  {
#line 515 "module_qual.m"
                                    {
#line 515 "module_qual.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual_scalar_common_1[3], parse_tree__module_qual__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__V_11_11)), ((MR_Box) (parse_tree__module_qual__V_19_19)));
                                    }
#line 515 "module_qual.m"
                                  }
#line 515 "module_qual.m"
                              }
#line 515 "module_qual.m"
                          }
#line 515 "module_qual.m"
                      }
#line 515 "module_qual.m"
                  }
#line 515 "module_qual.m"
              }
#line 515 "module_qual.m"
          }
#line 515 "module_qual.m"
      }
#line 515 "module_qual.m"
  }
#line 515 "module_qual.m"
}

#line 515 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_info_0_0(
#line 515 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__1_1,
#line 515 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 515 "module_qual.m"
{
#line 515 "module_qual.m"
  {
#line 515 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 515 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastX_19 = (MR_Integer) parse_tree__module_qual__HeadVar__1_1;
#line 515 "module_qual.m"
    MR_Integer parse_tree__module_qual__CastY_20 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;

#line 515 "module_qual.m"
    parse_tree__module_qual__succeeded = (parse_tree__module_qual__CastX_19 == parse_tree__module_qual__CastY_20);
#line 515 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
      parse_tree__module_qual__succeeded = MR_TRUE;
#line 515 "module_qual.m"
    else
#line 515 "module_qual.m"
      {
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_21_21;
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_22_22;
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_23_23;
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_24_24;
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_25_25;
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_26_26;
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__TypeInfo_27_27;
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 0)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 2)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 3)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 4)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 5)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 6)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__1_1, (MR_Integer) 7)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 0)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 1)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 2)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 3)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 4)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 5)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 6)));
#line 515 "module_qual.m"
        MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__HeadVar__2_2, (MR_Integer) 7)));

#line 2767 "parse_tree.module_qual.c"
        {
#line 2769 "parse_tree.module_qual.c"
          parse_tree__module_qual__succeeded = parse_tree__module_qual____Unify____mq_sub_info_0_0(parse_tree__module_qual__V_3_3, parse_tree__module_qual__V_11_11);
        }
#line 515 "module_qual.m"
        if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
          {
#line 2776 "parse_tree.module_qual.c"
            parse_tree__module_qual__TypeInfo_21_21 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
#line 2778 "parse_tree.module_qual.c"
            {
#line 2780 "parse_tree.module_qual.c"
              parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_21_21, ((MR_Box) (parse_tree__module_qual__V_4_4)), ((MR_Box) (parse_tree__module_qual__V_12_12)));
            }
#line 515 "module_qual.m"
            if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
              {
#line 2787 "parse_tree.module_qual.c"
                parse_tree__module_qual__TypeInfo_22_22 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
#line 2789 "parse_tree.module_qual.c"
                {
#line 2791 "parse_tree.module_qual.c"
                  parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_22_22, ((MR_Box) (parse_tree__module_qual__V_5_5)), ((MR_Box) (parse_tree__module_qual__V_13_13)));
                }
#line 515 "module_qual.m"
                if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                  {
#line 2798 "parse_tree.module_qual.c"
                    parse_tree__module_qual__TypeInfo_23_23 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
#line 2800 "parse_tree.module_qual.c"
                    {
#line 2802 "parse_tree.module_qual.c"
                      parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_23_23, ((MR_Box) (parse_tree__module_qual__V_6_6)), ((MR_Box) (parse_tree__module_qual__V_14_14)));
                    }
#line 515 "module_qual.m"
                    if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                      {
#line 2809 "parse_tree.module_qual.c"
                        parse_tree__module_qual__TypeInfo_24_24 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
#line 2811 "parse_tree.module_qual.c"
                        {
#line 2813 "parse_tree.module_qual.c"
                          parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_24_24, ((MR_Box) (parse_tree__module_qual__V_7_7)), ((MR_Box) (parse_tree__module_qual__V_15_15)));
                        }
#line 515 "module_qual.m"
                        if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                          {
#line 2820 "parse_tree.module_qual.c"
                            parse_tree__module_qual__TypeInfo_25_25 = (MR_Word) &parse_tree__module_qual_scalar_common_2[3];
#line 2822 "parse_tree.module_qual.c"
                            {
#line 2824 "parse_tree.module_qual.c"
                              parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_25_25, ((MR_Box) (parse_tree__module_qual__V_8_8)), ((MR_Box) (parse_tree__module_qual__V_16_16)));
                            }
#line 515 "module_qual.m"
                            if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                              {
#line 2831 "parse_tree.module_qual.c"
                                parse_tree__module_qual__TypeInfo_26_26 = (MR_Word) &parse_tree__module_qual_scalar_common_2[4];
#line 2833 "parse_tree.module_qual.c"
                                {
#line 2835 "parse_tree.module_qual.c"
                                  parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_26_26, ((MR_Box) (parse_tree__module_qual__V_9_9)), ((MR_Box) (parse_tree__module_qual__V_17_17)));
                                }
#line 515 "module_qual.m"
                                if (parse_tree__module_qual__succeeded)
#line 515 "module_qual.m"
                                  {
#line 2842 "parse_tree.module_qual.c"
                                    parse_tree__module_qual__TypeInfo_27_27 = (MR_Word) &parse_tree__module_qual_scalar_common_1[3];
#line 2844 "parse_tree.module_qual.c"
                                    {
#line 2846 "parse_tree.module_qual.c"
                                      parse_tree__module_qual__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__TypeInfo_27_27, ((MR_Box) (parse_tree__module_qual__V_10_10)), ((MR_Box) (parse_tree__module_qual__V_18_18)));
                                    }
#line 515 "module_qual.m"
                                  }
#line 515 "module_qual.m"
                              }
#line 515 "module_qual.m"
                          }
#line 515 "module_qual.m"
                      }
#line 515 "module_qual.m"
                  }
#line 515 "module_qual.m"
              }
#line 515 "module_qual.m"
          }
#line 515 "module_qual.m"
      }
#line 515 "module_qual.m"
    return parse_tree__module_qual__succeeded;
#line 515 "module_qual.m"
  }
#line 515 "module_qual.m"
}

#line 141 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____mq_in_interface_0_0(
#line 141 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 141 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 141 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 141 "module_qual.m"
{
#line 141 "module_qual.m"
  {
#line 141 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 141 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 141 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 141 "module_qual.m"
    {
#line 141 "module_qual.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
#line 141 "module_qual.m"
  }
#line 141 "module_qual.m"
}

#line 141 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____mq_in_interface_0_0(
#line 141 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_1,
#line 141 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 141 "module_qual.m"
{
#line 2911 "parse_tree.module_qual.c"
  {
#line 2913 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

#line 2916 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 2918 "parse_tree.module_qual.c"
  }
#line 141 "module_qual.m"
}

#line 479 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____maybe_warn_unused_imports_in_parents_0_0(
#line 479 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 479 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 479 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 479 "module_qual.m"
{
#line 479 "module_qual.m"
  {
#line 479 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 479 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 479 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 479 "module_qual.m"
    {
#line 479 "module_qual.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
#line 479 "module_qual.m"
  }
#line 479 "module_qual.m"
}

#line 479 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_warn_unused_imports_in_parents_0_0(
#line 479 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_1,
#line 479 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 479 "module_qual.m"
{
#line 2962 "parse_tree.module_qual.c"
  {
#line 2964 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

#line 2967 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 2969 "parse_tree.module_qual.c"
  }
#line 479 "module_qual.m"
}

#line 473 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____maybe_should_report_errors_0_0(
#line 473 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 473 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 473 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 473 "module_qual.m"
{
#line 473 "module_qual.m"
  {
#line 473 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 473 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 473 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 473 "module_qual.m"
    {
#line 473 "module_qual.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
#line 473 "module_qual.m"
  }
#line 473 "module_qual.m"
}

#line 473 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_should_report_errors_0_0(
#line 473 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_1,
#line 473 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 473 "module_qual.m"
{
#line 3013 "parse_tree.module_qual.c"
  {
#line 3015 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

#line 3018 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 3020 "parse_tree.module_qual.c"
  }
#line 473 "module_qual.m"
}

#line 103 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_typeclass_0_0(
#line 103 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 103 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 103 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 103 "module_qual.m"
{
#line 103 "module_qual.m"
  {
#line 103 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 103 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 103 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 103 "module_qual.m"
    {
#line 103 "module_qual.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
#line 103 "module_qual.m"
  }
#line 103 "module_qual.m"
}

#line 103 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_typeclass_0_0(
#line 103 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_1,
#line 103 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 103 "module_qual.m"
{
#line 3064 "parse_tree.module_qual.c"
  {
#line 3066 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

#line 3069 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 3071 "parse_tree.module_qual.c"
  }
#line 103 "module_qual.m"
}

#line 91 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_type_0_0(
#line 91 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 91 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 91 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 91 "module_qual.m"
{
#line 91 "module_qual.m"
  {
#line 91 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 91 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 91 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 91 "module_qual.m"
    {
#line 91 "module_qual.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
#line 91 "module_qual.m"
  }
#line 91 "module_qual.m"
}

#line 91 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_type_0_0(
#line 91 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_1,
#line 91 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 91 "module_qual.m"
{
#line 3115 "parse_tree.module_qual.c"
  {
#line 3117 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

#line 3120 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 3122 "parse_tree.module_qual.c"
  }
#line 91 "module_qual.m"
}

#line 99 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_mode_0_0(
#line 99 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 99 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 99 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 99 "module_qual.m"
{
#line 99 "module_qual.m"
  {
#line 99 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 99 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 99 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 99 "module_qual.m"
    {
#line 99 "module_qual.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
#line 99 "module_qual.m"
  }
#line 99 "module_qual.m"
}

#line 99 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_mode_0_0(
#line 99 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_1,
#line 99 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 99 "module_qual.m"
{
#line 3166 "parse_tree.module_qual.c"
  {
#line 3168 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

#line 3171 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 3173 "parse_tree.module_qual.c"
  }
#line 99 "module_qual.m"
}

#line 95 "module_qual.m"
void MR_CALL 
parse_tree__module_qual____Compare____maybe_found_undef_inst_0_0(
#line 95 "module_qual.m"
  MR_Word * parse_tree__module_qual__HeadVar__1_1,
#line 95 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2,
#line 95 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__3_3)
#line 95 "module_qual.m"
{
#line 95 "module_qual.m"
  {
#line 95 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 95 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__HeadVar__2_2;
#line 95 "module_qual.m"
    MR_Integer parse_tree__module_qual__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__HeadVar__3_3;

#line 95 "module_qual.m"
    {
#line 95 "module_qual.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__HeadVar__1_1, parse_tree__module_qual__Cast_HeadVar1_4, parse_tree__module_qual__Cast_HeadVar2_5);
    }
#line 95 "module_qual.m"
  }
#line 95 "module_qual.m"
}

#line 95 "module_qual.m"
MR_bool MR_CALL 
parse_tree__module_qual____Unify____maybe_found_undef_inst_0_0(
#line 95 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_1,
#line 95 "module_qual.m"
  MR_Word parse_tree__module_qual__HeadVar__2_2)
#line 95 "module_qual.m"
{
#line 3217 "parse_tree.module_qual.c"
  {
#line 3219 "parse_tree.module_qual.c"
    MR_bool parse_tree__module_qual__succeeded = (parse_tree__module_qual__HeadVar__2_1 == parse_tree__module_qual__HeadVar__2_2);

#line 3222 "parse_tree.module_qual.c"
    return parse_tree__module_qual__succeeded;
#line 3224 "parse_tree.module_qual.c"
  }
#line 95 "module_qual.m"
}

#line 713 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(
#line 713 "module_qual.m"
  MR_Word parse_tree__module_qual__IdType_4,
#line 713 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 713 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 713 "module_qual.m"
{
#line 718 "module_qual.m"
  {
#line 718 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;

#line 718 "module_qual.m"
#line 718 "module_qual.m"
    switch (parse_tree__module_qual__IdType_4) {
#line 718 "module_qual.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 718 "module_qual.m"
      case (MR_Integer) 3:
#line 709 "module_qual.m"
        {
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_18_18;
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 709 "module_qual.m"
          MR_Word parse_tree__module_qual__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 0)));
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 1)));
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 2)));
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 711 "module_qual.m"
          MR_Integer parse_tree__module_qual__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 4)));
#line 711 "module_qual.m"
          MR_Word parse_tree__module_qual__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 711 "module_qual.m"
          {
#line 711 "module_qual.m"
            parse_tree__module_qual__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 0) = ((MR_Box) (parse_tree__module_qual__V_26_26));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 1) = ((MR_Box) (parse_tree__module_qual__V_27_27));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 2) = ((MR_Box) (parse_tree__module_qual__V_28_28));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 3) = ((MR_Box) ((parse_tree__module_qual__V_29_29 | ((((parse_tree__module_qual__V_30_30 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_31_31 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_32_32 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_34_34 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_35_35 << (MR_Integer) 6)))))))))))))));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_18_18, 4) = ((MR_Box) (parse_tree__module_qual__V_36_36));
#line 711 "module_qual.m"
          }
#line 711 "module_qual.m"
          {
#line 711 "module_qual.m"
            MR_Word base;
#line 711 "module_qual.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 711 "module_qual.m"
            *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_19_19));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_20_20));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_21_21));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_22_22));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_23_23));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_24_24));
#line 711 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_25_25));
#line 711 "module_qual.m"
          }
#line 709 "module_qual.m"
        }
#line 718 "module_qual.m"
        break;
#line 718 "module_qual.m"
      case (MR_Integer) 2:
#line 703 "module_qual.m"
        {
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_51_51;
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 703 "module_qual.m"
          MR_Word parse_tree__module_qual__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 0)));
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 1)));
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 2)));
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 705 "module_qual.m"
          MR_Integer parse_tree__module_qual__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 4)));
#line 705 "module_qual.m"
          MR_Word parse_tree__module_qual__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_50_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 705 "module_qual.m"
          {
#line 705 "module_qual.m"
            parse_tree__module_qual__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 0) = ((MR_Box) (parse_tree__module_qual__V_59_59));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 1) = ((MR_Box) (parse_tree__module_qual__V_60_60));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 2) = ((MR_Box) (parse_tree__module_qual__V_61_61));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 3) = ((MR_Box) ((parse_tree__module_qual__V_62_62 | ((((parse_tree__module_qual__V_63_63 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_65_65 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_66_66 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_67_67 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_68_68 << (MR_Integer) 6)))))))))))))));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_51_51, 4) = ((MR_Box) (parse_tree__module_qual__V_69_69));
#line 705 "module_qual.m"
          }
#line 705 "module_qual.m"
          {
#line 705 "module_qual.m"
            MR_Word base;
#line 705 "module_qual.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 705 "module_qual.m"
            *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_51_51));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_52_52));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_53_53));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_54_54));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_55_55));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_56_56));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_57_57));
#line 705 "module_qual.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_58_58));
#line 705 "module_qual.m"
          }
#line 703 "module_qual.m"
        }
#line 718 "module_qual.m"
        break;
#line 718 "module_qual.m"
      case (MR_Integer) 1:
#line 725 "module_qual.m"
        {
#line 725 "module_qual.m"
          parse_tree__module_qual__mq_info_set_found_undef_mode_2_p_0(parse_tree__module_qual__STATE_VARIABLE_Info_0_6, parse_tree__module_qual__STATE_VARIABLE_Info_7);
        }
#line 718 "module_qual.m"
        break;
#line 718 "module_qual.m"
      case (MR_Integer) 0:
#line 719 "module_qual.m"
        {
#line 719 "module_qual.m"
          parse_tree__module_qual__mq_info_set_found_undef_type_2_p_0(parse_tree__module_qual__STATE_VARIABLE_Info_0_6, parse_tree__module_qual__STATE_VARIABLE_Info_7);
        }
#line 718 "module_qual.m"
        break;
#line 718 "module_qual.m"
    }
#line 718 "module_qual.m"
  }
#line 713 "module_qual.m"
}

#line 677 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_typeclass_2_p_0(
#line 677 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
#line 677 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
#line 677 "module_qual.m"
{
#line 709 "module_qual.m"
  {
#line 709 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
#line 709 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 711 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
#line 711 "module_qual.m"
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 711 "module_qual.m"
    {
#line 711 "module_qual.m"
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | ((((parse_tree__module_qual__V_21_21 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
#line 711 "module_qual.m"
    }
#line 711 "module_qual.m"
    {
#line 711 "module_qual.m"
      MR_Word base;
#line 711 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 711 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 711 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 711 "module_qual.m"
    }
#line 709 "module_qual.m"
  }
#line 677 "module_qual.m"
}

#line 676 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_mode_2_p_0(
#line 676 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
#line 676 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
#line 676 "module_qual.m"
{
#line 706 "module_qual.m"
  {
#line 706 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
#line 706 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 708 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
#line 708 "module_qual.m"
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 708 "module_qual.m"
    {
#line 708 "module_qual.m"
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | ((((parse_tree__module_qual__V_21_21 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
#line 708 "module_qual.m"
    }
#line 708 "module_qual.m"
    {
#line 708 "module_qual.m"
      MR_Word base;
#line 708 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 708 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 708 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 708 "module_qual.m"
    }
#line 706 "module_qual.m"
  }
#line 676 "module_qual.m"
}

#line 675 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(
#line 675 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
#line 675 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
#line 675 "module_qual.m"
{
#line 703 "module_qual.m"
  {
#line 703 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
#line 703 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 705 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
#line 705 "module_qual.m"
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 705 "module_qual.m"
    {
#line 705 "module_qual.m"
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | ((((parse_tree__module_qual__V_21_21 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
#line 705 "module_qual.m"
    }
#line 705 "module_qual.m"
    {
#line 705 "module_qual.m"
      MR_Word base;
#line 705 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 705 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 705 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 705 "module_qual.m"
    }
#line 703 "module_qual.m"
  }
#line 675 "module_qual.m"
}

#line 674 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_found_undef_type_2_p_0(
#line 674 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_5,
#line 674 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_6)
#line 674 "module_qual.m"
{
#line 700 "module_qual.m"
  {
#line 700 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
#line 700 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 0)));
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 1)));
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 2)));
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 702 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 4)));
#line 702 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_8_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 702 "module_qual.m"
    {
#line 702 "module_qual.m"
      parse_tree__module_qual__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 0) = ((MR_Box) (parse_tree__module_qual__V_17_17));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 1) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 2) = ((MR_Box) (parse_tree__module_qual__V_19_19));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 3) = ((MR_Box) ((parse_tree__module_qual__V_20_20 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_26_26 << (MR_Integer) 6)))))))))))))));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, 4) = ((MR_Box) (parse_tree__module_qual__V_27_27));
#line 702 "module_qual.m"
    }
#line 702 "module_qual.m"
    {
#line 702 "module_qual.m"
      MR_Word base;
#line 702 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 702 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_6 = base;
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 702 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 702 "module_qual.m"
    }
#line 700 "module_qual.m"
  }
#line 674 "module_qual.m"
}

#line 672 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0(
#line 672 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 672 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 672 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 672 "module_qual.m"
{
#line 698 "module_qual.m"
  {
#line 698 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 698 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 0)));
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 1)));
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 2)));
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 699 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 4)));
#line 699 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 699 "module_qual.m"
    {
#line 699 "module_qual.m"
      parse_tree__module_qual__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 1) = ((MR_Box) (parse_tree__module_qual__V_19_19));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 2) = ((MR_Box) (parse_tree__module_qual__V_20_20));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 3) = ((MR_Box) ((parse_tree__module_qual__X_4 | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_26_26 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_27_27 << (MR_Integer) 6)))))))))))))));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 4) = ((MR_Box) (parse_tree__module_qual__V_28_28));
#line 699 "module_qual.m"
    }
#line 699 "module_qual.m"
    {
#line 699 "module_qual.m"
      MR_Word base;
#line 699 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 699 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 699 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_17_17));
#line 699 "module_qual.m"
    }
#line 698 "module_qual.m"
  }
#line 672 "module_qual.m"
}

#line 670 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(
#line 670 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 670 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 670 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 670 "module_qual.m"
{
#line 694 "module_qual.m"
  {
#line 694 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 694 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 0)));
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 2)));
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 695 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 4)));
#line 695 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 1)));

#line 695 "module_qual.m"
    {
#line 695 "module_qual.m"
      parse_tree__module_qual__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 1) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 2) = ((MR_Box) (parse_tree__module_qual__V_20_20));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 3) = ((MR_Box) ((parse_tree__module_qual__V_21_21 | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_26_26 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_27_27 << (MR_Integer) 6)))))))))))))));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 4) = ((MR_Box) (parse_tree__module_qual__V_28_28));
#line 695 "module_qual.m"
    }
#line 695 "module_qual.m"
    {
#line 695 "module_qual.m"
      MR_Word base;
#line 695 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 695 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 695 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_17_17));
#line 695 "module_qual.m"
    }
#line 694 "module_qual.m"
  }
#line 670 "module_qual.m"
}

#line 668 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(
#line 668 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 668 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 668 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 668 "module_qual.m"
{
#line 696 "module_qual.m"
  {
#line 696 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 696 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 0)));
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 1)));
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 697 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 4)));
#line 697 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_9_9, (MR_Integer) 2)));

#line 697 "module_qual.m"
    {
#line 697 "module_qual.m"
      parse_tree__module_qual__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 0) = ((MR_Box) (parse_tree__module_qual__V_18_18));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 1) = ((MR_Box) (parse_tree__module_qual__V_19_19));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 2) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 3) = ((MR_Box) ((parse_tree__module_qual__V_21_21 | ((((parse_tree__module_qual__V_22_22 << (MR_Integer) 1)) | ((((parse_tree__module_qual__V_23_23 << (MR_Integer) 2)) | ((((parse_tree__module_qual__V_24_24 << (MR_Integer) 3)) | ((((parse_tree__module_qual__V_25_25 << (MR_Integer) 4)) | ((((parse_tree__module_qual__V_26_26 << (MR_Integer) 5)) | ((parse_tree__module_qual__V_27_27 << (MR_Integer) 6)))))))))))))));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_10_10, 4) = ((MR_Box) (parse_tree__module_qual__V_28_28));
#line 697 "module_qual.m"
    }
#line 697 "module_qual.m"
    {
#line 697 "module_qual.m"
      MR_Word base;
#line 697 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 697 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 697 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_17_17));
#line 697 "module_qual.m"
    }
#line 696 "module_qual.m"
  }
#line 668 "module_qual.m"
}

#line 663 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(
#line 663 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 663 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 663 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 663 "module_qual.m"
{
#line 690 "module_qual.m"
  {
#line 690 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 690 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

#line 690 "module_qual.m"
    {
#line 690 "module_qual.m"
      MR_Word base;
#line 690 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 690 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 690 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 690 "module_qual.m"
    }
#line 690 "module_qual.m"
  }
#line 663 "module_qual.m"
}

#line 661 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_classes_3_p_0(
#line 661 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 661 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 661 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 661 "module_qual.m"
{
#line 688 "module_qual.m"
  {
#line 688 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 688 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));

#line 688 "module_qual.m"
    {
#line 688 "module_qual.m"
      MR_Word base;
#line 688 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 688 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 688 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 688 "module_qual.m"
    }
#line 688 "module_qual.m"
  }
#line 661 "module_qual.m"
}

#line 659 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_modes_3_p_0(
#line 659 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 659 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 659 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 659 "module_qual.m"
{
#line 686 "module_qual.m"
  {
#line 686 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 686 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

#line 686 "module_qual.m"
    {
#line 686 "module_qual.m"
      MR_Word base;
#line 686 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 686 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 686 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 686 "module_qual.m"
    }
#line 686 "module_qual.m"
  }
#line 659 "module_qual.m"
}

#line 657 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_insts_3_p_0(
#line 657 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 657 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 657 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 657 "module_qual.m"
{
#line 684 "module_qual.m"
  {
#line 684 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 684 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

#line 684 "module_qual.m"
    {
#line 684 "module_qual.m"
      MR_Word base;
#line 684 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 684 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 684 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 684 "module_qual.m"
    }
#line 684 "module_qual.m"
  }
#line 657 "module_qual.m"
}

#line 655 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_types_3_p_0(
#line 655 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 655 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 655 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 655 "module_qual.m"
{
#line 682 "module_qual.m"
  {
#line 682 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 682 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

#line 682 "module_qual.m"
    {
#line 682 "module_qual.m"
      MR_Word base;
#line 682 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 682 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 682 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 682 "module_qual.m"
    }
#line 682 "module_qual.m"
  }
#line 655 "module_qual.m"
}

#line 653 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_modules_3_p_0(
#line 653 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 653 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 653 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 653 "module_qual.m"
{
#line 680 "module_qual.m"
  {
#line 680 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 680 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

#line 680 "module_qual.m"
    {
#line 680 "module_qual.m"
      MR_Word base;
#line 680 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 680 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 680 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_16_16));
#line 680 "module_qual.m"
    }
#line 680 "module_qual.m"
  }
#line 653 "module_qual.m"
}

#line 614 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(
#line 614 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 614 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 614 "module_qual.m"
{
#line 650 "module_qual.m"
  {
#line 650 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 650 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 651 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 651 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 651 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 651 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 650 "module_qual.m"
  }
#line 614 "module_qual.m"
}

#line 612 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(
#line 612 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 612 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 612 "module_qual.m"
{
#line 648 "module_qual.m"
  {
#line 648 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 648 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 649 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 649 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 649 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 649 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 649 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 648 "module_qual.m"
  }
#line 612 "module_qual.m"
}

#line 609 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_exported_instances_flag_2_p_0(
#line 609 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 609 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 609 "module_qual.m"
{
#line 638 "module_qual.m"
  {
#line 638 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 638 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16;
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17;
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18;
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19;
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 639 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 639 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 639 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 639 "module_qual.m"
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "module_qual.m"
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 639 "module_qual.m"
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 639 "module_qual.m"
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 639 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 639 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 639 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 638 "module_qual.m"
  }
#line 609 "module_qual.m"
}

#line 607 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(
#line 607 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 607 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 607 "module_qual.m"
{
#line 636 "module_qual.m"
  {
#line 636 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 636 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15;
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16;
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17;
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18;
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19;
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 637 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 637 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 637 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 637 "module_qual.m"
    parse_tree__module_qual__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 637 "module_qual.m"
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "module_qual.m"
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "module_qual.m"
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 637 "module_qual.m"
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 637 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 637 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 637 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 636 "module_qual.m"
  }
#line 607 "module_qual.m"
}

#line 605 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(
#line 605 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 605 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 605 "module_qual.m"
{
#line 634 "module_qual.m"
  {
#line 634 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 634 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14;
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15;
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16;
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17;
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18;
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19;
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 635 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 635 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 635 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 635 "module_qual.m"
    parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 635 "module_qual.m"
    parse_tree__module_qual__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 635 "module_qual.m"
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "module_qual.m"
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "module_qual.m"
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 635 "module_qual.m"
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 635 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 635 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 635 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 634 "module_qual.m"
  }
#line 605 "module_qual.m"
}

#line 604 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_this_module_2_p_0(
#line 604 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 604 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 604 "module_qual.m"
{
#line 632 "module_qual.m"
  {
#line 632 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 632 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 633 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 633 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 633 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 633 "module_qual.m"
    parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 633 "module_qual.m"
    parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 633 "module_qual.m"
    parse_tree__module_qual__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 633 "module_qual.m"
    parse_tree__module_qual__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "module_qual.m"
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "module_qual.m"
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 633 "module_qual.m"
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 633 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 633 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 633 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 632 "module_qual.m"
  }
#line 604 "module_qual.m"
}

#line 600 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(
#line 600 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 600 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 600 "module_qual.m"
{
#line 628 "module_qual.m"
  {
#line 628 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11;

#line 628 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 628 "module_qual.m"
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 628 "module_qual.m"
  }
#line 600 "module_qual.m"
}

#line 599 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_classes_2_p_0(
#line 599 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 599 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 599 "module_qual.m"
{
#line 626 "module_qual.m"
  {
#line 626 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 626 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 626 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 626 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 626 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 626 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 626 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 626 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11;

#line 626 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 626 "module_qual.m"
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 626 "module_qual.m"
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 626 "module_qual.m"
  }
#line 599 "module_qual.m"
}

#line 598 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_modes_2_p_0(
#line 598 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 598 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 598 "module_qual.m"
{
#line 624 "module_qual.m"
  {
#line 624 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 624 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 624 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 624 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 624 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 624 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 624 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 624 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11;

#line 624 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 624 "module_qual.m"
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 624 "module_qual.m"
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 624 "module_qual.m"
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 624 "module_qual.m"
  }
#line 598 "module_qual.m"
}

#line 597 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_insts_2_p_0(
#line 597 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 597 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 597 "module_qual.m"
{
#line 622 "module_qual.m"
  {
#line 622 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 622 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 622 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 622 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 622 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8;
#line 622 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 622 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 622 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11;

#line 622 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 622 "module_qual.m"
    parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 622 "module_qual.m"
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 622 "module_qual.m"
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 622 "module_qual.m"
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 622 "module_qual.m"
  }
#line 597 "module_qual.m"
}

#line 596 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_types_2_p_0(
#line 596 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 596 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 596 "module_qual.m"
{
#line 620 "module_qual.m"
  {
#line 620 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 620 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 620 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 620 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7;
#line 620 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8;
#line 620 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 620 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 620 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11;

#line 620 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 620 "module_qual.m"
    parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 620 "module_qual.m"
    parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 620 "module_qual.m"
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 620 "module_qual.m"
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 620 "module_qual.m"
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 620 "module_qual.m"
  }
#line 596 "module_qual.m"
}

#line 595 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_modules_2_p_0(
#line 595 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 595 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 595 "module_qual.m"
{
#line 618 "module_qual.m"
  {
#line 618 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6;
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7;
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8;
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9;
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10;
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11;

#line 618 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 618 "module_qual.m"
    parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 618 "module_qual.m"
    parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 618 "module_qual.m"
    parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 618 "module_qual.m"
    parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 618 "module_qual.m"
    parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 618 "module_qual.m"
    parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 618 "module_qual.m"
  }
#line 595 "module_qual.m"
}

#line 536 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__init_mq_info_8_p_0(
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__TypeInfo_for_MS1_56,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__TypeInfo_for_MS2_57,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__TypeInfo_for_MS3_58,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__TypeInfo_for_MS4_59,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__Globals_9,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__ModuleName_10,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__ItemBlocksA_11,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__ItemBlocksB_12,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__ItemBlocksC_13,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__ItemBlocksD_14,
#line 536 "module_qual.m"
  MR_Word parse_tree__module_qual__ReportErrors_15,
#line 536 "module_qual.m"
  MR_Word * parse_tree__module_qual__Info_16)
#line 536 "module_qual.m"
{
#line 544 "module_qual.m"
  {
#line 544 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeCtorInfo_60_60;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ImportDepsA_17;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__UseDepsA_18;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ImportDepsB_19;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__UseDepsB_20;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ImportDepsC_21;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__UseDepsC_22;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ImportDepsD_23;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__UseDepsD_24;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ImportedModules_25;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__InstanceModules_26;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__WarnInterfaceImportsInParents_28;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__WarnUnusedImportsInParents_29;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__SubInfo_30;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleIdSet_31;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeIdSet_32;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__InstIdSet_33;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ModeIdSet_34;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__ClassIdSet_35;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__AsYetUnusedInterfaceModules_36;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__SmartRecompilation_37;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__MaybeRecompInfo_38;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_39_39;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_40_40;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_41_41;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_42_42;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_43_43;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_44_44;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_45_45;
#line 544 "module_qual.m"
    MR_Word parse_tree__module_qual__V_46_46;

#line 545 "module_qual.m"
    {
#line 545 "module_qual.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS1_56, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksA_11, &parse_tree__module_qual__ImportDepsA_17, &parse_tree__module_qual__UseDepsA_18);
    }
#line 547 "module_qual.m"
    {
#line 547 "module_qual.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS2_57, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksB_12, &parse_tree__module_qual__ImportDepsB_19, &parse_tree__module_qual__UseDepsB_20);
    }
#line 549 "module_qual.m"
    {
#line 549 "module_qual.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS3_58, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksC_13, &parse_tree__module_qual__ImportDepsC_21, &parse_tree__module_qual__UseDepsC_22);
    }
#line 551 "module_qual.m"
    {
#line 551 "module_qual.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__module_qual__TypeInfo_for_MS4_59, parse_tree__module_qual__Globals_9, parse_tree__module_qual__ItemBlocksD_14, &parse_tree__module_qual__ImportDepsD_23, &parse_tree__module_qual__UseDepsD_24);
    }
#line 5330 "parse_tree.module_qual.c"
    parse_tree__module_qual__TypeCtorInfo_60_60 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 555 "module_qual.m"
    {
#line 555 "module_qual.m"
      parse_tree__module_qual__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_46_46, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsD_24));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "module_qual.m"
    }
#line 555 "module_qual.m"
    {
#line 555 "module_qual.m"
      parse_tree__module_qual__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_45_45, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsC_22));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_45_45, 1) = ((MR_Box) (parse_tree__module_qual__V_46_46));
#line 555 "module_qual.m"
    }
#line 555 "module_qual.m"
    {
#line 555 "module_qual.m"
      parse_tree__module_qual__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_44_44, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsB_20));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_44_44, 1) = ((MR_Box) (parse_tree__module_qual__V_45_45));
#line 555 "module_qual.m"
    }
#line 555 "module_qual.m"
    {
#line 555 "module_qual.m"
      parse_tree__module_qual__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_43_43, 0) = ((MR_Box) (parse_tree__module_qual__UseDepsA_18));
#line 555 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_43_43, 1) = ((MR_Box) (parse_tree__module_qual__V_44_44));
#line 555 "module_qual.m"
    }
#line 554 "module_qual.m"
    {
#line 554 "module_qual.m"
      parse_tree__module_qual__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_42_42, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsD_23));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_42_42, 1) = ((MR_Box) (parse_tree__module_qual__V_43_43));
#line 554 "module_qual.m"
    }
#line 554 "module_qual.m"
    {
#line 554 "module_qual.m"
      parse_tree__module_qual__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_41_41, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsC_21));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_41_41, 1) = ((MR_Box) (parse_tree__module_qual__V_42_42));
#line 554 "module_qual.m"
    }
#line 554 "module_qual.m"
    {
#line 554 "module_qual.m"
      parse_tree__module_qual__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_40_40, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsB_19));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_40_40, 1) = ((MR_Box) (parse_tree__module_qual__V_41_41));
#line 554 "module_qual.m"
    }
#line 554 "module_qual.m"
    {
#line 554 "module_qual.m"
      parse_tree__module_qual__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_39_39, 0) = ((MR_Box) (parse_tree__module_qual__ImportDepsA_17));
#line 554 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_39_39, 1) = ((MR_Box) (parse_tree__module_qual__V_40_40));
#line 554 "module_qual.m"
    }
#line 553 "module_qual.m"
    {
#line 553 "module_qual.m"
      parse_tree__module_qual__ImportedModules_25 = mercury__set__union_list_1_f_0(parse_tree__module_qual__TypeCtorInfo_60_60, parse_tree__module_qual__V_39_39);
    }
#line 556 "module_qual.m"
    {
#line 556 "module_qual.m"
      mercury__set__init_1_p_0(parse_tree__module_qual__TypeCtorInfo_60_60, &parse_tree__module_qual__InstanceModules_26);
    }
#line 558 "module_qual.m"
    {
#line 558 "module_qual.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_qual__Globals_9, (MR_Integer) 12, &parse_tree__module_qual__WarnInterfaceImportsInParents_28);
    }
#line 566 "module_qual.m"
#line 566 "module_qual.m"
    switch (parse_tree__module_qual__WarnInterfaceImportsInParents_28) {
#line 566 "module_qual.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 566 "module_qual.m"
      case (MR_Integer) 0:
#line 565 "module_qual.m"
        parse_tree__module_qual__WarnUnusedImportsInParents_29 = (MR_Integer) 0;
#line 566 "module_qual.m"
        break;
#line 566 "module_qual.m"
      case (MR_Integer) 1:
#line 568 "module_qual.m"
        parse_tree__module_qual__WarnUnusedImportsInParents_29 = (MR_Integer) 1;
#line 566 "module_qual.m"
        break;
#line 566 "module_qual.m"
    }
#line 570 "module_qual.m"
    {
#line 570 "module_qual.m"
      parse_tree__module_qual__SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 570 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 0) = ((MR_Box) (parse_tree__module_qual__ModuleName_10));
#line 570 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 1) = ((MR_Box) (parse_tree__module_qual__ImportedModules_25));
#line 570 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 2) = ((MR_Box) (parse_tree__module_qual__InstanceModules_26));
#line 570 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | ((((parse_tree__module_qual__ReportErrors_15 << (MR_Integer) 5)) | ((parse_tree__module_qual__WarnUnusedImportsInParents_29 << (MR_Integer) 6)))))))))))))));
#line 570 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__SubInfo_30, 4) = ((MR_Box) ((MR_Integer) 0));
#line 570 "module_qual.m"
    }
#line 576 "module_qual.m"
    {
#line 576 "module_qual.m"
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__ModuleIdSet_31);
    }
#line 577 "module_qual.m"
    {
#line 577 "module_qual.m"
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__TypeIdSet_32);
    }
#line 578 "module_qual.m"
    {
#line 578 "module_qual.m"
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__InstIdSet_33);
    }
#line 579 "module_qual.m"
    {
#line 579 "module_qual.m"
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__ModeIdSet_34);
    }
#line 580 "module_qual.m"
    {
#line 580 "module_qual.m"
      parse_tree__module_qual__id_set__id_set_init_1_p_0(&parse_tree__module_qual__ClassIdSet_35);
    }
#line 581 "module_qual.m"
    {
#line 581 "module_qual.m"
      mercury__map__init_1_p_0(parse_tree__module_qual__TypeCtorInfo_60_60, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], &parse_tree__module_qual__AsYetUnusedInterfaceModules_36);
    }
#line 582 "module_qual.m"
    {
#line 582 "module_qual.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_qual__Globals_9, (MR_Integer) 116, &parse_tree__module_qual__SmartRecompilation_37);
    }
#line 587 "module_qual.m"
#line 587 "module_qual.m"
    switch (parse_tree__module_qual__SmartRecompilation_37) {
#line 587 "module_qual.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 587 "module_qual.m"
      case (MR_Integer) 0:
#line 586 "module_qual.m"
        parse_tree__module_qual__MaybeRecompInfo_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "module_qual.m"
        break;
#line 587 "module_qual.m"
      case (MR_Integer) 1:
#line 588 "module_qual.m"
        {
#line 588 "module_qual.m"
          MR_Word parse_tree__module_qual__V_55_55;

#line 589 "module_qual.m"
          {
#line 589 "module_qual.m"
            parse_tree__module_qual__V_55_55 = recompilation__init_recompilation_info_1_f_0(parse_tree__module_qual__ModuleName_10);
          }
#line 589 "module_qual.m"
          {
#line 589 "module_qual.m"
            parse_tree__module_qual__MaybeRecompInfo_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "module_qual.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__MaybeRecompInfo_38, 0) = ((MR_Box) (parse_tree__module_qual__V_55_55));
#line 589 "module_qual.m"
          }
#line 588 "module_qual.m"
        }
#line 587 "module_qual.m"
        break;
#line 587 "module_qual.m"
    }
#line 591 "module_qual.m"
    {
#line 591 "module_qual.m"
      MR_Word base;
#line 591 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 591 "module_qual.m"
      *parse_tree__module_qual__Info_16 = base;
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__SubInfo_30));
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__ModuleIdSet_31));
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__TypeIdSet_32));
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__InstIdSet_33));
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__ModeIdSet_34));
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__ClassIdSet_35));
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__AsYetUnusedInterfaceModules_36));
#line 591 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__MaybeRecompInfo_38));
#line 591 "module_qual.m"
    }
#line 544 "module_qual.m"
  }
#line 536 "module_qual.m"
}

#line 445 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_module_used_4_p_0(
#line 445 "module_qual.m"
  MR_Word parse_tree__module_qual__InInt_5,
#line 445 "module_qual.m"
  MR_Word parse_tree__module_qual__ModuleName_6,
#line 445 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_14,
#line 445 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_15)
#line 445 "module_qual.m"
{
#line 450 "module_qual.m"
  while (MR_TRUE)
#line 450 "module_qual.m"
    {
#line 450 "module_qual.m"
      /* tailcall optimized into a loop */
#line 450 "module_qual.m"
      {
#line 450 "module_qual.m"
        MR_bool parse_tree__module_qual__succeeded;

#line 450 "module_qual.m"
#line 450 "module_qual.m"
        switch (parse_tree__module_qual__InInt_5) {
#line 450 "module_qual.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 450 "module_qual.m"
          case (MR_Integer) 0:
#line 465 "module_qual.m"
            *parse_tree__module_qual__STATE_VARIABLE_Info_15 = parse_tree__module_qual__STATE_VARIABLE_Info_0_14;
#line 450 "module_qual.m"
            break;
#line 450 "module_qual.m"
          case (MR_Integer) 1:
#line 450 "module_qual.m"
            {
#line 450 "module_qual.m"
              MR_Word parse_tree__module_qual__AsYetUnused0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 450 "module_qual.m"
              MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_16_16;
#line 628 "module_qual.m"
              MR_Word parse_tree__module_qual__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 628 "module_qual.m"
              MR_Word parse_tree__module_qual__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 628 "module_qual.m"
              MR_Word parse_tree__module_qual__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 628 "module_qual.m"
              MR_Word parse_tree__module_qual__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 628 "module_qual.m"
              MR_Word parse_tree__module_qual__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 628 "module_qual.m"
              MR_Word parse_tree__module_qual__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 628 "module_qual.m"
              MR_Word parse_tree__module_qual__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 452 "module_qual.m"
              MR_Word parse_tree__module_qual__AsYetUnused_10;
#line 452 "module_qual.m"
              MR_Word parse_tree__module_qual__V_9_9;
#line 452 "module_qual.m"
              MR_Box parse_tree__module_qual__conv0_V_9_9;

#line 452 "module_qual.m"
              {
#line 452 "module_qual.m"
                parse_tree__module_qual__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], ((MR_Box) (parse_tree__module_qual__ModuleName_6)), &parse_tree__module_qual__conv0_V_9_9, parse_tree__module_qual__AsYetUnused0_8, &parse_tree__module_qual__AsYetUnused_10);
              }
#line 452 "module_qual.m"
              if (parse_tree__module_qual__succeeded)
#line 452 "module_qual.m"
                {
#line 452 "module_qual.m"
                  parse_tree__module_qual__V_9_9 = ((MR_Word) parse_tree__module_qual__conv0_V_9_9);
#line 452 "module_qual.m"
                  parse_tree__module_qual__succeeded = MR_TRUE;
#line 452 "module_qual.m"
                }
#line 452 "module_qual.m"
              if (parse_tree__module_qual__succeeded)
#line 690 "module_qual.m"
                {
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 690 "module_qual.m"
                  MR_Word parse_tree__module_qual__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));

#line 690 "module_qual.m"
                  {
#line 690 "module_qual.m"
                    parse_tree__module_qual__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (parse_tree__module_qual__V_34_34));
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (parse_tree__module_qual__V_35_35));
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (parse_tree__module_qual__V_36_36));
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (parse_tree__module_qual__V_37_37));
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) (parse_tree__module_qual__V_38_38));
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 5) = ((MR_Box) (parse_tree__module_qual__V_39_39));
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 6) = ((MR_Box) (parse_tree__module_qual__AsYetUnused_10));
#line 690 "module_qual.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_16_16, 7) = ((MR_Box) (parse_tree__module_qual__V_41_41));
#line 690 "module_qual.m"
                  }
#line 690 "module_qual.m"
                }
#line 452 "module_qual.m"
              else
#line 452 "module_qual.m"
                parse_tree__module_qual__STATE_VARIABLE_Info_16_16 = parse_tree__module_qual__STATE_VARIABLE_Info_0_14;
#line 461 "module_qual.m"
              if (((MR_tag((MR_Word) parse_tree__module_qual__ModuleName_6)) == (MR_mktag((MR_Integer) 1))))
#line 459 "module_qual.m"
                {
#line 459 "module_qual.m"
                  MR_Word parse_tree__module_qual__ParentModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_6, (MR_Integer) 0)));
#line 459 "module_qual.m"
                  MR_String parse_tree__module_qual__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_6, (MR_Integer) 1)));

#line 460 "module_qual.m"
                  /* direct tailcall eliminated */
#line 460 "module_qual.m"
                  {
#line 460 "module_qual.m"
                    MR_Word parse_tree__module_qual__ModuleName__tmp_copy_6 = parse_tree__module_qual__ParentModule_11;
#line 460 "module_qual.m"
                    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0__tmp_copy_14 = parse_tree__module_qual__STATE_VARIABLE_Info_16_16;

#line 460 "module_qual.m"
                    parse_tree__module_qual__STATE_VARIABLE_Info_0_14 = parse_tree__module_qual__STATE_VARIABLE_Info_0__tmp_copy_14;
#line 460 "module_qual.m"
                    parse_tree__module_qual__ModuleName_6 = parse_tree__module_qual__ModuleName__tmp_copy_6;
#line 460 "module_qual.m"
                  }
#line 460 "module_qual.m"
                  continue;
#line 459 "module_qual.m"
                }
#line 461 "module_qual.m"
              else
#line 462 "module_qual.m"
                *parse_tree__module_qual__STATE_VARIABLE_Info_15 = parse_tree__module_qual__STATE_VARIABLE_Info_16_16;
#line 450 "module_qual.m"
            }
#line 450 "module_qual.m"
            break;
#line 450 "module_qual.m"
        }
#line 450 "module_qual.m"
      }
#line 450 "module_qual.m"
      break;
#line 450 "module_qual.m"
    }
#line 445 "module_qual.m"
}

#line 425 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__update_recompilation_info_3_p_0(
#line 425 "module_qual.m"
  MR_Word parse_tree__module_qual__Pred_4,
#line 425 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_9,
#line 425 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_10)
#line 425 "module_qual.m"
{
#line 429 "module_qual.m"
  {
#line 429 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 429 "module_qual.m"
    MR_Word parse_tree__module_qual__MaybeRecompInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));

#line 435 "module_qual.m"
    if ((parse_tree__module_qual__MaybeRecompInfo0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_10 = parse_tree__module_qual__STATE_VARIABLE_Info_0_9;
#line 435 "module_qual.m"
    else
#line 432 "module_qual.m"
      {
#line 432 "module_qual.m"
        MR_Word parse_tree__module_qual__RecompInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__MaybeRecompInfo0_6, (MR_Integer) 0)));
#line 432 "module_qual.m"
        MR_Word parse_tree__module_qual__RecompInfo_8;
#line 432 "module_qual.m"
        MR_Word parse_tree__module_qual__V_11_11;
#line 433 "module_qual.m"
        void MR_CALL (* parse_tree__module_qual__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Pred_4, (MR_Integer) 1)));
#line 433 "module_qual.m"
        MR_Box parse_tree__module_qual__conv1_RecompInfo_8;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_27_27;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_28_28;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_29_29;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_30_30;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_31_31;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_32_32;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_33_33;
#line 692 "module_qual.m"
        MR_Word parse_tree__module_qual__V_34_34;

#line 433 "module_qual.m"
        {
#line 433 "module_qual.m"
          parse_tree__module_qual__func_0(((MR_Box) parse_tree__module_qual__Pred_4), ((MR_Box) (parse_tree__module_qual__RecompInfo0_7)), &parse_tree__module_qual__conv1_RecompInfo_8);
        }
#line 433 "module_qual.m"
        parse_tree__module_qual__RecompInfo_8 = ((MR_Word) parse_tree__module_qual__conv1_RecompInfo_8);
#line 434 "module_qual.m"
        {
#line 434 "module_qual.m"
          parse_tree__module_qual__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "module_qual.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__V_11_11, 0) = ((MR_Box) (parse_tree__module_qual__RecompInfo_8));
#line 434 "module_qual.m"
        }
#line 692 "module_qual.m"
        parse_tree__module_qual__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
#line 692 "module_qual.m"
        parse_tree__module_qual__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
#line 692 "module_qual.m"
        parse_tree__module_qual__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
#line 692 "module_qual.m"
        parse_tree__module_qual__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
#line 692 "module_qual.m"
        parse_tree__module_qual__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
#line 692 "module_qual.m"
        parse_tree__module_qual__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
#line 692 "module_qual.m"
        parse_tree__module_qual__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
#line 692 "module_qual.m"
        parse_tree__module_qual__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
#line 692 "module_qual.m"
        {
#line 692 "module_qual.m"
          MR_Word base;
#line 692 "module_qual.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 692 "module_qual.m"
          *parse_tree__module_qual__STATE_VARIABLE_Info_10 = base;
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_27_27));
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_28_28));
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_29_29));
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_30_30));
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_31_31));
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_32_32));
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_33_33));
#line 692 "module_qual.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 692 "module_qual.m"
        }
#line 432 "module_qual.m"
      }
#line 429 "module_qual.m"
  }
#line 425 "module_qual.m"
}

#line 394 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__get_partial_qualifiers_acc_5_p_0(
#line 394 "module_qual.m"
  MR_Word parse_tree__module_qual__ImplicitPart_6,
#line 394 "module_qual.m"
  MR_Word parse_tree__module_qual__ExplicitPart_7,
#line 394 "module_qual.m"
  MR_Word parse_tree__module_qual__ModuleIdSet_8,
#line 394 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_15,
#line 394 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Qualifiers_16)
#line 394 "module_qual.m"
{
#line 398 "module_qual.m"
  while (MR_TRUE)
#line 398 "module_qual.m"
    {
#line 398 "module_qual.m"
      /* tailcall optimized into a loop */
#line 398 "module_qual.m"
      {
#line 398 "module_qual.m"
        MR_bool parse_tree__module_qual__succeeded;
#line 398 "module_qual.m"
        MR_Word parse_tree__module_qual__STATE_VARIABLE_Qualifiers_17_17;

#line 403 "module_qual.m"
        {
#line 403 "module_qual.m"
          parse_tree__module_qual__succeeded = parse_tree__module_qual__id_set__parent_module_is_imported_3_p_0(parse_tree__module_qual__ImplicitPart_6, parse_tree__module_qual__ExplicitPart_7, parse_tree__module_qual__ModuleIdSet_8);
        }
#line 402 "module_qual.m"
        if (parse_tree__module_qual__succeeded)
#line 405 "module_qual.m"
          {
#line 405 "module_qual.m"
            parse_tree__module_qual__STATE_VARIABLE_Qualifiers_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "module_qual.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__STATE_VARIABLE_Qualifiers_17_17, 0) = ((MR_Box) (parse_tree__module_qual__ExplicitPart_7));
#line 405 "module_qual.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__STATE_VARIABLE_Qualifiers_17_17, 1) = ((MR_Box) (parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_15));
#line 405 "module_qual.m"
          }
#line 402 "module_qual.m"
        else
#line 402 "module_qual.m"
          parse_tree__module_qual__STATE_VARIABLE_Qualifiers_17_17 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_15;
#line 416 "module_qual.m"
        if (((MR_tag((MR_Word) parse_tree__module_qual__ImplicitPart_6)) == (MR_mktag((MR_Integer) 1))))
#line 411 "module_qual.m"
          {
#line 411 "module_qual.m"
            MR_String parse_tree__module_qual__Child_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImplicitPart_6, (MR_Integer) 1)));
#line 411 "module_qual.m"
            MR_Word parse_tree__module_qual__NextImplicitPart_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImplicitPart_6, (MR_Integer) 0)));
#line 411 "module_qual.m"
            MR_Word parse_tree__module_qual__NextExplicitPart_13;

#line 413 "module_qual.m"
            {
#line 413 "module_qual.m"
              parse_tree__module_qual__NextExplicitPart_13 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0(parse_tree__module_qual__Child_11, parse_tree__module_qual__ExplicitPart_7);
            }
#line 414 "module_qual.m"
            /* direct tailcall eliminated */
#line 414 "module_qual.m"
            {
#line 414 "module_qual.m"
              MR_Word parse_tree__module_qual__ImplicitPart__tmp_copy_6 = parse_tree__module_qual__NextImplicitPart_12;
#line 414 "module_qual.m"
              MR_Word parse_tree__module_qual__ExplicitPart__tmp_copy_7 = parse_tree__module_qual__NextExplicitPart_13;
#line 414 "module_qual.m"
              MR_Word parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0__tmp_copy_15 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_17_17;

#line 414 "module_qual.m"
              parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0_15 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_0__tmp_copy_15;
#line 414 "module_qual.m"
              parse_tree__module_qual__ExplicitPart_7 = parse_tree__module_qual__ExplicitPart__tmp_copy_7;
#line 414 "module_qual.m"
              parse_tree__module_qual__ImplicitPart_6 = parse_tree__module_qual__ImplicitPart__tmp_copy_6;
#line 414 "module_qual.m"
            }
#line 414 "module_qual.m"
            continue;
#line 411 "module_qual.m"
          }
#line 416 "module_qual.m"
        else
#line 417 "module_qual.m"
          *parse_tree__module_qual__STATE_VARIABLE_Qualifiers_16 = parse_tree__module_qual__STATE_VARIABLE_Qualifiers_17_17;
#line 398 "module_qual.m"
      }
#line 398 "module_qual.m"
      break;
#line 398 "module_qual.m"
    }
#line 394 "module_qual.m"
}

#line 214 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__get_partial_qualifiers_3_p_0(
#line 214 "module_qual.m"
  MR_Word parse_tree__module_qual__ModuleName_4,
#line 214 "module_qual.m"
  MR_Word parse_tree__module_qual__PartialQualInfo_5,
#line 214 "module_qual.m"
  MR_Word * parse_tree__module_qual__PartialQualifiers_6)
#line 214 "module_qual.m"
{
#line 383 "module_qual.m"
  {
#line 383 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 383 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleIdSet_7 = (MR_Word) parse_tree__module_qual__PartialQualInfo_5;

#line 388 "module_qual.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 389 "module_qual.m"
      {
#line 389 "module_qual.m"
        MR_Word parse_tree__module_qual__Parent_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_4, (MR_Integer) 0)));
#line 389 "module_qual.m"
        MR_String parse_tree__module_qual__Child_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__ModuleName_4, (MR_Integer) 1)));
#line 389 "module_qual.m"
        MR_Word parse_tree__module_qual__V_11_11;

#line 390 "module_qual.m"
        {
#line 390 "module_qual.m"
          parse_tree__module_qual__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 390 "module_qual.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_11_11, 0) = ((MR_Box) (parse_tree__module_qual__Child_10));
#line 390 "module_qual.m"
        }
#line 390 "module_qual.m"
        {
#line 390 "module_qual.m"
          parse_tree__module_qual__get_partial_qualifiers_acc_5_p_0(parse_tree__module_qual__Parent_9, parse_tree__module_qual__V_11_11, parse_tree__module_qual__ModuleIdSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_qual__PartialQualifiers_6);
        }
#line 389 "module_qual.m"
      }
#line 388 "module_qual.m"
    else
#line 387 "module_qual.m"
      *parse_tree__module_qual__PartialQualifiers_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 383 "module_qual.m"
  }
#line 214 "module_qual.m"
}

#line 187 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(
#line 187 "module_qual.m"
  MR_Word parse_tree__module_qual__MQInfo_3,
#line 187 "module_qual.m"
  MR_Word * parse_tree__module_qual__QualifierInfo_4)
#line 187 "module_qual.m"
{
#line 379 "module_qual.m"
  {
#line 379 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 379 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleIdSet_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 1)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 0)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 2)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 3)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 4)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 5)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 6)));
#line 618 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__MQInfo_3, (MR_Integer) 7)));

#line 381 "module_qual.m"
    *parse_tree__module_qual__QualifierInfo_4 = (MR_Word) parse_tree__module_qual__ModuleIdSet_5;
#line 379 "module_qual.m"
  }
#line 187 "module_qual.m"
}

#line 179 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(
#line 179 "module_qual.m"
  MR_Word parse_tree__module_qual__X_4,
#line 179 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_6,
#line 179 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_7)
#line 179 "module_qual.m"
{
#line 692 "module_qual.m"
  {
#line 692 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 692 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

#line 692 "module_qual.m"
    {
#line 692 "module_qual.m"
      MR_Word base;
#line 692 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 692 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Info_7 = base;
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__V_9_9));
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__V_10_10));
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__V_11_11));
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__V_12_12));
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__V_13_13));
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__V_14_14));
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__V_15_15));
#line 692 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__X_4));
#line 692 "module_qual.m"
    }
#line 692 "module_qual.m"
  }
#line 179 "module_qual.m"
}

#line 177 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(
#line 177 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 177 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 177 "module_qual.m"
{
#line 630 "module_qual.m"
  {
#line 630 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 630 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));

#line 630 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 630 "module_qual.m"
  }
#line 177 "module_qual.m"
}

#line 174 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(
#line 174 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 174 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 174 "module_qual.m"
{
#line 646 "module_qual.m"
  {
#line 646 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 646 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 647 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 647 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 647 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 647 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 647 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 647 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 646 "module_qual.m"
  }
#line 174 "module_qual.m"
}

#line 172 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(
#line 172 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 172 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 172 "module_qual.m"
{
#line 644 "module_qual.m"
  {
#line 644 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 644 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19;
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 645 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 645 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 645 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 645 "module_qual.m"
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 645 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 645 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 645 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 644 "module_qual.m"
  }
#line 172 "module_qual.m"
}

#line 170 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(
#line 170 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 170 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 170 "module_qual.m"
{
#line 642 "module_qual.m"
  {
#line 642 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 642 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18;
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19;
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 643 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 643 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 643 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "module_qual.m"
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 643 "module_qual.m"
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 643 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 643 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 643 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 642 "module_qual.m"
  }
#line 170 "module_qual.m"
}

#line 168 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(
#line 168 "module_qual.m"
  MR_Word parse_tree__module_qual__Info_3,
#line 168 "module_qual.m"
  MR_Word * parse_tree__module_qual__X_4)
#line 168 "module_qual.m"
{
#line 640 "module_qual.m"
  {
#line 640 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 640 "module_qual.m"
    MR_Word parse_tree__module_qual__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 0)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 1)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 2)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 3)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 4)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 5)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 6)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__Info_3, (MR_Integer) 7)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 0)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 1)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 2)));
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_17_17;
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_18_18;
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_19_19;
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_20_20;
#line 641 "module_qual.m"
    MR_Word parse_tree__module_qual__V_21_21;
#line 641 "module_qual.m"
    MR_Integer parse_tree__module_qual__V_22_22;

#line 641 "module_qual.m"
    *parse_tree__module_qual__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "module_qual.m"
    parse_tree__module_qual__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 641 "module_qual.m"
    parse_tree__module_qual__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 641 "module_qual.m"
    parse_tree__module_qual__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 641 "module_qual.m"
    parse_tree__module_qual__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 641 "module_qual.m"
    parse_tree__module_qual__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 3)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 641 "module_qual.m"
    parse_tree__module_qual__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_5_5, (MR_Integer) 4)));
#line 640 "module_qual.m"
  }
#line 168 "module_qual.m"
}

#line 160 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__qualify_type_qualification_8_p_0(
#line 160 "module_qual.m"
  MR_Word parse_tree__module_qual__InInt_9,
#line 160 "module_qual.m"
  MR_Word parse_tree__module_qual__Context_10,
#line 160 "module_qual.m"
  MR_Word parse_tree__module_qual__Type0_11,
#line 160 "module_qual.m"
  MR_Word * parse_tree__module_qual__Type_12,
#line 160 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_16,
#line 160 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_17,
#line 160 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_18,
#line 160 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_19)
#line 160 "module_qual.m"
{
#line 370 "module_qual.m"
  {
#line 370 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 370 "module_qual.m"
    MR_Word parse_tree__module_qual__ErrorContext_15;

#line 371 "module_qual.m"
    {
#line 371 "module_qual.m"
      parse_tree__module_qual__ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "module_qual.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 371 "module_qual.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 1) = ((MR_Box) (parse_tree__module_qual__Context_10));
#line 371 "module_qual.m"
    }
#line 372 "module_qual.m"
    {
#line 372 "module_qual.m"
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__InInt_9, parse_tree__module_qual__ErrorContext_15, parse_tree__module_qual__Type0_11, parse_tree__module_qual__Type_12, parse_tree__module_qual__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__STATE_VARIABLE_Info_17, parse_tree__module_qual__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__STATE_VARIABLE_Specs_19);
    }
#line 370 "module_qual.m"
  }
#line 160 "module_qual.m"
}

#line 154 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__qualify_clause_mode_list_8_p_0(
#line 154 "module_qual.m"
  MR_Word parse_tree__module_qual__InInt_9,
#line 154 "module_qual.m"
  MR_Word parse_tree__module_qual__Context_10,
#line 154 "module_qual.m"
  MR_Word parse_tree__module_qual__Modes0_11,
#line 154 "module_qual.m"
  MR_Word * parse_tree__module_qual__Modes_12,
#line 154 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_16,
#line 154 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_17,
#line 154 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_18,
#line 154 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_19)
#line 154 "module_qual.m"
{
#line 366 "module_qual.m"
  {
#line 366 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 366 "module_qual.m"
    MR_Word parse_tree__module_qual__ErrorContext_15;

#line 367 "module_qual.m"
    {
#line 367 "module_qual.m"
      parse_tree__module_qual__ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "module_qual.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 367 "module_qual.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 1) = ((MR_Box) (parse_tree__module_qual__Context_10));
#line 367 "module_qual.m"
    }
#line 368 "module_qual.m"
    {
#line 368 "module_qual.m"
      parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__InInt_9, parse_tree__module_qual__ErrorContext_15, parse_tree__module_qual__Modes0_11, parse_tree__module_qual__Modes_12, parse_tree__module_qual__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__STATE_VARIABLE_Info_17, parse_tree__module_qual__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__STATE_VARIABLE_Specs_19);
    }
#line 366 "module_qual.m"
  }
#line 154 "module_qual.m"
}

#line 147 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__qualify_lambda_mode_list_8_p_0(
#line 147 "module_qual.m"
  MR_Word parse_tree__module_qual__InInt_9,
#line 147 "module_qual.m"
  MR_Word parse_tree__module_qual__Context_10,
#line 147 "module_qual.m"
  MR_Word parse_tree__module_qual__Modes0_11,
#line 147 "module_qual.m"
  MR_Word * parse_tree__module_qual__Modes_12,
#line 147 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_0_16,
#line 147 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_17,
#line 147 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_18,
#line 147 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_19)
#line 147 "module_qual.m"
{
#line 362 "module_qual.m"
  {
#line 362 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 362 "module_qual.m"
    MR_Word parse_tree__module_qual__ErrorContext_15;

#line 363 "module_qual.m"
    {
#line 363 "module_qual.m"
      parse_tree__module_qual__ErrorContext_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "module_qual.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 363 "module_qual.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__ErrorContext_15, 1) = ((MR_Box) (parse_tree__module_qual__Context_10));
#line 363 "module_qual.m"
    }
#line 364 "module_qual.m"
    {
#line 364 "module_qual.m"
      parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__InInt_9, parse_tree__module_qual__ErrorContext_15, parse_tree__module_qual__Modes0_11, parse_tree__module_qual__Modes_12, parse_tree__module_qual__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__STATE_VARIABLE_Info_17, parse_tree__module_qual__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__STATE_VARIABLE_Specs_19);
    }
#line 362 "module_qual.m"
  }
#line 147 "module_qual.m"
}

#line 351 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_2(
#line 351 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 351 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 351 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 351 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
#line 351 "module_qual.m"
{
#line 351 "module_qual.m"
  {
#line 351 "module_qual.m"
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
#line 351 "module_qual.m"
    MR_Word parse_tree__module_qual__conv3_HeadVar__2_2;
#line 351 "module_qual.m"
    MR_Word parse_tree__module_qual__conv2_HeadVar__3_3;

#line 351 "module_qual.m"
    {
#line 351 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv3_HeadVar__2_2, &parse_tree__module_qual__conv2_HeadVar__3_3);
    }
#line 351 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv3_HeadVar__2_2));
#line 351 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv2_HeadVar__3_3));
#line 351 "module_qual.m"
  }
#line 351 "module_qual.m"
}

#line 342 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0_1(
#line 342 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 342 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 342 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 342 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
#line 342 "module_qual.m"
{
#line 342 "module_qual.m"
  {
#line 342 "module_qual.m"
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
#line 342 "module_qual.m"
    MR_Word parse_tree__module_qual__conv1_HeadVar__2_2;
#line 342 "module_qual.m"
    MR_Word parse_tree__module_qual__conv0_HeadVar__3_3;

#line 342 "module_qual.m"
    {
#line 342 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv1_HeadVar__2_2, &parse_tree__module_qual__conv0_HeadVar__3_3);
    }
#line 342 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv1_HeadVar__2_2));
#line 342 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__3_3));
#line 342 "module_qual.m"
  }
#line 342 "module_qual.m"
}

#line 129 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(
#line 129 "module_qual.m"
  MR_Word parse_tree__module_qual__Globals_6,
#line 129 "module_qual.m"
  MR_Word parse_tree__module_qual__ParseTreeInt0_7,
#line 129 "module_qual.m"
  MR_Word * parse_tree__module_qual__ParseTreeInt_8,
#line 129 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_29,
#line 129 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_30)
#line 129 "module_qual.m"
{
#line 320 "module_qual.m"
  {
#line 320 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeCtorInfo_55_55;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeCtorInfo_59_59;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 0)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__IntFileKind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 1)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleNameContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 2)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__MaybeVersionNumbers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 3)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__IntIncls_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 4)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__ImpIncls_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 5)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__IntAvails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 6)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__ImpAvails_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 7)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__IntItems0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 8)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__ImpItems0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__ParseTreeInt0_7, (MR_Integer) 9)));
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__IntSrcItemBlocks0_20;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__ImpSrcItemBlocks0_21;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__DummyItemBlocks_22;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__IntItems_24;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__ImpItems_27;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__V_31_31;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__V_33_33;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__V_35_35;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__V_37_37;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_IntInfo_42_42;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_IntInfo_44_44;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_46_46;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_ImpInfo_50_50;
#line 320 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_ImpInfo_52_52;
#line 344 "module_qual.m"
    MR_Word parse_tree__module_qual__V_25_25;
#line 353 "module_qual.m"
    MR_Word parse_tree__module_qual__V_28_28;

#line 324 "module_qual.m"
    {
#line 324 "module_qual.m"
      parse_tree__module_qual__V_33_33 = mercury__term__context_init_0_f_0();
    }
#line 324 "module_qual.m"
    {
#line 324 "module_qual.m"
      parse_tree__module_qual__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 324 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 324 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 1) = ((MR_Box) (parse_tree__module_qual__V_33_33));
#line 324 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 2) = ((MR_Box) (parse_tree__module_qual__IntIncls_14));
#line 324 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 3) = ((MR_Box) (parse_tree__module_qual__IntAvails_16));
#line 324 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_31_31, 4) = ((MR_Box) (parse_tree__module_qual__IntItems0_18));
#line 324 "module_qual.m"
    }
#line 325 "module_qual.m"
    {
#line 325 "module_qual.m"
      parse_tree__module_qual__IntSrcItemBlocks0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__IntSrcItemBlocks0_20, 0) = ((MR_Box) (parse_tree__module_qual__V_31_31));
#line 325 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__IntSrcItemBlocks0_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "module_qual.m"
    }
#line 326 "module_qual.m"
    {
#line 326 "module_qual.m"
      parse_tree__module_qual__V_37_37 = mercury__term__context_init_0_f_0();
    }
#line 326 "module_qual.m"
    {
#line 326 "module_qual.m"
      parse_tree__module_qual__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 326 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 0) = ((MR_Box) ((MR_Integer) 1));
#line 326 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 1) = ((MR_Box) (parse_tree__module_qual__V_37_37));
#line 326 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 2) = ((MR_Box) (parse_tree__module_qual__ImpIncls_15));
#line 326 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 3) = ((MR_Box) (parse_tree__module_qual__ImpAvails_17));
#line 326 "module_qual.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_35_35, 4) = ((MR_Box) (parse_tree__module_qual__ImpItems0_19));
#line 326 "module_qual.m"
    }
#line 327 "module_qual.m"
    {
#line 327 "module_qual.m"
      parse_tree__module_qual__ImpSrcItemBlocks0_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImpSrcItemBlocks0_21, 0) = ((MR_Box) (parse_tree__module_qual__V_35_35));
#line 327 "module_qual.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__ImpSrcItemBlocks0_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "module_qual.m"
    }
#line 337 "module_qual.m"
    parse_tree__module_qual__DummyItemBlocks_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6780 "parse_tree.module_qual.c"
    parse_tree__module_qual__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
#line 339 "module_qual.m"
    {
#line 339 "module_qual.m"
      parse_tree__module_qual__init_mq_info_8_p_0(parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__TypeCtorInfo_55_55, parse_tree__module_qual__Globals_6, parse_tree__module_qual__ModuleName_10, parse_tree__module_qual__IntSrcItemBlocks0_20, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, (MR_Integer) 0, &parse_tree__module_qual__STATE_VARIABLE_IntInfo_42_42);
    }
#line 342 "module_qual.m"
    {
#line 342 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_55_55, (MR_Word) &parse_tree__module_qual_scalar_common_2[7], parse_tree__module_qual__IntSrcItemBlocks0_20, parse_tree__module_qual__STATE_VARIABLE_IntInfo_42_42, &parse_tree__module_qual__STATE_VARIABLE_IntInfo_44_44);
    }
#line 344 "module_qual.m"
    {
#line 344 "module_qual.m"
      parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0((MR_Integer) 1, parse_tree__module_qual__IntItems0_18, &parse_tree__module_qual__IntItems_24, parse_tree__module_qual__STATE_VARIABLE_IntInfo_44_44, &parse_tree__module_qual__V_25_25, parse_tree__module_qual__STATE_VARIABLE_Specs_0_29, &parse_tree__module_qual__STATE_VARIABLE_Specs_46_46);
    }
#line 6797 "parse_tree.module_qual.c"
    parse_tree__module_qual__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
#line 348 "module_qual.m"
    {
#line 348 "module_qual.m"
      parse_tree__module_qual__init_mq_info_8_p_0(parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__TypeCtorInfo_59_59, parse_tree__module_qual__Globals_6, parse_tree__module_qual__ModuleName_10, parse_tree__module_qual__ImpSrcItemBlocks0_21, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, parse_tree__module_qual__DummyItemBlocks_22, (MR_Integer) 0, &parse_tree__module_qual__STATE_VARIABLE_ImpInfo_50_50);
    }
#line 351 "module_qual.m"
    {
#line 351 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_59_59, (MR_Word) &parse_tree__module_qual_scalar_common_2[8], parse_tree__module_qual__ImpSrcItemBlocks0_21, parse_tree__module_qual__STATE_VARIABLE_ImpInfo_50_50, &parse_tree__module_qual__STATE_VARIABLE_ImpInfo_52_52);
    }
#line 353 "module_qual.m"
    {
#line 353 "module_qual.m"
      parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0((MR_Integer) 0, parse_tree__module_qual__ImpItems0_19, &parse_tree__module_qual__ImpItems_27, parse_tree__module_qual__STATE_VARIABLE_ImpInfo_52_52, &parse_tree__module_qual__V_28_28, parse_tree__module_qual__STATE_VARIABLE_Specs_46_46, parse_tree__module_qual__STATE_VARIABLE_Specs_30);
    }
#line 356 "module_qual.m"
    {
#line 356 "module_qual.m"
      MR_Word base;
#line 356 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 356 "module_qual.m"
      *parse_tree__module_qual__ParseTreeInt_8 = base;
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__ModuleName_10));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__IntFileKind_11));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__ModuleNameContext_12));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__MaybeVersionNumbers_13));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__IntIncls_14));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__ImpIncls_15));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__IntAvails_16));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__ImpAvails_17));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_qual__IntItems_24));
#line 356 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_qual__ImpItems_27));
#line 356 "module_qual.m"
    }
#line 320 "module_qual.m"
  }
#line 129 "module_qual.m"
}

#line 314 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3(
#line 314 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 314 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 314 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_2,
#line 314 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
#line 314 "module_qual.m"
{
#line 314 "module_qual.m"
  {
#line 314 "module_qual.m"
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
#line 314 "module_qual.m"
    MR_Word parse_tree__module_qual__conv4_HeadVar__4_4;

#line 314 "module_qual.m"
    {
#line 314 "module_qual.m"
      parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__wrapper_arg_2), &parse_tree__module_qual__conv4_HeadVar__4_4);
    }
#line 314 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv4_HeadVar__4_4));
#line 314 "module_qual.m"
  }
#line 314 "module_qual.m"
}

#line 255 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_2(
#line 255 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 255 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 255 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 255 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
#line 255 "module_qual.m"
{
#line 255 "module_qual.m"
  {
#line 255 "module_qual.m"
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
#line 255 "module_qual.m"
    MR_Word parse_tree__module_qual__conv3_HeadVar__2_2;
#line 255 "module_qual.m"
    MR_Word parse_tree__module_qual__conv2_HeadVar__3_3;

#line 255 "module_qual.m"
    {
#line 255 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__int_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv3_HeadVar__2_2, &parse_tree__module_qual__conv2_HeadVar__3_3);
    }
#line 255 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv3_HeadVar__2_2));
#line 255 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv2_HeadVar__3_3));
#line 255 "module_qual.m"
  }
#line 255 "module_qual.m"
}

#line 253 "module_qual.m"
static void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_1(
#line 253 "module_qual.m"
  MR_Box parse_tree__module_qual__closure_arg,
#line 253 "module_qual.m"
  MR_Box parse_tree__module_qual__wrapper_arg_1,
#line 253 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_2,
#line 253 "module_qual.m"
  MR_Box * parse_tree__module_qual__wrapper_arg_3)
#line 253 "module_qual.m"
{
#line 253 "module_qual.m"
  {
#line 253 "module_qual.m"
    MR_Box parse_tree__module_qual__closure = parse_tree__module_qual__closure_arg;
#line 253 "module_qual.m"
    MR_Word parse_tree__module_qual__conv1_HeadVar__2_2;
#line 253 "module_qual.m"
    MR_Word parse_tree__module_qual__conv0_HeadVar__3_3;

#line 253 "module_qual.m"
    {
#line 253 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(((MR_Word) parse_tree__module_qual__wrapper_arg_1), &parse_tree__module_qual__conv1_HeadVar__2_2, &parse_tree__module_qual__conv0_HeadVar__3_3);
    }
#line 253 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__conv1_HeadVar__2_2));
#line 253 "module_qual.m"
    *parse_tree__module_qual__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__conv0_HeadVar__3_3));
#line 253 "module_qual.m"
  }
#line 253 "module_qual.m"
}

#line 116 "module_qual.m"
void MR_CALL 
parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(
#line 116 "module_qual.m"
  MR_Word parse_tree__module_qual__Globals_14,
#line 116 "module_qual.m"
  MR_Word parse_tree__module_qual__AugCompUnit0_15,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__AugCompUnit_16,
#line 116 "module_qual.m"
  MR_Word parse_tree__module_qual__EventSpecMap0_17,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__EventSpecMap_18,
#line 116 "module_qual.m"
  MR_String parse_tree__module_qual__EventSpecFileName_19,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Info_42,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__UndefTypes_21,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__UndefInsts_22,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__UndefModes_23,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__UndefTypeClasses_24,
#line 116 "module_qual.m"
  MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_0_43,
#line 116 "module_qual.m"
  MR_Word * parse_tree__module_qual__STATE_VARIABLE_Specs_44)
#line 116 "module_qual.m"
{
#line 245 "module_qual.m"
  {
#line 245 "module_qual.m"
    MR_bool parse_tree__module_qual__succeeded;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeCtorInfo_63_63;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeCtorInfo_64_64;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeCtorInfo_73_73;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__TypeCtorInfo_74_74;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 0)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 1)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleVersionNumbers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 2)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__SrcItemBlocks0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 3)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__DirectIntItemBlocks_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 4)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__IndirectIntItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 5)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__OptItemBlocks_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 6)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__IntForOptItemBlocks_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__AugCompUnit0_15, (MR_Integer) 7)));
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__SrcItemBlocks_34;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__EventSpecList0_35;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__EventSpecList_36;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__UnusedImportsMap0_37;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__ModuleExportsInstances_38;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__UnusedImportsMap_40;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__V_45_45;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_47_47;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_49_49;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_51_51;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Info_52_52;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_53_53;
#line 245 "module_qual.m"
    MR_Word parse_tree__module_qual__STATE_VARIABLE_Specs_56_56;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_88_88;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_89_89;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_90_90;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_91_91;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_92_92;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_93_93;
#line 628 "module_qual.m"
    MR_Word parse_tree__module_qual__V_94_94;
#line 310 "module_qual.m"
    MR_Word parse_tree__module_qual__V_58_58;
#line 310 "module_qual.m"
    MR_Word parse_tree__module_qual__V_59_59;

#line 251 "module_qual.m"
    {
#line 251 "module_qual.m"
      parse_tree__module_qual__V_45_45 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__module_qual_scalar_common_1[0], parse_tree__module_qual__DirectIntItemBlocks_30, parse_tree__module_qual__IndirectIntItemBlocks_31);
    }
#line 7062 "parse_tree.module_qual.c"
    parse_tree__module_qual__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0;
#line 7064 "parse_tree.module_qual.c"
    parse_tree__module_qual__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0;
#line 250 "module_qual.m"
    {
#line 250 "module_qual.m"
      parse_tree__module_qual__init_mq_info_8_p_0(parse_tree__module_qual__TypeCtorInfo_63_63, parse_tree__module_qual__TypeCtorInfo_64_64, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__module_qual__Globals_14, parse_tree__module_qual__ModuleName_26, parse_tree__module_qual__SrcItemBlocks0_29, parse_tree__module_qual__V_45_45, parse_tree__module_qual__OptItemBlocks_32, parse_tree__module_qual__IntForOptItemBlocks_33, (MR_Integer) 1, &parse_tree__module_qual__STATE_VARIABLE_Info_47_47);
    }
#line 253 "module_qual.m"
    {
#line 253 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_63_63, (MR_Word) &parse_tree__module_qual_scalar_common_2[5], parse_tree__module_qual__SrcItemBlocks0_29, parse_tree__module_qual__STATE_VARIABLE_Info_47_47, &parse_tree__module_qual__STATE_VARIABLE_Info_49_49);
    }
#line 255 "module_qual.m"
    {
#line 255 "module_qual.m"
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(parse_tree__module_qual__TypeCtorInfo_64_64, (MR_Word) &parse_tree__module_qual_scalar_common_2[6], parse_tree__module_qual__DirectIntItemBlocks_30, parse_tree__module_qual__STATE_VARIABLE_Info_49_49, &parse_tree__module_qual__STATE_VARIABLE_Info_51_51);
    }
#line 258 "module_qual.m"
    {
#line 258 "module_qual.m"
      parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(parse_tree__module_qual__SrcItemBlocks0_29, &parse_tree__module_qual__SrcItemBlocks_34, parse_tree__module_qual__STATE_VARIABLE_Info_51_51, &parse_tree__module_qual__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__STATE_VARIABLE_Specs_0_43, &parse_tree__module_qual__STATE_VARIABLE_Specs_53_53);
    }
#line 260 "module_qual.m"
    {
#line 260 "module_qual.m"
      MR_Word base;
#line 260 "module_qual.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 260 "module_qual.m"
      *parse_tree__module_qual__AugCompUnit_16 = base;
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__ModuleName_26));
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__ModuleNameContext_27));
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__ModuleVersionNumbers_28));
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__SrcItemBlocks_34));
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__DirectIntItemBlocks_30));
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__IndirectIntItemBlocks_31));
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__OptItemBlocks_32));
#line 260 "module_qual.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__IntForOptItemBlocks_33));
#line 260 "module_qual.m"
    }
#line 7112 "parse_tree.module_qual.c"
    parse_tree__module_qual__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7114 "parse_tree.module_qual.c"
    parse_tree__module_qual__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 265 "module_qual.m"
    {
#line 265 "module_qual.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__module_qual__TypeCtorInfo_73_73, parse_tree__module_qual__TypeCtorInfo_74_74, parse_tree__module_qual__EventSpecMap0_17, &parse_tree__module_qual__EventSpecList0_35);
    }
#line 266 "module_qual.m"
    {
#line 266 "module_qual.m"
      parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0((MR_Integer) 0, parse_tree__module_qual__EventSpecFileName_19, parse_tree__module_qual__EventSpecList0_35, &parse_tree__module_qual__EventSpecList_36, parse_tree__module_qual__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__STATE_VARIABLE_Specs_53_53, &parse_tree__module_qual__STATE_VARIABLE_Specs_56_56);
    }
#line 268 "module_qual.m"
    {
#line 268 "module_qual.m"
      mercury__map__from_assoc_list_2_p_0(parse_tree__module_qual__TypeCtorInfo_73_73, parse_tree__module_qual__TypeCtorInfo_74_74, parse_tree__module_qual__EventSpecList_36, parse_tree__module_qual__EventSpecMap_18);
    }
#line 269 "module_qual.m"
    {
#line 269 "module_qual.m"
      parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefTypes_21);
    }
#line 270 "module_qual.m"
    {
#line 270 "module_qual.m"
      parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefInsts_22);
    }
#line 271 "module_qual.m"
    {
#line 271 "module_qual.m"
      parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefModes_23);
    }
#line 272 "module_qual.m"
    {
#line 272 "module_qual.m"
      parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, parse_tree__module_qual__UndefTypeClasses_24);
    }
#line 628 "module_qual.m"
    parse_tree__module_qual__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 0)));
#line 628 "module_qual.m"
    parse_tree__module_qual__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 1)));
#line 628 "module_qual.m"
    parse_tree__module_qual__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 2)));
#line 628 "module_qual.m"
    parse_tree__module_qual__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 3)));
#line 628 "module_qual.m"
    parse_tree__module_qual__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 4)));
#line 628 "module_qual.m"
    parse_tree__module_qual__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 5)));
#line 628 "module_qual.m"
    parse_tree__module_qual__UnusedImportsMap0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 6)));
#line 628 "module_qual.m"
    parse_tree__module_qual__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__module_qual__STATE_VARIABLE_Info_42, (MR_Integer) 7)));
#line 299 "module_qual.m"
    {
#line 299 "module_qual.m"
      parse_tree__module_qual__mq_info_get_exported_instances_flag_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, &parse_tree__module_qual__ModuleExportsInstances_38);
    }
#line 305 "module_qual.m"
#line 305 "module_qual.m"
    switch (parse_tree__module_qual__ModuleExportsInstances_38) {
#line 305 "module_qual.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 305 "module_qual.m"
      case (MR_Integer) 0:
#line 307 "module_qual.m"
        parse_tree__module_qual__UnusedImportsMap_40 = parse_tree__module_qual__UnusedImportsMap0_37;
#line 305 "module_qual.m"
        break;
#line 305 "module_qual.m"
      case (MR_Integer) 1:
#line 301 "module_qual.m"
        {
#line 301 "module_qual.m"
          MR_Word parse_tree__module_qual__TypeCtorInfo_75_75;
#line 301 "module_qual.m"
          MR_Word parse_tree__module_qual__InstanceImports_39;
#line 301 "module_qual.m"
          MR_Word parse_tree__module_qual__V_57_57;

#line 302 "module_qual.m"
          {
#line 302 "module_qual.m"
            parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(*parse_tree__module_qual__STATE_VARIABLE_Info_42, &parse_tree__module_qual__InstanceImports_39);
          }
#line 7199 "parse_tree.module_qual.c"
          parse_tree__module_qual__TypeCtorInfo_75_75 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 303 "module_qual.m"
          {
#line 303 "module_qual.m"
            parse_tree__module_qual__V_57_57 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_qual__TypeCtorInfo_75_75, parse_tree__module_qual__InstanceImports_39);
          }
#line 303 "module_qual.m"
          {
#line 303 "module_qual.m"
            mercury__map__delete_list_3_p_0(parse_tree__module_qual__TypeCtorInfo_75_75, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], parse_tree__module_qual__V_57_57, parse_tree__module_qual__UnusedImportsMap0_37, &parse_tree__module_qual__UnusedImportsMap_40);
          }
#line 301 "module_qual.m"
        }
#line 305 "module_qual.m"
        break;
#line 305 "module_qual.m"
    }
#line 310 "module_qual.m"
    {
#line 310 "module_qual.m"
      parse_tree__module_qual__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], parse_tree__module_qual__UnusedImportsMap_40);
    }
#line 310 "module_qual.m"
    parse_tree__module_qual__succeeded = !(parse_tree__module_qual__succeeded);
#line 310 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 310 "module_qual.m"
      {
#line 311 "module_qual.m"
        parse_tree__module_qual__V_58_58 = (MR_Integer) 11;
#line 311 "module_qual.m"
        parse_tree__module_qual__V_59_59 = (MR_Integer) 1;
#line 311 "module_qual.m"
        {
#line 311 "module_qual.m"
          parse_tree__module_qual__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__module_qual__Globals_14, parse_tree__module_qual__V_58_58, parse_tree__module_qual__V_59_59);
        }
#line 310 "module_qual.m"
      }
#line 309 "module_qual.m"
    if (parse_tree__module_qual__succeeded)
#line 313 "module_qual.m"
      {
#line 313 "module_qual.m"
        MR_Word parse_tree__module_qual__UnusedImports_41;
#line 313 "module_qual.m"
        MR_Word parse_tree__module_qual__V_60_60;
#line 314 "module_qual.m"
        MR_Box parse_tree__module_qual__conv5_STATE_VARIABLE_Specs_44;

#line 313 "module_qual.m"
        {
#line 313 "module_qual.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual_scalar_common_1[1], parse_tree__module_qual__UnusedImportsMap_40, &parse_tree__module_qual__UnusedImports_41);
        }
#line 314 "module_qual.m"
        {
#line 314 "module_qual.m"
          parse_tree__module_qual__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 314 "module_qual.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 0) = ((MR_Box) (&parse_tree__module_qual_scalar_common_4[0]));
#line 314 "module_qual.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 1) = ((MR_Box) (parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0_3));
#line 314 "module_qual.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 314 "module_qual.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__V_60_60, 3) = ((MR_Box) (parse_tree__module_qual__ModuleName_26));
#line 314 "module_qual.m"
        }
#line 314 "module_qual.m"
        {
#line 314 "module_qual.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_qual_scalar_common_2[0], (MR_Word) &parse_tree__module_qual_scalar_common_1[2], parse_tree__module_qual__V_60_60, parse_tree__module_qual__UnusedImports_41, ((MR_Box) (parse_tree__module_qual__STATE_VARIABLE_Specs_56_56)), &parse_tree__module_qual__conv5_STATE_VARIABLE_Specs_44);
        }
#line 314 "module_qual.m"
        *parse_tree__module_qual__STATE_VARIABLE_Specs_44 = ((MR_Word) parse_tree__module_qual__conv5_STATE_VARIABLE_Specs_44);
#line 313 "module_qual.m"
      }
#line 309 "module_qual.m"
    else
#line 309 "module_qual.m"
      *parse_tree__module_qual__STATE_VARIABLE_Specs_44 = parse_tree__module_qual__STATE_VARIABLE_Specs_56_56;
#line 245 "module_qual.m"
  }
#line 116 "module_qual.m"
}

void mercury__parse_tree__module_qual__init(void)
{
}

void mercury__parse_tree__module_qual__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_inst_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_mode_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_type_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_found_undef_typeclass_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_should_report_errors_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_maybe_warn_unused_imports_in_parents_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_sub_info_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0);
}

void mercury__parse_tree__module_qual__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_qual. */
