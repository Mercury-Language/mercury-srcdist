/*
** Automatically generated from `get_dependencies.m'
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


/* :- module parse_tree.get_dependencies. */
/* :- implementation. */

/*
INIT mercury__parse_tree__get_dependencies__init
ENDINIT
*/

#include "parse_tree.get_dependencies.mih"


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
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 98 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 101 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;

#line 104 "parse_tree.get_dependencies.c"
static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7];

#line 107 "parse_tree.get_dependencies.c"
static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0[7];

#line 110 "parse_tree.get_dependencies.c"
static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0[7];

#line 113 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0;

#line 116 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1];

#line 119 "parse_tree.get_dependencies.c"
static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1];

#line 122 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0[1];

#line 125 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0[1];

#line 128 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0;

#line 131 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1;

#line 134 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2];

#line 137 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2];

#line 140 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2];

#line 143 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0;

#line 146 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1;

#line 149 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2];

#line 152 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2];

#line 155 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2];

#line 158 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0;

#line 161 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1;

#line 164 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2];

#line 167 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2];

#line 170 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2];

#line 173 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0;

#line 176 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1;

#line 179 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2];

#line 182 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2];

#line 185 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2];

#line 188 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0;

#line 191 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1;

#line 194 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2];

#line 197 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2];

#line 200 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2];

#line 203 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0;

#line 206 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1;

#line 209 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2];

#line 212 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2];

#line 215 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2];

#line 218 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0;

#line 221 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1;

#line 224 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2];

#line 227 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2];

#line 230 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2];

#line 233 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
#line 236 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 238 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 241 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
#line 244 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 246 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 248 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 251 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
#line 254 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 256 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 259 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
#line 262 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 264 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 266 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 269 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
#line 272 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 274 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 277 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
#line 280 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 282 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 284 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 287 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
#line 290 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 292 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 295 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
#line 298 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 300 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 302 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 305 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
#line 308 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 310 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 313 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
#line 316 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 318 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 320 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 323 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
#line 326 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 328 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 331 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
#line 334 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 336 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 338 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 341 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
#line 344 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 346 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 349 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
#line 352 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 354 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 356 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 359 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
#line 362 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 364 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

#line 367 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
#line 370 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 372 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 374 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

#line 792 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 792 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 792 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 792 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

#line 390 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 390 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 390 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 390 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 122 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
#line 122 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 122 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 122 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 122 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 122 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

#line 229 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__229__1_2_p_0(
#line 229 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
#line 229 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_33);

#line 336 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
#line 336 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 336 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 332 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
#line 332 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 332 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 348 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
#line 348 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 348 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 352 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
#line 352 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 352 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 340 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
#line 340 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 340 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 356 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
#line 356 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 356 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 344 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
#line 344 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 344 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 371 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
#line 371 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 371 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 835 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
#line 835 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 835 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
#line 835 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3);

#line 827 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
#line 827 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_14_14,
#line 827 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
#line 827 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11,
#line 827 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12);

#line 803 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
#line 803 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 803 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 803 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

#line 777 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
#line 777 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 777 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 777 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 719 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
#line 719 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Term_4,
#line 719 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
#line 719 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);

#line 709 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
#line 709 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 709 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 709 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 698 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
#line 698 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 698 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 698 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 691 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
#line 691 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 691 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 691 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 683 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
#line 683 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 683 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 683 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 555 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Goal_4,
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67,
#line 555 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);

#line 546 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
#line 546 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemClause_4,
#line 546 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 546 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);

#line 537 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
#line 537 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
#line 537 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 537 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);

#line 533 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
#line 533 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 533 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 533 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 533 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 522 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
#line 522 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
#line 522 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
#line 522 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14);

#line 503 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
#line 503 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 503 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 503 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 503 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 480 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
#line 480 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 480 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 480 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 480 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 402 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
#line 402 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 402 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 402 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 229 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
#line 229 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg);

#line 203 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
#line 203 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 203 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
#line 203 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
#line 203 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);

#line 171 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
#line 171 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 171 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 171 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 171 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 171 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

#line 142 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9);

#line 824 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
#line 824 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 824 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 824 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 824 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1];

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][6];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[3][3];


#line 738 "get_dependencies.m"
/* sealed */ struct parse_tree__get_dependencies__vector_common_type_8_0_s {
#line 738 "get_dependencies.m"
  const MR_String parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
#line 738 "get_dependencies.m"
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



#line 980 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 988 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0
  }
};

#line 996 "parse_tree.get_dependencies.c"
static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7] = {
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0
};

#line 1007 "parse_tree.get_dependencies.c"
static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0[7] = {
  (MR_String) "iin_tabling",
  (MR_String) "iin_tabling_statistics",
  (MR_String) "iin_stm",
  (MR_String) "iin_exception",
  (MR_String) "iin_string_format",
  (MR_String) "iin_stream_format",
  (MR_String) "iin_io"
};

#line 1018 "parse_tree.get_dependencies.c"
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

#line 1057 "parse_tree.get_dependencies.c"
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

#line 1072 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

#line 1077 "parse_tree.get_dependencies.c"
static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0
  }
};

#line 1086 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

#line 1091 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0[1] = {
  (MR_Integer) 0
};

#line 1096 "parse_tree.get_dependencies.c"
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

#line 1113 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0 = {
  (MR_String) "dont_need_exception",
  (MR_Integer) 0
};

#line 1119 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1 = {
  (MR_String) "do_need_exception",
  (MR_Integer) 1
};

#line 1125 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1
};

#line 1131 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0
};

#line 1137 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1143 "parse_tree.get_dependencies.c"
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

#line 1160 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0 = {
  (MR_String) "dont_need_io",
  (MR_Integer) 0
};

#line 1166 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1 = {
  (MR_String) "do_need_io",
  (MR_Integer) 1
};

#line 1172 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1
};

#line 1178 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0
};

#line 1184 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1190 "parse_tree.get_dependencies.c"
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

#line 1207 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0 = {
  (MR_String) "dont_need_stm",
  (MR_Integer) 0
};

#line 1213 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1 = {
  (MR_String) "do_need_stm",
  (MR_Integer) 1
};

#line 1219 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1
};

#line 1225 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0
};

#line 1231 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1237 "parse_tree.get_dependencies.c"
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

#line 1254 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0 = {
  (MR_String) "dont_need_stream_format",
  (MR_Integer) 0
};

#line 1260 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1 = {
  (MR_String) "do_need_stream_format",
  (MR_Integer) 1
};

#line 1266 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1
};

#line 1272 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0
};

#line 1278 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1284 "parse_tree.get_dependencies.c"
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

#line 1301 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0 = {
  (MR_String) "dont_need_string_format",
  (MR_Integer) 0
};

#line 1307 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1 = {
  (MR_String) "do_need_string_format",
  (MR_Integer) 1
};

#line 1313 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1
};

#line 1319 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0
};

#line 1325 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1331 "parse_tree.get_dependencies.c"
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

#line 1348 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0 = {
  (MR_String) "dont_need_tabling",
  (MR_Integer) 0
};

#line 1354 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1 = {
  (MR_String) "do_need_tabling",
  (MR_Integer) 1
};

#line 1360 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1
};

#line 1366 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0
};

#line 1372 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1378 "parse_tree.get_dependencies.c"
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

#line 1395 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0 = {
  (MR_String) "dont_need_tabling_statistics",
  (MR_Integer) 0
};

#line 1401 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1 = {
  (MR_String) "do_need_tabling_statistics",
  (MR_Integer) 1
};

#line 1407 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1
};

#line 1413 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0
};

#line 1419 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1425 "parse_tree.get_dependencies.c"
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

