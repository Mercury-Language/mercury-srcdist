/*
** Automatically generated from `module_qual.id_set.m'
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


/* :- module parse_tree.module_qual.id_set. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_qual__id_set__init
ENDINIT
*/

#include "parse_tree.module_qual.id_set.mih"


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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




#line 101 "parse_tree.module_qual.id_set.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 104 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 107 "parse_tree.module_qual.id_set.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 110 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 113 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 116 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 119 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0;

#line 122 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1;

#line 125 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2;

#line 128 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3;

#line 131 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_id_type_0[4];

#line 134 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_id_type_0[4];

#line 137 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_id_type_0[4];

#line 140 "parse_tree.module_qual.id_set.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0[2];

#line 143 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0;

#line 146 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0[1];

#line 149 "parse_tree.module_qual.id_set.c"
static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0[1];

#line 152 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0[1];

#line 155 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0[1];

#line 158 "parse_tree.module_qual.id_set.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0[2];

#line 161 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0;

#line 164 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0[1];

#line 167 "parse_tree.module_qual.id_set.c"
static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0[1];

#line 170 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0[1];

#line 173 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0[1];

#line 176 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_0;

#line 179 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_1;

#line 182 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_use_in_interface_0[2];

#line 185 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_use_in_interface_0[2];

#line 188 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_use_in_interface_0[2];

#line 191 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
#line 194 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 196 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 199 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
#line 202 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 204 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 206 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 209 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
#line 212 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 214 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 217 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
#line 220 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 222 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 224 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 227 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0_10001(
#line 230 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 232 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 235 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0_10001(
#line 238 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 240 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 242 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 245 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
#line 248 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 250 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 253 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
#line 256 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 258 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 260 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 263 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
#line 266 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 268 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 271 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
#line 274 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 276 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 278 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 281 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
#line 284 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 286 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 289 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
#line 292 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 294 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 296 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 299 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
#line 302 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 304 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 307 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
#line 310 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 312 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 314 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 317 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
#line 320 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 322 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 325 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
#line 328 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 330 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 332 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 335 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
#line 338 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 340 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 343 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
#line 346 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 348 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 350 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 353 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
#line 356 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 358 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 361 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
#line 364 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 366 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 368 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 371 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____use_in_interface_0_0_10001(
#line 374 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 376 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

#line 379 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____use_in_interface_0_0_10001(
#line 382 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 384 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 386 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

#line 391 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__IntroducedFrom__pred__find_matches_in_permissions_map__391__1_3_p_0(
#line 391 "module_qual.id_set.m"
  MR_String parse_tree__module_qual__id_set__ModuleBaseName_14,
#line 391 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__LambdaHeadVar__1_22,
#line 391 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__LambdaHeadVar__2_23);

#line 132 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
#line 132 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3);

#line 132 "module_qual.id_set.m"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2);

#line 491 "module_qual.id_set.m"
static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
#line 491 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1);

#line 451 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_5_p_0(
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3,
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_4,
#line 451 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_5);

#line 436 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_4_p_0(
#line 436 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__IdSet_5,
#line 436 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_6,
#line 436 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__SymName_7,
#line 436 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__PossibleArities_8);

#line 421 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__add_modules_in_set_5_p_0(
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__MatchingModuleNames_6,
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleName_7,
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__Permissions_8,
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10,
#line 421 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11);

#line 408 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__add_may_be_unqualified_modules_4_p_0(
#line 408 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleName_5,
#line 408 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__Permissions_6,
#line 408 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10,
#line 408 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11);

#line 376 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_3(
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
#line 376 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4);

#line 404 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_2(
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
#line 404 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4);

#line 390 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_1(
#line 390 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 390 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 390 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_2);

#line 368 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0(
#line 368 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__SymName_5,
#line 368 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_6,
#line 368 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__PermissionsMap_7,
#line 368 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_8);

#line 351 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_arity_5_p_0(
#line 351 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__IdSet_6,
#line 351 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_7,
#line 351 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__SymName_8,
#line 351 "module_qual.id_set.m"
  MR_Integer parse_tree__module_qual__id_set__Arity_9,
#line 351 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_10);

#line 342 "module_qual.id_set.m"
static MR_Word MR_CALL 
parse_tree__module_qual__id_set__convert_simple_item_type_1_f_0(
#line 342 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1);

#line 321 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__which_modules_may_be_used_in_interface_3_p_0(
#line 321 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 321 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__2_2,
#line 321 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__3_3);

#line 317 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_1(
#line 317 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 317 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 317 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_1[5][3];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_3[2][8];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_5[1][6];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_6[1][7];


#line 344 "module_qual.id_set.m"
/* sealed */ struct parse_tree__module_qual__id_set__vector_common_type_4_0_s {
#line 344 "module_qual.id_set.m"
  const MR_Word parse_tree__module_qual__id_set__vector_common_type_4_0__vct_4_f_0;
#line 344 "module_qual.id_set.m"
};

static /* final */ const struct parse_tree__module_qual__id_set__vector_common_type_4_0_s parse_tree__module_qual__id_set_vector_common_4[4];



static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
};


static /* final */ const struct parse_tree__module_qual__id_set__vector_common_type_4_0_s parse_tree__module_qual__id_set_vector_common_4[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 4 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 695 "parse_tree.module_qual.id_set.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 703 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 712 "parse_tree.module_qual.id_set.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 720 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 729 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 738 "parse_tree.module_qual.id_set.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 747 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_class_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "class_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 764 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 781 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0 = {
  (MR_String) "type_id",
  (MR_Integer) 0
};

#line 787 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1 = {
  (MR_String) "mode_id",
  (MR_Integer) 1
};

#line 793 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2 = {
  (MR_String) "inst_id",
  (MR_Integer) 2
};

#line 799 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3 = {
  (MR_String) "class_id",
  (MR_Integer) 3
};

#line 805 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_id_type_0[4] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3
};

#line 813 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_id_type_0[4] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0
};

#line 821 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_id_type_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 829 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____id_type_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____id_type_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "id_type",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_id_type_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_id_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_id_type_0
};

#line 846 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_inst_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "inst_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 863 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mode_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mode_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 880 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 897 "parse_tree.module_qual.id_set.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_use_in_interface_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

#line 903 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0 = {
  (MR_String) "module_permissions",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0,
  NULL,
  NULL,
  NULL
};

#line 918 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0
};

#line 923 "parse_tree.module_qual.id_set.c"
static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0
  }
};

#line 932 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0
};

#line 937 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0[1] = {
  (MR_Integer) 0
};

#line 942 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_permissions",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0
};

#line 959 "parse_tree.module_qual.id_set.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 965 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0 = {
  (MR_String) "mq_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 980 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0
};

#line 985 "parse_tree.module_qual.id_set.c"
static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0
  }
};

#line 994 "parse_tree.module_qual.id_set.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0
};

#line 999 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0[1] = {
  (MR_Integer) 0
};

#line 1004 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mq_id",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0
};

#line 1021 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_permissions_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "permissions_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1038 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_type_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "type_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1055 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_0 = {
  (MR_String) "may_not_use_in_interface",
  (MR_Integer) 0
};

#line 1061 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_1 = {
  (MR_String) "may_use_in_interface",
  (MR_Integer) 1
};

#line 1067 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_use_in_interface_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_1
};

#line 1073 "parse_tree.module_qual.id_set.c"
static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_use_in_interface_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_use_in_interface_0_1
};

#line 1079 "parse_tree.module_qual.id_set.c"
static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_use_in_interface_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1085 "parse_tree.module_qual.id_set.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_use_in_interface_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____use_in_interface_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____use_in_interface_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "use_in_interface",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_use_in_interface_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_use_in_interface_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_use_in_interface_0
};

