/*
** Automatically generated from `get_dependencies.m'
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


/* :- module parse_tree.get_dependencies. */
/* :- implementation. */

/*
INIT mercury__parse_tree__get_dependencies__init
ENDINIT
*/

#include "parse_tree.get_dependencies.mih"


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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 97 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 100 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;

#line 103 "parse_tree.get_dependencies.c"
static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7];

#line 106 "parse_tree.get_dependencies.c"
static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0[7];

#line 109 "parse_tree.get_dependencies.c"
static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0[7];

#line 112 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0;

#line 115 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1];

#line 118 "parse_tree.get_dependencies.c"
static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1];

#line 121 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0[1];

#line 124 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0[1];

#line 127 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0;

#line 130 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1;

#line 133 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2];

#line 136 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2];

#line 139 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2];

#line 142 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0;

#line 145 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1;

#line 148 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2];

#line 151 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2];

#line 154 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2];

#line 157 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0;

#line 160 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1;

#line 163 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2];

#line 166 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2];

#line 169 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2];

#line 172 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0;

#line 175 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1;

#line 178 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2];

#line 181 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2];

#line 184 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2];

#line 187 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0;

#line 190 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1;

#line 193 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2];

#line 196 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2];

#line 199 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2];

#line 202 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0;

#line 205 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1;

#line 208 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2];

#line 211 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2];

#line 214 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2];

#line 217 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0;

#line 220 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1;

#line 223 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2];

#line 226 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2];

#line 229 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2];

#line 232 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
#line 235 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 237 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 240 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
#line 243 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 245 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 247 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 250 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
#line 253 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 255 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 258 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
#line 261 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 263 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 265 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 268 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
#line 271 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 273 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 276 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
#line 279 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 281 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 283 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 286 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
#line 289 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 291 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 294 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
#line 297 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 299 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 301 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 304 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
#line 307 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 309 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 312 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
#line 315 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 317 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 319 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 322 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
#line 325 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 327 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 330 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
#line 333 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 335 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 337 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 340 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
#line 343 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 345 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 348 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
#line 351 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 353 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 355 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 358 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
#line 361 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 363 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 366 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
#line 369 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 371 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 373 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 797 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 797 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 797 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 797 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

#line 392 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 392 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 392 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 392 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 124 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
#line 124 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 124 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 124 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 124 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 124 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

#line 231 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__231__1_2_p_0(
#line 231 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
#line 231 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_33);

#line 338 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
#line 338 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 338 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 334 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
#line 334 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 334 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 350 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
#line 350 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 350 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 354 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
#line 354 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 354 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 342 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
#line 342 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 342 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 358 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
#line 358 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 358 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 346 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
#line 346 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 346 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 373 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
#line 373 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 373 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 840 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
#line 840 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 840 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
#line 840 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3);

#line 832 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
#line 832 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_14_14,
#line 832 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
#line 832 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11,
#line 832 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12);

#line 808 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
#line 808 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 808 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 808 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

#line 782 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
#line 782 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 782 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 782 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 724 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Term_4,
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
#line 724 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);

#line 714 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
#line 714 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 714 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 714 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 703 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
#line 703 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 703 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 703 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 696 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
#line 696 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 696 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 696 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 688 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
#line 688 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 688 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 688 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 563 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
#line 563 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Goal_4,
#line 563 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66,
#line 563 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);

#line 549 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
#line 549 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemClause_4,
#line 549 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
#line 549 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);

#line 539 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
#line 539 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
#line 539 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
#line 539 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);

#line 535 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 535 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 524 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
#line 524 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
#line 524 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
#line 524 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14);

#line 505 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
#line 505 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 505 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 505 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 505 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 482 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
#line 482 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 482 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 482 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 482 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 404 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
#line 404 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 404 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 404 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 231 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
#line 231 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg);

#line 205 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
#line 205 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 205 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
#line 205 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
#line 205 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);

#line 173 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
#line 173 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 173 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 173 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 173 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 173 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

#line 144 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9);

#line 829 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
#line 829 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 829 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 829 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 829 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1];

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][6];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[3][3];


#line 743 "get_dependencies.m"
/* sealed */ struct parse_tree__get_dependencies__vector_common_type_8_0_s {
#line 743 "get_dependencies.m"
  const MR_String parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
#line 743 "get_dependencies.m"
};

static /* final */ const struct parse_tree__get_dependencies__vector_common_type_8_0_s parse_tree__get_dependencies_vector_common_8[36];



static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | (((MR_Integer) 0 << (MR_Integer) 6)))))))))))))))
  },
};

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1)),
    ((MR_Box) (&parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_6[0])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_6[1])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_6[2])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__get_dependencies__vector_common_type_8_0_s parse_tree__get_dependencies_vector_common_8[36] = {
  /* row 0 */   {     (MR_String) "io.format" },
  /* row 1 */   {     (MR_String) "io__format" },
  /* row 2 */   {     (MR_String) "string.format" },
  /* row 3 */   {     (MR_String) "string__format" },
  /* row 4 */   {     (MR_String) "stream__string_writer.format" },
  /* row 5 */   {     NULL },
  /* row 6 */   {     (MR_String) "stream.format" },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     (MR_String) "stream__format" },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     (MR_String) "string_writer__format" },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     (MR_String) "stream__string_writer__format" },
  /* row 22 */   {     (MR_String) "string_writer.format" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "stream.string_writer.format" },
  /* row 32 */   {     (MR_String) "stream.string_writer__format" },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 979 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 987 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0
  }
};

#line 995 "parse_tree.get_dependencies.c"
static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7] = {
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0
};

#line 1006 "parse_tree.get_dependencies.c"
static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0[7] = {
  (MR_String) "iin_tabling",
  (MR_String) "iin_tabling_statistics",
  (MR_String) "iin_stm",
  (MR_String) "iin_exception",
  (MR_String) "iin_string_format",
  (MR_String) "iin_stream_format",
  (MR_String) "iin_io"
};

#line 1017 "parse_tree.get_dependencies.c"
static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0[7] = {
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
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  }
};

#line 1056 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0 = {
  (MR_String) "implicit_import_needs",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0,
  NULL
};

#line 1071 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

#line 1076 "parse_tree.get_dependencies.c"
static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0
  }
};

#line 1085 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

#line 1090 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0[1] = {
  (MR_Integer) 0
};

#line 1095 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "implicit_import_needs",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0
};

#line 1112 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0 = {
  (MR_String) "dont_need_exception",
  (MR_Integer) 0
};

#line 1118 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1 = {
  (MR_String) "do_need_exception",
  (MR_Integer) 1
};

#line 1124 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1
};

#line 1130 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0
};

#line 1136 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1142 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_exception",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0
};

#line 1159 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0 = {
  (MR_String) "dont_need_io",
  (MR_Integer) 0
};

#line 1165 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1 = {
  (MR_String) "do_need_io",
  (MR_Integer) 1
};

#line 1171 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1
};

#line 1177 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0
};

#line 1183 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1189 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_io",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0
};

#line 1206 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0 = {
  (MR_String) "dont_need_stm",
  (MR_Integer) 0
};

#line 1212 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1 = {
  (MR_String) "do_need_stm",
  (MR_Integer) 1
};

#line 1218 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1
};

#line 1224 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0
};

#line 1230 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1236 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stm",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0
};

#line 1253 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0 = {
  (MR_String) "dont_need_stream_format",
  (MR_Integer) 0
};

#line 1259 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1 = {
  (MR_String) "do_need_stream_format",
  (MR_Integer) 1
};

#line 1265 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1
};

#line 1271 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0
};

#line 1277 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1283 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stream_format",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0
};

#line 1300 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0 = {
  (MR_String) "dont_need_string_format",
  (MR_Integer) 0
};

#line 1306 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1 = {
  (MR_String) "do_need_string_format",
  (MR_Integer) 1
};

#line 1312 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1
};

#line 1318 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0
};

#line 1324 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1330 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_string_format",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0
};

#line 1347 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0 = {
  (MR_String) "dont_need_tabling",
  (MR_Integer) 0
};

#line 1353 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1 = {
  (MR_String) "do_need_tabling",
  (MR_Integer) 1
};

#line 1359 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1
};

#line 1365 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0
};

#line 1371 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1377 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0
};

#line 1394 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0 = {
  (MR_String) "dont_need_tabling_statistics",
  (MR_Integer) 0
};

#line 1400 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1 = {
  (MR_String) "do_need_tabling_statistics",
  (MR_Integer) 1
};

#line 1406 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1
};

#line 1412 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0
};

#line 1418 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1424 "parse_tree.get_dependencies.c"
const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling_statistics",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0
};