#line 1442 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
#line 1445 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1447 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1449 "parse_tree.get_dependencies.c"
{
#line 1451 "parse_tree.get_dependencies.c"
  {
#line 1453 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1456 "parse_tree.get_dependencies.c"
    {
#line 1458 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1461 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1463 "parse_tree.get_dependencies.c"
  }
#line 1465 "parse_tree.get_dependencies.c"
}

#line 1468 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
#line 1471 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1473 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1475 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1477 "parse_tree.get_dependencies.c"
{
#line 1479 "parse_tree.get_dependencies.c"
  {
#line 1481 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1484 "parse_tree.get_dependencies.c"
    {
#line 1486 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1489 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1491 "parse_tree.get_dependencies.c"
  }
#line 1493 "parse_tree.get_dependencies.c"
}

#line 1496 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
#line 1499 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1501 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1503 "parse_tree.get_dependencies.c"
{
#line 1505 "parse_tree.get_dependencies.c"
  {
#line 1507 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1510 "parse_tree.get_dependencies.c"
    {
#line 1512 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1515 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1517 "parse_tree.get_dependencies.c"
  }
#line 1519 "parse_tree.get_dependencies.c"
}

#line 1522 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
#line 1525 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1527 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1529 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1531 "parse_tree.get_dependencies.c"
{
#line 1533 "parse_tree.get_dependencies.c"
  {
#line 1535 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1538 "parse_tree.get_dependencies.c"
    {
#line 1540 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1543 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1545 "parse_tree.get_dependencies.c"
  }
#line 1547 "parse_tree.get_dependencies.c"
}

#line 1550 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
#line 1553 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1555 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1557 "parse_tree.get_dependencies.c"
{
#line 1559 "parse_tree.get_dependencies.c"
  {
#line 1561 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1564 "parse_tree.get_dependencies.c"
    {
#line 1566 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_io_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1569 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1571 "parse_tree.get_dependencies.c"
  }
#line 1573 "parse_tree.get_dependencies.c"
}

#line 1576 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
#line 1579 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1581 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1583 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1585 "parse_tree.get_dependencies.c"
{
#line 1587 "parse_tree.get_dependencies.c"
  {
#line 1589 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1592 "parse_tree.get_dependencies.c"
    {
#line 1594 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_io_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1597 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1599 "parse_tree.get_dependencies.c"
  }
#line 1601 "parse_tree.get_dependencies.c"
}

#line 1604 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
#line 1607 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1609 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1611 "parse_tree.get_dependencies.c"
{
#line 1613 "parse_tree.get_dependencies.c"
  {
#line 1615 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1618 "parse_tree.get_dependencies.c"
    {
#line 1620 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1623 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1625 "parse_tree.get_dependencies.c"
  }
#line 1627 "parse_tree.get_dependencies.c"
}

#line 1630 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
#line 1633 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1635 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1637 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1639 "parse_tree.get_dependencies.c"
{
#line 1641 "parse_tree.get_dependencies.c"
  {
#line 1643 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1646 "parse_tree.get_dependencies.c"
    {
#line 1648 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1651 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1653 "parse_tree.get_dependencies.c"
  }
#line 1655 "parse_tree.get_dependencies.c"
}

#line 1658 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
#line 1661 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1663 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1665 "parse_tree.get_dependencies.c"
{
#line 1667 "parse_tree.get_dependencies.c"
  {
#line 1669 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1672 "parse_tree.get_dependencies.c"
    {
#line 1674 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1677 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1679 "parse_tree.get_dependencies.c"
  }
#line 1681 "parse_tree.get_dependencies.c"
}

#line 1684 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
#line 1687 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1689 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1691 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1693 "parse_tree.get_dependencies.c"
{
#line 1695 "parse_tree.get_dependencies.c"
  {
#line 1697 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1700 "parse_tree.get_dependencies.c"
    {
#line 1702 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1705 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1707 "parse_tree.get_dependencies.c"
  }
#line 1709 "parse_tree.get_dependencies.c"
}

#line 1712 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
#line 1715 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1717 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1719 "parse_tree.get_dependencies.c"
{
#line 1721 "parse_tree.get_dependencies.c"
  {
#line 1723 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1726 "parse_tree.get_dependencies.c"
    {
#line 1728 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1731 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1733 "parse_tree.get_dependencies.c"
  }
#line 1735 "parse_tree.get_dependencies.c"
}

#line 1738 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
#line 1741 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1743 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1745 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1747 "parse_tree.get_dependencies.c"
{
#line 1749 "parse_tree.get_dependencies.c"
  {
#line 1751 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1754 "parse_tree.get_dependencies.c"
    {
#line 1756 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1759 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1761 "parse_tree.get_dependencies.c"
  }
#line 1763 "parse_tree.get_dependencies.c"
}

#line 1766 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
#line 1769 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1771 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1773 "parse_tree.get_dependencies.c"
{
#line 1775 "parse_tree.get_dependencies.c"
  {
#line 1777 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1780 "parse_tree.get_dependencies.c"
    {
#line 1782 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1785 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1787 "parse_tree.get_dependencies.c"
  }
#line 1789 "parse_tree.get_dependencies.c"
}

#line 1792 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
#line 1795 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1797 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1799 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1801 "parse_tree.get_dependencies.c"
{
#line 1803 "parse_tree.get_dependencies.c"
  {
#line 1805 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1808 "parse_tree.get_dependencies.c"
    {
#line 1810 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1813 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1815 "parse_tree.get_dependencies.c"
  }
#line 1817 "parse_tree.get_dependencies.c"
}

#line 1820 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
#line 1823 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1825 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1827 "parse_tree.get_dependencies.c"
{
#line 1829 "parse_tree.get_dependencies.c"
  {
#line 1831 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1834 "parse_tree.get_dependencies.c"
    {
#line 1836 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1839 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1841 "parse_tree.get_dependencies.c"
  }
#line 1843 "parse_tree.get_dependencies.c"
}

#line 1846 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
#line 1849 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1851 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1853 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1855 "parse_tree.get_dependencies.c"
{
#line 1857 "parse_tree.get_dependencies.c"
  {
#line 1859 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1862 "parse_tree.get_dependencies.c"
    {
#line 1864 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1867 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1869 "parse_tree.get_dependencies.c"
  }
#line 1871 "parse_tree.get_dependencies.c"
}

#line 792 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 792 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 792 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 792 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
#line 792 "get_dependencies.m"
{
#line 795 "get_dependencies.m"
  while (MR_TRUE)
#line 795 "get_dependencies.m"
    {
#line 795 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 795 "get_dependencies.m"
      {
#line 795 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 795 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 795 "get_dependencies.m"
        else
#line 797 "get_dependencies.m"
          {
#line 797 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 797 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 797 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 4)));
#line 797 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17;
#line 798 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
#line 798 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));
#line 798 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
#line 798 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 3)));

#line 799 "get_dependencies.m"
            {
#line 799 "get_dependencies.m"
              parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(parse_tree__get_dependencies__Items_14, parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17);
            }
#line 800 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 800 "get_dependencies.m"
            {
#line 800 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
#line 800 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17;

#line 800 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
#line 800 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 800 "get_dependencies.m"
            }
#line 800 "get_dependencies.m"
            continue;
#line 797 "get_dependencies.m"
          }
#line 795 "get_dependencies.m"
      }
#line 795 "get_dependencies.m"
      break;
#line 795 "get_dependencies.m"
    }
#line 792 "get_dependencies.m"
}

#line 390 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 390 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 390 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 390 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 390 "get_dependencies.m"
{
#line 393 "get_dependencies.m"
  while (MR_TRUE)
#line 393 "get_dependencies.m"
    {
#line 393 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 393 "get_dependencies.m"
      {
#line 393 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 393 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 393 "get_dependencies.m"
        else
#line 395 "get_dependencies.m"
          {
#line 395 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 4)));
#line 395 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17;
#line 396 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies___Section_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
#line 396 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));
#line 396 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Incls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
#line 396 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Imports_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 3)));

#line 397 "get_dependencies.m"
            {
#line 397 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_14, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17);
            }
#line 399 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 399 "get_dependencies.m"
            {
#line 399 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
#line 399 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17;

#line 399 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 399 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 399 "get_dependencies.m"
            }
#line 399 "get_dependencies.m"
            continue;
#line 395 "get_dependencies.m"
          }
#line 393 "get_dependencies.m"
      }
#line 393 "get_dependencies.m"
      break;
#line 393 "get_dependencies.m"
    }
#line 390 "get_dependencies.m"
}

#line 122 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
#line 122 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 122 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 122 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 122 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 122 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
#line 122 "get_dependencies.m"
{
#line 126 "get_dependencies.m"
  while (MR_TRUE)
#line 126 "get_dependencies.m"
    {
#line 126 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 126 "get_dependencies.m"
      {
#line 126 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 126 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "get_dependencies.m"
          {
#line 126 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 126 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 126 "get_dependencies.m"
          }
#line 126 "get_dependencies.m"
        else
#line 128 "get_dependencies.m"
          {
#line 128 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 128 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Imports_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 3)));
#line 128 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25;
#line 128 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;
#line 129 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies___Section_16 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 0));
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 1)));
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Incls_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 2)));
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Items_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 4)));

#line 130 "get_dependencies.m"
            {
#line 130 "get_dependencies.m"
              parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_19, parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26);
            }
#line 131 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 131 "get_dependencies.m"
            {
#line 131 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_13;
#line 131 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25;
#line 131 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;

#line 131 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
#line 131 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
#line 131 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 131 "get_dependencies.m"
            }
#line 131 "get_dependencies.m"
            continue;
#line 128 "get_dependencies.m"
          }
#line 126 "get_dependencies.m"
      }
#line 126 "get_dependencies.m"
      break;
#line 126 "get_dependencies.m"
    }
#line 122 "get_dependencies.m"
}

#line 229 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__229__1_2_p_0(
#line 229 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
#line 229 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_33)
#line 229 "get_dependencies.m"
{
#line 229 "get_dependencies.m"
  {
#line 229 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 == parse_tree__get_dependencies__HeadVar__2_33);

#line 229 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 229 "get_dependencies.m"
  }
#line 229 "get_dependencies.m"
}

#line 336 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
#line 336 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 336 "get_dependencies.m"
{
#line 336 "get_dependencies.m"
  {
#line 336 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 336 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 336 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 336 "get_dependencies.m"
    {
#line 336 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 336 "get_dependencies.m"
      return;
    }
#line 336 "get_dependencies.m"
  }
#line 336 "get_dependencies.m"
}

#line 336 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 336 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 336 "get_dependencies.m"
{
#line 2192 "parse_tree.get_dependencies.c"
  {
#line 2194 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2197 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2199 "parse_tree.get_dependencies.c"
  }
#line 336 "get_dependencies.m"
}

#line 332 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
#line 332 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 332 "get_dependencies.m"
{
#line 332 "get_dependencies.m"
  {
#line 332 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 332 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 332 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 332 "get_dependencies.m"
    {
#line 332 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 332 "get_dependencies.m"
      return;
    }
#line 332 "get_dependencies.m"
  }
#line 332 "get_dependencies.m"
}

#line 332 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 332 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 332 "get_dependencies.m"
{
#line 2245 "parse_tree.get_dependencies.c"
  {
#line 2247 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2250 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2252 "parse_tree.get_dependencies.c"
  }
#line 332 "get_dependencies.m"
}

#line 348 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
#line 348 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 348 "get_dependencies.m"
{
#line 348 "get_dependencies.m"
  {
#line 348 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 348 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 348 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 348 "get_dependencies.m"
    {
#line 348 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 348 "get_dependencies.m"
      return;
    }
#line 348 "get_dependencies.m"
  }
#line 348 "get_dependencies.m"
}

#line 348 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 348 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 348 "get_dependencies.m"
{
#line 2298 "parse_tree.get_dependencies.c"
  {
#line 2300 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2303 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2305 "parse_tree.get_dependencies.c"
  }
#line 348 "get_dependencies.m"
}

#line 352 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
#line 352 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 352 "get_dependencies.m"
{
#line 352 "get_dependencies.m"
  {
#line 352 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 352 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 352 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 352 "get_dependencies.m"
    {
#line 352 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 352 "get_dependencies.m"
      return;
    }
#line 352 "get_dependencies.m"
  }
#line 352 "get_dependencies.m"
}

#line 352 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 352 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 352 "get_dependencies.m"
{
#line 2351 "parse_tree.get_dependencies.c"
  {
#line 2353 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2356 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2358 "parse_tree.get_dependencies.c"
  }
#line 352 "get_dependencies.m"
}

#line 340 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
#line 340 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 340 "get_dependencies.m"
{
#line 340 "get_dependencies.m"
  {
#line 340 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 340 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 340 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 340 "get_dependencies.m"
    {
#line 340 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 340 "get_dependencies.m"
      return;
    }
#line 340 "get_dependencies.m"
  }
#line 340 "get_dependencies.m"
}

#line 340 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 340 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 340 "get_dependencies.m"
{
#line 2404 "parse_tree.get_dependencies.c"
  {
#line 2406 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2409 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2411 "parse_tree.get_dependencies.c"
  }
#line 340 "get_dependencies.m"
}

#line 356 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
#line 356 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 356 "get_dependencies.m"
{
#line 356 "get_dependencies.m"
  {
#line 356 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 356 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 356 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 356 "get_dependencies.m"
    {
#line 356 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 356 "get_dependencies.m"
      return;
    }
#line 356 "get_dependencies.m"
  }
#line 356 "get_dependencies.m"
}

#line 356 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 356 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 356 "get_dependencies.m"
{
#line 2457 "parse_tree.get_dependencies.c"
  {
#line 2459 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2462 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2464 "parse_tree.get_dependencies.c"
  }
#line 356 "get_dependencies.m"
}

#line 344 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
#line 344 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 344 "get_dependencies.m"
{
#line 344 "get_dependencies.m"
  {
#line 344 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 344 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 344 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 344 "get_dependencies.m"
    {
#line 344 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 344 "get_dependencies.m"
      return;
    }
#line 344 "get_dependencies.m"
  }
#line 344 "get_dependencies.m"
}

#line 344 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 344 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 344 "get_dependencies.m"
{
#line 2510 "parse_tree.get_dependencies.c"
  {
#line 2512 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2515 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2517 "parse_tree.get_dependencies.c"
  }
#line 344 "get_dependencies.m"
}

#line 371 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
#line 371 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 371 "get_dependencies.m"
{
#line 371 "get_dependencies.m"
  {
#line 371 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 371 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastX_24 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 371 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastY_25 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 371 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_24 == parse_tree__get_dependencies__CastY_25);
#line 371 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 2546 "parse_tree.get_dependencies.c"
      *parse_tree__get_dependencies__HeadVar__1_1 = (MR_Integer) 0;
#line 371 "get_dependencies.m"
    else
#line 371 "get_dependencies.m"
      {
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_18_18;
#line 371 "get_dependencies.m"
        MR_Integer parse_tree__get_dependencies__V_33_33 = (MR_Integer) parse_tree__get_dependencies__V_4_4;
#line 371 "get_dependencies.m"
        MR_Integer parse_tree__get_dependencies__V_34_34 = (MR_Integer) parse_tree__get_dependencies__V_11_11;

#line 371 "get_dependencies.m"
        {
#line 371 "get_dependencies.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_18_18, parse_tree__get_dependencies__V_33_33, parse_tree__get_dependencies__V_34_34);
        }
#line 2592 "parse_tree.get_dependencies.c"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_18_18 == (MR_Integer) 0);
#line 371 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 371 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_18_18;
#line 371 "get_dependencies.m"
        else
#line 371 "get_dependencies.m"
          {
#line 371 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_19_19;
#line 371 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_35_35 = (MR_Integer) parse_tree__get_dependencies__V_5_5;
#line 371 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_36_36 = (MR_Integer) parse_tree__get_dependencies__V_12_12;

#line 371 "get_dependencies.m"
            {
#line 371 "get_dependencies.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_19_19, parse_tree__get_dependencies__V_35_35, parse_tree__get_dependencies__V_36_36);
            }
#line 2616 "parse_tree.get_dependencies.c"
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_19_19 == (MR_Integer) 0);
#line 371 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 371 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_19_19;
#line 371 "get_dependencies.m"
            else
#line 371 "get_dependencies.m"
              {
#line 371 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_20_20;
#line 371 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_37_37 = (MR_Integer) parse_tree__get_dependencies__V_6_6;
#line 371 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_38_38 = (MR_Integer) parse_tree__get_dependencies__V_13_13;

#line 371 "get_dependencies.m"
                {
#line 371 "get_dependencies.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_20_20, parse_tree__get_dependencies__V_37_37, parse_tree__get_dependencies__V_38_38);
                }
#line 2640 "parse_tree.get_dependencies.c"
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_20_20 == (MR_Integer) 0);
#line 371 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 371 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
                  *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_20_20;
#line 371 "get_dependencies.m"
                else
#line 371 "get_dependencies.m"
                  {
#line 371 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__V_21_21;
#line 371 "get_dependencies.m"
                    MR_Integer parse_tree__get_dependencies__V_39_39 = (MR_Integer) parse_tree__get_dependencies__V_7_7;
#line 371 "get_dependencies.m"
                    MR_Integer parse_tree__get_dependencies__V_40_40 = (MR_Integer) parse_tree__get_dependencies__V_14_14;

#line 371 "get_dependencies.m"
                    {
#line 371 "get_dependencies.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_21_21, parse_tree__get_dependencies__V_39_39, parse_tree__get_dependencies__V_40_40);
                    }
#line 2664 "parse_tree.get_dependencies.c"
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_21_21 == (MR_Integer) 0);
#line 371 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 371 "get_dependencies.m"
                    if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
                      *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_21_21;
#line 371 "get_dependencies.m"
                    else
#line 371 "get_dependencies.m"
                      {
#line 371 "get_dependencies.m"
                        MR_Word parse_tree__get_dependencies__V_22_22;
#line 371 "get_dependencies.m"
                        MR_Integer parse_tree__get_dependencies__V_41_41 = (MR_Integer) parse_tree__get_dependencies__V_8_8;
#line 371 "get_dependencies.m"
                        MR_Integer parse_tree__get_dependencies__V_42_42 = (MR_Integer) parse_tree__get_dependencies__V_15_15;

#line 371 "get_dependencies.m"
                        {
#line 371 "get_dependencies.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_22_22, parse_tree__get_dependencies__V_41_41, parse_tree__get_dependencies__V_42_42);
                        }
#line 2688 "parse_tree.get_dependencies.c"
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_22_22 == (MR_Integer) 0);
#line 371 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 371 "get_dependencies.m"
                        if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
                          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_22_22;
#line 371 "get_dependencies.m"
                        else
#line 371 "get_dependencies.m"
                          {
#line 371 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__V_23_23;
#line 371 "get_dependencies.m"
                            MR_Integer parse_tree__get_dependencies__V_43_43 = (MR_Integer) parse_tree__get_dependencies__V_9_9;
#line 371 "get_dependencies.m"
                            MR_Integer parse_tree__get_dependencies__V_44_44 = (MR_Integer) parse_tree__get_dependencies__V_16_16;

#line 371 "get_dependencies.m"
                            {
#line 371 "get_dependencies.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_23_23, parse_tree__get_dependencies__V_43_43, parse_tree__get_dependencies__V_44_44);
                            }
#line 2712 "parse_tree.get_dependencies.c"
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_23_23 == (MR_Integer) 0);
#line 371 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 371 "get_dependencies.m"
                            if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
                              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_23_23;
#line 371 "get_dependencies.m"
                            else
#line 371 "get_dependencies.m"
                              {
#line 371 "get_dependencies.m"
                                MR_Integer parse_tree__get_dependencies__V_45_45 = (MR_Integer) parse_tree__get_dependencies__V_10_10;
#line 371 "get_dependencies.m"
                                MR_Integer parse_tree__get_dependencies__V_46_46 = (MR_Integer) parse_tree__get_dependencies__V_17_17;

#line 371 "get_dependencies.m"
                                {
#line 371 "get_dependencies.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__V_45_45, parse_tree__get_dependencies__V_46_46);
#line 371 "get_dependencies.m"
                                  return;
                                }
#line 371 "get_dependencies.m"
                              }
#line 371 "get_dependencies.m"
                          }
#line 371 "get_dependencies.m"
                      }
#line 371 "get_dependencies.m"
                  }
#line 371 "get_dependencies.m"
              }
#line 371 "get_dependencies.m"
          }
#line 371 "get_dependencies.m"
      }
#line 371 "get_dependencies.m"
  }
#line 371 "get_dependencies.m"
}

#line 371 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 371 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 371 "get_dependencies.m"
{
#line 371 "get_dependencies.m"
  {
#line 371 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 371 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastX_17 = (MR_Integer) parse_tree__get_dependencies__HeadVar__1_1;
#line 371 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastY_18 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;

#line 371 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_17 == parse_tree__get_dependencies__CastY_18);
#line 371 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 371 "get_dependencies.m"
    else
#line 371 "get_dependencies.m"
      {
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 2812 "parse_tree.get_dependencies.c"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_3_3 == parse_tree__get_dependencies__V_10_10);
#line 371 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
          {
#line 2818 "parse_tree.get_dependencies.c"
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_4_4 == parse_tree__get_dependencies__V_11_11);
#line 371 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
              {
#line 2824 "parse_tree.get_dependencies.c"
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_5_5 == parse_tree__get_dependencies__V_12_12);
#line 371 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
                  {
#line 2830 "parse_tree.get_dependencies.c"
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_6_6 == parse_tree__get_dependencies__V_13_13);
#line 371 "get_dependencies.m"
                    if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
                      {
#line 2836 "parse_tree.get_dependencies.c"
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_7_7 == parse_tree__get_dependencies__V_14_14);
#line 371 "get_dependencies.m"
                        if (parse_tree__get_dependencies__succeeded)
#line 371 "get_dependencies.m"
                          {
#line 2842 "parse_tree.get_dependencies.c"
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_8_8 == parse_tree__get_dependencies__V_15_15);
#line 371 "get_dependencies.m"
                            if (parse_tree__get_dependencies__succeeded)
#line 2846 "parse_tree.get_dependencies.c"
                              parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_9_9 == parse_tree__get_dependencies__V_16_16);
#line 371 "get_dependencies.m"
                          }
#line 371 "get_dependencies.m"
                      }