#line 1102 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
#line 1105 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1107 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1109 "parse_tree.module_qual.id_set.c"
{
#line 1111 "parse_tree.module_qual.id_set.c"
  {
#line 1113 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1116 "parse_tree.module_qual.id_set.c"
    {
#line 1118 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____class_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1121 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1123 "parse_tree.module_qual.id_set.c"
  }
#line 1125 "parse_tree.module_qual.id_set.c"
}

#line 1128 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
#line 1131 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1133 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1135 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1137 "parse_tree.module_qual.id_set.c"
{
#line 1139 "parse_tree.module_qual.id_set.c"
  {
#line 1141 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1144 "parse_tree.module_qual.id_set.c"
    {
#line 1146 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____class_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1149 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1151 "parse_tree.module_qual.id_set.c"
  }
#line 1153 "parse_tree.module_qual.id_set.c"
}

#line 1156 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
#line 1159 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1161 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1163 "parse_tree.module_qual.id_set.c"
{
#line 1165 "parse_tree.module_qual.id_set.c"
  {
#line 1167 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1170 "parse_tree.module_qual.id_set.c"
    {
#line 1172 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1175 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1177 "parse_tree.module_qual.id_set.c"
  }
#line 1179 "parse_tree.module_qual.id_set.c"
}

#line 1182 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
#line 1185 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1187 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1189 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1191 "parse_tree.module_qual.id_set.c"
{
#line 1193 "parse_tree.module_qual.id_set.c"
  {
#line 1195 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1198 "parse_tree.module_qual.id_set.c"
    {
#line 1200 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1203 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1205 "parse_tree.module_qual.id_set.c"
  }
#line 1207 "parse_tree.module_qual.id_set.c"
}

#line 1210 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0_10001(
#line 1213 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1215 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1217 "parse_tree.module_qual.id_set.c"
{
#line 1219 "parse_tree.module_qual.id_set.c"
  {
#line 1221 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1224 "parse_tree.module_qual.id_set.c"
    {
#line 1226 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____id_type_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1229 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1231 "parse_tree.module_qual.id_set.c"
  }
#line 1233 "parse_tree.module_qual.id_set.c"
}

#line 1236 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0_10001(
#line 1239 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1241 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1243 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1245 "parse_tree.module_qual.id_set.c"
{
#line 1247 "parse_tree.module_qual.id_set.c"
  {
#line 1249 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1252 "parse_tree.module_qual.id_set.c"
    {
#line 1254 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____id_type_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1257 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1259 "parse_tree.module_qual.id_set.c"
  }
#line 1261 "parse_tree.module_qual.id_set.c"
}

#line 1264 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
#line 1267 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1269 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1271 "parse_tree.module_qual.id_set.c"
{
#line 1273 "parse_tree.module_qual.id_set.c"
  {
#line 1275 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1278 "parse_tree.module_qual.id_set.c"
    {
#line 1280 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1283 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1285 "parse_tree.module_qual.id_set.c"
  }
#line 1287 "parse_tree.module_qual.id_set.c"
}

#line 1290 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
#line 1293 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1295 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1297 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1299 "parse_tree.module_qual.id_set.c"
{
#line 1301 "parse_tree.module_qual.id_set.c"
  {
#line 1303 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1306 "parse_tree.module_qual.id_set.c"
    {
#line 1308 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1311 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1313 "parse_tree.module_qual.id_set.c"
  }
#line 1315 "parse_tree.module_qual.id_set.c"
}

#line 1318 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
#line 1321 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1323 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1325 "parse_tree.module_qual.id_set.c"
{
#line 1327 "parse_tree.module_qual.id_set.c"
  {
#line 1329 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1332 "parse_tree.module_qual.id_set.c"
    {
#line 1334 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1337 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1339 "parse_tree.module_qual.id_set.c"
  }
#line 1341 "parse_tree.module_qual.id_set.c"
}

#line 1344 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
#line 1347 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1349 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1351 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1353 "parse_tree.module_qual.id_set.c"
{
#line 1355 "parse_tree.module_qual.id_set.c"
  {
#line 1357 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1360 "parse_tree.module_qual.id_set.c"
    {
#line 1362 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1365 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1367 "parse_tree.module_qual.id_set.c"
  }
#line 1369 "parse_tree.module_qual.id_set.c"
}

#line 1372 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
#line 1375 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1377 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1379 "parse_tree.module_qual.id_set.c"
{
#line 1381 "parse_tree.module_qual.id_set.c"
  {
#line 1383 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1386 "parse_tree.module_qual.id_set.c"
    {
#line 1388 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____module_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1391 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1393 "parse_tree.module_qual.id_set.c"
  }
#line 1395 "parse_tree.module_qual.id_set.c"
}

#line 1398 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
#line 1401 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1403 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1405 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1407 "parse_tree.module_qual.id_set.c"
{
#line 1409 "parse_tree.module_qual.id_set.c"
  {
#line 1411 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1414 "parse_tree.module_qual.id_set.c"
    {
#line 1416 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____module_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1419 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1421 "parse_tree.module_qual.id_set.c"
  }
#line 1423 "parse_tree.module_qual.id_set.c"
}

#line 1426 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
#line 1429 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1431 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1433 "parse_tree.module_qual.id_set.c"
{
#line 1435 "parse_tree.module_qual.id_set.c"
  {
#line 1437 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1440 "parse_tree.module_qual.id_set.c"
    {
#line 1442 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____module_permissions_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1445 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1447 "parse_tree.module_qual.id_set.c"
  }
#line 1449 "parse_tree.module_qual.id_set.c"
}

#line 1452 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
#line 1455 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1457 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1459 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1461 "parse_tree.module_qual.id_set.c"
{
#line 1463 "parse_tree.module_qual.id_set.c"
  {
#line 1465 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1468 "parse_tree.module_qual.id_set.c"
    {
#line 1470 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____module_permissions_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1473 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1475 "parse_tree.module_qual.id_set.c"
  }
#line 1477 "parse_tree.module_qual.id_set.c"
}

#line 1480 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
#line 1483 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1485 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1487 "parse_tree.module_qual.id_set.c"
{
#line 1489 "parse_tree.module_qual.id_set.c"
  {
#line 1491 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1494 "parse_tree.module_qual.id_set.c"
    {
#line 1496 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1499 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1501 "parse_tree.module_qual.id_set.c"
  }
#line 1503 "parse_tree.module_qual.id_set.c"
}

#line 1506 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
#line 1509 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1511 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1513 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1515 "parse_tree.module_qual.id_set.c"
{
#line 1517 "parse_tree.module_qual.id_set.c"
  {
#line 1519 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1522 "parse_tree.module_qual.id_set.c"
    {
#line 1524 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1527 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1529 "parse_tree.module_qual.id_set.c"
  }
#line 1531 "parse_tree.module_qual.id_set.c"
}

#line 1534 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
#line 1537 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1539 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1541 "parse_tree.module_qual.id_set.c"
{
#line 1543 "parse_tree.module_qual.id_set.c"
  {
#line 1545 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1548 "parse_tree.module_qual.id_set.c"
    {
#line 1550 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____permissions_map_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1553 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1555 "parse_tree.module_qual.id_set.c"
  }
#line 1557 "parse_tree.module_qual.id_set.c"
}

#line 1560 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
#line 1563 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1565 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1567 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1569 "parse_tree.module_qual.id_set.c"
{
#line 1571 "parse_tree.module_qual.id_set.c"
  {
#line 1573 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1576 "parse_tree.module_qual.id_set.c"
    {
#line 1578 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____permissions_map_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1581 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1583 "parse_tree.module_qual.id_set.c"
  }
#line 1585 "parse_tree.module_qual.id_set.c"
}

#line 1588 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
#line 1591 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1593 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1595 "parse_tree.module_qual.id_set.c"
{
#line 1597 "parse_tree.module_qual.id_set.c"
  {
#line 1599 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1602 "parse_tree.module_qual.id_set.c"
    {
#line 1604 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____type_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1607 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1609 "parse_tree.module_qual.id_set.c"
  }
#line 1611 "parse_tree.module_qual.id_set.c"
}

#line 1614 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
#line 1617 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1619 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1621 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1623 "parse_tree.module_qual.id_set.c"
{
#line 1625 "parse_tree.module_qual.id_set.c"
  {
#line 1627 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1630 "parse_tree.module_qual.id_set.c"
    {
#line 1632 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____type_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1635 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1637 "parse_tree.module_qual.id_set.c"
  }
#line 1639 "parse_tree.module_qual.id_set.c"
}

#line 1642 "parse_tree.module_qual.id_set.c"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____use_in_interface_0_0_10001(
#line 1645 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1647 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
#line 1649 "parse_tree.module_qual.id_set.c"
{
#line 1651 "parse_tree.module_qual.id_set.c"
  {
#line 1653 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 1656 "parse_tree.module_qual.id_set.c"
    {
#line 1658 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____use_in_interface_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
#line 1661 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1663 "parse_tree.module_qual.id_set.c"
  }
#line 1665 "parse_tree.module_qual.id_set.c"
}

#line 1668 "parse_tree.module_qual.id_set.c"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____use_in_interface_0_0_10001(
#line 1671 "parse_tree.module_qual.id_set.c"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
#line 1673 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 1675 "parse_tree.module_qual.id_set.c"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
#line 1677 "parse_tree.module_qual.id_set.c"
{
#line 1679 "parse_tree.module_qual.id_set.c"
  {
#line 1681 "parse_tree.module_qual.id_set.c"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

#line 1684 "parse_tree.module_qual.id_set.c"
    {
#line 1686 "parse_tree.module_qual.id_set.c"
      parse_tree__module_qual__id_set____Compare____use_in_interface_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
#line 1689 "parse_tree.module_qual.id_set.c"
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
#line 1691 "parse_tree.module_qual.id_set.c"
  }
#line 1693 "parse_tree.module_qual.id_set.c"
}

#line 391 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__IntroducedFrom__pred__find_matches_in_permissions_map__391__1_3_p_0(
#line 391 "module_qual.id_set.m"
  MR_String parse_tree__module_qual__id_set__ModuleBaseName_14,
#line 391 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__LambdaHeadVar__1_22,
#line 391 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__LambdaHeadVar__2_23)
#line 391 "module_qual.id_set.m"
{
#line 391 "module_qual.id_set.m"
  {
#line 391 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 391 "module_qual.id_set.m"
    {
#line 391 "module_qual.id_set.m"
      MR_Word base;
#line 391 "module_qual.id_set.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "module_qual.id_set.m"
      *parse_tree__module_qual__id_set__LambdaHeadVar__2_23 = base;
#line 391 "module_qual.id_set.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__LambdaHeadVar__1_22));
#line 391 "module_qual.id_set.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleBaseName_14));
#line 391 "module_qual.id_set.m"
    }
#line 391 "module_qual.id_set.m"
  }
#line 391 "module_qual.id_set.m"
}

#line 61 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____use_in_interface_0_0(
#line 61 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 61 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 61 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 61 "module_qual.id_set.m"
{
#line 61 "module_qual.id_set.m"
  {
#line 61 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 61 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
#line 61 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

#line 61 "module_qual.id_set.m"
    {
#line 61 "module_qual.id_set.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__Cast_HeadVar1_4, parse_tree__module_qual__id_set__Cast_HeadVar2_5);
    }
#line 61 "module_qual.id_set.m"
  }
#line 61 "module_qual.id_set.m"
}

#line 61 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____use_in_interface_0_0(
#line 61 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_1,
#line 61 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 61 "module_qual.id_set.m"
{
#line 1770 "parse_tree.module_qual.id_set.c"
  {
#line 1772 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__HeadVar__2_1 == parse_tree__module_qual__id_set__HeadVar__2_2);

#line 1775 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 1777 "parse_tree.module_qual.id_set.c"
  }
#line 61 "module_qual.id_set.m"
}

#line 78 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0(
#line 78 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 78 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 78 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 78 "module_qual.id_set.m"
{
#line 78 "module_qual.id_set.m"
  {
#line 78 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 78 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
#line 78 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

#line 78 "module_qual.id_set.m"
    {
#line 78 "module_qual.id_set.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
#line 78 "module_qual.id_set.m"
  }
#line 78 "module_qual.id_set.m"
}

#line 78 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0(
#line 78 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 78 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 78 "module_qual.id_set.m"
{
#line 78 "module_qual.id_set.m"
  {
#line 78 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 78 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
#line 78 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

#line 78 "module_qual.id_set.m"
    {
#line 78 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
#line 78 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 78 "module_qual.id_set.m"
  }
#line 78 "module_qual.id_set.m"
}

#line 132 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
#line 132 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 132 "module_qual.id_set.m"
{
#line 132 "module_qual.id_set.m"
  {
#line 132 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 132 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
#line 132 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

#line 132 "module_qual.id_set.m"
    {
#line 132 "module_qual.id_set.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
#line 132 "module_qual.id_set.m"
  }
#line 132 "module_qual.id_set.m"
}

#line 132 "module_qual.id_set.m"
static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 132 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 132 "module_qual.id_set.m"
{
#line 132 "module_qual.id_set.m"
  {
#line 132 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 132 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
#line 132 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

#line 132 "module_qual.id_set.m"
    {
#line 132 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
#line 132 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 132 "module_qual.id_set.m"
  }
#line 132 "module_qual.id_set.m"
}

#line 33 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0(
#line 33 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 33 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 33 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 33 "module_qual.id_set.m"
{
#line 33 "module_qual.id_set.m"
  {
#line 33 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 33 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastX_9 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
#line 33 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastY_10 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

#line 33 "module_qual.id_set.m"
    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_9 == parse_tree__module_qual__id_set__CastY_10);
#line 33 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 1926 "parse_tree.module_qual.id_set.c"
      *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 0;
#line 33 "module_qual.id_set.m"
    else
#line 33 "module_qual.id_set.m"
      {
#line 33 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "module_qual.id_set.m"
        MR_Integer parse_tree__module_qual__id_set__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));
#line 33 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 0)));
#line 33 "module_qual.id_set.m"
        MR_Integer parse_tree__module_qual__id_set__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 1)));
#line 33 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_8_8;

#line 33 "module_qual.id_set.m"
        {
#line 33 "module_qual.id_set.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__id_set__V_8_8, parse_tree__module_qual__id_set__V_4_4, parse_tree__module_qual__id_set__V_6_6);
        }
#line 1948 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__V_8_8 == (MR_Integer) 0);
#line 33 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__succeeded = !(parse_tree__module_qual__id_set__succeeded);
#line 33 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 33 "module_qual.id_set.m"
          *parse_tree__module_qual__id_set__HeadVar__1_1 = parse_tree__module_qual__id_set__V_8_8;
#line 33 "module_qual.id_set.m"
        else
#line 33 "module_qual.id_set.m"
          {
#line 33 "module_qual.id_set.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__V_5_5, parse_tree__module_qual__id_set__V_7_7);
          }
#line 33 "module_qual.id_set.m"
      }
#line 33 "module_qual.id_set.m"
  }
#line 33 "module_qual.id_set.m"
}

#line 33 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0(
#line 33 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 33 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 33 "module_qual.id_set.m"
{
#line 33 "module_qual.id_set.m"
  {
#line 33 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 33 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastX_7 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__1_1;
#line 33 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastY_8 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;

#line 33 "module_qual.id_set.m"
    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_7 == parse_tree__module_qual__id_set__CastY_8);
#line 33 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 33 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 33 "module_qual.id_set.m"
    else
#line 33 "module_qual.id_set.m"
      {
#line 33 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
#line 33 "module_qual.id_set.m"
        MR_Integer parse_tree__module_qual__id_set__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 1)));
#line 33 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "module_qual.id_set.m"
        MR_Integer parse_tree__module_qual__id_set__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));

#line 2007 "parse_tree.module_qual.id_set.c"
        {
#line 2009 "parse_tree.module_qual.id_set.c"
          parse_tree__module_qual__id_set__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__id_set__V_3_3, parse_tree__module_qual__id_set__V_5_5);
        }
#line 33 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 2014 "parse_tree.module_qual.id_set.c"
          parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__V_4_4 == parse_tree__module_qual__id_set__V_6_6);
#line 33 "module_qual.id_set.m"
      }
#line 33 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 33 "module_qual.id_set.m"
  }
#line 33 "module_qual.id_set.m"
}

#line 55 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0(
#line 55 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 55 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 55 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 55 "module_qual.id_set.m"
{
#line 55 "module_qual.id_set.m"
  {
#line 55 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 55 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastX_9 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
#line 55 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastY_10 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

#line 55 "module_qual.id_set.m"
    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_9 == parse_tree__module_qual__id_set__CastY_10);
#line 55 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 2049 "parse_tree.module_qual.id_set.c"
      *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "module_qual.id_set.m"
    else
#line 55 "module_qual.id_set.m"
      {
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_8_8;
#line 55 "module_qual.id_set.m"
        MR_Integer parse_tree__module_qual__id_set__V_13_13 = (MR_Integer) parse_tree__module_qual__id_set__V_4_4;
#line 55 "module_qual.id_set.m"
        MR_Integer parse_tree__module_qual__id_set__V_14_14 = (MR_Integer) parse_tree__module_qual__id_set__V_6_6;

#line 55 "module_qual.id_set.m"
        {
#line 55 "module_qual.id_set.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__id_set__V_8_8, parse_tree__module_qual__id_set__V_13_13, parse_tree__module_qual__id_set__V_14_14);
        }
#line 2075 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__V_8_8 == (MR_Integer) 0);
#line 55 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__succeeded = !(parse_tree__module_qual__id_set__succeeded);
#line 55 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 55 "module_qual.id_set.m"
          *parse_tree__module_qual__id_set__HeadVar__1_1 = parse_tree__module_qual__id_set__V_8_8;
#line 55 "module_qual.id_set.m"
        else
#line 55 "module_qual.id_set.m"
          {
#line 55 "module_qual.id_set.m"
            MR_Integer parse_tree__module_qual__id_set__V_15_15 = (MR_Integer) parse_tree__module_qual__id_set__V_5_5;
#line 55 "module_qual.id_set.m"
            MR_Integer parse_tree__module_qual__id_set__V_16_16 = (MR_Integer) parse_tree__module_qual__id_set__V_7_7;

#line 55 "module_qual.id_set.m"
            {
#line 55 "module_qual.id_set.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__V_15_15, parse_tree__module_qual__id_set__V_16_16);
            }
#line 55 "module_qual.id_set.m"
          }
#line 55 "module_qual.id_set.m"
      }
#line 55 "module_qual.id_set.m"
  }
#line 55 "module_qual.id_set.m"
}

#line 55 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0(
#line 55 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 55 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 55 "module_qual.id_set.m"
{
#line 55 "module_qual.id_set.m"
  {
#line 55 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 55 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastX_7 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__1_1;
#line 55 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__CastY_8 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;

#line 55 "module_qual.id_set.m"
    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_7 == parse_tree__module_qual__id_set__CastY_8);
#line 55 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 55 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 55 "module_qual.id_set.m"
    else
#line 55 "module_qual.id_set.m"
      {
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));

#line 2143 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__V_3_3 == parse_tree__module_qual__id_set__V_5_5);
#line 55 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 2147 "parse_tree.module_qual.id_set.c"
          parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__V_4_4 == parse_tree__module_qual__id_set__V_6_6);
#line 55 "module_qual.id_set.m"
      }
#line 55 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 55 "module_qual.id_set.m"
  }
#line 55 "module_qual.id_set.m"
}

#line 82 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0(
#line 82 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 82 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 82 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 82 "module_qual.id_set.m"
{
#line 82 "module_qual.id_set.m"
  {
#line 82 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 82 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
#line 82 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

#line 82 "module_qual.id_set.m"
    {
#line 82 "module_qual.id_set.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
#line 82 "module_qual.id_set.m"
  }
#line 82 "module_qual.id_set.m"
}

#line 82 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0(
#line 82 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 82 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 82 "module_qual.id_set.m"
{
#line 82 "module_qual.id_set.m"
  {
#line 82 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 82 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
#line 82 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

#line 82 "module_qual.id_set.m"
    {
#line 82 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
#line 82 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 82 "module_qual.id_set.m"
  }
#line 82 "module_qual.id_set.m"
}

#line 80 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(
#line 80 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 80 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 80 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 80 "module_qual.id_set.m"
{
#line 80 "module_qual.id_set.m"
  {
#line 80 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 80 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
#line 80 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

#line 80 "module_qual.id_set.m"
    {
#line 80 "module_qual.id_set.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
#line 80 "module_qual.id_set.m"
  }
#line 80 "module_qual.id_set.m"
}

#line 80 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(
#line 80 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 80 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 80 "module_qual.id_set.m"
{
#line 80 "module_qual.id_set.m"
  {
#line 80 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 80 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
#line 80 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

#line 80 "module_qual.id_set.m"
    {
#line 80 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
#line 80 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 80 "module_qual.id_set.m"
  }
#line 80 "module_qual.id_set.m"
}

#line 79 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(
#line 79 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 79 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 79 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 79 "module_qual.id_set.m"
{
#line 79 "module_qual.id_set.m"
  {
#line 79 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 79 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
#line 79 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

#line 79 "module_qual.id_set.m"
    {
#line 79 "module_qual.id_set.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
#line 79 "module_qual.id_set.m"
  }
#line 79 "module_qual.id_set.m"
}

#line 79 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(
#line 79 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 79 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 79 "module_qual.id_set.m"
{
#line 79 "module_qual.id_set.m"
  {
#line 79 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 79 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
#line 79 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

#line 79 "module_qual.id_set.m"
    {
#line 79 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
#line 79 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 79 "module_qual.id_set.m"
  }
#line 79 "module_qual.id_set.m"
}

#line 26 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0(
#line 26 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 26 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 26 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 26 "module_qual.id_set.m"
{
#line 26 "module_qual.id_set.m"
  {
#line 26 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 26 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
#line 26 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

#line 26 "module_qual.id_set.m"
    {
#line 26 "module_qual.id_set.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__Cast_HeadVar1_4, parse_tree__module_qual__id_set__Cast_HeadVar2_5);
    }
#line 26 "module_qual.id_set.m"
  }
#line 26 "module_qual.id_set.m"
}

#line 26 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0(
#line 26 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_1,
#line 26 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 26 "module_qual.id_set.m"
{
#line 2377 "parse_tree.module_qual.id_set.c"
  {
#line 2379 "parse_tree.module_qual.id_set.c"
    MR_bool parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__HeadVar__2_1 == parse_tree__module_qual__id_set__HeadVar__2_2);

#line 2382 "parse_tree.module_qual.id_set.c"
    return parse_tree__module_qual__id_set__succeeded;
#line 2384 "parse_tree.module_qual.id_set.c"
  }
#line 26 "module_qual.id_set.m"
}

#line 131 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0(
#line 131 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 131 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 131 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 131 "module_qual.id_set.m"
{
#line 131 "module_qual.id_set.m"
  {
#line 131 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 131 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
#line 131 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

#line 131 "module_qual.id_set.m"
    {
#line 131 "module_qual.id_set.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
#line 131 "module_qual.id_set.m"
  }
#line 131 "module_qual.id_set.m"
}

#line 131 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0(
#line 131 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 131 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 131 "module_qual.id_set.m"
{
#line 131 "module_qual.id_set.m"
  {
#line 131 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 131 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
#line 131 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

#line 131 "module_qual.id_set.m"
    {
#line 131 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
#line 131 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 131 "module_qual.id_set.m"
  }
#line 131 "module_qual.id_set.m"
}

#line 81 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0(
#line 81 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
#line 81 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 81 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
#line 81 "module_qual.id_set.m"
{
#line 81 "module_qual.id_set.m"
  {
#line 81 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 81 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
#line 81 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

#line 81 "module_qual.id_set.m"
    {
#line 81 "module_qual.id_set.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
#line 81 "module_qual.id_set.m"
  }
#line 81 "module_qual.id_set.m"
}

#line 81 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0(
#line 81 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 81 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
#line 81 "module_qual.id_set.m"
{
#line 81 "module_qual.id_set.m"
  {
#line 81 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 81 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
#line 81 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

#line 81 "module_qual.id_set.m"
    {
#line 81 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[3], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
#line 81 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 81 "module_qual.id_set.m"
  }
#line 81 "module_qual.id_set.m"
}

#line 491 "module_qual.id_set.m"
static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
#line 491 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1)
#line 491 "module_qual.id_set.m"
{
#line 493 "module_qual.id_set.m"
  while (MR_TRUE)
#line 493 "module_qual.id_set.m"
    {
#line 493 "module_qual.id_set.m"
      /* tailcall optimized into a loop */
#line 493 "module_qual.id_set.m"
      {
#line 493 "module_qual.id_set.m"
        MR_bool parse_tree__module_qual__id_set__succeeded;
#line 493 "module_qual.id_set.m"
        MR_String parse_tree__module_qual__id_set__HeadVar__2_2;

#line 493 "module_qual.id_set.m"
        if (((MR_tag((MR_Word) parse_tree__module_qual__id_set__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 494 "module_qual.id_set.m"
          {
#line 494 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__Parent_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
#line 494 "module_qual.id_set.m"
            MR_String parse_tree__module_qual__id_set__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 1)));

#line 494 "module_qual.id_set.m"
            /* direct tailcall eliminated */
#line 494 "module_qual.id_set.m"
            {
#line 494 "module_qual.id_set.m"
              MR_Word parse_tree__module_qual__id_set__HeadVar__1__tmp_copy_1 = parse_tree__module_qual__id_set__Parent_4;

#line 494 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__HeadVar__1_1 = parse_tree__module_qual__id_set__HeadVar__1__tmp_copy_1;
#line 494 "module_qual.id_set.m"
            }
#line 494 "module_qual.id_set.m"
            continue;
#line 494 "module_qual.id_set.m"
          }
#line 493 "module_qual.id_set.m"
        else
#line 493 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
#line 493 "module_qual.id_set.m"
        return parse_tree__module_qual__id_set__HeadVar__2_2;
#line 493 "module_qual.id_set.m"
      }
#line 493 "module_qual.id_set.m"
      break;
#line 493 "module_qual.id_set.m"
    }
#line 491 "module_qual.id_set.m"
}

#line 451 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_5_p_0(
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3,
#line 451 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_4,
#line 451 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_5)
#line 451 "module_qual.id_set.m"
{
#line 454 "module_qual.id_set.m"
  while (MR_TRUE)
#line 454 "module_qual.id_set.m"
    {
#line 454 "module_qual.id_set.m"
      /* tailcall optimized into a loop */
#line 454 "module_qual.id_set.m"
      {
#line 454 "module_qual.id_set.m"
        MR_bool parse_tree__module_qual__id_set__succeeded;

#line 454 "module_qual.id_set.m"
        if ((parse_tree__module_qual__id_set__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "module_qual.id_set.m"
          *parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_5 = parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_4;
#line 454 "module_qual.id_set.m"
        else
#line 456 "module_qual.id_set.m"
          {
#line 456 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__Pair_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 0)));
#line 456 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__Pairs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 1)));
#line 456 "module_qual.id_set.m"
            MR_Integer parse_tree__module_qual__id_set__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Pair_13, (MR_Integer) 0)));
#line 456 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__PermissionsMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Pair_13, (MR_Integer) 1)));
#line 456 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_18;
#line 456 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_23_23;

#line 458 "module_qual.id_set.m"
            {
#line 458 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__HeadVar__2_2, parse_tree__module_qual__id_set__PermissionsMap_17, &parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_18);
            }
#line 462 "module_qual.id_set.m"
            if ((parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_23_23 = parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_4;
#line 462 "module_qual.id_set.m"
            else
#line 463 "module_qual.id_set.m"
              {
#line 464 "module_qual.id_set.m"
                {
#line 464 "module_qual.id_set.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (parse_tree__module_qual__id_set__Arity_16)), parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_4, &parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_23_23);
                }
#line 463 "module_qual.id_set.m"
              }
#line 466 "module_qual.id_set.m"
            /* direct tailcall eliminated */
#line 466 "module_qual.id_set.m"
            {
#line 466 "module_qual.id_set.m"
              MR_Word parse_tree__module_qual__id_set__HeadVar__3__tmp_copy_3 = parse_tree__module_qual__id_set__Pairs_14;
#line 466 "module_qual.id_set.m"
              MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0__tmp_copy_4 = parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_23_23;

#line 466 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_4 = parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0__tmp_copy_4;
#line 466 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__HeadVar__3_3 = parse_tree__module_qual__id_set__HeadVar__3__tmp_copy_3;
#line 466 "module_qual.id_set.m"
            }
#line 466 "module_qual.id_set.m"
            continue;
#line 456 "module_qual.id_set.m"
          }
#line 454 "module_qual.id_set.m"
      }
#line 454 "module_qual.id_set.m"
      break;
#line 454 "module_qual.id_set.m"
    }
#line 451 "module_qual.id_set.m"
}

#line 436 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_4_p_0(
#line 436 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__IdSet_5,
#line 436 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_6,
#line 436 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__SymName_7,
#line 436 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__PossibleArities_8)
#line 436 "module_qual.id_set.m"
{
#line 439 "module_qual.id_set.m"
  {
#line 439 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 439 "module_qual.id_set.m"
    MR_String parse_tree__module_qual__id_set__UnqualName_9;
#line 441 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__SubMap_10;
#line 442 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__conv0_SubMap_10;

#line 440 "module_qual.id_set.m"
    {
#line 440 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__UnqualName_9 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__SymName_7);
    }
#line 442 "module_qual.id_set.m"
    {
#line 442 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__IdSet_5, ((MR_Box) (parse_tree__module_qual__id_set__UnqualName_9)), &parse_tree__module_qual__id_set__conv0_SubMap_10);
    }
#line 442 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 442 "module_qual.id_set.m"
      {
#line 442 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__SubMap_10 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap_10);
#line 442 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 442 "module_qual.id_set.m"
      }
#line 441 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 444 "module_qual.id_set.m"
      {
#line 444 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 444 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__SubMapPairs_11;
#line 444 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_12_12;

#line 444 "module_qual.id_set.m"
        {
#line 444 "module_qual.id_set.m"
          mercury__map__to_assoc_list_2_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_15_15, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0], parse_tree__module_qual__id_set__SubMap_10, &parse_tree__module_qual__id_set__SubMapPairs_11);
        }
#line 446 "module_qual.id_set.m"
        {
#line 446 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__V_12_12 = mercury__set__init_0_f_0(parse_tree__module_qual__id_set__TypeCtorInfo_15_15);
        }
#line 445 "module_qual.id_set.m"
        {
#line 445 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__find_matching_arities_5_p_0(parse_tree__module_qual__id_set__SymName_7, parse_tree__module_qual__id_set__ModuleIdSet_6, parse_tree__module_qual__id_set__SubMapPairs_11, parse_tree__module_qual__id_set__V_12_12, parse_tree__module_qual__id_set__PossibleArities_8);
        }
#line 444 "module_qual.id_set.m"
      }
#line 441 "module_qual.id_set.m"
    else
#line 448 "module_qual.id_set.m"
      {
#line 448 "module_qual.id_set.m"
        {
#line 448 "module_qual.id_set.m"
          mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__module_qual__id_set__PossibleArities_8);
        }
#line 448 "module_qual.id_set.m"
      }
#line 439 "module_qual.id_set.m"
  }
#line 436 "module_qual.id_set.m"
}

#line 421 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__add_modules_in_set_5_p_0(
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__MatchingModuleNames_6,
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleName_7,
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__Permissions_8,
#line 421 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10,
#line 421 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11)
#line 421 "module_qual.id_set.m"
{
#line 428 "module_qual.id_set.m"
  {
#line 428 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 428 "module_qual.id_set.m"
    {
#line 428 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_7)), parse_tree__module_qual__id_set__MatchingModuleNames_6);
    }
#line 428 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 429 "module_qual.id_set.m"
      {
#line 429 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_13_13;

#line 429 "module_qual.id_set.m"
        {
#line 429 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_13_13, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_7));
#line 429 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_13_13, 1) = ((MR_Box) (parse_tree__module_qual__id_set__Permissions_8));
#line 429 "module_qual.id_set.m"
        }
#line 429 "module_qual.id_set.m"
        {
#line 429 "module_qual.id_set.m"
          MR_Word base;
#line 429 "module_qual.id_set.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "module_qual.id_set.m"
          *parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11 = base;
#line 429 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__V_13_13));
#line 429 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10));
#line 429 "module_qual.id_set.m"
        }
#line 429 "module_qual.id_set.m"
      }
#line 428 "module_qual.id_set.m"
    else
#line 428 "module_qual.id_set.m"
      *parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11 = parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10;
#line 428 "module_qual.id_set.m"
  }
#line 421 "module_qual.id_set.m"
}

#line 408 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__add_may_be_unqualified_modules_4_p_0(
#line 408 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleName_5,
#line 408 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__Permissions_6,
#line 408 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10,
#line 408 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11)
#line 408 "module_qual.id_set.m"
{
#line 412 "module_qual.id_set.m"
  {
#line 412 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 412 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__NeedQual_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_6, (MR_Integer) 1)));
#line 413 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_6, (MR_Integer) 0)));

#line 417 "module_qual.id_set.m"
#line 417 "module_qual.id_set.m"
    switch (parse_tree__module_qual__id_set__NeedQual_9) {
#line 417 "module_qual.id_set.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 417 "module_qual.id_set.m"
      case (MR_Integer) 1:
#line 415 "module_qual.id_set.m"
        {
#line 415 "module_qual.id_set.m"
          MR_Word parse_tree__module_qual__id_set__V_13_13;

#line 416 "module_qual.id_set.m"
          {
#line 416 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "module_qual.id_set.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_13_13, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_5));
#line 416 "module_qual.id_set.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_13_13, 1) = ((MR_Box) (parse_tree__module_qual__id_set__Permissions_6));
#line 416 "module_qual.id_set.m"
          }
#line 416 "module_qual.id_set.m"
          {
#line 416 "module_qual.id_set.m"
            MR_Word base;
#line 416 "module_qual.id_set.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "module_qual.id_set.m"
            *parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11 = base;
#line 416 "module_qual.id_set.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__V_13_13));
#line 416 "module_qual.id_set.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10));
#line 416 "module_qual.id_set.m"
          }
#line 415 "module_qual.id_set.m"
        }
#line 417 "module_qual.id_set.m"
        break;
#line 417 "module_qual.id_set.m"
      case (MR_Integer) 0:
#line 418 "module_qual.id_set.m"
        *parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_11 = parse_tree__module_qual__id_set__STATE_VARIABLE_NamesPermissions_0_10;
#line 417 "module_qual.id_set.m"
        break;
#line 417 "module_qual.id_set.m"
    }
#line 412 "module_qual.id_set.m"
  }
#line 408 "module_qual.id_set.m"
}

#line 376 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_3(
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 376 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
#line 376 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4)
#line 376 "module_qual.id_set.m"
{
#line 376 "module_qual.id_set.m"
  {
#line 376 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__closure = parse_tree__module_qual__id_set__closure_arg;
#line 376 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__conv5_STATE_VARIABLE_NamesPermissions_11;

#line 376 "module_qual.id_set.m"
    {
#line 376 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__add_may_be_unqualified_modules_4_p_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3), &parse_tree__module_qual__id_set__conv5_STATE_VARIABLE_NamesPermissions_11);
    }
#line 376 "module_qual.id_set.m"
    *parse_tree__module_qual__id_set__wrapper_arg_4 = ((MR_Box) (parse_tree__module_qual__id_set__conv5_STATE_VARIABLE_NamesPermissions_11));
#line 376 "module_qual.id_set.m"
  }
#line 376 "module_qual.id_set.m"
}

#line 404 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_2(
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
#line 404 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
#line 404 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4)
#line 404 "module_qual.id_set.m"
{
#line 404 "module_qual.id_set.m"
  {
#line 404 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__closure = parse_tree__module_qual__id_set__closure_arg;
#line 404 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__conv3_STATE_VARIABLE_NamesPermissions_11;

#line 404 "module_qual.id_set.m"
    {
#line 404 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__add_modules_in_set_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3), &parse_tree__module_qual__id_set__conv3_STATE_VARIABLE_NamesPermissions_11);
    }
#line 404 "module_qual.id_set.m"
    *parse_tree__module_qual__id_set__wrapper_arg_4 = ((MR_Box) (parse_tree__module_qual__id_set__conv3_STATE_VARIABLE_NamesPermissions_11));
#line 404 "module_qual.id_set.m"
  }
#line 404 "module_qual.id_set.m"
}

#line 390 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_1(
#line 390 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 390 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 390 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_2)
#line 390 "module_qual.id_set.m"
{
#line 390 "module_qual.id_set.m"
  {
#line 390 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__closure = parse_tree__module_qual__id_set__closure_arg;
#line 390 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__conv2_LambdaHeadVar__2_23;

#line 390 "module_qual.id_set.m"
    {
#line 390 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__IntroducedFrom__pred__find_matches_in_permissions_map__391__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), &parse_tree__module_qual__id_set__conv2_LambdaHeadVar__2_23);
    }
#line 390 "module_qual.id_set.m"
    *parse_tree__module_qual__id_set__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__id_set__conv2_LambdaHeadVar__2_23));
#line 390 "module_qual.id_set.m"
  }
#line 390 "module_qual.id_set.m"
}

#line 368 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0(
#line 368 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__SymName_5,
#line 368 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_6,
#line 368 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__PermissionsMap_7,
#line 368 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_8)
#line 368 "module_qual.id_set.m"
{
#line 375 "module_qual.id_set.m"
  {
#line 375 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 375 "module_qual.id_set.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__id_set__SymName_5)) == (MR_mktag((MR_Integer) 1))))
#line 379 "module_qual.id_set.m"
      {
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_38_38;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_39_39;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_5, (MR_Integer) 0)));
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__MatchingParentModuleNamesPermissions_13;
#line 379 "module_qual.id_set.m"
        MR_String parse_tree__module_qual__id_set__ModuleBaseName_14;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__AppendModuleBaseName_15;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__MatchingParentModuleNames_18;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__MatchingNestedModuleNames_19;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__MatchingModuleNamesSet_20;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_24_24;
#line 379 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_25_25;
#line 379 "module_qual.id_set.m"
        MR_String parse_tree__module_qual__id_set__UnqualName_50;
#line 379 "module_qual.id_set.m"
        MR_String parse_tree__module_qual__id_set__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_5, (MR_Integer) 1)));
#line 358 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__PermissionsMap_52;
#line 359 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__TypeInfo_17_56;
#line 359 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__SubMap_51;
#line 359 "module_qual.id_set.m"
        MR_Box parse_tree__module_qual__id_set__conv0_SubMap_51;
#line 360 "module_qual.id_set.m"
        MR_Box parse_tree__module_qual__id_set__conv1_PermissionsMap_52;
#line 404 "module_qual.id_set.m"
        MR_Box parse_tree__module_qual__id_set__conv4_MatchingModuleNamesPermissions_8;

#line 357 "module_qual.id_set.m"
        {
#line 357 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__UnqualName_50 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__ModuleName_10);
        }
#line 359 "module_qual.id_set.m"
        {
#line 359 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__ModuleIdSet_6, ((MR_Box) (parse_tree__module_qual__id_set__UnqualName_50)), &parse_tree__module_qual__id_set__conv0_SubMap_51);
        }
#line 359 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 359 "module_qual.id_set.m"
          {
#line 359 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__SubMap_51 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap_51);
#line 359 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 359 "module_qual.id_set.m"
          }
#line 359 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 359 "module_qual.id_set.m"
          {
#line 3076 "parse_tree.module_qual.id_set.c"
            parse_tree__module_qual__id_set__TypeInfo_17_56 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0];
#line 360 "module_qual.id_set.m"
            {
#line 360 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(parse_tree__module_qual__id_set__TypeInfo_17_56, parse_tree__module_qual__id_set__SubMap_51, (MR_Integer) 0, &parse_tree__module_qual__id_set__conv1_PermissionsMap_52);
            }
#line 360 "module_qual.id_set.m"
            if (parse_tree__module_qual__id_set__succeeded)
#line 360 "module_qual.id_set.m"
              {
#line 360 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__PermissionsMap_52 = ((MR_Word) parse_tree__module_qual__id_set__conv1_PermissionsMap_52);
#line 360 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 360 "module_qual.id_set.m"
              }
#line 359 "module_qual.id_set.m"
          }
#line 358 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 362 "module_qual.id_set.m"
          {
#line 362 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0(parse_tree__module_qual__id_set__ModuleName_10, parse_tree__module_qual__id_set__ModuleIdSet_6, parse_tree__module_qual__id_set__PermissionsMap_52, &parse_tree__module_qual__id_set__MatchingParentModuleNamesPermissions_13);
          }
#line 358 "module_qual.id_set.m"
        else
#line 365 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__MatchingParentModuleNamesPermissions_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "module_qual.id_set.m"
        {
#line 389 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__ModuleBaseName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__ModuleName_10);
        }
#line 390 "module_qual.id_set.m"
        {
#line 390 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__AppendModuleBaseName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__AppendModuleBaseName_15, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_5[0]));
#line 390 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__AppendModuleBaseName_15, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_1));
#line 390 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__AppendModuleBaseName_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__AppendModuleBaseName_15, 3) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleBaseName_14));
#line 390 "module_qual.id_set.m"
        }
#line 3125 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__TypeCtorInfo_38_38 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 3127 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;
#line 393 "module_qual.id_set.m"
        {
#line 393 "module_qual.id_set.m"
          mercury__assoc_list__keys_2_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_38_38, parse_tree__module_qual__id_set__TypeCtorInfo_39_39, parse_tree__module_qual__id_set__MatchingParentModuleNamesPermissions_13, &parse_tree__module_qual__id_set__MatchingParentModuleNames_18);
        }
#line 395 "module_qual.id_set.m"
        {
#line 395 "module_qual.id_set.m"
          mercury__list__map_3_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_38_38, parse_tree__module_qual__id_set__TypeCtorInfo_38_38, parse_tree__module_qual__id_set__AppendModuleBaseName_15, parse_tree__module_qual__id_set__MatchingParentModuleNames_18, &parse_tree__module_qual__id_set__MatchingNestedModuleNames_19);
        }
#line 401 "module_qual.id_set.m"
        {
#line 401 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__V_24_24, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_10));
#line 401 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__V_24_24, 1) = ((MR_Box) (parse_tree__module_qual__id_set__MatchingNestedModuleNames_19));
#line 401 "module_qual.id_set.m"
        }
#line 401 "module_qual.id_set.m"
        {
#line 401 "module_qual.id_set.m"
          mercury__set__list_to_set_2_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_38_38, parse_tree__module_qual__id_set__V_24_24, &parse_tree__module_qual__id_set__MatchingModuleNamesSet_20);
        }
#line 404 "module_qual.id_set.m"
        {
#line 404 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 404 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_25_25, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[1]));
#line 404 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_25_25, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0_2));
#line 404 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 404 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_25_25, 3) = ((MR_Box) (parse_tree__module_qual__id_set__MatchingModuleNamesSet_20));
#line 404 "module_qual.id_set.m"
        }
#line 404 "module_qual.id_set.m"
        {
#line 404 "module_qual.id_set.m"
          mercury__map__foldr_4_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_38_38, parse_tree__module_qual__id_set__TypeCtorInfo_39_39, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_2[0], parse_tree__module_qual__id_set__V_25_25, parse_tree__module_qual__id_set__PermissionsMap_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv4_MatchingModuleNamesPermissions_8);
        }
#line 404 "module_qual.id_set.m"
        *parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_8 = ((MR_Word) parse_tree__module_qual__id_set__conv4_MatchingModuleNamesPermissions_8);
#line 379 "module_qual.id_set.m"
      }
#line 375 "module_qual.id_set.m"
    else
#line 375 "module_qual.id_set.m"
      {
#line 376 "module_qual.id_set.m"
        MR_Box parse_tree__module_qual__id_set__conv6_MatchingModuleNamesPermissions_8;

#line 376 "module_qual.id_set.m"
        {
#line 376 "module_qual.id_set.m"
          mercury__map__foldr_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_2[0], (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[4], parse_tree__module_qual__id_set__PermissionsMap_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv6_MatchingModuleNamesPermissions_8);
        }
#line 376 "module_qual.id_set.m"
        *parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_8 = ((MR_Word) parse_tree__module_qual__id_set__conv6_MatchingModuleNamesPermissions_8);
#line 375 "module_qual.id_set.m"
      }
#line 375 "module_qual.id_set.m"
  }
#line 368 "module_qual.id_set.m"
}

#line 351 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_arity_5_p_0(
#line 351 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__IdSet_6,
#line 351 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_7,
#line 351 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__SymName_8,
#line 351 "module_qual.id_set.m"
  MR_Integer parse_tree__module_qual__id_set__Arity_9,
#line 351 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_10)
#line 351 "module_qual.id_set.m"
{
#line 356 "module_qual.id_set.m"
  {
#line 356 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 356 "module_qual.id_set.m"
    MR_String parse_tree__module_qual__id_set__UnqualName_11;
#line 358 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__PermissionsMap_13;
#line 359 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__TypeInfo_17_17;
#line 359 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__SubMap_12;
#line 359 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__conv0_SubMap_12;
#line 360 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__conv1_PermissionsMap_13;

#line 357 "module_qual.id_set.m"
    {
#line 357 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__UnqualName_11 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__SymName_8);
    }
#line 359 "module_qual.id_set.m"
    {
#line 359 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__IdSet_6, ((MR_Box) (parse_tree__module_qual__id_set__UnqualName_11)), &parse_tree__module_qual__id_set__conv0_SubMap_12);
    }
#line 359 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 359 "module_qual.id_set.m"
      {
#line 359 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__SubMap_12 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap_12);
#line 359 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 359 "module_qual.id_set.m"
      }
#line 359 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 359 "module_qual.id_set.m"
      {
#line 3254 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__TypeInfo_17_17 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0];
#line 360 "module_qual.id_set.m"
        {
#line 360 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(parse_tree__module_qual__id_set__TypeInfo_17_17, parse_tree__module_qual__id_set__SubMap_12, parse_tree__module_qual__id_set__Arity_9, &parse_tree__module_qual__id_set__conv1_PermissionsMap_13);
        }
#line 360 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 360 "module_qual.id_set.m"
          {
#line 360 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__PermissionsMap_13 = ((MR_Word) parse_tree__module_qual__id_set__conv1_PermissionsMap_13);
#line 360 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 360 "module_qual.id_set.m"
          }
#line 359 "module_qual.id_set.m"
      }
#line 358 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 362 "module_qual.id_set.m"
      {
#line 362 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__find_matches_in_permissions_map_4_p_0(parse_tree__module_qual__id_set__SymName_8, parse_tree__module_qual__id_set__ModuleIdSet_7, parse_tree__module_qual__id_set__PermissionsMap_13, parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_10);
      }
#line 358 "module_qual.id_set.m"
    else
#line 365 "module_qual.id_set.m"
      *parse_tree__module_qual__id_set__MatchingModuleNamesPermissions_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "module_qual.id_set.m"
  }
#line 351 "module_qual.id_set.m"
}

#line 342 "module_qual.id_set.m"
static MR_Word MR_CALL 
parse_tree__module_qual__id_set__convert_simple_item_type_1_f_0(
#line 342 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1)
#line 342 "module_qual.id_set.m"
{
#line 344 "module_qual.id_set.m"
  {
#line 344 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 344 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__HeadVar__2_2 = ((&parse_tree__module_qual__id_set_vector_common_4[0 + parse_tree__module_qual__id_set__HeadVar__1_1]))->parse_tree__module_qual__id_set__vector_common_type_4_0__vct_4_f_0;

#line 344 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__HeadVar__2_2;
#line 344 "module_qual.id_set.m"
  }
#line 342 "module_qual.id_set.m"
}

#line 321 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__which_modules_may_be_used_in_interface_3_p_0(
#line 321 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
#line 321 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__2_2,
#line 321 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__HeadVar__3_3)
#line 321 "module_qual.id_set.m"
{
#line 326 "module_qual.id_set.m"
  {
#line 326 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 326 "module_qual.id_set.m"
    if ((parse_tree__module_qual__id_set__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "module_qual.id_set.m"
      {
#line 326 "module_qual.id_set.m"
        *parse_tree__module_qual__id_set__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "module_qual.id_set.m"
        *parse_tree__module_qual__id_set__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "module_qual.id_set.m"
      }
#line 326 "module_qual.id_set.m"
    else
#line 328 "module_qual.id_set.m"
      {
#line 328 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__Pair_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
#line 328 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__Pairs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 1)));
#line 328 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__MayUsePairsTail_8;
#line 328 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__MayNotUseNamesTail_9;
#line 328 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__ModuleName_10;
#line 328 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__MayUseInInterface_11;
#line 328 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_13_13;
#line 331 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_12_12;

#line 329 "module_qual.id_set.m"
        {
#line 329 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__which_modules_may_be_used_in_interface_3_p_0(parse_tree__module_qual__id_set__Pairs_5, &parse_tree__module_qual__id_set__MayUsePairsTail_8, &parse_tree__module_qual__id_set__MayNotUseNamesTail_9);
        }
#line 331 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Pair_4, (MR_Integer) 0)));
#line 331 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Pair_4, (MR_Integer) 1)));
#line 331 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__MayUseInInterface_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_13_13, (MR_Integer) 0)));
#line 331 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_13_13, (MR_Integer) 1)));
#line 336 "module_qual.id_set.m"
#line 336 "module_qual.id_set.m"
        switch (parse_tree__module_qual__id_set__MayUseInInterface_11) {
#line 336 "module_qual.id_set.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 336 "module_qual.id_set.m"
          case (MR_Integer) 0:
#line 337 "module_qual.id_set.m"
            {
#line 338 "module_qual.id_set.m"
              *parse_tree__module_qual__id_set__HeadVar__2_2 = parse_tree__module_qual__id_set__MayUsePairsTail_8;
#line 339 "module_qual.id_set.m"
              {
#line 339 "module_qual.id_set.m"
                MR_Word base;
#line 339 "module_qual.id_set.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "module_qual.id_set.m"
                *parse_tree__module_qual__id_set__HeadVar__3_3 = base;
#line 339 "module_qual.id_set.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_10));
#line 339 "module_qual.id_set.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__MayNotUseNamesTail_9));
#line 339 "module_qual.id_set.m"
              }
#line 337 "module_qual.id_set.m"
            }
#line 336 "module_qual.id_set.m"
            break;
#line 336 "module_qual.id_set.m"
          case (MR_Integer) 1:
#line 333 "module_qual.id_set.m"
            {
#line 334 "module_qual.id_set.m"
              {
#line 334 "module_qual.id_set.m"
                MR_Word base;
#line 334 "module_qual.id_set.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "module_qual.id_set.m"
                *parse_tree__module_qual__id_set__HeadVar__2_2 = base;
#line 334 "module_qual.id_set.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__Pair_4));
#line 334 "module_qual.id_set.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__MayUsePairsTail_8));
#line 334 "module_qual.id_set.m"
              }
#line 335 "module_qual.id_set.m"
              *parse_tree__module_qual__id_set__HeadVar__3_3 = parse_tree__module_qual__id_set__MayNotUseNamesTail_9;
#line 333 "module_qual.id_set.m"
            }
#line 336 "module_qual.id_set.m"
            break;
#line 336 "module_qual.id_set.m"
        }
#line 328 "module_qual.id_set.m"
      }
#line 326 "module_qual.id_set.m"
  }
#line 321 "module_qual.id_set.m"
}

#line 114 "module_qual.id_set.m"
MR_bool MR_CALL 
parse_tree__module_qual__id_set__parent_module_is_imported_3_p_0(
#line 114 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ParentModule_4,
#line 114 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ChildModule_5,
#line 114 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_6)
#line 114 "module_qual.id_set.m"
{
#line 471 "module_qual.id_set.m"
  {
#line 471 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 471 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__TypeInfo_17_17;
#line 471 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_18_18;
#line 471 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_19_19;
#line 471 "module_qual.id_set.m"
    MR_String parse_tree__module_qual__id_set__DirectSubModuleName_7;
#line 471 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__SubMap_9;
#line 471 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__PermissionsMap_10;
#line 471 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__ParentModulePermissions_11;
#line 471 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__V_13_13;
#line 481 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__conv0_SubMap_9;
#line 482 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__conv1_PermissionsMap_10;
#line 483 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__conv2_ParentModulePermissions_11;
#line 484 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__V_12_12;

#line 474 "module_qual.id_set.m"
    {
#line 474 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__DirectSubModuleName_7 = parse_tree__module_qual__id_set__get_first_module_name_1_f_0(parse_tree__module_qual__id_set__ChildModule_5);
    }
#line 481 "module_qual.id_set.m"
    {
#line 481 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__ModuleIdSet_6, ((MR_Box) (parse_tree__module_qual__id_set__DirectSubModuleName_7)), &parse_tree__module_qual__id_set__conv0_SubMap_9);
    }
#line 481 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 481 "module_qual.id_set.m"
      {
#line 481 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__SubMap_9 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap_9);
#line 481 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 481 "module_qual.id_set.m"
      }
#line 471 "module_qual.id_set.m"
    if (parse_tree__module_qual__id_set__succeeded)
#line 471 "module_qual.id_set.m"
      {
#line 3496 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__TypeInfo_17_17 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0];
#line 482 "module_qual.id_set.m"
        {
#line 482 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(parse_tree__module_qual__id_set__TypeInfo_17_17, parse_tree__module_qual__id_set__SubMap_9, (MR_Integer) 0, &parse_tree__module_qual__id_set__conv1_PermissionsMap_10);
        }
#line 482 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 482 "module_qual.id_set.m"
          {
#line 482 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__PermissionsMap_10 = ((MR_Word) parse_tree__module_qual__id_set__conv1_PermissionsMap_10);
#line 482 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 482 "module_qual.id_set.m"
          }
#line 471 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 471 "module_qual.id_set.m"
          {
#line 3517 "parse_tree.module_qual.id_set.c"
            parse_tree__module_qual__id_set__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 3519 "parse_tree.module_qual.id_set.c"
            parse_tree__module_qual__id_set__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;
#line 483 "module_qual.id_set.m"
            {
#line 483 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_18_18, parse_tree__module_qual__id_set__TypeCtorInfo_19_19, parse_tree__module_qual__id_set__PermissionsMap_10, ((MR_Box) (parse_tree__module_qual__id_set__ParentModule_4)), &parse_tree__module_qual__id_set__conv2_ParentModulePermissions_11);
            }
#line 483 "module_qual.id_set.m"
            if (parse_tree__module_qual__id_set__succeeded)
#line 483 "module_qual.id_set.m"
              {
#line 483 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__ParentModulePermissions_11 = ((MR_Word) parse_tree__module_qual__id_set__conv2_ParentModulePermissions_11);
#line 483 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 483 "module_qual.id_set.m"
              }
#line 471 "module_qual.id_set.m"
            if (parse_tree__module_qual__id_set__succeeded)
#line 471 "module_qual.id_set.m"
              {
#line 484 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ParentModulePermissions_11, (MR_Integer) 0)));
#line 484 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ParentModulePermissions_11, (MR_Integer) 1)));
#line 484 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__V_13_13 == (MR_Integer) 1);
#line 471 "module_qual.id_set.m"
              }
#line 471 "module_qual.id_set.m"
          }
#line 471 "module_qual.id_set.m"
      }
#line 471 "module_qual.id_set.m"
    return parse_tree__module_qual__id_set__succeeded;
#line 471 "module_qual.id_set.m"
  }
#line 114 "module_qual.id_set.m"
}

#line 317 "module_qual.id_set.m"
static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_1(
#line 317 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__closure_arg,
#line 317 "module_qual.id_set.m"
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
#line 317 "module_qual.id_set.m"
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_2)
#line 317 "module_qual.id_set.m"
{
#line 317 "module_qual.id_set.m"
  {
#line 317 "module_qual.id_set.m"
    MR_Box parse_tree__module_qual__id_set__closure = parse_tree__module_qual__id_set__closure_arg;
#line 317 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__5_5;

#line 317 "module_qual.id_set.m"
    {
#line 317 "module_qual.id_set.m"
      recompilation__record_used_item_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), &parse_tree__module_qual__id_set__conv0_HeadVar__5_5);
    }
#line 317 "module_qual.id_set.m"
    *parse_tree__module_qual__id_set__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__5_5));
#line 317 "module_qual.id_set.m"
  }
#line 317 "module_qual.id_set.m"
}

#line 104 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0(
#line 104 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__InInt_11,
#line 104 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__ErrorContext_12,
#line 104 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__IdSet_13,
#line 104 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__IdType_14,
#line 104 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__Id0_15,
#line 104 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__SymName_16,
#line 104 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49,
#line 104 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Info_50,
#line 104 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51,
#line 104 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52)
#line 104 "module_qual.id_set.m"
{
#line 209 "module_qual.id_set.m"
  {
#line 209 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 209 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__SymName0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 0)));
#line 209 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 1)));
#line 209 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__Modules_21;
#line 209 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__ModuleNamesPermissions_22;
#line 209 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__MaybeUniqModuleName_23;
#line 209 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70;

#line 212 "module_qual.id_set.m"
    {
#line 212 "module_qual.id_set.m"
      parse_tree__module_qual__mq_info_get_modules_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__Modules_21);
    }
#line 213 "module_qual.id_set.m"
    {
#line 213 "module_qual.id_set.m"
      parse_tree__module_qual__id_set__id_set_search_sym_arity_5_p_0(parse_tree__module_qual__id_set__IdSet_13, parse_tree__module_qual__id_set__Modules_21, parse_tree__module_qual__id_set__SymName0_19, parse_tree__module_qual__id_set__Arity_20, &parse_tree__module_qual__id_set__ModuleNamesPermissions_22);
    }
#line 229 "module_qual.id_set.m"
    if ((parse_tree__module_qual__id_set__ModuleNamesPermissions_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "module_qual.id_set.m"
      {
#line 216 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__ReportErrors_24;

#line 218 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__MaybeUniqModuleName_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "module_qual.id_set.m"
        {
#line 219 "module_qual.id_set.m"
          parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__ReportErrors_24);
        }
#line 226 "module_qual.id_set.m"
#line 226 "module_qual.id_set.m"
        switch (parse_tree__module_qual__id_set__ReportErrors_24) {
#line 226 "module_qual.id_set.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 226 "module_qual.id_set.m"
          case (MR_Integer) 0:
#line 227 "module_qual.id_set.m"
            {
#line 227 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49;
#line 227 "module_qual.id_set.m"
              *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51;
#line 227 "module_qual.id_set.m"
            }
#line 226 "module_qual.id_set.m"
            break;
#line 226 "module_qual.id_set.m"
          case (MR_Integer) 1:
#line 221 "module_qual.id_set.m"
            {
#line 221 "module_qual.id_set.m"
              MR_Word parse_tree__module_qual__id_set__PossibleArities_25;

#line 222 "module_qual.id_set.m"
              {
#line 222 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__id_set_search_sym_4_p_0(parse_tree__module_qual__id_set__IdSet_13, parse_tree__module_qual__id_set__Modules_21, parse_tree__module_qual__id_set__SymName0_19, &parse_tree__module_qual__id_set__PossibleArities_25);
              }
#line 223 "module_qual.id_set.m"
              {
#line 223 "module_qual.id_set.m"
                parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, parse_tree__module_qual__id_set__ErrorContext_12, parse_tree__module_qual__id_set__Id0_15, parse_tree__module_qual__id_set__IdType_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_qual__id_set__PossibleArities_25, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52);
              }
#line 225 "module_qual.id_set.m"
              {
#line 225 "module_qual.id_set.m"
                parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70);
              }
#line 221 "module_qual.id_set.m"
            }
#line 226 "module_qual.id_set.m"
            break;
#line 226 "module_qual.id_set.m"
        }
#line 216 "module_qual.id_set.m"
      }
#line 229 "module_qual.id_set.m"
    else
#line 229 "module_qual.id_set.m"
      {
#line 229 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__ModuleNamesPermissions_22, (MR_Integer) 1)));
#line 229 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__ModuleNamesPermissions_22, (MR_Integer) 0)));

#line 229 "module_qual.id_set.m"
        if ((parse_tree__module_qual__id_set__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "module_qual.id_set.m"
          {
#line 230 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_101_101, (MR_Integer) 0)));
#line 230 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__ModulePermissions_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_101_101, (MR_Integer) 1)));
#line 230 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__MayUseInInterface_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ModulePermissions_27, (MR_Integer) 0)));
#line 232 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ModulePermissions_27, (MR_Integer) 1)));

#line 234 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__InInt_11 == (MR_Integer) 1);
#line 234 "module_qual.id_set.m"
            if (parse_tree__module_qual__id_set__succeeded)
#line 235 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__MayUseInInterface_28 == (MR_Integer) 0);
#line 233 "module_qual.id_set.m"
            if (parse_tree__module_qual__id_set__succeeded)
#line 237 "module_qual.id_set.m"
              {
#line 237 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__ReportErrors_78;

#line 237 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__MaybeUniqModuleName_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "module_qual.id_set.m"
                {
#line 238 "module_qual.id_set.m"
                  parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__ReportErrors_78);
                }
#line 254 "module_qual.id_set.m"
#line 254 "module_qual.id_set.m"
                switch (parse_tree__module_qual__id_set__ReportErrors_78) {
#line 254 "module_qual.id_set.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 254 "module_qual.id_set.m"
                  case (MR_Integer) 0:
#line 255 "module_qual.id_set.m"
                    {
#line 255 "module_qual.id_set.m"
                      parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49;
#line 255 "module_qual.id_set.m"
                      *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51;
#line 255 "module_qual.id_set.m"
                    }
#line 254 "module_qual.id_set.m"
                    break;
#line 254 "module_qual.id_set.m"
                  case (MR_Integer) 1:
#line 240 "module_qual.id_set.m"
                    {
#line 240 "module_qual.id_set.m"
                      MR_String parse_tree__module_qual__id_set__BadBaseName_30;
#line 240 "module_qual.id_set.m"
                      MR_Word parse_tree__module_qual__id_set__BadSymName_31;
#line 240 "module_qual.id_set.m"
                      MR_Word parse_tree__module_qual__id_set__ThisModuleName_32;

#line 241 "module_qual.id_set.m"
                      {
#line 241 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__BadBaseName_30 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__SymName0_19);
                      }
#line 242 "module_qual.id_set.m"
                      {
#line 242 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__BadSymName_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "module_qual.id_set.m"
                        MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__BadSymName_31, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_26));
#line 242 "module_qual.id_set.m"
                        MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__BadSymName_31, 1) = ((MR_Box) (parse_tree__module_qual__id_set__BadBaseName_30));
#line 242 "module_qual.id_set.m"
                      }
#line 243 "module_qual.id_set.m"
                      {
#line 243 "module_qual.id_set.m"
                        parse_tree__module_qual__mq_info_get_this_module_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__ThisModuleName_32);
                      }
#line 244 "module_qual.id_set.m"
                      {
#line 244 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__id_set__ModuleName_26, parse_tree__module_qual__id_set__ThisModuleName_32);
                      }
#line 244 "module_qual.id_set.m"
                      if (parse_tree__module_qual__id_set__succeeded)
#line 245 "module_qual.id_set.m"
                        {
#line 245 "module_qual.id_set.m"
                          parse_tree__module_qual__qual_errors__report_may_not_use_in_interface_6_p_0(parse_tree__module_qual__id_set__ErrorContext_12, parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__BadSymName_31, parse_tree__module_qual__id_set__Arity_20, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52);
                        }
#line 244 "module_qual.id_set.m"
                      else
#line 249 "module_qual.id_set.m"
                        {
#line 249 "module_qual.id_set.m"
                          MR_Word parse_tree__module_qual__id_set__V_64_64;
#line 249 "module_qual.id_set.m"
                          MR_Word parse_tree__module_qual__id_set__PossibleArities_74;

#line 248 "module_qual.id_set.m"
                          {
#line 248 "module_qual.id_set.m"
                            parse_tree__module_qual__id_set__id_set_search_sym_4_p_0(parse_tree__module_qual__id_set__IdSet_13, parse_tree__module_qual__id_set__Modules_21, parse_tree__module_qual__id_set__SymName0_19, &parse_tree__module_qual__id_set__PossibleArities_74);
                          }
#line 251 "module_qual.id_set.m"
                          {
#line 251 "module_qual.id_set.m"
                            parse_tree__module_qual__id_set__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "module_qual.id_set.m"
                            MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__V_64_64, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_26));
#line 251 "module_qual.id_set.m"
                            MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "module_qual.id_set.m"
                          }
#line 250 "module_qual.id_set.m"
                          {
#line 250 "module_qual.id_set.m"
                            parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, parse_tree__module_qual__id_set__ErrorContext_12, parse_tree__module_qual__id_set__Id0_15, parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__V_64_64, parse_tree__module_qual__id_set__PossibleArities_74, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52);
                          }
#line 249 "module_qual.id_set.m"
                        }
#line 253 "module_qual.id_set.m"
                      {
#line 253 "module_qual.id_set.m"
                        parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70);
                      }