#line 1441 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
#line 1444 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1446 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1448 "parse_tree.get_dependencies.c"
{
#line 1450 "parse_tree.get_dependencies.c"
  {
#line 1452 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1455 "parse_tree.get_dependencies.c"
    {
#line 1457 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1460 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1462 "parse_tree.get_dependencies.c"
  }
#line 1464 "parse_tree.get_dependencies.c"
}

#line 1467 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
#line 1470 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1472 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1474 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1476 "parse_tree.get_dependencies.c"
{
#line 1478 "parse_tree.get_dependencies.c"
  {
#line 1480 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1483 "parse_tree.get_dependencies.c"
    {
#line 1485 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1488 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1490 "parse_tree.get_dependencies.c"
  }
#line 1492 "parse_tree.get_dependencies.c"
}

#line 1495 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
#line 1498 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1500 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1502 "parse_tree.get_dependencies.c"
{
#line 1504 "parse_tree.get_dependencies.c"
  {
#line 1506 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1509 "parse_tree.get_dependencies.c"
    {
#line 1511 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1514 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1516 "parse_tree.get_dependencies.c"
  }
#line 1518 "parse_tree.get_dependencies.c"
}

#line 1521 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
#line 1524 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1526 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1528 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1530 "parse_tree.get_dependencies.c"
{
#line 1532 "parse_tree.get_dependencies.c"
  {
#line 1534 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1537 "parse_tree.get_dependencies.c"
    {
#line 1539 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1542 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1544 "parse_tree.get_dependencies.c"
  }
#line 1546 "parse_tree.get_dependencies.c"
}

#line 1549 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
#line 1552 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1554 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1556 "parse_tree.get_dependencies.c"
{
#line 1558 "parse_tree.get_dependencies.c"
  {
#line 1560 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1563 "parse_tree.get_dependencies.c"
    {
#line 1565 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_io_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1568 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1570 "parse_tree.get_dependencies.c"
  }
#line 1572 "parse_tree.get_dependencies.c"
}

#line 1575 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
#line 1578 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1580 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1582 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1584 "parse_tree.get_dependencies.c"
{
#line 1586 "parse_tree.get_dependencies.c"
  {
#line 1588 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1591 "parse_tree.get_dependencies.c"
    {
#line 1593 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_io_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1596 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1598 "parse_tree.get_dependencies.c"
  }
#line 1600 "parse_tree.get_dependencies.c"
}

#line 1603 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
#line 1606 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1608 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1610 "parse_tree.get_dependencies.c"
{
#line 1612 "parse_tree.get_dependencies.c"
  {
#line 1614 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1617 "parse_tree.get_dependencies.c"
    {
#line 1619 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1622 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1624 "parse_tree.get_dependencies.c"
  }
#line 1626 "parse_tree.get_dependencies.c"
}

#line 1629 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
#line 1632 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1634 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1636 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1638 "parse_tree.get_dependencies.c"
{
#line 1640 "parse_tree.get_dependencies.c"
  {
#line 1642 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1645 "parse_tree.get_dependencies.c"
    {
#line 1647 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1650 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1652 "parse_tree.get_dependencies.c"
  }
#line 1654 "parse_tree.get_dependencies.c"
}

#line 1657 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
#line 1660 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1662 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1664 "parse_tree.get_dependencies.c"
{
#line 1666 "parse_tree.get_dependencies.c"
  {
#line 1668 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1671 "parse_tree.get_dependencies.c"
    {
#line 1673 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1676 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1678 "parse_tree.get_dependencies.c"
  }
#line 1680 "parse_tree.get_dependencies.c"
}

#line 1683 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
#line 1686 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1688 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1690 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1692 "parse_tree.get_dependencies.c"
{
#line 1694 "parse_tree.get_dependencies.c"
  {
#line 1696 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1699 "parse_tree.get_dependencies.c"
    {
#line 1701 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1704 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1706 "parse_tree.get_dependencies.c"
  }
#line 1708 "parse_tree.get_dependencies.c"
}

#line 1711 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
#line 1714 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1716 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1718 "parse_tree.get_dependencies.c"
{
#line 1720 "parse_tree.get_dependencies.c"
  {
#line 1722 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1725 "parse_tree.get_dependencies.c"
    {
#line 1727 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1730 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1732 "parse_tree.get_dependencies.c"
  }
#line 1734 "parse_tree.get_dependencies.c"
}

#line 1737 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
#line 1740 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1742 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1744 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1746 "parse_tree.get_dependencies.c"
{
#line 1748 "parse_tree.get_dependencies.c"
  {
#line 1750 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1753 "parse_tree.get_dependencies.c"
    {
#line 1755 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1758 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1760 "parse_tree.get_dependencies.c"
  }
#line 1762 "parse_tree.get_dependencies.c"
}

#line 1765 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
#line 1768 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1770 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1772 "parse_tree.get_dependencies.c"
{
#line 1774 "parse_tree.get_dependencies.c"
  {
#line 1776 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1779 "parse_tree.get_dependencies.c"
    {
#line 1781 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1784 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1786 "parse_tree.get_dependencies.c"
  }
#line 1788 "parse_tree.get_dependencies.c"
}

#line 1791 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
#line 1794 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1796 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1798 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1800 "parse_tree.get_dependencies.c"
{
#line 1802 "parse_tree.get_dependencies.c"
  {
#line 1804 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1807 "parse_tree.get_dependencies.c"
    {
#line 1809 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1812 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1814 "parse_tree.get_dependencies.c"
  }
#line 1816 "parse_tree.get_dependencies.c"
}

#line 1819 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
#line 1822 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1824 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1826 "parse_tree.get_dependencies.c"
{
#line 1828 "parse_tree.get_dependencies.c"
  {
#line 1830 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1833 "parse_tree.get_dependencies.c"
    {
#line 1835 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1838 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1840 "parse_tree.get_dependencies.c"
  }
#line 1842 "parse_tree.get_dependencies.c"
}

#line 1845 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
#line 1848 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1850 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1852 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1854 "parse_tree.get_dependencies.c"
{
#line 1856 "parse_tree.get_dependencies.c"
  {
#line 1858 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1861 "parse_tree.get_dependencies.c"
    {
#line 1863 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1866 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1868 "parse_tree.get_dependencies.c"
  }
#line 1870 "parse_tree.get_dependencies.c"
}

#line 797 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 797 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 797 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 797 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
#line 797 "get_dependencies.m"
{
#line 800 "get_dependencies.m"
  while (MR_TRUE)
#line 800 "get_dependencies.m"
    {
#line 800 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 800 "get_dependencies.m"
      {
#line 800 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 800 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 800 "get_dependencies.m"
        else
#line 802 "get_dependencies.m"
          {
#line 802 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 802 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 802 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 4)));
#line 802 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17;
#line 803 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
#line 803 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));
#line 803 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
#line 803 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 3)));

#line 804 "get_dependencies.m"
            {
#line 804 "get_dependencies.m"
              parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(parse_tree__get_dependencies__Items_14, parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17);
            }
#line 805 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 805 "get_dependencies.m"
            {
#line 805 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
#line 805 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17;

#line 805 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
#line 805 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 805 "get_dependencies.m"
            }
#line 805 "get_dependencies.m"
            continue;
#line 802 "get_dependencies.m"
          }
#line 800 "get_dependencies.m"
      }
#line 800 "get_dependencies.m"
      break;
#line 800 "get_dependencies.m"
    }
#line 797 "get_dependencies.m"
}

#line 392 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 392 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 392 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 392 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 392 "get_dependencies.m"
{
#line 395 "get_dependencies.m"
  while (MR_TRUE)
#line 395 "get_dependencies.m"
    {
#line 395 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 395 "get_dependencies.m"
      {
#line 395 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 395 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 395 "get_dependencies.m"
        else
#line 397 "get_dependencies.m"
          {
#line 397 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 397 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 397 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 4)));
#line 397 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17;
#line 398 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies___Section_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
#line 398 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));
#line 398 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Incls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
#line 398 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Imports_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 3)));

#line 399 "get_dependencies.m"
            {
#line 399 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_14, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17);
            }
#line 401 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 401 "get_dependencies.m"
            {
#line 401 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
#line 401 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17;

#line 401 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 401 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 401 "get_dependencies.m"
            }
#line 401 "get_dependencies.m"
            continue;
#line 397 "get_dependencies.m"
          }
#line 395 "get_dependencies.m"
      }
#line 395 "get_dependencies.m"
      break;
#line 395 "get_dependencies.m"
    }
#line 392 "get_dependencies.m"
}

#line 124 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
#line 124 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 124 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 124 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 124 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 124 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
#line 124 "get_dependencies.m"
{
#line 128 "get_dependencies.m"
  while (MR_TRUE)
#line 128 "get_dependencies.m"
    {
#line 128 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 128 "get_dependencies.m"
      {
#line 128 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 128 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "get_dependencies.m"
          {
#line 128 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 128 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 128 "get_dependencies.m"
          }
#line 128 "get_dependencies.m"
        else
#line 130 "get_dependencies.m"
          {
#line 130 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Imports_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 3)));
#line 130 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25;
#line 130 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;
#line 131 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies___Section_16 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 0));
#line 131 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 1)));
#line 131 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Incls_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 2)));
#line 131 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Items_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 4)));

#line 132 "get_dependencies.m"
            {
#line 132 "get_dependencies.m"
              parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_19, parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26);
            }
#line 133 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 133 "get_dependencies.m"
            {
#line 133 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_13;
#line 133 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25;
#line 133 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;

#line 133 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
#line 133 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
#line 133 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 133 "get_dependencies.m"
            }
#line 133 "get_dependencies.m"
            continue;
#line 130 "get_dependencies.m"
          }
#line 128 "get_dependencies.m"
      }
#line 128 "get_dependencies.m"
      break;
#line 128 "get_dependencies.m"
    }
#line 124 "get_dependencies.m"
}

#line 231 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__231__1_2_p_0(
#line 231 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
#line 231 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_33)
#line 231 "get_dependencies.m"
{
#line 231 "get_dependencies.m"
  {
#line 231 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 == parse_tree__get_dependencies__HeadVar__2_33);

#line 231 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 231 "get_dependencies.m"
  }
#line 231 "get_dependencies.m"
}

#line 338 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
#line 338 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 338 "get_dependencies.m"
{
#line 338 "get_dependencies.m"
  {
#line 338 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 338 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 338 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 338 "get_dependencies.m"
    {
#line 338 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
#line 338 "get_dependencies.m"
  }
#line 338 "get_dependencies.m"
}

#line 338 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 338 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 338 "get_dependencies.m"
{
#line 2189 "parse_tree.get_dependencies.c"
  {
#line 2191 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2194 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2196 "parse_tree.get_dependencies.c"
  }
#line 338 "get_dependencies.m"
}

#line 334 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
#line 334 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 334 "get_dependencies.m"
{
#line 334 "get_dependencies.m"
  {
#line 334 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 334 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 334 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 334 "get_dependencies.m"
    {
#line 334 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
#line 334 "get_dependencies.m"
  }
#line 334 "get_dependencies.m"
}

#line 334 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 334 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 334 "get_dependencies.m"
{
#line 2240 "parse_tree.get_dependencies.c"
  {
#line 2242 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2245 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2247 "parse_tree.get_dependencies.c"
  }
#line 334 "get_dependencies.m"
}

#line 350 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
#line 350 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 350 "get_dependencies.m"
{
#line 350 "get_dependencies.m"
  {
#line 350 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 350 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 350 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 350 "get_dependencies.m"
    {
#line 350 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
#line 350 "get_dependencies.m"
  }
#line 350 "get_dependencies.m"
}

#line 350 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 350 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 350 "get_dependencies.m"
{
#line 2291 "parse_tree.get_dependencies.c"
  {
#line 2293 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2296 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2298 "parse_tree.get_dependencies.c"
  }
#line 350 "get_dependencies.m"
}

#line 354 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
#line 354 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 354 "get_dependencies.m"
{
#line 354 "get_dependencies.m"
  {
#line 354 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 354 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 354 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 354 "get_dependencies.m"
    {
#line 354 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
#line 354 "get_dependencies.m"
  }
#line 354 "get_dependencies.m"
}

#line 354 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 354 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 354 "get_dependencies.m"
{
#line 2342 "parse_tree.get_dependencies.c"
  {
#line 2344 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2347 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2349 "parse_tree.get_dependencies.c"
  }
#line 354 "get_dependencies.m"
}

#line 342 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
#line 342 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 342 "get_dependencies.m"
{
#line 342 "get_dependencies.m"
  {
#line 342 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 342 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 342 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 342 "get_dependencies.m"
    {
#line 342 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
#line 342 "get_dependencies.m"
  }
#line 342 "get_dependencies.m"
}

#line 342 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 342 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 342 "get_dependencies.m"
{
#line 2393 "parse_tree.get_dependencies.c"
  {
#line 2395 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2398 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2400 "parse_tree.get_dependencies.c"
  }
#line 342 "get_dependencies.m"
}

#line 358 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
#line 358 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 358 "get_dependencies.m"
{
#line 358 "get_dependencies.m"
  {
#line 358 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 358 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 358 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 358 "get_dependencies.m"
    {
#line 358 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
#line 358 "get_dependencies.m"
  }
#line 358 "get_dependencies.m"
}

#line 358 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 358 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 358 "get_dependencies.m"
{
#line 2444 "parse_tree.get_dependencies.c"
  {
#line 2446 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2449 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2451 "parse_tree.get_dependencies.c"
  }
#line 358 "get_dependencies.m"
}

#line 346 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
#line 346 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 346 "get_dependencies.m"
{
#line 346 "get_dependencies.m"
  {
#line 346 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 346 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 346 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 346 "get_dependencies.m"
    {
#line 346 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
#line 346 "get_dependencies.m"
  }
#line 346 "get_dependencies.m"
}

#line 346 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 346 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 346 "get_dependencies.m"
{
#line 2495 "parse_tree.get_dependencies.c"
  {
#line 2497 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2500 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2502 "parse_tree.get_dependencies.c"
  }
#line 346 "get_dependencies.m"
}

#line 373 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
#line 373 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 373 "get_dependencies.m"
{
#line 373 "get_dependencies.m"
  {
#line 373 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 373 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastX_24 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 373 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastY_25 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 373 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_24 == parse_tree__get_dependencies__CastY_25);
#line 373 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 2531 "parse_tree.get_dependencies.c"
      *parse_tree__get_dependencies__HeadVar__1_1 = (MR_Integer) 0;
#line 373 "get_dependencies.m"
    else
#line 373 "get_dependencies.m"
      {
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_18_18;
#line 373 "get_dependencies.m"
        MR_Integer parse_tree__get_dependencies__V_33_33 = (MR_Integer) parse_tree__get_dependencies__V_4_4;
#line 373 "get_dependencies.m"
        MR_Integer parse_tree__get_dependencies__V_34_34 = (MR_Integer) parse_tree__get_dependencies__V_11_11;

#line 373 "get_dependencies.m"
        {
#line 373 "get_dependencies.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_18_18, parse_tree__get_dependencies__V_33_33, parse_tree__get_dependencies__V_34_34);
        }
#line 2577 "parse_tree.get_dependencies.c"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_18_18 == (MR_Integer) 0);
#line 373 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 373 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_18_18;
#line 373 "get_dependencies.m"
        else
#line 373 "get_dependencies.m"
          {
#line 373 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_19_19;
#line 373 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_35_35 = (MR_Integer) parse_tree__get_dependencies__V_5_5;
#line 373 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_36_36 = (MR_Integer) parse_tree__get_dependencies__V_12_12;

#line 373 "get_dependencies.m"
            {
#line 373 "get_dependencies.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_19_19, parse_tree__get_dependencies__V_35_35, parse_tree__get_dependencies__V_36_36);
            }
#line 2601 "parse_tree.get_dependencies.c"
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_19_19 == (MR_Integer) 0);
#line 373 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 373 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_19_19;
#line 373 "get_dependencies.m"
            else
#line 373 "get_dependencies.m"
              {
#line 373 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_20_20;
#line 373 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_37_37 = (MR_Integer) parse_tree__get_dependencies__V_6_6;
#line 373 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_38_38 = (MR_Integer) parse_tree__get_dependencies__V_13_13;

#line 373 "get_dependencies.m"
                {
#line 373 "get_dependencies.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_20_20, parse_tree__get_dependencies__V_37_37, parse_tree__get_dependencies__V_38_38);
                }
#line 2625 "parse_tree.get_dependencies.c"
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_20_20 == (MR_Integer) 0);
#line 373 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 373 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
                  *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_20_20;
#line 373 "get_dependencies.m"
                else
#line 373 "get_dependencies.m"
                  {
#line 373 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__V_21_21;
#line 373 "get_dependencies.m"
                    MR_Integer parse_tree__get_dependencies__V_39_39 = (MR_Integer) parse_tree__get_dependencies__V_7_7;
#line 373 "get_dependencies.m"
                    MR_Integer parse_tree__get_dependencies__V_40_40 = (MR_Integer) parse_tree__get_dependencies__V_14_14;

#line 373 "get_dependencies.m"
                    {
#line 373 "get_dependencies.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_21_21, parse_tree__get_dependencies__V_39_39, parse_tree__get_dependencies__V_40_40);
                    }
#line 2649 "parse_tree.get_dependencies.c"
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_21_21 == (MR_Integer) 0);
#line 373 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 373 "get_dependencies.m"
                    if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
                      *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_21_21;
#line 373 "get_dependencies.m"
                    else
#line 373 "get_dependencies.m"
                      {
#line 373 "get_dependencies.m"
                        MR_Word parse_tree__get_dependencies__V_22_22;
#line 373 "get_dependencies.m"
                        MR_Integer parse_tree__get_dependencies__V_41_41 = (MR_Integer) parse_tree__get_dependencies__V_8_8;
#line 373 "get_dependencies.m"
                        MR_Integer parse_tree__get_dependencies__V_42_42 = (MR_Integer) parse_tree__get_dependencies__V_15_15;

#line 373 "get_dependencies.m"
                        {
#line 373 "get_dependencies.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_22_22, parse_tree__get_dependencies__V_41_41, parse_tree__get_dependencies__V_42_42);
                        }
#line 2673 "parse_tree.get_dependencies.c"
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_22_22 == (MR_Integer) 0);
#line 373 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 373 "get_dependencies.m"
                        if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
                          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_22_22;
#line 373 "get_dependencies.m"
                        else
#line 373 "get_dependencies.m"
                          {
#line 373 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__V_23_23;
#line 373 "get_dependencies.m"
                            MR_Integer parse_tree__get_dependencies__V_43_43 = (MR_Integer) parse_tree__get_dependencies__V_9_9;
#line 373 "get_dependencies.m"
                            MR_Integer parse_tree__get_dependencies__V_44_44 = (MR_Integer) parse_tree__get_dependencies__V_16_16;

#line 373 "get_dependencies.m"
                            {
#line 373 "get_dependencies.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_23_23, parse_tree__get_dependencies__V_43_43, parse_tree__get_dependencies__V_44_44);
                            }
#line 2697 "parse_tree.get_dependencies.c"
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_23_23 == (MR_Integer) 0);
#line 373 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 373 "get_dependencies.m"
                            if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
                              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_23_23;
#line 373 "get_dependencies.m"
                            else
#line 373 "get_dependencies.m"
                              {
#line 373 "get_dependencies.m"
                                MR_Integer parse_tree__get_dependencies__V_45_45 = (MR_Integer) parse_tree__get_dependencies__V_10_10;
#line 373 "get_dependencies.m"
                                MR_Integer parse_tree__get_dependencies__V_46_46 = (MR_Integer) parse_tree__get_dependencies__V_17_17;

#line 373 "get_dependencies.m"
                                {
#line 373 "get_dependencies.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__V_45_45, parse_tree__get_dependencies__V_46_46);
                                }
#line 373 "get_dependencies.m"
                              }
#line 373 "get_dependencies.m"
                          }
#line 373 "get_dependencies.m"
                      }
#line 373 "get_dependencies.m"
                  }
#line 373 "get_dependencies.m"
              }
#line 373 "get_dependencies.m"
          }
#line 373 "get_dependencies.m"
      }
#line 373 "get_dependencies.m"
  }
#line 373 "get_dependencies.m"
}

#line 373 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 373 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 373 "get_dependencies.m"
{
#line 373 "get_dependencies.m"
  {
#line 373 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 373 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastX_17 = (MR_Integer) parse_tree__get_dependencies__HeadVar__1_1;
#line 373 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastY_18 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;

#line 373 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_17 == parse_tree__get_dependencies__CastY_18);
#line 373 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 373 "get_dependencies.m"
    else
#line 373 "get_dependencies.m"
      {
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 373 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 2795 "parse_tree.get_dependencies.c"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_3_3 == parse_tree__get_dependencies__V_10_10);
#line 373 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
          {
#line 2801 "parse_tree.get_dependencies.c"
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_4_4 == parse_tree__get_dependencies__V_11_11);
#line 373 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
              {
#line 2807 "parse_tree.get_dependencies.c"
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_5_5 == parse_tree__get_dependencies__V_12_12);
#line 373 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
                  {
#line 2813 "parse_tree.get_dependencies.c"
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_6_6 == parse_tree__get_dependencies__V_13_13);
#line 373 "get_dependencies.m"
                    if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
                      {
#line 2819 "parse_tree.get_dependencies.c"
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_7_7 == parse_tree__get_dependencies__V_14_14);
#line 373 "get_dependencies.m"
                        if (parse_tree__get_dependencies__succeeded)
#line 373 "get_dependencies.m"
                          {
#line 2825 "parse_tree.get_dependencies.c"
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_8_8 == parse_tree__get_dependencies__V_15_15);
#line 373 "get_dependencies.m"
                            if (parse_tree__get_dependencies__succeeded)
#line 2829 "parse_tree.get_dependencies.c"
                              parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_9_9 == parse_tree__get_dependencies__V_16_16);
#line 373 "get_dependencies.m"
                          }
#line 373 "get_dependencies.m"
                      }
#line 373 "get_dependencies.m"
                  }
#line 373 "get_dependencies.m"
              }
#line 373 "get_dependencies.m"
          }
#line 373 "get_dependencies.m"
      }
#line 373 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 373 "get_dependencies.m"
  }
#line 373 "get_dependencies.m"
}

#line 840 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
#line 840 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 840 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
#line 840 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3)
#line 840 "get_dependencies.m"
{
#line 844 "get_dependencies.m"
  while (MR_TRUE)
#line 844 "get_dependencies.m"
    {
#line 844 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 844 "get_dependencies.m"
      {
#line 844 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 844 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 844 "get_dependencies.m"
        else
#line 845 "get_dependencies.m"
          {
#line 845 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 845 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 845 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;
#line 846 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Lang_16;
#line 846 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__LiteralOrInclude_18;
#line 847 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
#line 847 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Pragma_11;
#line 848 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12;
#line 848 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13;
#line 848 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_14_14;

#line 847 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 847 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 847 "get_dependencies.m"
              {
#line 847 "get_dependencies.m"
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 848 "get_dependencies.m"
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
#line 848 "get_dependencies.m"
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
#line 848 "get_dependencies.m"
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
#line 848 "get_dependencies.m"
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
#line 852 "get_dependencies.m"
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 1))))
#line 853 "get_dependencies.m"
                  {
#line 853 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 1);

#line 854 "get_dependencies.m"
                    parse_tree__get_dependencies__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 0)));
#line 854 "get_dependencies.m"
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 1)));
#line 853 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 853 "get_dependencies.m"
                  }
#line 852 "get_dependencies.m"
                else
#line 852 "get_dependencies.m"
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 0))))
#line 850 "get_dependencies.m"
                  {
#line 850 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 0);
#line 851 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies___IsLocal_17;

#line 851 "get_dependencies.m"
                    parse_tree__get_dependencies__Lang_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 851 "get_dependencies.m"
                    parse_tree__get_dependencies___IsLocal_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 851 "get_dependencies.m"
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 1)));
#line 850 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 850 "get_dependencies.m"
                  }