#line 371 "get_dependencies.m"
                  }
#line 371 "get_dependencies.m"
              }
#line 371 "get_dependencies.m"
          }
#line 371 "get_dependencies.m"
      }
#line 371 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 371 "get_dependencies.m"
  }
#line 371 "get_dependencies.m"
}

#line 835 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
#line 835 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 835 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
#line 835 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3)
#line 835 "get_dependencies.m"
{
#line 839 "get_dependencies.m"
  while (MR_TRUE)
#line 839 "get_dependencies.m"
    {
#line 839 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 839 "get_dependencies.m"
      {
#line 839 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 839 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 839 "get_dependencies.m"
        else
#line 840 "get_dependencies.m"
          {
#line 840 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 840 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 840 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;
#line 859 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Lang_16;
#line 859 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__LiteralOrInclude_18;
#line 842 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
#line 842 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Pragma_11;
#line 843 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12;
#line 843 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13;
#line 843 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_14_14;

#line 842 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 842 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 842 "get_dependencies.m"
              {
#line 842 "get_dependencies.m"
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 843 "get_dependencies.m"
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
#line 843 "get_dependencies.m"
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
#line 843 "get_dependencies.m"
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
#line 843 "get_dependencies.m"
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
#line 847 "get_dependencies.m"
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 1))))
#line 848 "get_dependencies.m"
                  {
#line 848 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 1);

#line 849 "get_dependencies.m"
                    parse_tree__get_dependencies__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 0)));
#line 849 "get_dependencies.m"
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 1)));
#line 848 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 848 "get_dependencies.m"
                  }
#line 847 "get_dependencies.m"
                else
#line 847 "get_dependencies.m"
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 0))))
#line 845 "get_dependencies.m"
                  {
#line 845 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 0);
#line 846 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies___IsLocal_17;

#line 846 "get_dependencies.m"
                    parse_tree__get_dependencies__Lang_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 846 "get_dependencies.m"
                    parse_tree__get_dependencies___IsLocal_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 846 "get_dependencies.m"
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 1)));
#line 845 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 845 "get_dependencies.m"
                  }
#line 847 "get_dependencies.m"
                else
#line 847 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 842 "get_dependencies.m"
              }
#line 859 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 854 "get_dependencies.m"
              if (((MR_tag((MR_Word) parse_tree__get_dependencies__LiteralOrInclude_18)) == (MR_mktag((MR_Integer) 1))))
#line 855 "get_dependencies.m"
                {
#line 855 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__FileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__LiteralOrInclude_18, (MR_Integer) 0)));
#line 855 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__IncludeFile_22;

#line 856 "get_dependencies.m"
                  {
#line 856 "get_dependencies.m"
                    parse_tree__get_dependencies__IncludeFile_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 856 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 0) = ((MR_Box) (parse_tree__get_dependencies__Lang_16));
#line 856 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 1) = ((MR_Box) (parse_tree__get_dependencies__FileName_21));
#line 856 "get_dependencies.m"
                  }
#line 857 "get_dependencies.m"
                  {
#line 857 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2, ((MR_Box) (parse_tree__get_dependencies__IncludeFile_22)));
                  }
#line 855 "get_dependencies.m"
                }
#line 854 "get_dependencies.m"
              else
#line 853 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 859 "get_dependencies.m"
            else
#line 859 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 862 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 862 "get_dependencies.m"
            {
#line 862 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 862 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;

#line 862 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2;
#line 862 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 862 "get_dependencies.m"
            }
#line 862 "get_dependencies.m"
            continue;
#line 840 "get_dependencies.m"
          }
#line 839 "get_dependencies.m"
      }
#line 839 "get_dependencies.m"
      break;
#line 839 "get_dependencies.m"
    }
#line 835 "get_dependencies.m"
}

#line 827 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
#line 827 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_14_14,
#line 827 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
#line 827 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11,
#line 827 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12)
#line 827 "get_dependencies.m"
{
#line 831 "get_dependencies.m"
  {
#line 831 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 831 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 4)));
#line 832 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 0));
#line 832 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 1)));
#line 832 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 2)));
#line 832 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 3)));

#line 833 "get_dependencies.m"
    {
#line 833 "get_dependencies.m"
      parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(parse_tree__get_dependencies__Items_10, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12);
#line 833 "get_dependencies.m"
      return;
    }
#line 831 "get_dependencies.m"
  }
#line 827 "get_dependencies.m"
}

#line 803 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
#line 803 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 803 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 803 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
#line 803 "get_dependencies.m"
{
#line 806 "get_dependencies.m"
  while (MR_TRUE)
#line 806 "get_dependencies.m"
    {
#line 806 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 806 "get_dependencies.m"
      {
#line 806 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 806 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 806 "get_dependencies.m"
        else
#line 808 "get_dependencies.m"
          {
#line 808 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 808 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 808 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;
#line 816 "get_dependencies.m"
            MR_String parse_tree__get_dependencies__FileName_17;
#line 810 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
#line 810 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Pragma_11;
#line 810 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__FTInfo_15;
#line 811 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12;
#line 811 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13;
#line 811 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_14_14;
#line 813 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___PredNameArity_16;

#line 810 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 810 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 810 "get_dependencies.m"
              {
#line 810 "get_dependencies.m"
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 811 "get_dependencies.m"
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
#line 811 "get_dependencies.m"
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
#line 811 "get_dependencies.m"
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
#line 811 "get_dependencies.m"
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
#line 812 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 812 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 812 "get_dependencies.m"
                  {
#line 812 "get_dependencies.m"
                    parse_tree__get_dependencies__FTInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 1)));
#line 813 "get_dependencies.m"
                    parse_tree__get_dependencies___PredNameArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 0)));
#line 813 "get_dependencies.m"
                    parse_tree__get_dependencies__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 1)));
#line 813 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 812 "get_dependencies.m"
                  }
#line 810 "get_dependencies.m"
              }
#line 816 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 815 "get_dependencies.m"
              {
#line 815 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 0) = ((MR_Box) (parse_tree__get_dependencies__FileName_17));
#line 815 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2));
#line 815 "get_dependencies.m"
              }
#line 816 "get_dependencies.m"
            else
#line 816 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 819 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 819 "get_dependencies.m"
            {
#line 819 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 819 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;

#line 819 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
#line 819 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 819 "get_dependencies.m"
            }
#line 819 "get_dependencies.m"
            continue;
#line 808 "get_dependencies.m"
          }
#line 806 "get_dependencies.m"
      }
#line 806 "get_dependencies.m"
      break;
#line 806 "get_dependencies.m"
    }
#line 803 "get_dependencies.m"
}

#line 777 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
#line 777 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 777 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 777 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 777 "get_dependencies.m"
{
#line 780 "get_dependencies.m"
  while (MR_TRUE)
#line 780 "get_dependencies.m"
    {
#line 780 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 780 "get_dependencies.m"
      {
#line 780 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 780 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 780 "get_dependencies.m"
        else
#line 781 "get_dependencies.m"
          {
#line 781 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 781 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 781 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 782 "get_dependencies.m"
            {
#line 782 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__Term_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
#line 783 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 783 "get_dependencies.m"
            {
#line 783 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Terms_8;
#line 783 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 783 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 783 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 783 "get_dependencies.m"
            }
#line 783 "get_dependencies.m"
            continue;
#line 781 "get_dependencies.m"
          }
#line 780 "get_dependencies.m"
      }
#line 780 "get_dependencies.m"
      break;
#line 780 "get_dependencies.m"
    }
#line 777 "get_dependencies.m"
}

#line 719 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
#line 719 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Term_4,
#line 719 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
#line 719 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18)
#line 719 "get_dependencies.m"
{
#line 724 "get_dependencies.m"
  {
#line 724 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 724 "get_dependencies.m"
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 726 "get_dependencies.m"
      {
#line 726 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 0)));
#line 726 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 1)));
#line 726 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21;
#line 726 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 2)));

#line 766 "get_dependencies.m"
#line 766 "get_dependencies.m"
        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Const_8)) {
#line 766 "get_dependencies.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 766 "get_dependencies.m"
          case (MR_Integer) 0:
#line 728 "get_dependencies.m"
            {
#line 728 "get_dependencies.m"
              MR_String parse_tree__get_dependencies__Atom_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)));

#line 730 "get_dependencies.m"
              parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__Atom_10, (MR_String) "format") == 0);
#line 736 "get_dependencies.m"
              if (parse_tree__get_dependencies__succeeded)
#line 733 "get_dependencies.m"
                {
#line 733 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 733 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 733 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 733 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 733 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 733 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 733 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 735 "get_dependencies.m"
                  {
#line 735 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 735 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_32_32 | ((((parse_tree__get_dependencies__V_33_33 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_34_34 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_35_35 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_38_38 << (MR_Integer) 6)))))))))))))));
#line 735 "get_dependencies.m"
                  }
#line 733 "get_dependencies.m"
                }
#line 736 "get_dependencies.m"
              else