#line 240 "module_qual.id_set.m"
                    }
#line 254 "module_qual.id_set.m"
                    break;
#line 254 "module_qual.id_set.m"
                }
#line 237 "module_qual.id_set.m"
              }
#line 233 "module_qual.id_set.m"
            else
#line 258 "module_qual.id_set.m"
              {
#line 258 "module_qual.id_set.m"
                {
#line 258 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__MaybeUniqModuleName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 258 "module_qual.id_set.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__MaybeUniqModuleName_23, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_26));
#line 258 "module_qual.id_set.m"
                }
#line 258 "module_qual.id_set.m"
                *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51;
#line 258 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49;
#line 258 "module_qual.id_set.m"
              }
#line 230 "module_qual.id_set.m"
          }
#line 229 "module_qual.id_set.m"
        else
#line 261 "module_qual.id_set.m"
          {
#line 261 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36;
#line 261 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__NonUsableModuleNames_37;

#line 266 "module_qual.id_set.m"
#line 266 "module_qual.id_set.m"
            switch (parse_tree__module_qual__id_set__InInt_11) {
#line 266 "module_qual.id_set.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 266 "module_qual.id_set.m"
              case (MR_Integer) 0:
#line 267 "module_qual.id_set.m"
                {
#line 268 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36 = parse_tree__module_qual__id_set__ModuleNamesPermissions_22;
#line 269 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__NonUsableModuleNames_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "module_qual.id_set.m"
                }
#line 266 "module_qual.id_set.m"
                break;
#line 266 "module_qual.id_set.m"
              case (MR_Integer) 1:
#line 328 "module_qual.id_set.m"
                {
#line 328 "module_qual.id_set.m"
                  MR_Word parse_tree__module_qual__id_set__MayUsePairsTail_109;
#line 328 "module_qual.id_set.m"
                  MR_Word parse_tree__module_qual__id_set__MayNotUseNamesTail_110;
#line 328 "module_qual.id_set.m"
                  MR_Word parse_tree__module_qual__id_set__ModuleName_111;
#line 328 "module_qual.id_set.m"
                  MR_Word parse_tree__module_qual__id_set__MayUseInInterface_112;
#line 328 "module_qual.id_set.m"
                  MR_Word parse_tree__module_qual__id_set__V_114_114;
#line 331 "module_qual.id_set.m"
                  MR_Word parse_tree__module_qual__id_set__V_113_113;

#line 329 "module_qual.id_set.m"
                  {
#line 329 "module_qual.id_set.m"
                    parse_tree__module_qual__id_set__which_modules_may_be_used_in_interface_3_p_0(parse_tree__module_qual__id_set__V_100_100, &parse_tree__module_qual__id_set__MayUsePairsTail_109, &parse_tree__module_qual__id_set__MayNotUseNamesTail_110);
                  }
#line 331 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__ModuleName_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_101_101, (MR_Integer) 0)));
#line 331 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_101_101, (MR_Integer) 1)));
#line 331 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__MayUseInInterface_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_114_114, (MR_Integer) 0)));
#line 331 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_114_114, (MR_Integer) 1)));
#line 336 "module_qual.id_set.m"
#line 336 "module_qual.id_set.m"
                  switch (parse_tree__module_qual__id_set__MayUseInInterface_112) {
#line 336 "module_qual.id_set.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 336 "module_qual.id_set.m"
                    case (MR_Integer) 0:
#line 337 "module_qual.id_set.m"
                      {
#line 338 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36 = parse_tree__module_qual__id_set__MayUsePairsTail_109;
#line 339 "module_qual.id_set.m"
                        {
#line 339 "module_qual.id_set.m"
                          parse_tree__module_qual__id_set__NonUsableModuleNames_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "module_qual.id_set.m"
                          MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__NonUsableModuleNames_37, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_111));
#line 339 "module_qual.id_set.m"
                          MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__NonUsableModuleNames_37, 1) = ((MR_Box) (parse_tree__module_qual__id_set__MayNotUseNamesTail_110));
#line 339 "module_qual.id_set.m"
                        }
#line 337 "module_qual.id_set.m"
                      }
#line 336 "module_qual.id_set.m"
                      break;
#line 336 "module_qual.id_set.m"
                    case (MR_Integer) 1:
#line 333 "module_qual.id_set.m"
                      {
#line 334 "module_qual.id_set.m"
                        {
#line 334 "module_qual.id_set.m"
                          parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "module_qual.id_set.m"
                          MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36, 0) = ((MR_Box) (parse_tree__module_qual__id_set__V_101_101));
#line 334 "module_qual.id_set.m"
                          MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36, 1) = ((MR_Box) (parse_tree__module_qual__id_set__MayUsePairsTail_109));
#line 334 "module_qual.id_set.m"
                        }