#line 852 "get_dependencies.m"
                else
#line 852 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 847 "get_dependencies.m"
              }
#line 846 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 859 "get_dependencies.m"
              if (((MR_tag((MR_Word) parse_tree__get_dependencies__LiteralOrInclude_18)) == (MR_mktag((MR_Integer) 1))))
#line 860 "get_dependencies.m"
                {
#line 860 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__FileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__LiteralOrInclude_18, (MR_Integer) 0)));
#line 860 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__IncludeFile_22;

#line 861 "get_dependencies.m"
                  {
#line 861 "get_dependencies.m"
                    parse_tree__get_dependencies__IncludeFile_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 0) = ((MR_Box) (parse_tree__get_dependencies__Lang_16));
#line 861 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 1) = ((MR_Box) (parse_tree__get_dependencies__FileName_21));
#line 861 "get_dependencies.m"
                  }
#line 862 "get_dependencies.m"
                  {
#line 862 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2, ((MR_Box) (parse_tree__get_dependencies__IncludeFile_22)));
                  }
#line 860 "get_dependencies.m"
                }
#line 859 "get_dependencies.m"
              else
#line 858 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 846 "get_dependencies.m"
            else
#line 846 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 867 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 867 "get_dependencies.m"
            {
#line 867 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 867 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;

#line 867 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2;
#line 867 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 867 "get_dependencies.m"
            }
#line 867 "get_dependencies.m"
            continue;
#line 845 "get_dependencies.m"
          }
#line 844 "get_dependencies.m"
      }
#line 844 "get_dependencies.m"
      break;
#line 844 "get_dependencies.m"
    }
#line 840 "get_dependencies.m"
}

#line 832 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
#line 832 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_14_14,
#line 832 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
#line 832 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11,
#line 832 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12)
#line 832 "get_dependencies.m"
{
#line 836 "get_dependencies.m"
  {
#line 836 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 836 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 4)));
#line 837 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 0));
#line 837 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 1)));
#line 837 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 2)));
#line 837 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 3)));

#line 838 "get_dependencies.m"
    {
#line 838 "get_dependencies.m"
      parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(parse_tree__get_dependencies__Items_10, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12);
    }
#line 836 "get_dependencies.m"
  }
#line 832 "get_dependencies.m"
}

#line 808 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
#line 808 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 808 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 808 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
#line 808 "get_dependencies.m"
{
#line 811 "get_dependencies.m"
  while (MR_TRUE)
#line 811 "get_dependencies.m"
    {
#line 811 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 811 "get_dependencies.m"
      {
#line 811 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 811 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 811 "get_dependencies.m"
        else
#line 813 "get_dependencies.m"
          {
#line 813 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 813 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 813 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;
#line 814 "get_dependencies.m"
            MR_String parse_tree__get_dependencies__FileName_17;
#line 815 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
#line 815 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Pragma_11;
#line 815 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__FTInfo_15;
#line 816 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12;
#line 816 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13;
#line 816 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_14_14;
#line 818 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___PredNameArity_16;

#line 815 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 815 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 815 "get_dependencies.m"
              {
#line 815 "get_dependencies.m"
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 816 "get_dependencies.m"
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
#line 816 "get_dependencies.m"
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
#line 816 "get_dependencies.m"
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
#line 816 "get_dependencies.m"
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
#line 817 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 817 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 817 "get_dependencies.m"
                  {
#line 817 "get_dependencies.m"
                    parse_tree__get_dependencies__FTInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 1)));
#line 818 "get_dependencies.m"
                    parse_tree__get_dependencies___PredNameArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 0)));
#line 818 "get_dependencies.m"
                    parse_tree__get_dependencies__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 1)));
#line 818 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 817 "get_dependencies.m"
                  }
#line 815 "get_dependencies.m"
              }
#line 814 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 820 "get_dependencies.m"
              {
#line 820 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 0) = ((MR_Box) (parse_tree__get_dependencies__FileName_17));
#line 820 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2));
#line 820 "get_dependencies.m"
              }
#line 814 "get_dependencies.m"
            else
#line 814 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 824 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 824 "get_dependencies.m"
            {
#line 824 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 824 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;

#line 824 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
#line 824 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 824 "get_dependencies.m"
            }
#line 824 "get_dependencies.m"
            continue;
#line 813 "get_dependencies.m"
          }
#line 811 "get_dependencies.m"
      }
#line 811 "get_dependencies.m"
      break;
#line 811 "get_dependencies.m"
    }
#line 808 "get_dependencies.m"
}

#line 782 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
#line 782 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 782 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 782 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 782 "get_dependencies.m"
{
#line 785 "get_dependencies.m"
  while (MR_TRUE)
#line 785 "get_dependencies.m"
    {
#line 785 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 785 "get_dependencies.m"
      {
#line 785 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 785 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 785 "get_dependencies.m"
        else
#line 786 "get_dependencies.m"
          {
#line 786 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 786 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 786 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 787 "get_dependencies.m"
            {
#line 787 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__Term_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
#line 788 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 788 "get_dependencies.m"
            {
#line 788 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Terms_8;
#line 788 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 788 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 788 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 788 "get_dependencies.m"
            }
#line 788 "get_dependencies.m"
            continue;
#line 786 "get_dependencies.m"
          }
#line 785 "get_dependencies.m"
      }
#line 785 "get_dependencies.m"
      break;
#line 785 "get_dependencies.m"
    }
#line 782 "get_dependencies.m"
}

#line 724 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Term_4,
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
#line 724 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18)
#line 724 "get_dependencies.m"
{
#line 729 "get_dependencies.m"
  {
#line 729 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 729 "get_dependencies.m"
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 731 "get_dependencies.m"
      {
#line 731 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 0)));
#line 731 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 1)));
#line 731 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21;
#line 731 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 2)));

#line 771 "get_dependencies.m"
#line 771 "get_dependencies.m"
        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Const_8)) {
#line 771 "get_dependencies.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 771 "get_dependencies.m"
          case (MR_Integer) 0:
#line 733 "get_dependencies.m"
            {
#line 733 "get_dependencies.m"
              MR_String parse_tree__get_dependencies__Atom_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)));

#line 735 "get_dependencies.m"
              parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__Atom_10, (MR_String) "format") == 0);
#line 734 "get_dependencies.m"
              if (parse_tree__get_dependencies__succeeded)
#line 738 "get_dependencies.m"
                {
#line 738 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 738 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 738 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 738 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 738 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 738 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 738 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 740 "get_dependencies.m"
                  {
#line 740 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 740 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_32_32 | ((((parse_tree__get_dependencies__V_33_33 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_34_34 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_35_35 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_38_38 << (MR_Integer) 6)))))))))))))));
#line 740 "get_dependencies.m"
                  }
#line 738 "get_dependencies.m"
                }
#line 734 "get_dependencies.m"
              else