#line 745 "get_dependencies.m"
                {
#line 738 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__lo_0;
#line 738 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__hi_1;
#line 738 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__mid_2;
#line 738 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__result_3;

#line 738 "get_dependencies.m"
                  /* binary string simple lookup switch */
#line 738 "get_dependencies.m"
                  parse_tree__get_dependencies__lo_0 = (MR_Integer) 0;
#line 738 "get_dependencies.m"
                  parse_tree__get_dependencies__hi_1 = (MR_Integer) 3;
#line 738 "get_dependencies.m"
                  do
#line 738 "get_dependencies.m"
                    {
#line 738 "get_dependencies.m"
                      parse_tree__get_dependencies__mid_2 = (((parse_tree__get_dependencies__lo_0 + parse_tree__get_dependencies__hi_1)) / (MR_Integer) 2);
#line 738 "get_dependencies.m"
                      parse_tree__get_dependencies__result_3 = MR_strcmp(parse_tree__get_dependencies__Atom_10, ((&parse_tree__get_dependencies_vector_common_8[0 + parse_tree__get_dependencies__mid_2]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0);
#line 738 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__result_3 == (MR_Integer) 0))
#line 738 "get_dependencies.m"
                        {
#line 738 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 738 "get_dependencies.m"
                          /* jump out of search loop */
#line 738 "get_dependencies.m"
                          goto label_0;
#line 738 "get_dependencies.m"
                        }
#line 738 "get_dependencies.m"
                      else
#line 738 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__result_3 < (MR_Integer) 0))
#line 738 "get_dependencies.m"
                        parse_tree__get_dependencies__hi_1 = (parse_tree__get_dependencies__mid_2 - (MR_Integer) 1);
#line 738 "get_dependencies.m"
                      else
#line 738 "get_dependencies.m"
                        parse_tree__get_dependencies__lo_0 = (parse_tree__get_dependencies__mid_2 + (MR_Integer) 1);
#line 738 "get_dependencies.m"
                    }
#line 738 "get_dependencies.m"
                  while ((parse_tree__get_dependencies__lo_0 <= parse_tree__get_dependencies__hi_1));
#line 738 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 738 "get_dependencies.m"
                label_0:;
#line 745 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 744 "get_dependencies.m"
                    {
#line 744 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 744 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 744 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 744 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 744 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 744 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 744 "get_dependencies.m"
                      {
#line 744 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 744 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_46_46 | ((((parse_tree__get_dependencies__V_47_47 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_48_48 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_49_49 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_51_51 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_52_52 << (MR_Integer) 6)))))))))))))));
#line 744 "get_dependencies.m"
                      }
#line 744 "get_dependencies.m"
                    }
#line 745 "get_dependencies.m"
                  else
#line 763 "get_dependencies.m"
                    {
#line 747 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies__slot_4;
#line 747 "get_dependencies.m"
                      MR_String parse_tree__get_dependencies__str_5;

#line 747 "get_dependencies.m"
                      /* hashed string simple lookup switch */
#line 747 "get_dependencies.m"
                      /* compute the hash value of the input string */
#line 747 "get_dependencies.m"
                      parse_tree__get_dependencies__slot_4 = ((MR_hash_string5(parse_tree__get_dependencies__Atom_10)) & (MR_Integer) 31);
#line 747 "get_dependencies.m"
                      /* no collisions; no hash chain loop */
#line 747 "get_dependencies.m"
                      /* lookup the string for this hash slot */
#line 747 "get_dependencies.m"
                      parse_tree__get_dependencies__str_5 = ((&parse_tree__get_dependencies_vector_common_8[4 + parse_tree__get_dependencies__slot_4]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
#line 747 "get_dependencies.m"
                      /* did we find a match? */
#line 747 "get_dependencies.m"
                      if ((((parse_tree__get_dependencies__str_5 != NULL)) && ((strcmp(parse_tree__get_dependencies__str_5, parse_tree__get_dependencies__Atom_10) == 0))))
#line 747 "get_dependencies.m"
                        {
#line 747 "get_dependencies.m"
                          /* we found a match; look up the results */
#line 747 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 747 "get_dependencies.m"
                          /* jump out of search loop */
#line 747 "get_dependencies.m"
                          goto label_1;
#line 747 "get_dependencies.m"
                        }
#line 747 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 747 "get_dependencies.m"
                    label_1:;
#line 763 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 760 "get_dependencies.m"
                        {
#line 760 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 760 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 760 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 760 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 760 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 760 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 760 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 762 "get_dependencies.m"
                          {
#line 762 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 762 "get_dependencies.m"
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_53_53 | ((((parse_tree__get_dependencies__V_54_54 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_55_55 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_56_56 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_59_59 << (MR_Integer) 6)))))))))))))));
#line 762 "get_dependencies.m"
                          }
#line 760 "get_dependencies.m"
                        }
#line 763 "get_dependencies.m"
                      else
#line 763 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 763 "get_dependencies.m"
                    }
#line 745 "get_dependencies.m"
                }
#line 728 "get_dependencies.m"
            }
#line 766 "get_dependencies.m"
            break;
#line 766 "get_dependencies.m"
          case (MR_Integer) 1:
#line 767 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 766 "get_dependencies.m"
            break;
#line 766 "get_dependencies.m"
          case (MR_Integer) 2:
#line 768 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 766 "get_dependencies.m"
            break;
#line 766 "get_dependencies.m"
          case (MR_Integer) 3:
#line 766 "get_dependencies.m"
#line 766 "get_dependencies.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)))) {
#line 766 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 766 "get_dependencies.m"
              case (MR_Integer) 0:
#line 769 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 766 "get_dependencies.m"
                break;
#line 766 "get_dependencies.m"
              case (MR_Integer) 1:
#line 770 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 766 "get_dependencies.m"
                break;
#line 766 "get_dependencies.m"
              case (MR_Integer) 2:
#line 771 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 766 "get_dependencies.m"
                break;
#line 766 "get_dependencies.m"
            }
#line 766 "get_dependencies.m"
            break;
#line 766 "get_dependencies.m"
        }
#line 774 "get_dependencies.m"
        {
#line 774 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__ArgTerms_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);
#line 774 "get_dependencies.m"
          return;
        }
#line 726 "get_dependencies.m"
      }
#line 724 "get_dependencies.m"
    else
#line 724 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 724 "get_dependencies.m"
  }
#line 719 "get_dependencies.m"
}

#line 709 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
#line 709 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 709 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 709 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 709 "get_dependencies.m"
{
#line 713 "get_dependencies.m"
  {
#line 713 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 713 "get_dependencies.m"
    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 713 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 713 "get_dependencies.m"
    else
#line 715 "get_dependencies.m"
      {
#line 715 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__CatchAnyExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 715 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 1)));
#line 716 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies___Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 0)));

#line 717 "get_dependencies.m"
        {
#line 717 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
#line 717 "get_dependencies.m"
          return;
        }
#line 715 "get_dependencies.m"
      }
#line 713 "get_dependencies.m"
  }
#line 709 "get_dependencies.m"
}

#line 698 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
#line 698 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 698 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 698 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 698 "get_dependencies.m"
{
#line 701 "get_dependencies.m"
  while (MR_TRUE)
#line 701 "get_dependencies.m"
    {
#line 701 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 701 "get_dependencies.m"
      {
#line 701 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 701 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 701 "get_dependencies.m"
        else
#line 703 "get_dependencies.m"
          {
#line 703 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 703 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 703 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 1)));
#line 703 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;
#line 704 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 0)));

#line 705 "get_dependencies.m"
            {
#line 705 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14);
            }
#line 706 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 706 "get_dependencies.m"
            {
#line 706 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__CatchExprs_8;
#line 706 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;

#line 706 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 706 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 706 "get_dependencies.m"
            }
#line 706 "get_dependencies.m"
            continue;
#line 703 "get_dependencies.m"
          }
#line 701 "get_dependencies.m"
      }
#line 701 "get_dependencies.m"
      break;
#line 701 "get_dependencies.m"
    }
#line 698 "get_dependencies.m"
}

#line 691 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
#line 691 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 691 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 691 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 691 "get_dependencies.m"
{
#line 694 "get_dependencies.m"
  {
#line 694 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 694 "get_dependencies.m"
    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 694 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 694 "get_dependencies.m"
    else
#line 695 "get_dependencies.m"
      {
#line 695 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));

#line 696 "get_dependencies.m"
        {
#line 696 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
#line 696 "get_dependencies.m"
          return;
        }
#line 695 "get_dependencies.m"
      }
#line 694 "get_dependencies.m"
  }
#line 691 "get_dependencies.m"
}

#line 683 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
#line 683 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 683 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 683 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 683 "get_dependencies.m"
{
#line 686 "get_dependencies.m"
  while (MR_TRUE)
#line 686 "get_dependencies.m"
    {
#line 686 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 686 "get_dependencies.m"
      {
#line 686 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 686 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 686 "get_dependencies.m"
        else
#line 687 "get_dependencies.m"
          {
#line 687 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 687 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 687 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 688 "get_dependencies.m"
            {
#line 688 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
#line 689 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 689 "get_dependencies.m"
            {
#line 689 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Goals_8;
#line 689 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 689 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 689 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 689 "get_dependencies.m"
            }
#line 689 "get_dependencies.m"
            continue;
#line 687 "get_dependencies.m"
          }
#line 686 "get_dependencies.m"
      }
#line 686 "get_dependencies.m"
      break;
#line 686 "get_dependencies.m"
    }
#line 683 "get_dependencies.m"
}

#line 555 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Goal_4,
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67,
#line 555 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68)
#line 555 "get_dependencies.m"
{
#line 560 "get_dependencies.m"
  while (MR_TRUE)
#line 560 "get_dependencies.m"
    {
#line 560 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 560 "get_dependencies.m"
      {
#line 560 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 560 "get_dependencies.m"
#line 560 "get_dependencies.m"
        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Goal_4)) {
#line 560 "get_dependencies.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 560 "get_dependencies.m"
          case (MR_Integer) 0:
#line 678 "get_dependencies.m"
            {
#line 678 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__TermA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 678 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__TermB_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 678 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_69_69;
#line 678 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));
#line 678 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies___Purity_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

#line 679 "get_dependencies.m"
              {
#line 679 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermA_65, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_69_69);
              }
#line 680 "get_dependencies.m"
              {
#line 680 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermB_66, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_69_69, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 680 "get_dependencies.m"
                return;
              }
#line 678 "get_dependencies.m"
            }
#line 560 "get_dependencies.m"
            break;
#line 560 "get_dependencies.m"
          case (MR_Integer) 1:
#line 628 "get_dependencies.m"
            {
#line 628 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__CalleeSymName_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 628 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__Args_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 628 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75;
#line 628 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));
#line 628 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies___Purity_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 660 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__ModuleName_60;
#line 630 "get_dependencies.m"
              MR_String parse_tree__get_dependencies__V_72_72;

#line 630 "get_dependencies.m"
              parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_58)) == (MR_mktag((MR_Integer) 1)));
#line 630 "get_dependencies.m"
              if (parse_tree__get_dependencies__succeeded)
#line 630 "get_dependencies.m"
                {
#line 630 "get_dependencies.m"
                  parse_tree__get_dependencies__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_58, (MR_Integer) 0)));
#line 630 "get_dependencies.m"
                  parse_tree__get_dependencies__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_58, (MR_Integer) 1)));
#line 630 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_72_72, (MR_String) "format") == 0);
#line 630 "get_dependencies.m"
                }
#line 660 "get_dependencies.m"
              if (parse_tree__get_dependencies__succeeded)
#line 641 "get_dependencies.m"
                {
#line 634 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__V_224_224;

#line 633 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_60)) == (MR_mktag((MR_Integer) 0)));
#line 633 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 633 "get_dependencies.m"
                    {
#line 633 "get_dependencies.m"
                      parse_tree__get_dependencies__V_224_224 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 0)));
#line 634 "get_dependencies.m"
                      if ((strcmp(parse_tree__get_dependencies__V_224_224, (MR_String) "io") == 0))
#line 634 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 634 "get_dependencies.m"
                      else
#line 634 "get_dependencies.m"
                      if ((strcmp(parse_tree__get_dependencies__V_224_224, (MR_String) "string") == 0))
#line 633 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 634 "get_dependencies.m"
                      else
#line 634 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 633 "get_dependencies.m"
                    }
#line 641 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 640 "get_dependencies.m"
                    {
#line 640 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_166_166 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 640 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 640 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 640 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_169_169 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 640 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 640 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 640 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 640 "get_dependencies.m"
                      {
#line 640 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 640 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_166_166 | ((((parse_tree__get_dependencies__V_167_167 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_168_168 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_169_169 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_171_171 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_172_172 << (MR_Integer) 6)))))))))))))));
#line 640 "get_dependencies.m"
                      }
#line 640 "get_dependencies.m"
                    }
#line 641 "get_dependencies.m"
                  else
#line 655 "get_dependencies.m"
                    {
#line 643 "get_dependencies.m"
                      if (((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_60)) == (MR_mktag((MR_Integer) 1))))
#line 644 "get_dependencies.m"
                        {
#line 644 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 0)));
#line 644 "get_dependencies.m"
                          MR_String parse_tree__get_dependencies__V_78_78;
#line 644 "get_dependencies.m"
                          MR_String parse_tree__get_dependencies__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 1)));

#line 645 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_79_79, (MR_String) "string_writer") == 0);
#line 644 "get_dependencies.m"
                          if (parse_tree__get_dependencies__succeeded)
#line 644 "get_dependencies.m"
                            {
#line 644 "get_dependencies.m"
                              parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__V_77_77)) == (MR_mktag((MR_Integer) 0)));
#line 644 "get_dependencies.m"
                              if (parse_tree__get_dependencies__succeeded)
#line 644 "get_dependencies.m"
                                {
#line 644 "get_dependencies.m"
                                  parse_tree__get_dependencies__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_77_77, (MR_Integer) 0)));
#line 644 "get_dependencies.m"
                                  parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_78_78, (MR_String) "stream") == 0);
#line 644 "get_dependencies.m"
                                }
#line 644 "get_dependencies.m"
                            }
#line 644 "get_dependencies.m"
                        }
#line 643 "get_dependencies.m"
                      else
#line 643 "get_dependencies.m"
                        {
#line 643 "get_dependencies.m"
                          MR_String parse_tree__get_dependencies__V_225_225 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 0)));

#line 643 "get_dependencies.m"
                          if ((strcmp(parse_tree__get_dependencies__V_225_225, (MR_String) "stream") == 0))
#line 642 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 643 "get_dependencies.m"
                          else
#line 643 "get_dependencies.m"
                          if ((strcmp(parse_tree__get_dependencies__V_225_225, (MR_String) "string_writer") == 0))