#line 335 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__NonUsableModuleNames_37 = parse_tree__module_qual__id_set__MayNotUseNamesTail_110;
#line 333 "module_qual.id_set.m"
                      }
#line 336 "module_qual.id_set.m"
                      break;
#line 336 "module_qual.id_set.m"
                  }
#line 328 "module_qual.id_set.m"
                }
#line 266 "module_qual.id_set.m"
                break;
#line 266 "module_qual.id_set.m"
            }
#line 285 "module_qual.id_set.m"
            if ((parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "module_qual.id_set.m"
              {
#line 272 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__ReportErrors_86;

#line 274 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__MaybeUniqModuleName_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 275 "module_qual.id_set.m"
                {
#line 275 "module_qual.id_set.m"
                  parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__ReportErrors_86);
                }
#line 282 "module_qual.id_set.m"
#line 282 "module_qual.id_set.m"
                switch (parse_tree__module_qual__id_set__ReportErrors_86) {
#line 282 "module_qual.id_set.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 282 "module_qual.id_set.m"
                  case (MR_Integer) 0:
#line 283 "module_qual.id_set.m"
                    {
#line 283 "module_qual.id_set.m"
                      parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49;
#line 283 "module_qual.id_set.m"
                      *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51;
#line 283 "module_qual.id_set.m"
                    }
#line 282 "module_qual.id_set.m"
                    break;
#line 282 "module_qual.id_set.m"
                  case (MR_Integer) 1:
#line 277 "module_qual.id_set.m"
                    {
#line 277 "module_qual.id_set.m"
                      MR_Word parse_tree__module_qual__id_set__PossibleArities_84;

#line 278 "module_qual.id_set.m"
                      {
#line 278 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__id_set_search_sym_4_p_0(parse_tree__module_qual__id_set__IdSet_13, parse_tree__module_qual__id_set__Modules_21, parse_tree__module_qual__id_set__SymName0_19, &parse_tree__module_qual__id_set__PossibleArities_84);
                      }
#line 279 "module_qual.id_set.m"
                      {
#line 279 "module_qual.id_set.m"
                        parse_tree__module_qual__qual_errors__report_undefined_mq_id_8_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, parse_tree__module_qual__id_set__ErrorContext_12, parse_tree__module_qual__id_set__Id0_15, parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__NonUsableModuleNames_37, parse_tree__module_qual__id_set__PossibleArities_84, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52);
                      }
#line 281 "module_qual.id_set.m"
                      {
#line 281 "module_qual.id_set.m"
                        parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70);
                      }
#line 277 "module_qual.id_set.m"
                    }
#line 282 "module_qual.id_set.m"
                    break;
#line 282 "module_qual.id_set.m"
                }