#line 741 "get_dependencies.m"
                {
#line 743 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__lo_0;
#line 743 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__hi_1;
#line 743 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__mid_2;
#line 743 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__result_3;

#line 743 "get_dependencies.m"
                  /* binary string simple lookup switch */
#line 743 "get_dependencies.m"
                  parse_tree__get_dependencies__lo_0 = (MR_Integer) 0;
#line 743 "get_dependencies.m"
                  parse_tree__get_dependencies__hi_1 = (MR_Integer) 3;
#line 743 "get_dependencies.m"
                  do
#line 743 "get_dependencies.m"
                    {
#line 743 "get_dependencies.m"
                      parse_tree__get_dependencies__mid_2 = (((parse_tree__get_dependencies__lo_0 + parse_tree__get_dependencies__hi_1)) / (MR_Integer) 2);
#line 743 "get_dependencies.m"
                      parse_tree__get_dependencies__result_3 = MR_strcmp(parse_tree__get_dependencies__Atom_10, ((&parse_tree__get_dependencies_vector_common_8[0 + parse_tree__get_dependencies__mid_2]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0);
#line 743 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__result_3 == (MR_Integer) 0))
#line 743 "get_dependencies.m"
                        {
#line 743 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 743 "get_dependencies.m"
                          /* jump out of search loop */
#line 743 "get_dependencies.m"
                          goto label_0;
#line 743 "get_dependencies.m"
                        }
#line 743 "get_dependencies.m"
                      else
#line 743 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__result_3 < (MR_Integer) 0))
#line 743 "get_dependencies.m"
                        parse_tree__get_dependencies__hi_1 = (parse_tree__get_dependencies__mid_2 - (MR_Integer) 1);
#line 743 "get_dependencies.m"
                      else
#line 743 "get_dependencies.m"
                        parse_tree__get_dependencies__lo_0 = (parse_tree__get_dependencies__mid_2 + (MR_Integer) 1);
#line 743 "get_dependencies.m"
                    }
#line 743 "get_dependencies.m"
                  while ((parse_tree__get_dependencies__lo_0 <= parse_tree__get_dependencies__hi_1));
#line 743 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 743 "get_dependencies.m"
                label_0:;
#line 741 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 749 "get_dependencies.m"
                    {
#line 749 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 749 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 749 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 749 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 749 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 749 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 749 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 749 "get_dependencies.m"
                      {
#line 749 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 749 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_46_46 | ((((parse_tree__get_dependencies__V_47_47 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_48_48 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_49_49 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_51_51 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_52_52 << (MR_Integer) 6)))))))))))))));
#line 749 "get_dependencies.m"
                      }
#line 749 "get_dependencies.m"
                    }
#line 741 "get_dependencies.m"
                  else
#line 750 "get_dependencies.m"
                    {
#line 752 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies__slot_4;
#line 752 "get_dependencies.m"
                      MR_String parse_tree__get_dependencies__str_5;

#line 752 "get_dependencies.m"
                      /* hashed string simple lookup switch */
#line 752 "get_dependencies.m"
                      /* compute the hash value of the input string */
#line 752 "get_dependencies.m"
                      parse_tree__get_dependencies__slot_4 = ((MR_hash_string5(parse_tree__get_dependencies__Atom_10)) & (MR_Integer) 31);
#line 752 "get_dependencies.m"
                      /* no collisions; no hash chain loop */
#line 752 "get_dependencies.m"
                      /* lookup the string for this hash slot */
#line 752 "get_dependencies.m"
                      parse_tree__get_dependencies__str_5 = ((&parse_tree__get_dependencies_vector_common_8[4 + parse_tree__get_dependencies__slot_4]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
#line 752 "get_dependencies.m"
                      /* did we find a match? */
#line 752 "get_dependencies.m"
                      if ((((parse_tree__get_dependencies__str_5 != NULL)) && ((strcmp(parse_tree__get_dependencies__str_5, parse_tree__get_dependencies__Atom_10) == 0))))
#line 752 "get_dependencies.m"
                        {
#line 752 "get_dependencies.m"
                          /* we found a match; look up the results */
#line 752 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 752 "get_dependencies.m"
                          /* jump out of search loop */
#line 752 "get_dependencies.m"
                          goto label_1;
#line 752 "get_dependencies.m"
                        }
#line 752 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 752 "get_dependencies.m"
                    label_1:;
#line 750 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 765 "get_dependencies.m"
                        {
#line 765 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 765 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 765 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 765 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 765 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 765 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 765 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 767 "get_dependencies.m"
                          {
#line 767 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 767 "get_dependencies.m"
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_53_53 | ((((parse_tree__get_dependencies__V_54_54 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_55_55 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_56_56 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_59_59 << (MR_Integer) 6)))))))))))))));
#line 767 "get_dependencies.m"
                          }
#line 765 "get_dependencies.m"
                        }
#line 750 "get_dependencies.m"
                      else
#line 750 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 750 "get_dependencies.m"
                    }
#line 741 "get_dependencies.m"
                }
#line 733 "get_dependencies.m"
            }
#line 771 "get_dependencies.m"
            break;
#line 771 "get_dependencies.m"
          case (MR_Integer) 1:
#line 772 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 771 "get_dependencies.m"
            break;
#line 771 "get_dependencies.m"
          case (MR_Integer) 2:
#line 773 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 771 "get_dependencies.m"
            break;
#line 771 "get_dependencies.m"
          case (MR_Integer) 3:
#line 771 "get_dependencies.m"
#line 771 "get_dependencies.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)))) {
#line 771 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 771 "get_dependencies.m"
              case (MR_Integer) 0:
#line 774 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 771 "get_dependencies.m"
                break;
#line 771 "get_dependencies.m"
              case (MR_Integer) 1:
#line 775 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 771 "get_dependencies.m"
                break;
#line 771 "get_dependencies.m"
              case (MR_Integer) 2:
#line 776 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 771 "get_dependencies.m"
                break;
#line 771 "get_dependencies.m"
            }
#line 771 "get_dependencies.m"
            break;
#line 771 "get_dependencies.m"
        }
#line 779 "get_dependencies.m"
        {
#line 779 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__ArgTerms_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);
        }
#line 731 "get_dependencies.m"
      }
#line 729 "get_dependencies.m"
    else
#line 729 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 729 "get_dependencies.m"
  }
#line 724 "get_dependencies.m"
}

#line 714 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
#line 714 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 714 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 714 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 714 "get_dependencies.m"
{
#line 718 "get_dependencies.m"
  {
#line 718 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 718 "get_dependencies.m"
    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 718 "get_dependencies.m"
    else
#line 720 "get_dependencies.m"
      {
#line 720 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__CatchAnyExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 720 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 1)));
#line 721 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies___Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 0)));

#line 722 "get_dependencies.m"
        {
#line 722 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
        }
#line 720 "get_dependencies.m"
      }
#line 718 "get_dependencies.m"
  }
#line 714 "get_dependencies.m"
}

#line 703 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
#line 703 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 703 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 703 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 703 "get_dependencies.m"
{
#line 706 "get_dependencies.m"
  while (MR_TRUE)
#line 706 "get_dependencies.m"
    {
#line 706 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 706 "get_dependencies.m"
      {
#line 706 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 706 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 706 "get_dependencies.m"
        else
#line 708 "get_dependencies.m"
          {
#line 708 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 708 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 708 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 1)));
#line 708 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;
#line 709 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 0)));

#line 710 "get_dependencies.m"
            {
#line 710 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14);
            }
#line 711 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 711 "get_dependencies.m"
            {
#line 711 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__CatchExprs_8;
#line 711 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;

#line 711 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 711 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 711 "get_dependencies.m"
            }
#line 711 "get_dependencies.m"
            continue;
#line 708 "get_dependencies.m"
          }
#line 706 "get_dependencies.m"
      }
#line 706 "get_dependencies.m"
      break;
#line 706 "get_dependencies.m"
    }
#line 703 "get_dependencies.m"
}

#line 696 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
#line 696 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 696 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 696 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 696 "get_dependencies.m"
{
#line 699 "get_dependencies.m"
  {
#line 699 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 699 "get_dependencies.m"
    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 699 "get_dependencies.m"
    else
#line 700 "get_dependencies.m"
      {
#line 700 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));

#line 701 "get_dependencies.m"
        {
#line 701 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
        }
#line 700 "get_dependencies.m"
      }
#line 699 "get_dependencies.m"
  }
#line 696 "get_dependencies.m"
}

#line 688 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
#line 688 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 688 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 688 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 688 "get_dependencies.m"
{
#line 691 "get_dependencies.m"
  while (MR_TRUE)
#line 691 "get_dependencies.m"
    {
#line 691 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 691 "get_dependencies.m"
      {
#line 691 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 691 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 691 "get_dependencies.m"
        else
#line 692 "get_dependencies.m"
          {
#line 692 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 692 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 692 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 693 "get_dependencies.m"
            {
#line 693 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
#line 694 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 694 "get_dependencies.m"
            {
#line 694 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Goals_8;
#line 694 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 694 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 694 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 694 "get_dependencies.m"
            }
#line 694 "get_dependencies.m"
            continue;
#line 692 "get_dependencies.m"
          }
#line 691 "get_dependencies.m"
      }
#line 691 "get_dependencies.m"
      break;
#line 691 "get_dependencies.m"
    }
#line 688 "get_dependencies.m"
}

#line 563 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
#line 563 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Goal_4,
#line 563 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66,
#line 563 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67)
#line 563 "get_dependencies.m"
{
#line 568 "get_dependencies.m"
  while (MR_TRUE)
#line 568 "get_dependencies.m"
    {
#line 568 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 568 "get_dependencies.m"
      {
#line 568 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 568 "get_dependencies.m"
#line 568 "get_dependencies.m"
        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Goal_4)) {
#line 568 "get_dependencies.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 568 "get_dependencies.m"
          case (MR_Integer) 0:
#line 683 "get_dependencies.m"
            {
#line 683 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__TermA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 683 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__TermB_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 683 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68_68;
#line 683 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));
#line 683 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies___Purity_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

#line 684 "get_dependencies.m"
              {
#line 684 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermA_64, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68_68);
              }
#line 685 "get_dependencies.m"
              {
#line 685 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermB_65, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68_68, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
              }
#line 683 "get_dependencies.m"
            }
#line 568 "get_dependencies.m"
            break;
#line 568 "get_dependencies.m"
          case (MR_Integer) 1:
#line 633 "get_dependencies.m"
            {
#line 633 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__CalleeSymName_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 633 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 633 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74;
#line 633 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));
#line 633 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies___Purity_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 634 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__ModuleName_59;
#line 635 "get_dependencies.m"
              MR_String parse_tree__get_dependencies__V_71_71;

#line 635 "get_dependencies.m"
              parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_57)) == (MR_mktag((MR_Integer) 1)));
#line 635 "get_dependencies.m"
              if (parse_tree__get_dependencies__succeeded)
#line 635 "get_dependencies.m"
                {
#line 635 "get_dependencies.m"
                  parse_tree__get_dependencies__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_57, (MR_Integer) 0)));
#line 635 "get_dependencies.m"
                  parse_tree__get_dependencies__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_57, (MR_Integer) 1)));
#line 635 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_71_71, (MR_String) "format") == 0);
#line 635 "get_dependencies.m"
                }
#line 634 "get_dependencies.m"
              if (parse_tree__get_dependencies__succeeded)
#line 637 "get_dependencies.m"
                {
#line 639 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__V_217_217;

#line 638 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_59)) == (MR_mktag((MR_Integer) 0)));
#line 638 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 638 "get_dependencies.m"
                    {
#line 638 "get_dependencies.m"
                      parse_tree__get_dependencies__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 0)));
#line 639 "get_dependencies.m"
                      if ((strcmp(parse_tree__get_dependencies__V_217_217, (MR_String) "io") == 0))
#line 639 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 639 "get_dependencies.m"
                      else
#line 639 "get_dependencies.m"
                      if ((strcmp(parse_tree__get_dependencies__V_217_217, (MR_String) "string") == 0))
#line 638 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 639 "get_dependencies.m"
                      else
#line 639 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 638 "get_dependencies.m"
                    }
#line 637 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 645 "get_dependencies.m"
                    {
#line 645 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_162_162 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 645 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_163_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 645 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 645 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 645 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 645 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 645 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 645 "get_dependencies.m"
                      {
#line 645 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_162_162 | ((((parse_tree__get_dependencies__V_163_163 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_164_164 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_165_165 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_167_167 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_168_168 << (MR_Integer) 6)))))))))))))));
#line 645 "get_dependencies.m"
                      }
#line 645 "get_dependencies.m"
                    }
#line 637 "get_dependencies.m"
                  else
#line 646 "get_dependencies.m"
                    {
#line 648 "get_dependencies.m"
                      if (((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_59)) == (MR_mktag((MR_Integer) 1))))
#line 649 "get_dependencies.m"
                        {
#line 649 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 0)));
#line 649 "get_dependencies.m"
                          MR_String parse_tree__get_dependencies__V_77_77;
#line 649 "get_dependencies.m"
                          MR_String parse_tree__get_dependencies__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 1)));

#line 650 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_78_78, (MR_String) "string_writer") == 0);
#line 649 "get_dependencies.m"
                          if (parse_tree__get_dependencies__succeeded)
#line 649 "get_dependencies.m"
                            {
#line 649 "get_dependencies.m"
                              parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__V_76_76)) == (MR_mktag((MR_Integer) 0)));
#line 649 "get_dependencies.m"
                              if (parse_tree__get_dependencies__succeeded)
#line 649 "get_dependencies.m"
                                {
#line 649 "get_dependencies.m"
                                  parse_tree__get_dependencies__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_76_76, (MR_Integer) 0)));
#line 649 "get_dependencies.m"
                                  parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_77_77, (MR_String) "stream") == 0);
#line 649 "get_dependencies.m"
                                }
#line 649 "get_dependencies.m"
                            }
#line 649 "get_dependencies.m"
                        }
#line 648 "get_dependencies.m"
                      else
#line 648 "get_dependencies.m"
                        {
#line 648 "get_dependencies.m"
                          MR_String parse_tree__get_dependencies__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 0)));

#line 648 "get_dependencies.m"
                          if ((strcmp(parse_tree__get_dependencies__V_218_218, (MR_String) "stream") == 0))
#line 647 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 648 "get_dependencies.m"
                          else