#line 643 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 643 "get_dependencies.m"
                          else
#line 643 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 643 "get_dependencies.m"
                        }
#line 655 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 652 "get_dependencies.m"
                        {
#line 652 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_173_173 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 652 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_175_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 652 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_176_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 652 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 652 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 652 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 654 "get_dependencies.m"
                          {
#line 654 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 654 "get_dependencies.m"
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_173_173 | ((((parse_tree__get_dependencies__V_174_174 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_175_175 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_176_176 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_179_179 << (MR_Integer) 6)))))))))))))));
#line 654 "get_dependencies.m"
                          }
#line 652 "get_dependencies.m"
                        }
#line 655 "get_dependencies.m"
                      else
#line 655 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 655 "get_dependencies.m"
                    }
#line 641 "get_dependencies.m"
                }
#line 660 "get_dependencies.m"
              else
#line 670 "get_dependencies.m"
                {
#line 661 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__V_86_86;

#line 661 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_58)) == (MR_mktag((MR_Integer) 0)));
#line 661 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 661 "get_dependencies.m"
                    {
#line 661 "get_dependencies.m"
                      parse_tree__get_dependencies__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CalleeSymName_58, (MR_Integer) 0)));
#line 661 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_86_86, (MR_String) "format") == 0);
#line 661 "get_dependencies.m"
                    }
#line 670 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 668 "get_dependencies.m"
                    {
#line 668 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_187_187 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 668 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 668 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 668 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_193_193 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 668 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_191_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 668 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_192_192 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 669 "get_dependencies.m"
                      {
#line 669 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 669 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_187_187 | ((((parse_tree__get_dependencies__V_188_188 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_189_189 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_190_190 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_193_193 << (MR_Integer) 6)))))))))))))));
#line 669 "get_dependencies.m"
                      }
#line 668 "get_dependencies.m"
                    }
#line 670 "get_dependencies.m"
                  else
#line 670 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 670 "get_dependencies.m"
                }
#line 673 "get_dependencies.m"
              {
#line 673 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__Args_59, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 673 "get_dependencies.m"
                return;
              }
#line 628 "get_dependencies.m"
            }
#line 560 "get_dependencies.m"
            break;
#line 560 "get_dependencies.m"
          case (MR_Integer) 2:
#line 570 "get_dependencies.m"
            {
#line 570 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 570 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 570 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_112;
#line 565 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));

#line 571 "get_dependencies.m"
              {
#line 571 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_112);
              }
#line 572 "get_dependencies.m"
              /* direct tailcall eliminated */
#line 572 "get_dependencies.m"
              {
#line 572 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_10;
#line 572 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_112;

#line 572 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 572 "get_dependencies.m"
                parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 572 "get_dependencies.m"
              }
#line 572 "get_dependencies.m"
              continue;
#line 570 "get_dependencies.m"
            }
#line 560 "get_dependencies.m"
            break;
#line 560 "get_dependencies.m"
          case (MR_Integer) 3:
#line 560 "get_dependencies.m"
#line 560 "get_dependencies.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)))) {
#line 560 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 560 "get_dependencies.m"
              case (MR_Integer) 0:
#line 560 "get_dependencies.m"
                *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 1:
#line 615 "get_dependencies.m"
                {
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Else_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98;
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_99_99;
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Then_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

#line 616 "get_dependencies.m"
                  {
#line 616 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Cond_49, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98);
                  }
#line 617 "get_dependencies.m"
                  {
#line 617 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_133, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_99_99);
                  }
#line 618 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 618 "get_dependencies.m"
                  {
#line 618 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__Else_50;
#line 618 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_99_99;

#line 618 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 618 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 618 "get_dependencies.m"
                  }
#line 618 "get_dependencies.m"
                  continue;
#line 615 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 2:
#line 570 "get_dependencies.m"
                {
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_204;
#line 567 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 571 "get_dependencies.m"
                  {
#line 571 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_202, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_204);
                  }
#line 572 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 572 "get_dependencies.m"
                  {
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_203;
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_204;

#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 572 "get_dependencies.m"
                  }
#line 572 "get_dependencies.m"
                  continue;
#line 570 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 3:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 574 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_211;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 4:
#line 561 "get_dependencies.m"
                *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 5:
#line 570 "get_dependencies.m"
                {
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_214;
#line 566 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 571 "get_dependencies.m"
                  {
#line 571 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_212, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_214);
                  }
#line 572 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 572 "get_dependencies.m"
                  {
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_213;
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_214;

#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 572 "get_dependencies.m"
                  }
#line 572 "get_dependencies.m"
                  continue;
#line 570 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 6:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 575 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 575 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_222;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 7:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 576 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 576 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_16;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 8:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 577 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 577 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_223;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 9:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 578 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_201;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 10:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 579 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 579 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_218;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 11:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 580 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 580 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 580 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 580 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 580 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_217;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 12:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 582 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 582 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 582 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 582 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 582 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_216;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 13:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 584 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 584 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 584 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 584 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 584 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_215;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 14:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 586 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 586 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Detism_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_220;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 15:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 587 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 587 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___SwitchVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_219;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 16:
#line 590 "get_dependencies.m"
                {
#line 590 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 588 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 588 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Detism_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 588 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___SwitchVar_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 591 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 591 "get_dependencies.m"
                  {
#line 591 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_221;

#line 591 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 591 "get_dependencies.m"
                  }
#line 591 "get_dependencies.m"
                  continue;
#line 590 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 17:
#line 594 "get_dependencies.m"
                {
#line 594 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeIO_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 594 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;
#line 594 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 593 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 593 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___CompCond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 593 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___RunCond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 593 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Mutables_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 598 "get_dependencies.m"
                  if ((parse_tree__get_dependencies__MaybeIO_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 598 "get_dependencies.m"
                  else
#line 596 "get_dependencies.m"
                    {
#line 597 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_138_138 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 597 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 597 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 597 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 597 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 597 "get_dependencies.m"
                      {
#line 597 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 597 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_138_138 | ((((parse_tree__get_dependencies__V_139_139 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_140_140 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_141_141 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_142_142 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_143_143 << (MR_Integer) 5)) | (((MR_Integer) 1 << (MR_Integer) 6)))))))))))))));
#line 597 "get_dependencies.m"
                      }
#line 596 "get_dependencies.m"
                    }
#line 601 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 601 "get_dependencies.m"
                  {
#line 601 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_127;
#line 601 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;

#line 601 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 601 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 601 "get_dependencies.m"
                  }
#line 601 "get_dependencies.m"
                  continue;
#line 594 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 18:
#line 621 "get_dependencies.m"
                {
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MainGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__OrElseGoals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94;
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_96_96;
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_152_152 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_156_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_157_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_158_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Outer_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Inner_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OutputVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 622 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 622 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 623 "get_dependencies.m"
                  {
#line 623 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 623 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_152_152 | ((((parse_tree__get_dependencies__V_153_153 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_156_156 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_157_157 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_158_158 << (MR_Integer) 6)))))))))))))));
#line 623 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__MainGoal_55, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_96_96);
                  }
#line 625 "get_dependencies.m"
                  {
#line 625 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(parse_tree__get_dependencies__OrElseGoals_56, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_96_96, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 625 "get_dependencies.m"
                    return;
                  }
#line 621 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 19:
#line 604 "get_dependencies.m"
                {
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeElse_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Catches_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeCatchAny_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 7)));
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101;
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105;
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_106_106;
#line 604 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___MaybeIO_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 605 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_145_145 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 605 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 605 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 605 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 605 "get_dependencies.m"
                  {
#line 605 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 605 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_145_145 | ((((parse_tree__get_dependencies__V_146_146 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_147_147 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_149_149 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_150_150 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_151_151 << (MR_Integer) 6)))))))))))))));
#line 605 "get_dependencies.m"
                  }
#line 606 "get_dependencies.m"
                  {
#line 606 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoal_128, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103);
                  }
#line 607 "get_dependencies.m"
                  {
#line 607 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_44, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104);
                  }
#line 608 "get_dependencies.m"
                  {
#line 608 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(parse_tree__get_dependencies__MaybeElse_45, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105);
                  }
#line 610 "get_dependencies.m"
                  {
#line 610 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(parse_tree__get_dependencies__Catches_46, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_106_106);
                  }
#line 612 "get_dependencies.m"
                  {
#line 612 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(parse_tree__get_dependencies__MaybeCatchAny_47, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_106_106, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 612 "get_dependencies.m"
                    return;
                  }
#line 604 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 20:
#line 570 "get_dependencies.m"
                {
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_210;
#line 568 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 571 "get_dependencies.m"
                  {
#line 571 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_208, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_210);
                  }
#line 572 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 572 "get_dependencies.m"
                  {
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_209;
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_210;

#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 572 "get_dependencies.m"
                  }
#line 572 "get_dependencies.m"
                  continue;
#line 570 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 21:
#line 570 "get_dependencies.m"
                {
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 570 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_207;
#line 569 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 571 "get_dependencies.m"
                  {
#line 571 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_205, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_207);
                  }
#line 572 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 572 "get_dependencies.m"
                  {
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_206;
#line 572 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_207;

#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 572 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 572 "get_dependencies.m"
                  }
#line 572 "get_dependencies.m"
                  continue;
#line 570 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
              case (MR_Integer) 22:
#line 675 "get_dependencies.m"
                {
#line 675 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__EventArgs_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 675 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 675 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies___EventName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 676 "get_dependencies.m"
                  {
#line 676 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__EventArgs_63, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 676 "get_dependencies.m"
                    return;
                  }
#line 675 "get_dependencies.m"
                }
#line 560 "get_dependencies.m"
                break;
#line 560 "get_dependencies.m"
            }
#line 560 "get_dependencies.m"
            break;
#line 560 "get_dependencies.m"
        }
#line 560 "get_dependencies.m"
      }
#line 560 "get_dependencies.m"
      break;
#line 560 "get_dependencies.m"
    }
#line 555 "get_dependencies.m"
}

#line 546 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
#line 546 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemClause_4,
#line 546 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 546 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15)
#line 546 "get_dependencies.m"
{
#line 549 "get_dependencies.m"
  {
#line 549 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 549 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__HeadTerms_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 2)));
#line 549 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 5)));
#line 549 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_16_16;
#line 550 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 0)));
#line 550 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 1)));
#line 550 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Origin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 3)));
#line 550 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 4)));
#line 550 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 6)));
#line 550 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 7)));

#line 552 "get_dependencies.m"
    {
#line 552 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__HeadTerms_8, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_16_16);
    }
#line 553 "get_dependencies.m"
    {
#line 553 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_16_16, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);
#line 553 "get_dependencies.m"
      return;
    }
#line 549 "get_dependencies.m"
  }
#line 546 "get_dependencies.m"
}

#line 537 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
#line 537 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
#line 537 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 537 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15)
#line 537 "get_dependencies.m"
{
#line 541 "get_dependencies.m"
  {
#line 541 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 541 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__InitValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 2)));
#line 542 "get_dependencies.m"
    MR_String parse_tree__get_dependencies___Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 0)));
#line 542 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 1)));
#line 542 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 3)));
#line 542 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Attrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 4)));
#line 542 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 5)));
#line 542 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 6)));
#line 542 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 7)));

#line 544 "get_dependencies.m"
    {
#line 544 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__InitValue_8, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);
#line 544 "get_dependencies.m"
      return;
    }
#line 541 "get_dependencies.m"
  }
#line 537 "get_dependencies.m"
}

#line 533 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
#line 533 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 533 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 533 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 533 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 533 "get_dependencies.m"
{
#line 533 "get_dependencies.m"
  {
#line 533 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 533 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_15;

#line 533 "get_dependencies.m"
    {
#line 533 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_15);
    }
#line 533 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_15));
#line 533 "get_dependencies.m"
  }
#line 533 "get_dependencies.m"
}

#line 522 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
#line 522 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
#line 522 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
#line 522 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14)
#line 522 "get_dependencies.m"
{
#line 526 "get_dependencies.m"
  {
#line 526 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 526 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ProcDef_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 2)));
#line 527 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 0)));
#line 527 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 1)));
#line 527 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 3)));
#line 527 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 4)));

#line 531 "get_dependencies.m"
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__ProcDef_8)) == (MR_mktag((MR_Integer) 1))))
#line 532 "get_dependencies.m"
      {
#line 532 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__ItemClauses_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ProcDef_8, (MR_Integer) 0)));
#line 533 "get_dependencies.m"
        MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14;

#line 533 "get_dependencies.m"
        {
#line 533 "get_dependencies.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[2], parse_tree__get_dependencies__ItemClauses_12, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
        }
#line 533 "get_dependencies.m"
        *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
#line 532 "get_dependencies.m"
      }
#line 531 "get_dependencies.m"
    else
#line 530 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13;
#line 526 "get_dependencies.m"
  }
#line 522 "get_dependencies.m"
}

#line 503 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
#line 503 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 503 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 503 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 503 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 503 "get_dependencies.m"
{
#line 503 "get_dependencies.m"
  {
#line 503 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 503 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_15;

#line 503 "get_dependencies.m"
    {
#line 503 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_15);
    }
#line 503 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_15));
#line 503 "get_dependencies.m"
  }
#line 503 "get_dependencies.m"
}

#line 480 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
#line 480 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 480 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 480 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 480 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 480 "get_dependencies.m"
{
#line 480 "get_dependencies.m"
  {
#line 480 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 480 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14;

#line 480 "get_dependencies.m"
    {
#line 480 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14);
    }
#line 480 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14));
#line 480 "get_dependencies.m"
  }
#line 480 "get_dependencies.m"
}