#line 272 "module_qual.id_set.m"
              }
#line 285 "module_qual.id_set.m"
            else
#line 285 "module_qual.id_set.m"
              {
#line 285 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36, (MR_Integer) 1)));
#line 285 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36, (MR_Integer) 0)));

#line 285 "module_qual.id_set.m"
                if ((parse_tree__module_qual__id_set__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "module_qual.id_set.m"
                  {
#line 286 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__ModuleName_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_103_103, (MR_Integer) 0)));
#line 286 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set___Permissions_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_103_103, (MR_Integer) 1)));

#line 287 "module_qual.id_set.m"
                    {
#line 287 "module_qual.id_set.m"
                      parse_tree__module_qual__id_set__MaybeUniqModuleName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "module_qual.id_set.m"
                      MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__MaybeUniqModuleName_23, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_88));
#line 287 "module_qual.id_set.m"
                    }
#line 286 "module_qual.id_set.m"
                    parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49;
#line 286 "module_qual.id_set.m"
                    *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51;
#line 286 "module_qual.id_set.m"
                  }
#line 285 "module_qual.id_set.m"
                else
#line 289 "module_qual.id_set.m"
                  {
#line 289 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__ReportErrors_89;

#line 290 "module_qual.id_set.m"
                    parse_tree__module_qual__id_set__MaybeUniqModuleName_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 291 "module_qual.id_set.m"
                    {
#line 291 "module_qual.id_set.m"
                      parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__ReportErrors_89);
                    }
#line 299 "module_qual.id_set.m"
#line 299 "module_qual.id_set.m"
                    switch (parse_tree__module_qual__id_set__ReportErrors_89) {
#line 299 "module_qual.id_set.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 299 "module_qual.id_set.m"
                      case (MR_Integer) 0:
#line 300 "module_qual.id_set.m"
                        {
#line 300 "module_qual.id_set.m"
                          parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49;
#line 300 "module_qual.id_set.m"
                          *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51;
#line 300 "module_qual.id_set.m"
                        }
#line 299 "module_qual.id_set.m"
                        break;
#line 299 "module_qual.id_set.m"
                      case (MR_Integer) 1:
#line 293 "module_qual.id_set.m"
                        {
#line 293 "module_qual.id_set.m"
                          MR_Word parse_tree__module_qual__id_set__UsableModuleNames_42;

#line 294 "module_qual.id_set.m"
                          {
#line 294 "module_qual.id_set.m"
                            mercury__assoc_list__keys_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, parse_tree__module_qual__id_set__UsableModuleNamesPermissions_36, &parse_tree__module_qual__id_set__UsableModuleNames_42);
                          }
#line 296 "module_qual.id_set.m"
                          {
#line 296 "module_qual.id_set.m"
                            parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0(parse_tree__module_qual__id_set__ErrorContext_12, parse_tree__module_qual__id_set__Id0_15, parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__UsableModuleNames_42, parse_tree__module_qual__id_set__NonUsableModuleNames_37, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_51, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_52);
                          }
#line 298 "module_qual.id_set.m"
                          {
#line 298 "module_qual.id_set.m"
                            parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_49, &parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70);
                          }
#line 293 "module_qual.id_set.m"
                        }