#line 648 "get_dependencies.m"
                          if ((strcmp(parse_tree__get_dependencies__V_218_218, (MR_String) "string_writer") == 0))
#line 648 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 648 "get_dependencies.m"
                          else
#line 648 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 648 "get_dependencies.m"
                        }
#line 646 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 657 "get_dependencies.m"
                        {
#line 657 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_169_169 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 657 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 657 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 657 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 657 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_175_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 657 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_173_173 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 657 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 659 "get_dependencies.m"
                          {
#line 659 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 659 "get_dependencies.m"
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_169_169 | ((((parse_tree__get_dependencies__V_170_170 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_171_171 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_172_172 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_175_175 << (MR_Integer) 6)))))))))))))));
#line 659 "get_dependencies.m"
                          }
#line 657 "get_dependencies.m"
                        }
#line 646 "get_dependencies.m"
                      else
#line 646 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
#line 646 "get_dependencies.m"
                    }
#line 637 "get_dependencies.m"
                }
#line 634 "get_dependencies.m"
              else
#line 665 "get_dependencies.m"
                {
#line 666 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__V_85_85;

#line 666 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_57)) == (MR_mktag((MR_Integer) 0)));
#line 666 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 666 "get_dependencies.m"
                    {
#line 666 "get_dependencies.m"
                      parse_tree__get_dependencies__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CalleeSymName_57, (MR_Integer) 0)));
#line 666 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_85_85, (MR_String) "format") == 0);
#line 666 "get_dependencies.m"
                    }
#line 665 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 673 "get_dependencies.m"
                    {
#line 673 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_183_183 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 674 "get_dependencies.m"
                      {
#line 674 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 674 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_183_183 | ((((parse_tree__get_dependencies__V_184_184 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_185_185 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_186_186 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_189_189 << (MR_Integer) 6)))))))))))))));
#line 674 "get_dependencies.m"
                      }
#line 673 "get_dependencies.m"
                    }
#line 665 "get_dependencies.m"
                  else
#line 665 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
#line 665 "get_dependencies.m"
                }
#line 678 "get_dependencies.m"
              {
#line 678 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__Args_58, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
              }
#line 633 "get_dependencies.m"
            }
#line 568 "get_dependencies.m"
            break;
#line 568 "get_dependencies.m"
          case (MR_Integer) 2:
#line 578 "get_dependencies.m"
            {
#line 578 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 578 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 578 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_111;
#line 573 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));

#line 579 "get_dependencies.m"
              {
#line 579 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_111);
              }
#line 580 "get_dependencies.m"
              /* direct tailcall eliminated */
#line 580 "get_dependencies.m"
              {
#line 580 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_10;
#line 580 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_111;

#line 580 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
#line 580 "get_dependencies.m"
                parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 580 "get_dependencies.m"
              }
#line 580 "get_dependencies.m"
              continue;
#line 578 "get_dependencies.m"
            }
#line 568 "get_dependencies.m"
            break;
#line 568 "get_dependencies.m"
          case (MR_Integer) 3:
#line 568 "get_dependencies.m"
#line 568 "get_dependencies.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)))) {
#line 568 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 568 "get_dependencies.m"
              case (MR_Integer) 0:
#line 568 "get_dependencies.m"
                *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 1:
#line 620 "get_dependencies.m"
                {
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Cond_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Else_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_97_97;
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98;
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Then_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

#line 621 "get_dependencies.m"
                  {
#line 621 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Cond_48, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_97_97);
                  }
#line 622 "get_dependencies.m"
                  {
#line 622 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_129, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_97_97, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98);
                  }
#line 623 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 623 "get_dependencies.m"
                  {
#line 623 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__Else_49;
#line 623 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98;

#line 623 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
#line 623 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 623 "get_dependencies.m"
                  }
#line 623 "get_dependencies.m"
                  continue;
#line 620 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 2:
#line 578 "get_dependencies.m"
                {
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_199;
#line 575 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 579 "get_dependencies.m"
                  {
#line 579 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_197, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_199);
                  }
#line 580 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 580 "get_dependencies.m"
                  {
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_198;
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_199;

#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 580 "get_dependencies.m"
                  }
#line 580 "get_dependencies.m"
                  continue;
#line 578 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 3:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 582 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_16;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 4:
#line 569 "get_dependencies.m"
                *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 5:
#line 578 "get_dependencies.m"
                {
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_208;
#line 574 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 579 "get_dependencies.m"
                  {
#line 579 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_206, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_208);
                  }
#line 580 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 580 "get_dependencies.m"
                  {
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_207;
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_208;

#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 580 "get_dependencies.m"
                  }
#line 580 "get_dependencies.m"
                  continue;
#line 578 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 6:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 583 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 583 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 583 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_213;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 7:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 584 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 584 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Purity_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_212;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 8:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 585 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 585 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 585 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 585 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 585 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_211;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 9:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 587 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 587 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 587 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 587 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 587 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_210;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 10:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 589 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 589 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 589 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 589 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 589 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_209;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 11:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 591 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 591 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Detism_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_215;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 12:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 592 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 592 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___SwitchVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_214;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 13:
#line 595 "get_dependencies.m"
                {
#line 595 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 593 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 593 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Detism_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 593 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___SwitchVar_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 596 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 596 "get_dependencies.m"
                  {
#line 596 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_216;

#line 596 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 596 "get_dependencies.m"
                  }
#line 596 "get_dependencies.m"
                  continue;
#line 595 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 14:
#line 599 "get_dependencies.m"
                {
#line 599 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeIO_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 599 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;
#line 599 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 598 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 598 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___CompCond_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 598 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___RunCond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 598 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Mutables_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 603 "get_dependencies.m"
                  if ((parse_tree__get_dependencies__MaybeIO_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
#line 603 "get_dependencies.m"
                  else
#line 601 "get_dependencies.m"
                    {
#line 602 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_134_134 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 602 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 602 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 602 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 602 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 602 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 602 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 602 "get_dependencies.m"
                      {
#line 602 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 602 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_134_134 | ((((parse_tree__get_dependencies__V_135_135 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_136_136 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_137_137 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_138_138 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_139_139 << (MR_Integer) 5)) | (((MR_Integer) 1 << (MR_Integer) 6)))))))))))))));
#line 602 "get_dependencies.m"
                      }
#line 601 "get_dependencies.m"
                    }
#line 606 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 606 "get_dependencies.m"
                  {
#line 606 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_123;
#line 606 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 606 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
#line 606 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 606 "get_dependencies.m"
                  }
#line 606 "get_dependencies.m"
                  continue;
#line 599 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 15:
#line 626 "get_dependencies.m"
                {
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MainGoal_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__OrElseGoals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93;
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_95_95;
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_148_148 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_152_152 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 625 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 625 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Outer_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 625 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Inner_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 625 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OutputVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 627 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 627 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 628 "get_dependencies.m"
                  {
#line 628 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 628 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_148_148 | ((((parse_tree__get_dependencies__V_149_149 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_152_152 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_153_153 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_154_154 << (MR_Integer) 6)))))))))))))));
#line 628 "get_dependencies.m"
                  }
#line 629 "get_dependencies.m"
                  {
#line 629 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__MainGoal_54, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_95_95);
                  }
#line 630 "get_dependencies.m"
                  {
#line 630 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(parse_tree__get_dependencies__OrElseGoals_55, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_95_95, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
                  }
#line 626 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 16:
#line 609 "get_dependencies.m"
                {
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeElse_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Catches_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeCatchAny_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 7)));
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100;
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_102_102;
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105;
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 608 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 608 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___MaybeIO_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_141_141 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 610 "get_dependencies.m"
                  {
#line 610 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 610 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_141_141 | ((((parse_tree__get_dependencies__V_142_142 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_143_143 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_145_145 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_146_146 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_147_147 << (MR_Integer) 6)))))))))))))));
#line 610 "get_dependencies.m"
                  }
#line 611 "get_dependencies.m"
                  {
#line 611 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoal_124, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_102_102);
                  }
#line 612 "get_dependencies.m"
                  {
#line 612 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_43, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_102_102, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103);
                  }
#line 613 "get_dependencies.m"
                  {
#line 613 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(parse_tree__get_dependencies__MaybeElse_44, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104);
                  }
#line 615 "get_dependencies.m"
                  {
#line 615 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(parse_tree__get_dependencies__Catches_45, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105);
                  }
#line 617 "get_dependencies.m"
                  {
#line 617 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(parse_tree__get_dependencies__MaybeCatchAny_46, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
                  }
#line 609 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 17:
#line 578 "get_dependencies.m"
                {
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_205;
#line 576 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 579 "get_dependencies.m"
                  {
#line 579 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_203, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_205);
                  }
#line 580 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 580 "get_dependencies.m"
                  {
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_204;
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_205;

#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 580 "get_dependencies.m"
                  }
#line 580 "get_dependencies.m"
                  continue;
#line 578 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 18:
#line 578 "get_dependencies.m"
                {
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_202;
#line 577 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 579 "get_dependencies.m"
                  {
#line 579 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_200, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_202);
                  }
#line 580 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 580 "get_dependencies.m"
                  {
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_201;
#line 580 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_202;

#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
#line 580 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 580 "get_dependencies.m"
                  }
#line 580 "get_dependencies.m"
                  continue;
#line 578 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
              case (MR_Integer) 19:
#line 680 "get_dependencies.m"
                {
#line 680 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__EventArgs_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 680 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 680 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies___EventName_61 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 681 "get_dependencies.m"
                  {
#line 681 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__EventArgs_62, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
                  }
#line 680 "get_dependencies.m"
                }
#line 568 "get_dependencies.m"
                break;
#line 568 "get_dependencies.m"
            }
#line 568 "get_dependencies.m"
            break;
#line 568 "get_dependencies.m"
        }
#line 568 "get_dependencies.m"
      }
#line 568 "get_dependencies.m"
      break;
#line 568 "get_dependencies.m"
    }
#line 563 "get_dependencies.m"
}

#line 549 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
#line 549 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemClause_4,
#line 549 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
#line 549 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17)
#line 549 "get_dependencies.m"
{
#line 552 "get_dependencies.m"
  {
#line 552 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 552 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__HeadTerms_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 2)));
#line 552 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__MaybeGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 5)));
#line 552 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18;
#line 553 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 0)));
#line 553 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 1)));
#line 553 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Origin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 3)));
#line 553 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 4)));
#line 553 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 6)));
#line 553 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 7)));

#line 555 "get_dependencies.m"
    {
#line 555 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__HeadTerms_8, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18);
    }
#line 559 "get_dependencies.m"
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__MaybeGoal_11)) == (MR_mktag((MR_Integer) 0))))
#line 560 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18;
#line 559 "get_dependencies.m"
    else
#line 557 "get_dependencies.m"
      {
#line 557 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__MaybeGoal_11, (MR_Integer) 0)));

#line 558 "get_dependencies.m"
        {
#line 558 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_14, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);
        }
#line 557 "get_dependencies.m"
      }
#line 552 "get_dependencies.m"
  }
#line 549 "get_dependencies.m"
}

#line 539 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
#line 539 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
#line 539 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
#line 539 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17)
#line 539 "get_dependencies.m"
{
#line 543 "get_dependencies.m"
  {
#line 543 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 543 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__InitValue_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 5)));
#line 544 "get_dependencies.m"
    MR_String parse_tree__get_dependencies___Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 0)));
#line 544 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___OrigType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 1)));
#line 544 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 2)));
#line 544 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___OrigInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 3)));
#line 544 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 4)));
#line 544 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Attrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 6)));
#line 544 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 7)));
#line 544 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 8)));
#line 544 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 9)));

#line 547 "get_dependencies.m"
    {
#line 547 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__InitValue_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);
    }
#line 543 "get_dependencies.m"
  }
#line 539 "get_dependencies.m"
}

#line 535 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 535 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 535 "get_dependencies.m"
{
#line 535 "get_dependencies.m"
  {
#line 535 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 535 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_17;

#line 535 "get_dependencies.m"
    {
#line 535 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_17);
    }
#line 535 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_17));
#line 535 "get_dependencies.m"
  }
#line 535 "get_dependencies.m"
}

#line 524 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
#line 524 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
#line 524 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
#line 524 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14)
#line 524 "get_dependencies.m"
{
#line 528 "get_dependencies.m"
  {
#line 528 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 528 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ProcDef_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 2)));
#line 529 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 0)));
#line 529 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 1)));
#line 529 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 3)));
#line 529 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 4)));

#line 533 "get_dependencies.m"
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__ProcDef_8)) == (MR_mktag((MR_Integer) 1))))
#line 534 "get_dependencies.m"
      {
#line 534 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__ItemClauses_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ProcDef_8, (MR_Integer) 0)));
#line 535 "get_dependencies.m"
        MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14;

#line 535 "get_dependencies.m"
        {
#line 535 "get_dependencies.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[2], parse_tree__get_dependencies__ItemClauses_12, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
        }
#line 535 "get_dependencies.m"
        *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
#line 534 "get_dependencies.m"
      }
#line 533 "get_dependencies.m"
    else
#line 532 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13;
#line 528 "get_dependencies.m"
  }
#line 524 "get_dependencies.m"
}

#line 505 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
#line 505 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 505 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 505 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 505 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 505 "get_dependencies.m"
{
#line 505 "get_dependencies.m"
  {
#line 505 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 505 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_17;

#line 505 "get_dependencies.m"
    {
#line 505 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_17);
    }
#line 505 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_17));
#line 505 "get_dependencies.m"
  }
#line 505 "get_dependencies.m"
}