#line 402 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
#line 402 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 402 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 402 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 402 "get_dependencies.m"
{
#line 405 "get_dependencies.m"
  while (MR_TRUE)
#line 405 "get_dependencies.m"
    {
#line 405 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 405 "get_dependencies.m"
      {
#line 405 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 405 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 405 "get_dependencies.m"
        else
#line 406 "get_dependencies.m"
          {
#line 406 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 406 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 406 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 411 "get_dependencies.m"
#line 411 "get_dependencies.m"
            switch (MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) {
#line 411 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 411 "get_dependencies.m"
              case (MR_Integer) 0:
#line 408 "get_dependencies.m"
                {
#line 408 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ItemClause_10 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 0);

#line 409 "get_dependencies.m"
                  {
#line 409 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(parse_tree__get_dependencies__ItemClause_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107);
                  }
#line 408 "get_dependencies.m"
                }
#line 411 "get_dependencies.m"
                break;
#line 411 "get_dependencies.m"
              case (MR_Integer) 1:
#line 488 "get_dependencies.m"
                {
#line 488 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ItemTypeDefn_69 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 1);
#line 488 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__TypeDefn_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 2)));
#line 489 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TypeCtorName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 0)));
#line 489 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TypeParams_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 1)));
#line 489 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TVarSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 3)));
#line 489 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Context_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 4)));
#line 489 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies___SeqNum_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 5)));

#line 494 "get_dependencies.m"
#line 494 "get_dependencies.m"
                  switch (MR_tag((MR_Word) parse_tree__get_dependencies__TypeDefn_72)) {
#line 494 "get_dependencies.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 494 "get_dependencies.m"
                    case (MR_Integer) 0:
#line 492 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 494 "get_dependencies.m"
                      break;
#line 494 "get_dependencies.m"
                    case (MR_Integer) 1:
#line 495 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 494 "get_dependencies.m"
                      break;
#line 494 "get_dependencies.m"
                    case (MR_Integer) 2:
#line 497 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 494 "get_dependencies.m"
                      break;
#line 494 "get_dependencies.m"
                    case (MR_Integer) 3:
#line 494 "get_dependencies.m"
#line 494 "get_dependencies.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 0)))) {
#line 494 "get_dependencies.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 494 "get_dependencies.m"
                        case (MR_Integer) 0:
#line 500 "get_dependencies.m"
                          {
#line 500 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__SolverTypeDetails_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 1)));
#line 500 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__MutableItems_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 4)));
#line 499 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___MaybeUnifyComparePredNames_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 2)));
#line 501 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___RepresentationType_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 0)));
#line 501 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___InitPred_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 1)));
#line 501 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___GroundInst_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 2)));
#line 501 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___AnyInst_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 3)));
#line 503 "get_dependencies.m"
                            MR_Box parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 503 "get_dependencies.m"
                            {
#line 503 "get_dependencies.m"
                              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[1], parse_tree__get_dependencies__MutableItems_84, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_107_107);
                            }
#line 503 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = ((MR_Word) parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_107_107);
#line 500 "get_dependencies.m"
                          }
#line 494 "get_dependencies.m"
                          break;
#line 494 "get_dependencies.m"
                        case (MR_Integer) 1:
#line 506 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 494 "get_dependencies.m"
                          break;
#line 494 "get_dependencies.m"
                      }
#line 494 "get_dependencies.m"
                      break;
#line 494 "get_dependencies.m"
                  }
#line 488 "get_dependencies.m"
                }
#line 411 "get_dependencies.m"
                break;
#line 411 "get_dependencies.m"
              case (MR_Integer) 2:
#line 510 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                break;
#line 411 "get_dependencies.m"
              case (MR_Integer) 3:
#line 411 "get_dependencies.m"
#line 411 "get_dependencies.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) {
#line 411 "get_dependencies.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 411 "get_dependencies.m"
                  case (MR_Integer) 0:
#line 511 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 1:
#line 512 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 2:
#line 513 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 3:
#line 412 "get_dependencies.m"
                    {
#line 412 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemPragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 412 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 0)));
#line 413 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 1)));
#line 413 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 2)));
#line 413 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 3)));

#line 431 "get_dependencies.m"
#line 431 "get_dependencies.m"
                      switch (MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_12)) {
#line 431 "get_dependencies.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 431 "get_dependencies.m"
                        case (MR_Integer) 0:
#line 432 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                          break;
#line 431 "get_dependencies.m"
                        case (MR_Integer) 1:
#line 433 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                          break;
#line 431 "get_dependencies.m"
                        case (MR_Integer) 2:
#line 434 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                          break;
#line 431 "get_dependencies.m"
                        case (MR_Integer) 3:
#line 431 "get_dependencies.m"
#line 431 "get_dependencies.m"
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 0)))) {
#line 431 "get_dependencies.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 431 "get_dependencies.m"
                            case (MR_Integer) 0:
#line 435 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 1:
#line 436 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 2:
#line 437 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 3:
#line 438 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 4:
#line 439 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 5:
#line 440 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 6:
#line 441 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 7:
#line 442 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 8:
#line 443 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 9:
#line 444 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 10:
#line 445 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 11:
#line 446 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 12:
#line 447 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 13:
#line 448 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 14:
#line 415 "get_dependencies.m"
                              {
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__TableInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 1)));
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__MaybeAttributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 3)));
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 415 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 416 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 0)));
#line 416 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 1)));
#line 416 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 2)));
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 417 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 417 "get_dependencies.m"
                                {
#line 417 "get_dependencies.m"
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 417 "get_dependencies.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103, 0) = ((MR_Box) (((MR_Integer) 1 | ((((parse_tree__get_dependencies__V_128_128 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_129_129 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 6)))))))))))))));
#line 417 "get_dependencies.m"
                                }
#line 420 "get_dependencies.m"
                                if ((parse_tree__get_dependencies__MaybeAttributes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "get_dependencies.m"
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 420 "get_dependencies.m"
                                else
#line 421 "get_dependencies.m"
                                  {
#line 421 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__MaybeAttributes_20, (MR_Integer) 0)));
#line 421 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__StatsAttr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 2)));
#line 422 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 0)));
#line 422 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 1)));
#line 422 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 3)));

#line 427 "get_dependencies.m"
#line 427 "get_dependencies.m"
                                    switch (parse_tree__get_dependencies__StatsAttr_22) {
#line 427 "get_dependencies.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 427 "get_dependencies.m"
                                      case (MR_Integer) 1:
#line 428 "get_dependencies.m"
                                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 427 "get_dependencies.m"
                                        break;
#line 427 "get_dependencies.m"
                                      case (MR_Integer) 0:
#line 424 "get_dependencies.m"
                                        {
#line 426 "get_dependencies.m"
                                          {
#line 426 "get_dependencies.m"
                                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 426 "get_dependencies.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107, 0) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_129_129 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 6)))))))))))))));
#line 426 "get_dependencies.m"
                                          }
#line 424 "get_dependencies.m"
                                        }
#line 427 "get_dependencies.m"
                                        break;
#line 427 "get_dependencies.m"
                                    }
#line 421 "get_dependencies.m"
                                  }
#line 415 "get_dependencies.m"
                              }
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 15:
#line 449 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 16:
#line 451 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 17:
#line 452 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 18:
#line 453 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 19:
#line 454 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 20:
#line 455 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 21:
#line 456 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 22:
#line 457 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 23:
#line 458 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 24:
#line 459 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 25:
#line 460 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 26:
#line 461 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 27:
#line 462 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 28:
#line 450 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                            case (MR_Integer) 29:
#line 463 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 431 "get_dependencies.m"
                              break;
#line 431 "get_dependencies.m"
                          }
#line 431 "get_dependencies.m"
                          break;
#line 431 "get_dependencies.m"
                      }
#line 412 "get_dependencies.m"
                    }
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 4:
#line 467 "get_dependencies.m"
                    {
#line 467 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemPromise_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 467 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 1)));
#line 468 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___PromiseType_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 0)));
#line 468 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___VarSet_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 2)));
#line 468 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___UnivQuantVars_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 3)));
#line 468 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 4)));
#line 468 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 5)));

#line 470 "get_dependencies.m"
                      {
#line 470 "get_dependencies.m"
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_57, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107);
                      }
#line 467 "get_dependencies.m"
                    }
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 5:
#line 514 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 6:
#line 472 "get_dependencies.m"
                    {
#line 472 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemInstance_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 472 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__InstanceBody_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 4)));
#line 473 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___DerivingClass_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 0)));
#line 473 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___ClassName_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 1)));
#line 473 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Types_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 2)));
#line 473 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___OriginalTypes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 3)));
#line 473 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___ModuleContainingInstance_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 6)));
#line 473 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 7)));
#line 473 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 8)));
#line 473 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___VarSet_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 5)));

#line 478 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__InstanceBody_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 478 "get_dependencies.m"
                      else
#line 479 "get_dependencies.m"
                        {
#line 479 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__InstanceMethods_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__InstanceBody_65, (MR_Integer) 0)));
#line 480 "get_dependencies.m"
                          MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 480 "get_dependencies.m"
                          {
#line 480 "get_dependencies.m"
                            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[0], parse_tree__get_dependencies__InstanceMethods_67, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_107_107);
                          }
#line 480 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_107_107);
#line 479 "get_dependencies.m"
                        }
#line 472 "get_dependencies.m"
                    }
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 7:
#line 515 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 8:
#line 516 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 9:
#line 484 "get_dependencies.m"
                    {
#line 484 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemMutableInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));

#line 485 "get_dependencies.m"
                      {
#line 485 "get_dependencies.m"
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(parse_tree__get_dependencies__ItemMutableInfo_68, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107);
                      }
#line 484 "get_dependencies.m"
                    }
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                  case (MR_Integer) 10:
#line 517 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 411 "get_dependencies.m"
                    break;
#line 411 "get_dependencies.m"
                }
#line 411 "get_dependencies.m"
                break;
#line 411 "get_dependencies.m"
            }
#line 520 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 520 "get_dependencies.m"
            {
#line 520 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 520 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;

#line 520 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 520 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 520 "get_dependencies.m"
            }
#line 520 "get_dependencies.m"
            continue;
#line 406 "get_dependencies.m"
          }
#line 405 "get_dependencies.m"
      }
#line 405 "get_dependencies.m"
      break;
#line 405 "get_dependencies.m"
    }
#line 402 "get_dependencies.m"
}

#line 229 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
#line 229 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg)
#line 229 "get_dependencies.m"
{
#line 229 "get_dependencies.m"
  {
#line 229 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 229 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;

#line 229 "get_dependencies.m"
    {
#line 229 "get_dependencies.m"
      return parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__229__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 4))));
    }
#line 229 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 229 "get_dependencies.m"
  }
#line 229 "get_dependencies.m"
}

#line 203 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
#line 203 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 203 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
#line 203 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
#line 203 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24)
#line 203 "get_dependencies.m"
{
#line 207 "get_dependencies.m"
  {
#line 207 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_85_85 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedTabling_9;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedSTM_11;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedException_12;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedStringFormat_13;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedStreamFormat_14;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedIO_15;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Deep_16;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Target_17;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__HighLevelCode_18;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Parallel_19;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__UseRegions_20;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__SSDBTraceLevel_21;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__DisableSSDB_22;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_26_26;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_28_28;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
#line 207 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81;

#line 208 "get_dependencies.m"
    {
#line 208 "get_dependencies.m"
      parse_tree__get_dependencies__V_26_26 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 208 "get_dependencies.m"
    {
#line 208 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23 = mercury__set__make_singleton_set_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_26_26)));
    }
#line 209 "get_dependencies.m"
    {
#line 209 "get_dependencies.m"
      parse_tree__get_dependencies__V_28_28 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 209 "get_dependencies.m"
    {
#line 209 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27 = mercury__set__make_singleton_set_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_28_28)));
    }
#line 210 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedTabling_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 210 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 210 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedSTM_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 210 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedException_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 210 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedStringFormat_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 210 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedStreamFormat_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 210 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedIO_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 227 "get_dependencies.m"
#line 227 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedTabling_9) {
#line 227 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 227 "get_dependencies.m"
      case (MR_Integer) 1:
#line 219 "get_dependencies.m"
        {
#line 219 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_42_42;
#line 219 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43;

#line 220 "get_dependencies.m"
          {
#line 220 "get_dependencies.m"
            parse_tree__get_dependencies__V_42_42 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
          }
#line 220 "get_dependencies.m"
          {
#line 220 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_42_42)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43);
          }
#line 224 "get_dependencies.m"
#line 224 "get_dependencies.m"
          switch (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10) {
#line 224 "get_dependencies.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 224 "get_dependencies.m"
            case (MR_Integer) 1:
#line 222 "get_dependencies.m"
              {
#line 222 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_44_44;

#line 223 "get_dependencies.m"
                {
#line 223 "get_dependencies.m"
                  parse_tree__get_dependencies__V_44_44 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
                }
#line 223 "get_dependencies.m"
                {
#line 223 "get_dependencies.m"
                  mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_44_44)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45);
                }
#line 222 "get_dependencies.m"
              }
#line 224 "get_dependencies.m"
              break;
#line 224 "get_dependencies.m"
            case (MR_Integer) 0:
#line 225 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43;
#line 224 "get_dependencies.m"
              break;
#line 224 "get_dependencies.m"
          }
#line 219 "get_dependencies.m"
        }
#line 227 "get_dependencies.m"
        break;
#line 227 "get_dependencies.m"
      case (MR_Integer) 0:
#line 228 "get_dependencies.m"
        {
#line 228 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_29_29;

#line 229 "get_dependencies.m"
          {
#line 229 "get_dependencies.m"
            parse_tree__get_dependencies__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 229 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[0]));
#line 229 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 1) = ((MR_Box) (parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1));
#line 229 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 229 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 3) = ((MR_Box) (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10));
#line 229 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 4) = ((MR_Box) ((MR_Integer) 0));
#line 229 "get_dependencies.m"
          }
#line 229 "get_dependencies.m"
          {
#line 229 "get_dependencies.m"
            mercury__require__expect_4_p_0(parse_tree__get_dependencies__V_29_29, (MR_String) "parse_tree.get_dependencies", (MR_String) "predicate \140parse_tree.get_dependencies.compute_implicit_import_needs\'/4", (MR_String) "tabling statistics without tabling");
          }
#line 234 "get_dependencies.m"
          {
#line 234 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 221, (MR_Integer) 1);
          }
#line 236 "get_dependencies.m"
          if (!(parse_tree__get_dependencies__succeeded))
#line 236 "get_dependencies.m"
            {
#line 237 "get_dependencies.m"
              {
#line 237 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 222, (MR_Integer) 1);
              }
#line 236 "get_dependencies.m"
              if (!(parse_tree__get_dependencies__succeeded))
#line 240 "get_dependencies.m"
                {
#line 240 "get_dependencies.m"
                  {
#line 240 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 123, (MR_Integer) 1);
                  }
#line 240 "get_dependencies.m"
                }
#line 236 "get_dependencies.m"
            }
#line 244 "get_dependencies.m"
          if (parse_tree__get_dependencies__succeeded)
#line 243 "get_dependencies.m"
            {
#line 243 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_40_40;

#line 243 "get_dependencies.m"
              {
#line 243 "get_dependencies.m"
                parse_tree__get_dependencies__V_40_40 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
              }
#line 243 "get_dependencies.m"
              {
#line 243 "get_dependencies.m"
                mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_40_40)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45);
              }