#line 299 "module_qual.id_set.m"
                        break;
#line 299 "module_qual.id_set.m"
                    }
#line 289 "module_qual.id_set.m"
                  }
#line 285 "module_qual.id_set.m"
              }
#line 261 "module_qual.id_set.m"
          }
#line 229 "module_qual.id_set.m"
      }
#line 308 "module_qual.id_set.m"
    if ((parse_tree__module_qual__id_set__MaybeUniqModuleName_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "module_qual.id_set.m"
      {
#line 307 "module_qual.id_set.m"
        MR_Integer parse_tree__module_qual__id_set__V_43_43;

#line 307 "module_qual.id_set.m"
        *parse_tree__module_qual__id_set__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 0)));
#line 307 "module_qual.id_set.m"
        parse_tree__module_qual__id_set__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 1)));
#line 305 "module_qual.id_set.m"
        *parse_tree__module_qual__id_set__STATE_VARIABLE_Info_50 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70;
#line 305 "module_qual.id_set.m"
      }
#line 308 "module_qual.id_set.m"
    else
#line 309 "module_qual.id_set.m"
      {
#line 309 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__UniqModuleName_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__MaybeUniqModuleName_23, (MR_Integer) 0)));
#line 309 "module_qual.id_set.m"
        MR_String parse_tree__module_qual__id_set__BaseName_45;
#line 309 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__ItemType_46;
#line 309 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__ItemName0_47;
#line 309 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__ItemName_48;
#line 309 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Info_71_71;
#line 309 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__V_72_72;

#line 310 "module_qual.id_set.m"
        {
#line 310 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__BaseName_45 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__SymName0_19);
        }
#line 311 "module_qual.id_set.m"
        {
#line 311 "module_qual.id_set.m"
          MR_Word base;
#line 311 "module_qual.id_set.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "module_qual.id_set.m"
          *parse_tree__module_qual__id_set__SymName_16 = base;
#line 311 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__UniqModuleName_44));
#line 311 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__BaseName_45));
#line 311 "module_qual.id_set.m"
        }
#line 312 "module_qual.id_set.m"
        {
#line 312 "module_qual.id_set.m"
          parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__id_set__InInt_11, parse_tree__module_qual__id_set__UniqModuleName_44, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_70_70, &parse_tree__module_qual__id_set__STATE_VARIABLE_Info_71_71);
        }