#line 482 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
#line 482 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 482 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 482 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 482 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 482 "get_dependencies.m"
{
#line 482 "get_dependencies.m"
  {
#line 482 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 482 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14;

#line 482 "get_dependencies.m"
    {
#line 482 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14);
    }
#line 482 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14));
#line 482 "get_dependencies.m"
  }
#line 482 "get_dependencies.m"
}

#line 404 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
#line 404 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 404 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 404 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 404 "get_dependencies.m"
{
#line 407 "get_dependencies.m"
  while (MR_TRUE)
#line 407 "get_dependencies.m"
    {
#line 407 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 407 "get_dependencies.m"
      {
#line 407 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 407 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 407 "get_dependencies.m"
        else
#line 408 "get_dependencies.m"
          {
#line 408 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 408 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 413 "get_dependencies.m"
#line 413 "get_dependencies.m"
            switch (MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) {
#line 413 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 413 "get_dependencies.m"
              case (MR_Integer) 0:
#line 410 "get_dependencies.m"
                {
#line 410 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ItemClause_10 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 0);

#line 411 "get_dependencies.m"
                  {
#line 411 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(parse_tree__get_dependencies__ItemClause_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107);
                  }
#line 410 "get_dependencies.m"
                }
#line 413 "get_dependencies.m"
                break;
#line 413 "get_dependencies.m"
              case (MR_Integer) 1:
#line 490 "get_dependencies.m"
                {
#line 490 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ItemTypeDefn_69 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 1);
#line 490 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__TypeDefn_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 2)));
#line 491 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TypeCtorName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 0)));
#line 491 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TypeParams_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 1)));
#line 491 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TVarSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 3)));
#line 491 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Context_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 4)));
#line 491 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies___SeqNum_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 5)));

#line 496 "get_dependencies.m"
#line 496 "get_dependencies.m"
                  switch (MR_tag((MR_Word) parse_tree__get_dependencies__TypeDefn_72)) {
#line 496 "get_dependencies.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 496 "get_dependencies.m"
                    case (MR_Integer) 0:
#line 494 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 496 "get_dependencies.m"
                      break;
#line 496 "get_dependencies.m"
                    case (MR_Integer) 1:
#line 497 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 496 "get_dependencies.m"
                      break;
#line 496 "get_dependencies.m"
                    case (MR_Integer) 2:
#line 499 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 496 "get_dependencies.m"
                      break;
#line 496 "get_dependencies.m"
                    case (MR_Integer) 3:
#line 496 "get_dependencies.m"
#line 496 "get_dependencies.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 0)))) {
#line 496 "get_dependencies.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 496 "get_dependencies.m"
                        case (MR_Integer) 0:
#line 502 "get_dependencies.m"
                          {
#line 502 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__SolverTypeDetails_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 1)));
#line 502 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__MutableItems_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 4)));
#line 501 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___MaybeUnifyComparePredNames_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 2)));
#line 503 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___RepresentationType_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 0)));
#line 503 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___InitPred_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 1)));
#line 503 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___GroundInst_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 2)));
#line 503 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___AnyInst_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 3)));
#line 505 "get_dependencies.m"
                            MR_Box parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 505 "get_dependencies.m"
                            {
#line 505 "get_dependencies.m"
                              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[1], parse_tree__get_dependencies__MutableItems_84, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_107_107);
                            }
#line 505 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = ((MR_Word) parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_107_107);
#line 502 "get_dependencies.m"
                          }
#line 496 "get_dependencies.m"
                          break;
#line 496 "get_dependencies.m"
                        case (MR_Integer) 1:
#line 508 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 496 "get_dependencies.m"
                          break;
#line 496 "get_dependencies.m"
                      }
#line 496 "get_dependencies.m"
                      break;
#line 496 "get_dependencies.m"
                  }
#line 490 "get_dependencies.m"
                }
#line 413 "get_dependencies.m"
                break;
#line 413 "get_dependencies.m"
              case (MR_Integer) 2:
#line 512 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                break;
#line 413 "get_dependencies.m"
              case (MR_Integer) 3:
#line 413 "get_dependencies.m"
#line 413 "get_dependencies.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) {
#line 413 "get_dependencies.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 413 "get_dependencies.m"
                  case (MR_Integer) 0:
#line 513 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 1:
#line 514 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 2:
#line 515 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 3:
#line 414 "get_dependencies.m"
                    {
#line 414 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemPragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 414 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 0)));
#line 415 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 1)));
#line 415 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 2)));
#line 415 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 3)));

#line 433 "get_dependencies.m"
#line 433 "get_dependencies.m"
                      switch (MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_12)) {
#line 433 "get_dependencies.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 433 "get_dependencies.m"
                        case (MR_Integer) 0:
#line 434 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                          break;
#line 433 "get_dependencies.m"
                        case (MR_Integer) 1:
#line 435 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                          break;
#line 433 "get_dependencies.m"
                        case (MR_Integer) 2:
#line 436 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                          break;
#line 433 "get_dependencies.m"
                        case (MR_Integer) 3:
#line 433 "get_dependencies.m"
#line 433 "get_dependencies.m"
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 0)))) {
#line 433 "get_dependencies.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 433 "get_dependencies.m"
                            case (MR_Integer) 0:
#line 438 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 1:
#line 439 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 2:
#line 440 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 3:
#line 441 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 4:
#line 442 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 5:
#line 443 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 6:
#line 444 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 7:
#line 445 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 8:
#line 446 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 9:
#line 447 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 10:
#line 448 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 11:
#line 449 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 12:
#line 450 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 13:
#line 417 "get_dependencies.m"
                              {
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__TableInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 1)));
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__MaybeAttributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 3)));
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 418 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 0)));
#line 418 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 1)));
#line 418 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 2)));
#line 419 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 419 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 419 "get_dependencies.m"
                                {
#line 419 "get_dependencies.m"
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 419 "get_dependencies.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103, 0) = ((MR_Box) (((MR_Integer) 1 | ((((parse_tree__get_dependencies__V_128_128 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_129_129 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 6)))))))))))))));
#line 419 "get_dependencies.m"
                                }
#line 422 "get_dependencies.m"
                                if ((parse_tree__get_dependencies__MaybeAttributes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "get_dependencies.m"
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 422 "get_dependencies.m"
                                else
#line 423 "get_dependencies.m"
                                  {
#line 423 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__MaybeAttributes_20, (MR_Integer) 0)));
#line 423 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__StatsAttr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 2)));
#line 424 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 0)));
#line 424 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 1)));
#line 424 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 3)));

#line 429 "get_dependencies.m"
#line 429 "get_dependencies.m"
                                    switch (parse_tree__get_dependencies__StatsAttr_22) {
#line 429 "get_dependencies.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 429 "get_dependencies.m"
                                      case (MR_Integer) 1:
#line 430 "get_dependencies.m"
                                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 429 "get_dependencies.m"
                                        break;
#line 429 "get_dependencies.m"
                                      case (MR_Integer) 0:
#line 426 "get_dependencies.m"
                                        {
#line 428 "get_dependencies.m"
                                          {
#line 428 "get_dependencies.m"
                                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 428 "get_dependencies.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107, 0) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_129_129 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 6)))))))))))))));
#line 428 "get_dependencies.m"
                                          }
#line 426 "get_dependencies.m"
                                        }
#line 429 "get_dependencies.m"
                                        break;
#line 429 "get_dependencies.m"
                                    }
#line 423 "get_dependencies.m"
                                  }
#line 417 "get_dependencies.m"
                              }
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 14:
#line 451 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 15:
#line 453 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 16:
#line 454 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 17:
#line 455 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 18:
#line 456 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 19:
#line 457 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 20:
#line 458 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 21:
#line 459 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 22:
#line 460 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 23:
#line 461 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 24:
#line 462 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 25:
#line 463 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 26:
#line 464 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 27:
#line 437 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 28:
#line 452 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                            case (MR_Integer) 29:
#line 465 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 433 "get_dependencies.m"
                              break;
#line 433 "get_dependencies.m"
                          }
#line 433 "get_dependencies.m"
                          break;
#line 433 "get_dependencies.m"
                      }
#line 414 "get_dependencies.m"
                    }
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 4:
#line 469 "get_dependencies.m"
                    {
#line 469 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemPromise_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 469 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 1)));
#line 470 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___PromiseType_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 0)));
#line 470 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___VarSet_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 2)));
#line 470 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___UnivQuantVars_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 3)));
#line 470 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 4)));
#line 470 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 5)));

#line 472 "get_dependencies.m"
                      {
#line 472 "get_dependencies.m"
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_57, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107);
                      }
#line 469 "get_dependencies.m"
                    }
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 5:
#line 516 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 6:
#line 474 "get_dependencies.m"
                    {
#line 474 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemInstance_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 474 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__InstanceBody_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 4)));
#line 475 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___DerivingClass_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 0)));
#line 475 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___ClassName_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 1)));
#line 475 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Types_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 2)));
#line 475 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___OriginalTypes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 3)));
#line 475 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___ModuleContainingInstance_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 6)));
#line 475 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 7)));
#line 475 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 8)));
#line 475 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___VarSet_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 5)));

#line 480 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__InstanceBody_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 480 "get_dependencies.m"
                      else
#line 481 "get_dependencies.m"
                        {
#line 481 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__InstanceMethods_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__InstanceBody_65, (MR_Integer) 0)));
#line 482 "get_dependencies.m"
                          MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 482 "get_dependencies.m"
                          {
#line 482 "get_dependencies.m"
                            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[0], parse_tree__get_dependencies__InstanceMethods_67, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_107_107);
                          }
#line 482 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_107_107);
#line 481 "get_dependencies.m"
                        }
#line 474 "get_dependencies.m"
                    }
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 7:
#line 517 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 8:
#line 518 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 9:
#line 486 "get_dependencies.m"
                    {
#line 486 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemMutableInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));

#line 487 "get_dependencies.m"
                      {
#line 487 "get_dependencies.m"
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(parse_tree__get_dependencies__ItemMutableInfo_68, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107);
                      }
#line 486 "get_dependencies.m"
                    }
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                  case (MR_Integer) 10:
#line 519 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 413 "get_dependencies.m"
                    break;
#line 413 "get_dependencies.m"
                }
#line 413 "get_dependencies.m"
                break;
#line 413 "get_dependencies.m"
            }
#line 522 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 522 "get_dependencies.m"
            {
#line 522 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 522 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 522 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 522 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 522 "get_dependencies.m"
            }
#line 522 "get_dependencies.m"
            continue;
#line 408 "get_dependencies.m"
          }
#line 407 "get_dependencies.m"
      }
#line 407 "get_dependencies.m"
      break;
#line 407 "get_dependencies.m"
    }
#line 404 "get_dependencies.m"
}

#line 231 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
#line 231 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg)
#line 231 "get_dependencies.m"
{
#line 231 "get_dependencies.m"
  {
#line 231 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 231 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;

#line 231 "get_dependencies.m"
    {
#line 231 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__231__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 4))));
    }
#line 231 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 231 "get_dependencies.m"
  }
#line 231 "get_dependencies.m"
}