#line 243 "get_dependencies.m"
            }
#line 244 "get_dependencies.m"
          else
#line 244 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27;
#line 228 "get_dependencies.m"
        }
#line 227 "get_dependencies.m"
        break;
#line 227 "get_dependencies.m"
    }
#line 252 "get_dependencies.m"
#line 252 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedSTM_11) {
#line 252 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 252 "get_dependencies.m"
      case (MR_Integer) 1:
#line 249 "get_dependencies.m"
        {
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_46_46;
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_48_48;
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_49_49;
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_50_50;
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_51_51;
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_52_52;

#line 250 "get_dependencies.m"
          {
#line 250 "get_dependencies.m"
            parse_tree__get_dependencies__V_48_48 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          }
#line 250 "get_dependencies.m"
          {
#line 250 "get_dependencies.m"
            parse_tree__get_dependencies__V_50_50 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 251 "get_dependencies.m"
          {
#line 251 "get_dependencies.m"
            parse_tree__get_dependencies__V_52_52 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
          }
#line 251 "get_dependencies.m"
          {
#line 251 "get_dependencies.m"
            parse_tree__get_dependencies__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_51_51, 0) = ((MR_Box) (parse_tree__get_dependencies__V_52_52));
#line 251 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "get_dependencies.m"
          }
#line 250 "get_dependencies.m"
          {
#line 250 "get_dependencies.m"
            parse_tree__get_dependencies__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_49_49, 0) = ((MR_Box) (parse_tree__get_dependencies__V_50_50));
#line 250 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_49_49, 1) = ((MR_Box) (parse_tree__get_dependencies__V_51_51));
#line 250 "get_dependencies.m"
          }
#line 250 "get_dependencies.m"
          {
#line 250 "get_dependencies.m"
            parse_tree__get_dependencies__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_46_46, 0) = ((MR_Box) (parse_tree__get_dependencies__V_48_48));
#line 250 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_46_46, 1) = ((MR_Box) (parse_tree__get_dependencies__V_49_49));
#line 250 "get_dependencies.m"
          }
#line 250 "get_dependencies.m"
          {
#line 250 "get_dependencies.m"
            mercury__set__insert_list_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, parse_tree__get_dependencies__V_46_46, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47);
          }
#line 249 "get_dependencies.m"
        }
#line 252 "get_dependencies.m"
        break;
#line 252 "get_dependencies.m"
      case (MR_Integer) 0:
#line 253 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45;
#line 252 "get_dependencies.m"
        break;
#line 252 "get_dependencies.m"
    }
#line 258 "get_dependencies.m"
#line 258 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedException_12) {
#line 258 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 258 "get_dependencies.m"
      case (MR_Integer) 1:
#line 256 "get_dependencies.m"
        {
#line 256 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_54_54;

#line 257 "get_dependencies.m"
          {
#line 257 "get_dependencies.m"
            parse_tree__get_dependencies__V_54_54 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 257 "get_dependencies.m"
          {
#line 257 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_54_54)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55);
          }
#line 256 "get_dependencies.m"
        }
#line 258 "get_dependencies.m"
        break;
#line 258 "get_dependencies.m"
      case (MR_Integer) 0:
#line 259 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47;
#line 258 "get_dependencies.m"
        break;
#line 258 "get_dependencies.m"
    }
#line 265 "get_dependencies.m"
#line 265 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedStringFormat_13) {
#line 265 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 265 "get_dependencies.m"
      case (MR_Integer) 1:
#line 262 "get_dependencies.m"
        {
#line 262 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_56_56;
#line 262 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_58_58;
#line 262 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_59_59;
#line 262 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_60_60;

#line 263 "get_dependencies.m"
          {
#line 263 "get_dependencies.m"
            parse_tree__get_dependencies__V_58_58 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          }
#line 264 "get_dependencies.m"
          {
#line 264 "get_dependencies.m"
            parse_tree__get_dependencies__V_60_60 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
          }
#line 264 "get_dependencies.m"
          {
#line 264 "get_dependencies.m"
            parse_tree__get_dependencies__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_59_59, 0) = ((MR_Box) (parse_tree__get_dependencies__V_60_60));
#line 264 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "get_dependencies.m"
          }
#line 263 "get_dependencies.m"
          {
#line 263 "get_dependencies.m"
            parse_tree__get_dependencies__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_56_56, 0) = ((MR_Box) (parse_tree__get_dependencies__V_58_58));
#line 263 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_56_56, 1) = ((MR_Box) (parse_tree__get_dependencies__V_59_59));
#line 263 "get_dependencies.m"
          }
#line 263 "get_dependencies.m"
          {
#line 263 "get_dependencies.m"
            mercury__set__insert_list_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, parse_tree__get_dependencies__V_56_56, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57);
          }
#line 262 "get_dependencies.m"
        }
#line 265 "get_dependencies.m"
        break;
#line 265 "get_dependencies.m"
      case (MR_Integer) 0:
#line 266 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55;
#line 265 "get_dependencies.m"
        break;
#line 265 "get_dependencies.m"
    }
#line 271 "get_dependencies.m"
#line 271 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedStreamFormat_14) {
#line 271 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 271 "get_dependencies.m"
      case (MR_Integer) 1:
#line 269 "get_dependencies.m"
        {
#line 269 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_62_62;

#line 270 "get_dependencies.m"
          {
#line 270 "get_dependencies.m"
            parse_tree__get_dependencies__V_62_62 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
          }
#line 270 "get_dependencies.m"
          {
#line 270 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_62_62)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63);
          }
#line 269 "get_dependencies.m"
        }
#line 271 "get_dependencies.m"
        break;
#line 271 "get_dependencies.m"
      case (MR_Integer) 0:
#line 272 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57;
#line 271 "get_dependencies.m"
        break;
#line 271 "get_dependencies.m"
    }
#line 277 "get_dependencies.m"
#line 277 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedIO_15) {
#line 277 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 277 "get_dependencies.m"
      case (MR_Integer) 1:
#line 275 "get_dependencies.m"
        {
#line 275 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_64_64;

#line 276 "get_dependencies.m"
          {
#line 276 "get_dependencies.m"
            parse_tree__get_dependencies__V_64_64 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          }
#line 276 "get_dependencies.m"
          {
#line 276 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_64_64)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65);
          }
#line 275 "get_dependencies.m"
        }
#line 277 "get_dependencies.m"
        break;
#line 277 "get_dependencies.m"
      case (MR_Integer) 0:
#line 278 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63;
#line 277 "get_dependencies.m"
        break;
#line 277 "get_dependencies.m"
    }
#line 280 "get_dependencies.m"
    {
#line 280 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 196, &parse_tree__get_dependencies__Deep_16);
    }
#line 284 "get_dependencies.m"
#line 284 "get_dependencies.m"
    switch (parse_tree__get_dependencies__Deep_16) {
#line 284 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 284 "get_dependencies.m"
      case (MR_Integer) 0:
#line 285 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
#line 284 "get_dependencies.m"
        break;
#line 284 "get_dependencies.m"
      case (MR_Integer) 1:
#line 282 "get_dependencies.m"
        {
#line 282 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_67_67;

#line 283 "get_dependencies.m"
          {
#line 283 "get_dependencies.m"
            parse_tree__get_dependencies__V_67_67 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
          }
#line 283 "get_dependencies.m"
          {
#line 283 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_67_67)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68);
          }
#line 282 "get_dependencies.m"
        }
#line 284 "get_dependencies.m"
        break;
#line 284 "get_dependencies.m"
    }
#line 289 "get_dependencies.m"
    {
#line 289 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 213, (MR_Integer) 1);
    }
#line 291 "get_dependencies.m"
    if (!(parse_tree__get_dependencies__succeeded))
#line 292 "get_dependencies.m"
      {
#line 292 "get_dependencies.m"
        {
#line 292 "get_dependencies.m"
          parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 214, (MR_Integer) 1);
        }
#line 292 "get_dependencies.m"
      }
#line 297 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 296 "get_dependencies.m"
      {
#line 296 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_73_73;

#line 296 "get_dependencies.m"
        {
#line 296 "get_dependencies.m"
          parse_tree__get_dependencies__V_73_73 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 296 "get_dependencies.m"
        {
#line 296 "get_dependencies.m"
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_73_73)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74);
        }
#line 296 "get_dependencies.m"
      }
#line 297 "get_dependencies.m"
    else
#line 297 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68;
#line 300 "get_dependencies.m"
    {
#line 300 "get_dependencies.m"
      libs__globals__get_target_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__Target_17);
    }
#line 301 "get_dependencies.m"
    {
#line 301 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 255, &parse_tree__get_dependencies__HighLevelCode_18);
    }
#line 302 "get_dependencies.m"
    {
#line 302 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 217, &parse_tree__get_dependencies__Parallel_19);
    }
#line 304 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Target_17 == (MR_Integer) 0);
#line 304 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 304 "get_dependencies.m"
      {
#line 305 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HighLevelCode_18 == (MR_Integer) 0);
#line 304 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 306 "get_dependencies.m"
          parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Parallel_19 == (MR_Integer) 1);
#line 304 "get_dependencies.m"
      }
#line 309 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 308 "get_dependencies.m"
      {
#line 308 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_77_77;

#line 308 "get_dependencies.m"
        {
#line 308 "get_dependencies.m"
          parse_tree__get_dependencies__V_77_77 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
        }
#line 308 "get_dependencies.m"
        {
#line 308 "get_dependencies.m"
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_77_77)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78);
        }
#line 308 "get_dependencies.m"
      }
#line 309 "get_dependencies.m"
    else
#line 309 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74;
#line 312 "get_dependencies.m"
    {
#line 312 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 230, &parse_tree__get_dependencies__UseRegions_20);
    }
#line 316 "get_dependencies.m"
#line 316 "get_dependencies.m"
    switch (parse_tree__get_dependencies__UseRegions_20) {
#line 316 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "get_dependencies.m"
      case (MR_Integer) 0:
#line 317 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
#line 316 "get_dependencies.m"
        break;
#line 316 "get_dependencies.m"
      case (MR_Integer) 1:
#line 314 "get_dependencies.m"
        {
#line 314 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_80_80;

#line 315 "get_dependencies.m"
          {
#line 315 "get_dependencies.m"
            parse_tree__get_dependencies__V_80_80 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 315 "get_dependencies.m"
          {
#line 315 "get_dependencies.m"
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_80_80)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81);
          }
#line 314 "get_dependencies.m"
        }
#line 316 "get_dependencies.m"
        break;
#line 316 "get_dependencies.m"
    }
#line 319 "get_dependencies.m"
    {
#line 319 "get_dependencies.m"
      libs__globals__get_ssdb_trace_level_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__SSDBTraceLevel_21);
    }
#line 320 "get_dependencies.m"
    {
#line 320 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 136, &parse_tree__get_dependencies__DisableSSDB_22);
    }
#line 323 "get_dependencies.m"
#line 323 "get_dependencies.m"
    switch (parse_tree__get_dependencies__SSDBTraceLevel_21) {
#line 323 "get_dependencies.m"
      default:
#line 323 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 323 "get_dependencies.m"
        break;
#line 323 "get_dependencies.m"
      case (MR_Integer) 2:
#line 323 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 323 "get_dependencies.m"
        break;
#line 323 "get_dependencies.m"
      case (MR_Integer) 1:
#line 322 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 323 "get_dependencies.m"
        break;
#line 323 "get_dependencies.m"
    }