#line 313 "module_qual.id_set.m"
        {
#line 313 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__ItemType_46 = parse_tree__module_qual__id_set__convert_simple_item_type_1_f_0(parse_tree__module_qual__id_set__IdType_14);
        }
#line 314 "module_qual.id_set.m"
        {
#line 314 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__ItemName0_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName0_47, 0) = ((MR_Box) (parse_tree__module_qual__id_set__SymName0_19));
#line 314 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName0_47, 1) = ((MR_Box) (parse_tree__module_qual__id_set__Arity_20));
#line 314 "module_qual.id_set.m"
        }
#line 315 "module_qual.id_set.m"
        {
#line 315 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__ItemName_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName_48, 0) = ((MR_Box) (*parse_tree__module_qual__id_set__SymName_16));
#line 315 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName_48, 1) = ((MR_Box) (parse_tree__module_qual__id_set__Arity_20));
#line 315 "module_qual.id_set.m"
        }
#line 317 "module_qual.id_set.m"
        {
#line 317 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 317 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_72_72, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[0]));
#line 317 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_72_72, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_10_p_0_1));
#line 317 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 317 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_72_72, 3) = ((MR_Box) (parse_tree__module_qual__id_set__ItemType_46));
#line 317 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_72_72, 4) = ((MR_Box) (parse_tree__module_qual__id_set__ItemName0_47));
#line 317 "module_qual.id_set.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__V_72_72, 5) = ((MR_Box) (parse_tree__module_qual__id_set__ItemName_48));
#line 317 "module_qual.id_set.m"
        }
#line 316 "module_qual.id_set.m"
        {
#line 316 "module_qual.id_set.m"
          parse_tree__module_qual__update_recompilation_info_3_p_0(parse_tree__module_qual__id_set__V_72_72, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_71_71, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_50);
        }
#line 309 "module_qual.id_set.m"
      }
#line 209 "module_qual.id_set.m"
  }
#line 104 "module_qual.id_set.m"
}

#line 94 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set__id_set_insert_4_p_0(
#line 94 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__Permissions_5,
#line 94 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__MQId_6,
#line 94 "module_qual.id_set.m"
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19,
#line 94 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20)
#line 94 "module_qual.id_set.m"
{
#line 141 "module_qual.id_set.m"
  {
#line 141 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;
#line 141 "module_qual.id_set.m"
    MR_Word parse_tree__module_qual__id_set__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__MQId_6, (MR_Integer) 0)));
#line 141 "module_qual.id_set.m"
    MR_Integer parse_tree__module_qual__id_set__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__MQId_6, (MR_Integer) 1)));