#line 205 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
#line 205 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 205 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
#line 205 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
#line 205 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24)
#line 205 "get_dependencies.m"
{
#line 209 "get_dependencies.m"
  {
#line 209 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_85_85 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedTabling_9;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedSTM_11;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedException_12;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedStringFormat_13;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedStreamFormat_14;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedIO_15;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Deep_16;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Target_17;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__HighLevelCode_18;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Parallel_19;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__UseRegions_20;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__SSDBTraceLevel_21;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__DisableSSDB_22;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_26_26;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_28_28;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
#line 209 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81;

#line 210 "get_dependencies.m"
    {
#line 210 "get_dependencies.m"
      parse_tree__get_dependencies__V_26_26 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 210 "get_dependencies.m"
    {
#line 210 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23 = mercury__set__make_singleton_set_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_26_26)));
    }
#line 211 "get_dependencies.m"
    {
#line 211 "get_dependencies.m"
      parse_tree__get_dependencies__V_28_28 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 211 "get_dependencies.m"
    {
#line 211 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27 = mercury__set__make_singleton_set_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_28_28)));
    }
#line 212 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedTabling_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 212 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 212 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedSTM_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 212 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedException_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 212 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedStringFormat_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 212 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedStreamFormat_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 212 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedIO_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 229 "get_dependencies.m"
#line 229 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedTabling_9) {
#line 229 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 229 "get_dependencies.m"
      case (MR_Integer) 1:
#line 221 "get_dependencies.m"
        {
#line 221 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_42_42;
#line 221 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43;

#line 222 "get_dependencies.m"
          {
#line 222 "get_dependencies.m"
            parse_tree__get_dependencies__V_42_42 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
          }
#line 222 "get_dependencies.m"
          {
#line 222 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_42_42)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43);
          }
#line 226 "get_dependencies.m"
#line 226 "get_dependencies.m"
          switch (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10) {
#line 226 "get_dependencies.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 226 "get_dependencies.m"
            case (MR_Integer) 1:
#line 224 "get_dependencies.m"
              {
#line 224 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_44_44;

#line 225 "get_dependencies.m"
                {
#line 225 "get_dependencies.m"
                  parse_tree__get_dependencies__V_44_44 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
                }
#line 225 "get_dependencies.m"
                {
#line 225 "get_dependencies.m"
                  mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_44_44)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45);
                }
#line 224 "get_dependencies.m"
              }
#line 226 "get_dependencies.m"
              break;
#line 226 "get_dependencies.m"
            case (MR_Integer) 0:
#line 227 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43;
#line 226 "get_dependencies.m"
              break;
#line 226 "get_dependencies.m"
          }
#line 221 "get_dependencies.m"
        }
#line 229 "get_dependencies.m"
        break;
#line 229 "get_dependencies.m"
      case (MR_Integer) 0:
#line 230 "get_dependencies.m"
        {
#line 230 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_29_29;

#line 231 "get_dependencies.m"
          {
#line 231 "get_dependencies.m"
            parse_tree__get_dependencies__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 231 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[0]));
#line 231 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 1) = ((MR_Box) (parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1));
#line 231 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 231 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 3) = ((MR_Box) (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10));
#line 231 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 4) = ((MR_Box) ((MR_Integer) 0));
#line 231 "get_dependencies.m"
          }
#line 231 "get_dependencies.m"
          {
#line 231 "get_dependencies.m"
            mercury__require__expect_4_p_0(parse_tree__get_dependencies__V_29_29, (MR_String) "parse_tree.get_dependencies", (MR_String) "predicate \140parse_tree.get_dependencies.compute_implicit_import_needs\'/4", (MR_String) "tabling statistics without tabling");
          }
#line 236 "get_dependencies.m"
          {
#line 236 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 218, (MR_Integer) 1);
          }
#line 238 "get_dependencies.m"
          if (!(parse_tree__get_dependencies__succeeded))
#line 238 "get_dependencies.m"
            {
#line 239 "get_dependencies.m"
              {
#line 239 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 219, (MR_Integer) 1);
              }
#line 238 "get_dependencies.m"
              if (!(parse_tree__get_dependencies__succeeded))
#line 242 "get_dependencies.m"
                {
#line 242 "get_dependencies.m"
                  {
#line 242 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 123, (MR_Integer) 1);
                  }
#line 242 "get_dependencies.m"
                }
#line 238 "get_dependencies.m"
            }
#line 233 "get_dependencies.m"
          if (parse_tree__get_dependencies__succeeded)
#line 245 "get_dependencies.m"
            {
#line 245 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_40_40;

#line 245 "get_dependencies.m"
              {
#line 245 "get_dependencies.m"
                parse_tree__get_dependencies__V_40_40 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
              }
#line 245 "get_dependencies.m"
              {
#line 245 "get_dependencies.m"
                mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_40_40)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45);
              }
#line 245 "get_dependencies.m"
            }
#line 233 "get_dependencies.m"
          else
#line 233 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27;
#line 230 "get_dependencies.m"
        }
#line 229 "get_dependencies.m"
        break;
#line 229 "get_dependencies.m"
    }
#line 254 "get_dependencies.m"
#line 254 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedSTM_11) {
#line 254 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 254 "get_dependencies.m"
      case (MR_Integer) 1:
#line 251 "get_dependencies.m"
        {
#line 251 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_46_46;
#line 251 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_48_48;
#line 251 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_49_49;
#line 251 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_50_50;
#line 251 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_51_51;
#line 251 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_52_52;

#line 252 "get_dependencies.m"
          {
#line 252 "get_dependencies.m"
            parse_tree__get_dependencies__V_48_48 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          }
#line 252 "get_dependencies.m"
          {
#line 252 "get_dependencies.m"
            parse_tree__get_dependencies__V_50_50 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 253 "get_dependencies.m"
          {
#line 253 "get_dependencies.m"
            parse_tree__get_dependencies__V_52_52 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
          }
#line 253 "get_dependencies.m"
          {
#line 253 "get_dependencies.m"
            parse_tree__get_dependencies__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_51_51, 0) = ((MR_Box) (parse_tree__get_dependencies__V_52_52));
#line 253 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "get_dependencies.m"
          }
#line 252 "get_dependencies.m"
          {
#line 252 "get_dependencies.m"
            parse_tree__get_dependencies__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_49_49, 0) = ((MR_Box) (parse_tree__get_dependencies__V_50_50));
#line 252 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_49_49, 1) = ((MR_Box) (parse_tree__get_dependencies__V_51_51));
#line 252 "get_dependencies.m"
          }
#line 252 "get_dependencies.m"
          {
#line 252 "get_dependencies.m"
            parse_tree__get_dependencies__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_46_46, 0) = ((MR_Box) (parse_tree__get_dependencies__V_48_48));
#line 252 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_46_46, 1) = ((MR_Box) (parse_tree__get_dependencies__V_49_49));
#line 252 "get_dependencies.m"
          }
#line 252 "get_dependencies.m"
          {
#line 252 "get_dependencies.m"
            mercury__set__insert_list_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, parse_tree__get_dependencies__V_46_46, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47);
          }
#line 251 "get_dependencies.m"
        }
#line 254 "get_dependencies.m"
        break;
#line 254 "get_dependencies.m"
      case (MR_Integer) 0:
#line 255 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45;
#line 254 "get_dependencies.m"
        break;
#line 254 "get_dependencies.m"
    }
#line 260 "get_dependencies.m"
#line 260 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedException_12) {
#line 260 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 260 "get_dependencies.m"
      case (MR_Integer) 1:
#line 258 "get_dependencies.m"
        {
#line 258 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_54_54;

#line 259 "get_dependencies.m"
          {
#line 259 "get_dependencies.m"
            parse_tree__get_dependencies__V_54_54 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 259 "get_dependencies.m"
          {
#line 259 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_54_54)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55);
          }
#line 258 "get_dependencies.m"
        }
#line 260 "get_dependencies.m"
        break;
#line 260 "get_dependencies.m"
      case (MR_Integer) 0:
#line 261 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47;
#line 260 "get_dependencies.m"
        break;
#line 260 "get_dependencies.m"
    }
#line 267 "get_dependencies.m"
#line 267 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedStringFormat_13) {
#line 267 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "get_dependencies.m"
      case (MR_Integer) 1:
#line 264 "get_dependencies.m"
        {
#line 264 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_56_56;
#line 264 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_58_58;
#line 264 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_59_59;
#line 264 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_60_60;

#line 265 "get_dependencies.m"
          {
#line 265 "get_dependencies.m"
            parse_tree__get_dependencies__V_58_58 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          }
#line 266 "get_dependencies.m"
          {
#line 266 "get_dependencies.m"
            parse_tree__get_dependencies__V_60_60 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
          }
#line 266 "get_dependencies.m"
          {
#line 266 "get_dependencies.m"
            parse_tree__get_dependencies__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_59_59, 0) = ((MR_Box) (parse_tree__get_dependencies__V_60_60));
#line 266 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "get_dependencies.m"
          }
#line 265 "get_dependencies.m"
          {
#line 265 "get_dependencies.m"
            parse_tree__get_dependencies__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_56_56, 0) = ((MR_Box) (parse_tree__get_dependencies__V_58_58));
#line 265 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_56_56, 1) = ((MR_Box) (parse_tree__get_dependencies__V_59_59));
#line 265 "get_dependencies.m"
          }
#line 265 "get_dependencies.m"
          {
#line 265 "get_dependencies.m"
            mercury__set__insert_list_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, parse_tree__get_dependencies__V_56_56, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57);
          }
#line 264 "get_dependencies.m"
        }
#line 267 "get_dependencies.m"
        break;
#line 267 "get_dependencies.m"
      case (MR_Integer) 0:
#line 268 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55;
#line 267 "get_dependencies.m"
        break;
#line 267 "get_dependencies.m"
    }
#line 273 "get_dependencies.m"
#line 273 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedStreamFormat_14) {
#line 273 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 273 "get_dependencies.m"
      case (MR_Integer) 1:
#line 271 "get_dependencies.m"
        {
#line 271 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_62_62;

#line 272 "get_dependencies.m"
          {
#line 272 "get_dependencies.m"
            parse_tree__get_dependencies__V_62_62 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
          }
#line 272 "get_dependencies.m"
          {
#line 272 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_62_62)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63);
          }
#line 271 "get_dependencies.m"
        }
#line 273 "get_dependencies.m"
        break;
#line 273 "get_dependencies.m"
      case (MR_Integer) 0:
#line 274 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57;
#line 273 "get_dependencies.m"
        break;
#line 273 "get_dependencies.m"
    }
#line 279 "get_dependencies.m"
#line 279 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedIO_15) {
#line 279 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 279 "get_dependencies.m"
      case (MR_Integer) 1:
#line 277 "get_dependencies.m"
        {
#line 277 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_64_64;

#line 278 "get_dependencies.m"
          {
#line 278 "get_dependencies.m"
            parse_tree__get_dependencies__V_64_64 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          }
#line 278 "get_dependencies.m"
          {
#line 278 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_64_64)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65);
          }
#line 277 "get_dependencies.m"
        }
#line 279 "get_dependencies.m"
        break;
#line 279 "get_dependencies.m"
      case (MR_Integer) 0:
#line 280 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63;
#line 279 "get_dependencies.m"
        break;
#line 279 "get_dependencies.m"
    }
#line 282 "get_dependencies.m"
    {
#line 282 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 193, &parse_tree__get_dependencies__Deep_16);
    }
#line 286 "get_dependencies.m"
#line 286 "get_dependencies.m"
    switch (parse_tree__get_dependencies__Deep_16) {
#line 286 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 286 "get_dependencies.m"
      case (MR_Integer) 0:
#line 287 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
#line 286 "get_dependencies.m"
        break;
#line 286 "get_dependencies.m"
      case (MR_Integer) 1:
#line 284 "get_dependencies.m"
        {
#line 284 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_67_67;

#line 285 "get_dependencies.m"
          {
#line 285 "get_dependencies.m"
            parse_tree__get_dependencies__V_67_67 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
          }
#line 285 "get_dependencies.m"
          {
#line 285 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_67_67)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68);
          }
#line 284 "get_dependencies.m"
        }
#line 286 "get_dependencies.m"
        break;
#line 286 "get_dependencies.m"
    }
#line 291 "get_dependencies.m"
    {
#line 291 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 210, (MR_Integer) 1);
    }
#line 293 "get_dependencies.m"
    if (!(parse_tree__get_dependencies__succeeded))
#line 294 "get_dependencies.m"
      {
#line 294 "get_dependencies.m"
        {
#line 294 "get_dependencies.m"
          parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 211, (MR_Integer) 1);
        }
#line 294 "get_dependencies.m"
      }
#line 289 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 298 "get_dependencies.m"
      {
#line 298 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_73_73;

#line 298 "get_dependencies.m"
        {
#line 298 "get_dependencies.m"
          parse_tree__get_dependencies__V_73_73 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 298 "get_dependencies.m"
        {
#line 298 "get_dependencies.m"
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_73_73)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74);
        }
#line 298 "get_dependencies.m"
      }
#line 289 "get_dependencies.m"
    else
#line 289 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68;
#line 302 "get_dependencies.m"
    {
#line 302 "get_dependencies.m"
      libs__globals__get_target_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__Target_17);
    }
#line 303 "get_dependencies.m"
    {
#line 303 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 252, &parse_tree__get_dependencies__HighLevelCode_18);
    }
#line 304 "get_dependencies.m"
    {
#line 304 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 214, &parse_tree__get_dependencies__Parallel_19);
    }
#line 306 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Target_17 == (MR_Integer) 0);
#line 306 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 306 "get_dependencies.m"
      {
#line 307 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HighLevelCode_18 == (MR_Integer) 0);
#line 306 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 308 "get_dependencies.m"
          parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Parallel_19 == (MR_Integer) 1);
#line 306 "get_dependencies.m"
      }
#line 305 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 310 "get_dependencies.m"
      {
#line 310 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_77_77;

#line 310 "get_dependencies.m"
        {
#line 310 "get_dependencies.m"
          parse_tree__get_dependencies__V_77_77 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
        }
#line 310 "get_dependencies.m"
        {
#line 310 "get_dependencies.m"
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_77_77)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78);
        }
#line 310 "get_dependencies.m"
      }
#line 305 "get_dependencies.m"
    else
#line 305 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74;
#line 314 "get_dependencies.m"
    {
#line 314 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 227, &parse_tree__get_dependencies__UseRegions_20);
    }
#line 318 "get_dependencies.m"
#line 318 "get_dependencies.m"
    switch (parse_tree__get_dependencies__UseRegions_20) {
#line 318 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 318 "get_dependencies.m"
      case (MR_Integer) 0:
#line 319 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
#line 318 "get_dependencies.m"
        break;
#line 318 "get_dependencies.m"
      case (MR_Integer) 1:
#line 316 "get_dependencies.m"
        {
#line 316 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_80_80;

#line 317 "get_dependencies.m"
          {
#line 317 "get_dependencies.m"
            parse_tree__get_dependencies__V_80_80 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 317 "get_dependencies.m"
          {
#line 317 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_80_80)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81);
          }
#line 316 "get_dependencies.m"
        }
#line 318 "get_dependencies.m"
        break;
#line 318 "get_dependencies.m"
    }
#line 321 "get_dependencies.m"
    {
#line 321 "get_dependencies.m"
      libs__globals__get_ssdb_trace_level_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__SSDBTraceLevel_21);
    }
#line 322 "get_dependencies.m"
    {
#line 322 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 136, &parse_tree__get_dependencies__DisableSSDB_22);
    }