#line 324 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 325 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__DisableSSDB_22 == (MR_Integer) 0);
#line 328 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 327 "get_dependencies.m"
      {
#line 327 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_83_83;

#line 327 "get_dependencies.m"
        {
#line 327 "get_dependencies.m"
          parse_tree__get_dependencies__V_83_83 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        }
#line 327 "get_dependencies.m"
        {
#line 327 "get_dependencies.m"
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_83_83)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);
#line 327 "get_dependencies.m"
          return;
        }
#line 327 "get_dependencies.m"
      }
#line 328 "get_dependencies.m"
    else
#line 328 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81;
#line 207 "get_dependencies.m"
  }
#line 203 "get_dependencies.m"
}

#line 171 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
#line 171 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 171 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 171 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 171 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 171 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
#line 171 "get_dependencies.m"
{
#line 175 "get_dependencies.m"
  while (MR_TRUE)
#line 175 "get_dependencies.m"
    {
#line 175 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 175 "get_dependencies.m"
      {
#line 175 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 175 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "get_dependencies.m"
          {
#line 175 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 175 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 175 "get_dependencies.m"
          }
#line 175 "get_dependencies.m"
        else
#line 176 "get_dependencies.m"
          {
#line 176 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Avail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;
#line 176 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28;

#line 180 "get_dependencies.m"
            if (((MR_tag((MR_Word) parse_tree__get_dependencies__Avail_12)) == (MR_mktag((MR_Integer) 0))))
#line 178 "get_dependencies.m"
              {
#line 178 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__ModuleName_16;
#line 178 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_27_27 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Avail_12), (MR_Integer) 0);
#line 178 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_17_17;
#line 178 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_18_18;

#line 178 "get_dependencies.m"
                parse_tree__get_dependencies__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 0)));
#line 178 "get_dependencies.m"
                parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 1)));
#line 178 "get_dependencies.m"
                parse_tree__get_dependencies__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 2)));
#line 179 "get_dependencies.m"
                {
#line 179 "get_dependencies.m"
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__ModuleName_16)), parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28);
                }
#line 178 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 178 "get_dependencies.m"
              }
#line 180 "get_dependencies.m"
            else
#line 181 "get_dependencies.m"
              {
#line 181 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_25_25 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Avail_12), (MR_Integer) 1);
#line 181 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 0)));
#line 181 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 1)));
#line 181 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 2)));

#line 182 "get_dependencies.m"
                {
#line 182 "get_dependencies.m"
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__ModuleName_31)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26);
                }
#line 181 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 181 "get_dependencies.m"
              }
#line 184 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 184 "get_dependencies.m"
            {
#line 184 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Avails_13;
#line 184 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28;
#line 184 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;

#line 184 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
#line 184 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
#line 184 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 184 "get_dependencies.m"
            }
#line 184 "get_dependencies.m"
            continue;
#line 176 "get_dependencies.m"
          }
#line 175 "get_dependencies.m"
      }
#line 175 "get_dependencies.m"
      break;
#line 175 "get_dependencies.m"
    }
#line 171 "get_dependencies.m"
}

#line 142 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
#line 142 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
#line 142 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9)
#line 142 "get_dependencies.m"
{
#line 149 "get_dependencies.m"
  while (MR_TRUE)
#line 149 "get_dependencies.m"
    {
#line 149 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 149 "get_dependencies.m"
      {
#line 149 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 149 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "get_dependencies.m"
          {
#line 150 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
#line 150 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
#line 150 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
#line 150 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
#line 149 "get_dependencies.m"
          }
#line 149 "get_dependencies.m"
        else
#line 153 "get_dependencies.m"
          {
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__RawItemBlock_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__RawItemBlocks_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Section_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 0)));
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Imports_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 3)));
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41;
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42;
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43;
#line 153 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44;
#line 154 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 1)));
#line 154 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Incls_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 2)));
#line 154 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Items_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 4)));

#line 158 "get_dependencies.m"
#line 158 "get_dependencies.m"
            switch (parse_tree__get_dependencies__Section_28) {
#line 158 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 158 "get_dependencies.m"
              case (MR_Integer) 1:
#line 159 "get_dependencies.m"
                {
#line 160 "get_dependencies.m"
                  {
#line 160 "get_dependencies.m"
                    parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_31, parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6, &parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41, parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8, &parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42);
                  }
#line 159 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
#line 159 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
#line 159 "get_dependencies.m"
                }
#line 158 "get_dependencies.m"
                break;
#line 158 "get_dependencies.m"
              case (MR_Integer) 0:
#line 156 "get_dependencies.m"
                {
#line 157 "get_dependencies.m"
                  {
#line 157 "get_dependencies.m"
                    parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_31, parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43, parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44);
                  }
#line 156 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
#line 156 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
#line 156 "get_dependencies.m"
                }
#line 158 "get_dependencies.m"
                break;
#line 158 "get_dependencies.m"
            }
#line 162 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 162 "get_dependencies.m"
            {
#line 162 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__RawItemBlocks_23;
#line 162 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43;
#line 162 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44;
#line 162 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41;
#line 162 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42;

#line 162 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8;
#line 162 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6;
#line 162 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4;
#line 162 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2;
#line 162 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 162 "get_dependencies.m"
            }
#line 162 "get_dependencies.m"
            continue;
#line 153 "get_dependencies.m"
          }
#line 149 "get_dependencies.m"
      }
#line 149 "get_dependencies.m"
      break;
#line 149 "get_dependencies.m"
    }
#line 142 "get_dependencies.m"
}

#line 824 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
#line 824 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 824 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 824 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 824 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 824 "get_dependencies.m"
{
#line 824 "get_dependencies.m"
  {
#line 824 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 824 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12;

#line 824 "get_dependencies.m"
    {
#line 824 "get_dependencies.m"
      parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12);
    }
#line 824 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12));
#line 824 "get_dependencies.m"
  }
#line 824 "get_dependencies.m"
}

#line 96 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(
#line 96 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
#line 96 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
#line 96 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IncludeFiles_4)
#line 96 "get_dependencies.m"
{
#line 823 "get_dependencies.m"
  {
#line 823 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 823 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeInfo_13_13;
#line 823 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_5_5;
#line 823 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_6_6;
#line 824 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__conv1_IncludeFiles_4;

#line 824 "get_dependencies.m"
    {
#line 824 "get_dependencies.m"
      parse_tree__get_dependencies__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 824 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0]));
#line 824 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 1) = ((MR_Box) (parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1));
#line 824 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 824 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 3) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
#line 824 "get_dependencies.m"
    }
#line 825 "get_dependencies.m"
    {
#line 825 "get_dependencies.m"
      parse_tree__get_dependencies__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
#line 7030 "parse_tree.get_dependencies.c"
    {
#line 7032 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7034 "parse_tree.get_dependencies.c"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 7036 "parse_tree.get_dependencies.c"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
#line 7038 "parse_tree.get_dependencies.c"
    }
#line 824 "get_dependencies.m"
    {
#line 824 "get_dependencies.m"
      mercury__list__foldl_4_p_0(parse_tree__get_dependencies__TypeInfo_13_13, (MR_Word) &parse_tree__get_dependencies_scalar_common_1[0], (MR_Word) parse_tree__get_dependencies__V_5_5, (MR_Word) parse_tree__get_dependencies__ItemBlocks_3, ((MR_Box) (parse_tree__get_dependencies__V_6_6)), &parse_tree__get_dependencies__conv1_IncludeFiles_4);
    }
#line 824 "get_dependencies.m"
    *parse_tree__get_dependencies__IncludeFiles_4 = ((MR_Word) parse_tree__get_dependencies__conv1_IncludeFiles_4);
#line 823 "get_dependencies.m"
  }
#line 96 "get_dependencies.m"
}

#line 90 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(
#line 90 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
#line 90 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
#line 90 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__FactTableFileNames_4)
#line 90 "get_dependencies.m"
{
#line 787 "get_dependencies.m"
  {
#line 787 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 787 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__RevFactTableFileNames_5;

#line 788 "get_dependencies.m"
    {
#line 788 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__get_dependencies__RevFactTableFileNames_5);
    }
#line 790 "get_dependencies.m"
    {
#line 790 "get_dependencies.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__get_dependencies__RevFactTableFileNames_5, parse_tree__get_dependencies__FactTableFileNames_4);
#line 790 "get_dependencies.m"
      return;
    }
#line 787 "get_dependencies.m"
  }
#line 90 "get_dependencies.m"
}

#line 84 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(
#line 84 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 84 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Items_6,
#line 84 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
#line 84 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
#line 84 "get_dependencies.m"
{
#line 188 "get_dependencies.m"
  {
#line 188 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 188 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

#line 190 "get_dependencies.m"
    {
#line 190 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
#line 192 "get_dependencies.m"
    {
#line 192 "get_dependencies.m"
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
#line 192 "get_dependencies.m"
      return;
    }
#line 188 "get_dependencies.m"
  }
#line 84 "get_dependencies.m"
}

#line 81 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(
#line 81 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_11,
#line 81 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 81 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_6,
#line 81 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
#line 81 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
#line 81 "get_dependencies.m"
{
#line 196 "get_dependencies.m"
  {
#line 196 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 196 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

#line 198 "get_dependencies.m"
    {
#line 198 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
#line 200 "get_dependencies.m"
    {
#line 200 "get_dependencies.m"
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
#line 200 "get_dependencies.m"
      return;
    }
#line 196 "get_dependencies.m"
  }
#line 81 "get_dependencies.m"
}

#line 67 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(
#line 67 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__RawItemBlocks_6,
#line 67 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IntImportDeps_7,
#line 67 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IntUseDeps_8,
#line 67 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImpImportDeps_9,
#line 67 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImpUseDeps_10)
#line 67 "get_dependencies.m"
{
#line 137 "get_dependencies.m"
  {
#line 137 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 137 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_15_15 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 137 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_11_11;
#line 137 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_12_12;
#line 137 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_13_13;
#line 137 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_14_14;

#line 139 "get_dependencies.m"
    {
#line 139 "get_dependencies.m"
      parse_tree__get_dependencies__V_11_11 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 139 "get_dependencies.m"
    {
#line 139 "get_dependencies.m"
      parse_tree__get_dependencies__V_12_12 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 140 "get_dependencies.m"
    {
#line 140 "get_dependencies.m"
      parse_tree__get_dependencies__V_13_13 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 140 "get_dependencies.m"
    {
#line 140 "get_dependencies.m"
      parse_tree__get_dependencies__V_14_14 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
#line 138 "get_dependencies.m"
    {
#line 138 "get_dependencies.m"
      parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(parse_tree__get_dependencies__RawItemBlocks_6, parse_tree__get_dependencies__V_11_11, parse_tree__get_dependencies__IntImportDeps_7, parse_tree__get_dependencies__V_12_12, parse_tree__get_dependencies__IntUseDeps_8, parse_tree__get_dependencies__V_13_13, parse_tree__get_dependencies__ImpImportDeps_9, parse_tree__get_dependencies__V_14_14, parse_tree__get_dependencies__ImpUseDeps_10);
#line 138 "get_dependencies.m"
      return;
    }
#line 137 "get_dependencies.m"
  }
#line 67 "get_dependencies.m"
}

#line 47 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(
#line 47 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_9,
#line 47 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_4,
#line 47 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
#line 47 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
#line 47 "get_dependencies.m"
{
#line 118 "get_dependencies.m"
  {
#line 118 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 118 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_10_10 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 118 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_7_7;
#line 118 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_8_8;

#line 120 "get_dependencies.m"
    {
#line 120 "get_dependencies.m"
      parse_tree__get_dependencies__V_7_7 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_10_10);
    }
#line 120 "get_dependencies.m"
    {
#line 120 "get_dependencies.m"
      parse_tree__get_dependencies__V_8_8 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_10_10);
    }
#line 119 "get_dependencies.m"
    {
#line 119 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(parse_tree__get_dependencies__ItemBlocks_4, parse_tree__get_dependencies__V_7_7, parse_tree__get_dependencies__ImportDeps_5, parse_tree__get_dependencies__V_8_8, parse_tree__get_dependencies__UseDeps_6);
#line 119 "get_dependencies.m"
      return;
    }
#line 118 "get_dependencies.m"
  }
#line 47 "get_dependencies.m"
}

#line 45 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(
#line 45 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Avails_4,
#line 45 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
#line 45 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
#line 45 "get_dependencies.m"
{
#line 167 "get_dependencies.m"
  {
#line 167 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 167 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_9_9 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 167 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_7_7;
#line 167 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_8_8;

#line 169 "get_dependencies.m"
    {
#line 169 "get_dependencies.m"
      parse_tree__get_dependencies__V_7_7 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_9_9);
    }
#line 169 "get_dependencies.m"
    {
#line 169 "get_dependencies.m"
      parse_tree__get_dependencies__V_8_8 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_9_9);
    }
#line 168 "get_dependencies.m"
    {
#line 168 "get_dependencies.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Avails_4, parse_tree__get_dependencies__V_7_7, parse_tree__get_dependencies__ImportDeps_5, parse_tree__get_dependencies__V_8_8, parse_tree__get_dependencies__UseDeps_6);
#line 168 "get_dependencies.m"
      return;
    }
#line 167 "get_dependencies.m"
  }
#line 45 "get_dependencies.m"
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