#line 146 "module_qual.id_set.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__id_set__SymName_8)) == (MR_mktag((MR_Integer) 1))))
#line 147 "module_qual.id_set.m"
      {
#line 147 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__TypeInfo_31_31;
#line 147 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_8, (MR_Integer) 0)));
#line 147 "module_qual.id_set.m"
        MR_String parse_tree__module_qual__id_set__BaseName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_8, (MR_Integer) 1)));
#line 147 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__FreshPermissionsMap_13;
#line 147 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__FreshSubMap_14;
#line 153 "module_qual.id_set.m"
        MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_21_21;

#line 151 "module_qual.id_set.m"
        {
#line 151 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__FreshPermissionsMap_13 = mercury__map__singleton_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), ((MR_Box) (parse_tree__module_qual__id_set__Permissions_5)));
        }
#line 4294 "parse_tree.module_qual.id_set.c"
        parse_tree__module_qual__id_set__TypeInfo_31_31 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0];
#line 152 "module_qual.id_set.m"
        {
#line 152 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__FreshSubMap_14 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__module_qual__id_set__TypeInfo_31_31, ((MR_Box) (parse_tree__module_qual__id_set__Arity_9)), ((MR_Box) (parse_tree__module_qual__id_set__FreshPermissionsMap_13)));
        }
#line 153 "module_qual.id_set.m"
        {
#line 153 "module_qual.id_set.m"
          parse_tree__module_qual__id_set__succeeded = mercury__map__insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), ((MR_Box) (parse_tree__module_qual__id_set__FreshSubMap_14)), parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, &parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_21_21);
        }
#line 153 "module_qual.id_set.m"
        if (parse_tree__module_qual__id_set__succeeded)
#line 153 "module_qual.id_set.m"
          *parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20 = parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_21_21;
#line 153 "module_qual.id_set.m"
        else
#line 156 "module_qual.id_set.m"
          {
#line 156 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 156 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__TypeInfo_35_35 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1];
#line 156 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__SubMap0_15;
#line 156 "module_qual.id_set.m"
            MR_Box parse_tree__module_qual__id_set__conv0_SubMap0_15;
#line 157 "module_qual.id_set.m"
            MR_Word parse_tree__module_qual__id_set__PermissionsMap0_16;
#line 157 "module_qual.id_set.m"
            MR_Box parse_tree__module_qual__id_set__conv1_PermissionsMap0_16;

#line 156 "module_qual.id_set.m"
            {
#line 156 "module_qual.id_set.m"
              mercury__map__lookup_3_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_34_34, parse_tree__module_qual__id_set__TypeInfo_35_35, parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), &parse_tree__module_qual__id_set__conv0_SubMap0_15);
            }
#line 156 "module_qual.id_set.m"
            parse_tree__module_qual__id_set__SubMap0_15 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap0_15);
#line 157 "module_qual.id_set.m"
            {
#line 157 "module_qual.id_set.m"
              parse_tree__module_qual__id_set__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(parse_tree__module_qual__id_set__TypeInfo_31_31, parse_tree__module_qual__id_set__SubMap0_15, parse_tree__module_qual__id_set__Arity_9, &parse_tree__module_qual__id_set__conv1_PermissionsMap0_16);
            }
#line 157 "module_qual.id_set.m"
            if (parse_tree__module_qual__id_set__succeeded)
#line 157 "module_qual.id_set.m"
              {
#line 157 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__PermissionsMap0_16 = ((MR_Word) parse_tree__module_qual__id_set__conv1_PermissionsMap0_16);
#line 157 "module_qual.id_set.m"
                parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 157 "module_qual.id_set.m"
              }
#line 157 "module_qual.id_set.m"
            if (parse_tree__module_qual__id_set__succeeded)
#line 159 "module_qual.id_set.m"
              {
#line 159 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__PermissionsMap_17;
#line 159 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__SubMap_18;
#line 173 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__OldPermissions_41;
#line 173 "module_qual.id_set.m"
                MR_Box parse_tree__module_qual__id_set__conv2_OldPermissions_41;

#line 173 "module_qual.id_set.m"
                {
#line 173 "module_qual.id_set.m"
                  parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, parse_tree__module_qual__id_set__PermissionsMap0_16, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), &parse_tree__module_qual__id_set__conv2_OldPermissions_41);
                }
#line 173 "module_qual.id_set.m"
                if (parse_tree__module_qual__id_set__succeeded)
#line 173 "module_qual.id_set.m"
                  {
#line 173 "module_qual.id_set.m"
                    parse_tree__module_qual__id_set__OldPermissions_41 = ((MR_Word) parse_tree__module_qual__id_set__conv2_OldPermissions_41);
#line 173 "module_qual.id_set.m"
                    parse_tree__module_qual__id_set__succeeded = MR_TRUE;
#line 173 "module_qual.id_set.m"
                  }
#line 173 "module_qual.id_set.m"
                if (parse_tree__module_qual__id_set__succeeded)
#line 174 "module_qual.id_set.m"
                  {
#line 174 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__OldMayUseInInterface_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__OldPermissions_41, (MR_Integer) 0)));
#line 174 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__OldNeedQual_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__OldPermissions_41, (MR_Integer) 1)));
#line 174 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__NewMayUseInInterface_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_5, (MR_Integer) 0)));
#line 174 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__NewNeedQual_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_5, (MR_Integer) 1)));
#line 174 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__MayUseInInterface_46;
#line 174 "module_qual.id_set.m"
                    MR_Word parse_tree__module_qual__id_set__NeedQual_47;

#line 181 "module_qual.id_set.m"
#line 181 "module_qual.id_set.m"
                    switch (parse_tree__module_qual__id_set__OldMayUseInInterface_42) {
#line 181 "module_qual.id_set.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 181 "module_qual.id_set.m"
                      case (MR_Integer) 0:
#line 183 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__MayUseInInterface_46 = parse_tree__module_qual__id_set__NewMayUseInInterface_44;
#line 181 "module_qual.id_set.m"
                        break;
#line 181 "module_qual.id_set.m"
                      case (MR_Integer) 1:
#line 180 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__MayUseInInterface_46 = parse_tree__module_qual__id_set__OldMayUseInInterface_42;
#line 181 "module_qual.id_set.m"
                        break;
#line 181 "module_qual.id_set.m"
                    }
#line 188 "module_qual.id_set.m"
#line 188 "module_qual.id_set.m"
                    switch (parse_tree__module_qual__id_set__OldNeedQual_43) {
#line 188 "module_qual.id_set.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 188 "module_qual.id_set.m"
                      case (MR_Integer) 1:
#line 187 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__NeedQual_47 = parse_tree__module_qual__id_set__OldNeedQual_43;
#line 188 "module_qual.id_set.m"
                        break;
#line 188 "module_qual.id_set.m"
                      case (MR_Integer) 0:
#line 190 "module_qual.id_set.m"
                        parse_tree__module_qual__id_set__NeedQual_47 = parse_tree__module_qual__id_set__NewNeedQual_45;
#line 188 "module_qual.id_set.m"
                        break;
#line 188 "module_qual.id_set.m"
                    }
#line 194 "module_qual.id_set.m"
                    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__MayUseInInterface_46 == parse_tree__module_qual__id_set__OldMayUseInInterface_42);
#line 194 "module_qual.id_set.m"
                    if (parse_tree__module_qual__id_set__succeeded)
#line 195 "module_qual.id_set.m"
                      parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__NeedQual_47 == parse_tree__module_qual__id_set__OldNeedQual_43);
#line 193 "module_qual.id_set.m"
                    if (parse_tree__module_qual__id_set__succeeded)
#line 193 "module_qual.id_set.m"
                      parse_tree__module_qual__id_set__PermissionsMap_17 = parse_tree__module_qual__id_set__PermissionsMap0_16;
#line 193 "module_qual.id_set.m"
                    else
#line 199 "module_qual.id_set.m"
                      {
#line 199 "module_qual.id_set.m"
                        MR_Word parse_tree__module_qual__id_set__Permissions_48;

#line 199 "module_qual.id_set.m"
                        {
#line 199 "module_qual.id_set.m"
                          parse_tree__module_qual__id_set__Permissions_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "module_qual.id_set.m"
                          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_48, 0) = ((MR_Box) (parse_tree__module_qual__id_set__MayUseInInterface_46));
#line 199 "module_qual.id_set.m"
                          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_48, 1) = ((MR_Box) (parse_tree__module_qual__id_set__NeedQual_47));
#line 199 "module_qual.id_set.m"
                        }
#line 200 "module_qual.id_set.m"
                        {
#line 200 "module_qual.id_set.m"
                          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), ((MR_Box) (parse_tree__module_qual__id_set__Permissions_48)), parse_tree__module_qual__id_set__PermissionsMap0_16, &parse_tree__module_qual__id_set__PermissionsMap_17);
                        }
#line 199 "module_qual.id_set.m"
                      }
#line 174 "module_qual.id_set.m"
                  }
#line 173 "module_qual.id_set.m"
                else
#line 203 "module_qual.id_set.m"
                  {
#line 203 "module_qual.id_set.m"
                    {
#line 203 "module_qual.id_set.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), ((MR_Box) (parse_tree__module_qual__id_set__Permissions_5)), parse_tree__module_qual__id_set__PermissionsMap0_16, &parse_tree__module_qual__id_set__PermissionsMap_17);
                    }
#line 203 "module_qual.id_set.m"
                  }
#line 160 "module_qual.id_set.m"
                {
#line 160 "module_qual.id_set.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(parse_tree__module_qual__id_set__TypeInfo_31_31, parse_tree__module_qual__id_set__Arity_9, ((MR_Box) (parse_tree__module_qual__id_set__PermissionsMap_17)), parse_tree__module_qual__id_set__SubMap0_15, &parse_tree__module_qual__id_set__SubMap_18);
                }
#line 161 "module_qual.id_set.m"
                {
#line 161 "module_qual.id_set.m"
                  mercury__map__det_update_4_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_34_34, parse_tree__module_qual__id_set__TypeInfo_35_35, ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), ((MR_Box) (parse_tree__module_qual__id_set__SubMap_18)), parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20);
                }
#line 159 "module_qual.id_set.m"
              }
#line 157 "module_qual.id_set.m"
            else
#line 163 "module_qual.id_set.m"
              {
#line 163 "module_qual.id_set.m"
                MR_Word parse_tree__module_qual__id_set__SubMap_27;

#line 163 "module_qual.id_set.m"
                {
#line 163 "module_qual.id_set.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(parse_tree__module_qual__id_set__TypeInfo_31_31, parse_tree__module_qual__id_set__Arity_9, ((MR_Box) (parse_tree__module_qual__id_set__FreshPermissionsMap_13)), parse_tree__module_qual__id_set__SubMap0_15, &parse_tree__module_qual__id_set__SubMap_27);
                }
#line 164 "module_qual.id_set.m"
                {
#line 164 "module_qual.id_set.m"
                  mercury__map__det_update_4_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_34_34, parse_tree__module_qual__id_set__TypeInfo_35_35, ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), ((MR_Box) (parse_tree__module_qual__id_set__SubMap_27)), parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20);
                }
#line 163 "module_qual.id_set.m"
              }
#line 156 "module_qual.id_set.m"
          }
#line 147 "module_qual.id_set.m"
      }
#line 146 "module_qual.id_set.m"
    else
#line 144 "module_qual.id_set.m"
      {
#line 145 "module_qual.id_set.m"
        {
#line 145 "module_qual.id_set.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.id_set", (MR_String) "predicate \140parse_tree.module_qual.id_set.id_set_insert\'/4", (MR_String) "unqualified id");
#line 145 "module_qual.id_set.m"
          return;
        }
#line 144 "module_qual.id_set.m"
      }
#line 141 "module_qual.id_set.m"
  }
#line 94 "module_qual.id_set.m"
}

#line 89 "module_qual.id_set.m"
void MR_CALL 
parse_tree__module_qual__id_set__id_set_init_1_p_0(
#line 89 "module_qual.id_set.m"
  MR_Word * parse_tree__module_qual__id_set__IdSet_2)
#line 89 "module_qual.id_set.m"
{
#line 137 "module_qual.id_set.m"
  {
#line 137 "module_qual.id_set.m"
    MR_bool parse_tree__module_qual__id_set__succeeded;

#line 137 "module_qual.id_set.m"
    {
#line 137 "module_qual.id_set.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__IdSet_2);
    }
#line 137 "module_qual.id_set.m"
  }
#line 89 "module_qual.id_set.m"
}

void mercury__parse_tree__module_qual__id_set__init(void)
{
}

void mercury__parse_tree__module_qual__id_set__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_class_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_type_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_inst_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mode_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_permissions_map_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_type_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_use_in_interface_0);
}

void mercury__parse_tree__module_qual__id_set__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_qual.id_set. */