#line 325 "get_dependencies.m"
#line 325 "get_dependencies.m"
    switch (parse_tree__get_dependencies__SSDBTraceLevel_21) {
#line 325 "get_dependencies.m"
      default:
#line 325 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 325 "get_dependencies.m"
        break;
#line 325 "get_dependencies.m"
      case (MR_Integer) 2:
#line 325 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 325 "get_dependencies.m"
        break;
#line 325 "get_dependencies.m"
      case (MR_Integer) 1:
#line 324 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 325 "get_dependencies.m"
        break;
#line 325 "get_dependencies.m"
    }
#line 326 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 327 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__DisableSSDB_22 == (MR_Integer) 0);
#line 323 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 329 "get_dependencies.m"
      {
#line 329 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_83_83;

#line 329 "get_dependencies.m"
        {
#line 329 "get_dependencies.m"
          parse_tree__get_dependencies__V_83_83 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        }
#line 329 "get_dependencies.m"
        {
#line 329 "get_dependencies.m"
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_83_83)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);
        }
#line 329 "get_dependencies.m"
      }
#line 323 "get_dependencies.m"
    else
#line 323 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81;
#line 209 "get_dependencies.m"
  }
#line 205 "get_dependencies.m"
}

#line 173 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
#line 173 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 173 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 173 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 173 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 173 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
#line 173 "get_dependencies.m"
{
#line 177 "get_dependencies.m"
  while (MR_TRUE)
#line 177 "get_dependencies.m"
    {
#line 177 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 177 "get_dependencies.m"
      {
#line 177 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 177 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "get_dependencies.m"
          {
#line 177 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 177 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 177 "get_dependencies.m"
          }
#line 177 "get_dependencies.m"
        else
#line 178 "get_dependencies.m"
          {
#line 178 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Avail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;
#line 178 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28;

#line 182 "get_dependencies.m"
            if (((MR_tag((MR_Word) parse_tree__get_dependencies__Avail_12)) == (MR_mktag((MR_Integer) 0))))
#line 180 "get_dependencies.m"
              {
#line 180 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__ModuleName_16;
#line 180 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_27_27 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Avail_12), (MR_Integer) 0);
#line 180 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_17_17;
#line 180 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_18_18;

#line 180 "get_dependencies.m"
                parse_tree__get_dependencies__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 0)));
#line 180 "get_dependencies.m"
                parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 1)));
#line 180 "get_dependencies.m"
                parse_tree__get_dependencies__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 2)));
#line 181 "get_dependencies.m"
                {
#line 181 "get_dependencies.m"
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__ModuleName_16)), parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28);
                }
#line 180 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 180 "get_dependencies.m"
              }
#line 182 "get_dependencies.m"
            else
#line 183 "get_dependencies.m"
              {
#line 183 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_25_25 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Avail_12), (MR_Integer) 1);
#line 183 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 0)));
#line 183 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 1)));
#line 183 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 2)));

#line 184 "get_dependencies.m"
                {
#line 184 "get_dependencies.m"
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__ModuleName_31)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26);
                }
#line 183 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 183 "get_dependencies.m"
              }
#line 186 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 186 "get_dependencies.m"
            {
#line 186 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Avails_13;
#line 186 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28;
#line 186 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;

#line 186 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
#line 186 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
#line 186 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 186 "get_dependencies.m"
            }
#line 186 "get_dependencies.m"
            continue;
#line 178 "get_dependencies.m"
          }
#line 177 "get_dependencies.m"
      }
#line 177 "get_dependencies.m"
      break;
#line 177 "get_dependencies.m"
    }
#line 173 "get_dependencies.m"
}

#line 144 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
#line 144 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
#line 144 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9)
#line 144 "get_dependencies.m"
{
#line 151 "get_dependencies.m"
  while (MR_TRUE)
#line 151 "get_dependencies.m"
    {
#line 151 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 151 "get_dependencies.m"
      {
#line 151 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 151 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "get_dependencies.m"
          {
#line 152 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
#line 152 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
#line 152 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
#line 152 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
#line 151 "get_dependencies.m"
          }
#line 151 "get_dependencies.m"
        else
#line 155 "get_dependencies.m"
          {
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__RawItemBlock_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__RawItemBlocks_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Section_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 0)));
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Imports_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 3)));
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41;
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42;
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43;
#line 155 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44;
#line 156 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 1)));
#line 156 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Incls_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 2)));
#line 156 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Items_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 4)));

#line 160 "get_dependencies.m"
#line 160 "get_dependencies.m"
            switch (parse_tree__get_dependencies__Section_28) {
#line 160 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 160 "get_dependencies.m"
              case (MR_Integer) 1:
#line 161 "get_dependencies.m"
                {
#line 162 "get_dependencies.m"
                  {
#line 162 "get_dependencies.m"
                    parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_31, parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6, &parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41, parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8, &parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42);
                  }
#line 161 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
#line 161 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
#line 161 "get_dependencies.m"
                }
#line 160 "get_dependencies.m"
                break;
#line 160 "get_dependencies.m"
              case (MR_Integer) 0:
#line 158 "get_dependencies.m"
                {
#line 159 "get_dependencies.m"
                  {
#line 159 "get_dependencies.m"
                    parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_31, parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43, parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44);
                  }
#line 158 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
#line 158 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
#line 158 "get_dependencies.m"
                }
#line 160 "get_dependencies.m"
                break;
#line 160 "get_dependencies.m"
            }
#line 164 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 164 "get_dependencies.m"
            {
#line 164 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__RawItemBlocks_23;
#line 164 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43;
#line 164 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44;
#line 164 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41;
#line 164 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42;

#line 164 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8;
#line 164 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6;
#line 164 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4;
#line 164 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2;
#line 164 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 164 "get_dependencies.m"
            }
#line 164 "get_dependencies.m"
            continue;
#line 155 "get_dependencies.m"
          }
#line 151 "get_dependencies.m"
      }
#line 151 "get_dependencies.m"
      break;
#line 151 "get_dependencies.m"
    }
#line 144 "get_dependencies.m"
}

#line 829 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
#line 829 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 829 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 829 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 829 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 829 "get_dependencies.m"
{
#line 829 "get_dependencies.m"
  {
#line 829 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 829 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12;

#line 829 "get_dependencies.m"
    {
#line 829 "get_dependencies.m"
      parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12);
    }
#line 829 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12));
#line 829 "get_dependencies.m"
  }
#line 829 "get_dependencies.m"
}

#line 98 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(
#line 98 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
#line 98 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
#line 98 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IncludeFiles_4)
#line 98 "get_dependencies.m"
{
#line 828 "get_dependencies.m"
  {
#line 828 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 828 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeInfo_13_13;
#line 828 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_5_5;
#line 828 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_6_6;
#line 829 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__conv1_IncludeFiles_4;

#line 829 "get_dependencies.m"
    {
#line 829 "get_dependencies.m"
      parse_tree__get_dependencies__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 829 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0]));
#line 829 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 1) = ((MR_Box) (parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1));
#line 829 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 829 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 3) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
#line 829 "get_dependencies.m"
    }
#line 830 "get_dependencies.m"
    {
#line 830 "get_dependencies.m"
      parse_tree__get_dependencies__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
#line 6926 "parse_tree.get_dependencies.c"
    {
#line 6928 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6930 "parse_tree.get_dependencies.c"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 6932 "parse_tree.get_dependencies.c"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
#line 6934 "parse_tree.get_dependencies.c"
    }
#line 829 "get_dependencies.m"
    {
#line 829 "get_dependencies.m"
      mercury__list__foldl_4_p_0(parse_tree__get_dependencies__TypeInfo_13_13, (MR_Word) &parse_tree__get_dependencies_scalar_common_1[0], (MR_Word) parse_tree__get_dependencies__V_5_5, (MR_Word) parse_tree__get_dependencies__ItemBlocks_3, ((MR_Box) (parse_tree__get_dependencies__V_6_6)), &parse_tree__get_dependencies__conv1_IncludeFiles_4);
    }
#line 829 "get_dependencies.m"
    *parse_tree__get_dependencies__IncludeFiles_4 = ((MR_Word) parse_tree__get_dependencies__conv1_IncludeFiles_4);
#line 828 "get_dependencies.m"
  }
#line 98 "get_dependencies.m"
}

#line 92 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(
#line 92 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
#line 92 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
#line 92 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__FactTableFileNames_4)
#line 92 "get_dependencies.m"
{
#line 792 "get_dependencies.m"
  {
#line 792 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 792 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__RevFactTableFileNames_5;

#line 793 "get_dependencies.m"
    {
#line 793 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__get_dependencies__RevFactTableFileNames_5);
    }
#line 795 "get_dependencies.m"
    {
#line 795 "get_dependencies.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__get_dependencies__RevFactTableFileNames_5, parse_tree__get_dependencies__FactTableFileNames_4);
    }
#line 792 "get_dependencies.m"
  }
#line 92 "get_dependencies.m"
}

#line 86 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(
#line 86 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 86 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Items_6,
#line 86 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
#line 86 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
#line 86 "get_dependencies.m"
{
#line 190 "get_dependencies.m"
  {
#line 190 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 190 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

#line 192 "get_dependencies.m"
    {
#line 192 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
#line 194 "get_dependencies.m"
    {
#line 194 "get_dependencies.m"
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
    }
#line 190 "get_dependencies.m"
  }
#line 86 "get_dependencies.m"
}

#line 83 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(
#line 83 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_11,
#line 83 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 83 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_6,
#line 83 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
#line 83 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
#line 83 "get_dependencies.m"
{
#line 198 "get_dependencies.m"
  {
#line 198 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 198 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

#line 200 "get_dependencies.m"
    {
#line 200 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
#line 202 "get_dependencies.m"
    {
#line 202 "get_dependencies.m"
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
    }
#line 198 "get_dependencies.m"
  }
#line 83 "get_dependencies.m"
}

#line 69 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(
#line 69 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__RawItemBlocks_6,
#line 69 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IntImportDeps_7,
#line 69 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IntUseDeps_8,
#line 69 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImpImportDeps_9,
#line 69 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImpUseDeps_10)
#line 69 "get_dependencies.m"
{
#line 139 "get_dependencies.m"
  {
#line 139 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_15_15 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_11_11;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_12_12;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_13_13;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_14_14;

#line 141 "get_dependencies.m"
    {
#line 141 "get_dependencies.m"
      parse_tree__get_dependencies__V_11_11 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 141 "get_dependencies.m"
    {
#line 141 "get_dependencies.m"
      parse_tree__get_dependencies__V_12_12 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 142 "get_dependencies.m"
    {
#line 142 "get_dependencies.m"
      parse_tree__get_dependencies__V_13_13 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 142 "get_dependencies.m"
    {
#line 142 "get_dependencies.m"
      parse_tree__get_dependencies__V_14_14 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 140 "get_dependencies.m"
    {
#line 140 "get_dependencies.m"
      parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(parse_tree__get_dependencies__RawItemBlocks_6, parse_tree__get_dependencies__V_11_11, parse_tree__get_dependencies__IntImportDeps_7, parse_tree__get_dependencies__V_12_12, parse_tree__get_dependencies__IntUseDeps_8, parse_tree__get_dependencies__V_13_13, parse_tree__get_dependencies__ImpImportDeps_9, parse_tree__get_dependencies__V_14_14, parse_tree__get_dependencies__ImpUseDeps_10);
    }
#line 139 "get_dependencies.m"
  }
#line 69 "get_dependencies.m"
}

#line 49 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(
#line 49 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_9,
#line 49 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_4,
#line 49 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
#line 49 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
#line 49 "get_dependencies.m"
{
#line 120 "get_dependencies.m"
  {
#line 120 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 120 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_10_10 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 120 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_7_7;
#line 120 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_8_8;

#line 122 "get_dependencies.m"
    {
#line 122 "get_dependencies.m"
      parse_tree__get_dependencies__V_7_7 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_10_10);
    }
#line 122 "get_dependencies.m"
    {
#line 122 "get_dependencies.m"
      parse_tree__get_dependencies__V_8_8 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_10_10);
    }
#line 121 "get_dependencies.m"
    {
#line 121 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(parse_tree__get_dependencies__ItemBlocks_4, parse_tree__get_dependencies__V_7_7, parse_tree__get_dependencies__ImportDeps_5, parse_tree__get_dependencies__V_8_8, parse_tree__get_dependencies__UseDeps_6);
    }
#line 120 "get_dependencies.m"
  }
#line 49 "get_dependencies.m"
}

#line 47 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(
#line 47 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Avails_4,
#line 47 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
#line 47 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
#line 47 "get_dependencies.m"
{
#line 169 "get_dependencies.m"
  {
#line 169 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 169 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_9_9 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 169 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_7_7;
#line 169 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_8_8;

#line 171 "get_dependencies.m"
    {
#line 171 "get_dependencies.m"
      parse_tree__get_dependencies__V_7_7 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_9_9);
    }
#line 171 "get_dependencies.m"
    {
#line 171 "get_dependencies.m"
      parse_tree__get_dependencies__V_8_8 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_9_9);
    }
#line 170 "get_dependencies.m"
    {
#line 170 "get_dependencies.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Avails_4, parse_tree__get_dependencies__V_7_7, parse_tree__get_dependencies__ImportDeps_5, parse_tree__get_dependencies__V_8_8, parse_tree__get_dependencies__UseDeps_6);
    }
#line 169 "get_dependencies.m"
  }
#line 47 "get_dependencies.m"
}

void mercury__parse_tree__get_dependencies__init(void)
{
}

void mercury__parse_tree__get_dependencies__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0);
}

void mercury__parse_tree__get_dependencies__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.get_dependencies. */
