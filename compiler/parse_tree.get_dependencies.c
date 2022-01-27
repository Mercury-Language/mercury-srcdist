/*
** Automatically generated from `get_dependencies.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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

#line 825 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 825 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 825 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 825 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

#line 422 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 422 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 422 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 422 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 123 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
#line 123 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 123 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 123 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 123 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 123 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

#line 259 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__259__1_2_p_0(
#line 259 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
#line 259 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_35);

#line 368 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
#line 368 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 368 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 364 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
#line 364 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 364 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 380 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
#line 380 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 380 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 384 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
#line 384 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 384 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 372 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
#line 372 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 372 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 388 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
#line 388 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 388 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 376 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
#line 376 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 376 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 403 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
#line 403 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

#line 403 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

#line 868 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
#line 868 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 868 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
#line 868 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3);

#line 860 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
#line 860 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_12_12,
#line 860 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
#line 860 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_9,
#line 860 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_10);

#line 836 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
#line 836 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 836 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 836 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

#line 810 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
#line 810 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 810 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 810 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 752 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
#line 752 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Term_4,
#line 752 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
#line 752 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);

#line 742 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
#line 742 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 742 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 742 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 731 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
#line 731 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 731 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 731 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 724 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 724 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 716 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
#line 716 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 716 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 716 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 588 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
#line 588 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Goal_4,
#line 588 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67,
#line 588 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);

#line 579 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
#line 579 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemClause_4,
#line 579 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 579 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);

#line 570 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
#line 570 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
#line 570 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 570 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);

#line 566 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
#line 566 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 566 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 566 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 566 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 555 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
#line 555 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14);

#line 535 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 535 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 535 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 512 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
#line 512 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 512 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 512 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 512 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

#line 434 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
#line 434 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 434 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 434 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

#line 259 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
#line 259 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg);

#line 233 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
#line 233 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 233 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
#line 233 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
#line 233 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);

#line 179 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_items_acc_5_p_0(
#line 179 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 179 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 179 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 179 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 179 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

#line 148 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9);

#line 857 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
#line 857 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 857 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 857 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 857 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1];

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][6];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[3][3];


#line 771 "get_dependencies.m"
/* sealed */ struct parse_tree__get_dependencies__vector_common_type_8_0_s {
#line 771 "get_dependencies.m"
  const MR_String parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
#line 771 "get_dependencies.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 982 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 990 "parse_tree.get_dependencies.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0
  }
};

#line 998 "parse_tree.get_dependencies.c"
static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7] = {
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0
};

#line 1009 "parse_tree.get_dependencies.c"
static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0[7] = {
  (MR_String) "iin_tabling",
  (MR_String) "iin_tabling_statistics",
  (MR_String) "iin_stm",
  (MR_String) "iin_exception",
  (MR_String) "iin_string_format",
  (MR_String) "iin_stream_format",
  (MR_String) "iin_io"
};

#line 1020 "parse_tree.get_dependencies.c"
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

#line 1059 "parse_tree.get_dependencies.c"
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

#line 1074 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

#line 1079 "parse_tree.get_dependencies.c"
static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0
  }
};

#line 1088 "parse_tree.get_dependencies.c"
static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

#line 1093 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0[1] = {
  (MR_Integer) 0
};

#line 1098 "parse_tree.get_dependencies.c"
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

#line 1115 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0 = {
  (MR_String) "dont_need_exception",
  (MR_Integer) 0
};

#line 1121 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1 = {
  (MR_String) "do_need_exception",
  (MR_Integer) 1
};

#line 1127 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1
};

#line 1133 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0
};

#line 1139 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1145 "parse_tree.get_dependencies.c"
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

#line 1162 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0 = {
  (MR_String) "dont_need_io",
  (MR_Integer) 0
};

#line 1168 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1 = {
  (MR_String) "do_need_io",
  (MR_Integer) 1
};

#line 1174 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1
};

#line 1180 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0
};

#line 1186 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1192 "parse_tree.get_dependencies.c"
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

#line 1209 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0 = {
  (MR_String) "dont_need_stm",
  (MR_Integer) 0
};

#line 1215 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1 = {
  (MR_String) "do_need_stm",
  (MR_Integer) 1
};

#line 1221 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1
};

#line 1227 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0
};

#line 1233 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1239 "parse_tree.get_dependencies.c"
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

#line 1256 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0 = {
  (MR_String) "dont_need_stream_format",
  (MR_Integer) 0
};

#line 1262 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1 = {
  (MR_String) "do_need_stream_format",
  (MR_Integer) 1
};

#line 1268 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1
};

#line 1274 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0
};

#line 1280 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1286 "parse_tree.get_dependencies.c"
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

#line 1303 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0 = {
  (MR_String) "dont_need_string_format",
  (MR_Integer) 0
};

#line 1309 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1 = {
  (MR_String) "do_need_string_format",
  (MR_Integer) 1
};

#line 1315 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1
};

#line 1321 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0
};

#line 1327 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1333 "parse_tree.get_dependencies.c"
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

#line 1350 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0 = {
  (MR_String) "dont_need_tabling",
  (MR_Integer) 0
};

#line 1356 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1 = {
  (MR_String) "do_need_tabling",
  (MR_Integer) 1
};

#line 1362 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1
};

#line 1368 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0
};

#line 1374 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1380 "parse_tree.get_dependencies.c"
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

#line 1397 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0 = {
  (MR_String) "dont_need_tabling_statistics",
  (MR_Integer) 0
};

#line 1403 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1 = {
  (MR_String) "do_need_tabling_statistics",
  (MR_Integer) 1
};

#line 1409 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1
};

#line 1415 "parse_tree.get_dependencies.c"
static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0
};

#line 1421 "parse_tree.get_dependencies.c"
static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1427 "parse_tree.get_dependencies.c"
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

#line 1444 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
#line 1447 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1449 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1451 "parse_tree.get_dependencies.c"
{
#line 1453 "parse_tree.get_dependencies.c"
  {
#line 1455 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1458 "parse_tree.get_dependencies.c"
    {
#line 1460 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1463 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1465 "parse_tree.get_dependencies.c"
  }
#line 1467 "parse_tree.get_dependencies.c"
}

#line 1470 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
#line 1473 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1475 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1477 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1479 "parse_tree.get_dependencies.c"
{
#line 1481 "parse_tree.get_dependencies.c"
  {
#line 1483 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1486 "parse_tree.get_dependencies.c"
    {
#line 1488 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1491 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1493 "parse_tree.get_dependencies.c"
  }
#line 1495 "parse_tree.get_dependencies.c"
}

#line 1498 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
#line 1501 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1503 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1505 "parse_tree.get_dependencies.c"
{
#line 1507 "parse_tree.get_dependencies.c"
  {
#line 1509 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1512 "parse_tree.get_dependencies.c"
    {
#line 1514 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1517 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1519 "parse_tree.get_dependencies.c"
  }
#line 1521 "parse_tree.get_dependencies.c"
}

#line 1524 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
#line 1527 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1529 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1531 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1533 "parse_tree.get_dependencies.c"
{
#line 1535 "parse_tree.get_dependencies.c"
  {
#line 1537 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1540 "parse_tree.get_dependencies.c"
    {
#line 1542 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1545 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1547 "parse_tree.get_dependencies.c"
  }
#line 1549 "parse_tree.get_dependencies.c"
}

#line 1552 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
#line 1555 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1557 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1559 "parse_tree.get_dependencies.c"
{
#line 1561 "parse_tree.get_dependencies.c"
  {
#line 1563 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1566 "parse_tree.get_dependencies.c"
    {
#line 1568 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_io_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1571 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1573 "parse_tree.get_dependencies.c"
  }
#line 1575 "parse_tree.get_dependencies.c"
}

#line 1578 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
#line 1581 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1583 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1585 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1587 "parse_tree.get_dependencies.c"
{
#line 1589 "parse_tree.get_dependencies.c"
  {
#line 1591 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1594 "parse_tree.get_dependencies.c"
    {
#line 1596 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_io_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1599 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1601 "parse_tree.get_dependencies.c"
  }
#line 1603 "parse_tree.get_dependencies.c"
}

#line 1606 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
#line 1609 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1611 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1613 "parse_tree.get_dependencies.c"
{
#line 1615 "parse_tree.get_dependencies.c"
  {
#line 1617 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1620 "parse_tree.get_dependencies.c"
    {
#line 1622 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1625 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1627 "parse_tree.get_dependencies.c"
  }
#line 1629 "parse_tree.get_dependencies.c"
}

#line 1632 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
#line 1635 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1637 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1639 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1641 "parse_tree.get_dependencies.c"
{
#line 1643 "parse_tree.get_dependencies.c"
  {
#line 1645 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1648 "parse_tree.get_dependencies.c"
    {
#line 1650 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1653 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1655 "parse_tree.get_dependencies.c"
  }
#line 1657 "parse_tree.get_dependencies.c"
}

#line 1660 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
#line 1663 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1665 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1667 "parse_tree.get_dependencies.c"
{
#line 1669 "parse_tree.get_dependencies.c"
  {
#line 1671 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1674 "parse_tree.get_dependencies.c"
    {
#line 1676 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1679 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1681 "parse_tree.get_dependencies.c"
  }
#line 1683 "parse_tree.get_dependencies.c"
}

#line 1686 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
#line 1689 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1691 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1693 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1695 "parse_tree.get_dependencies.c"
{
#line 1697 "parse_tree.get_dependencies.c"
  {
#line 1699 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1702 "parse_tree.get_dependencies.c"
    {
#line 1704 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1707 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1709 "parse_tree.get_dependencies.c"
  }
#line 1711 "parse_tree.get_dependencies.c"
}

#line 1714 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
#line 1717 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1719 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1721 "parse_tree.get_dependencies.c"
{
#line 1723 "parse_tree.get_dependencies.c"
  {
#line 1725 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1728 "parse_tree.get_dependencies.c"
    {
#line 1730 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1733 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1735 "parse_tree.get_dependencies.c"
  }
#line 1737 "parse_tree.get_dependencies.c"
}

#line 1740 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
#line 1743 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1745 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1747 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1749 "parse_tree.get_dependencies.c"
{
#line 1751 "parse_tree.get_dependencies.c"
  {
#line 1753 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1756 "parse_tree.get_dependencies.c"
    {
#line 1758 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1761 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1763 "parse_tree.get_dependencies.c"
  }
#line 1765 "parse_tree.get_dependencies.c"
}

#line 1768 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
#line 1771 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1773 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1775 "parse_tree.get_dependencies.c"
{
#line 1777 "parse_tree.get_dependencies.c"
  {
#line 1779 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1782 "parse_tree.get_dependencies.c"
    {
#line 1784 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1787 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1789 "parse_tree.get_dependencies.c"
  }
#line 1791 "parse_tree.get_dependencies.c"
}

#line 1794 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
#line 1797 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1799 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1801 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1803 "parse_tree.get_dependencies.c"
{
#line 1805 "parse_tree.get_dependencies.c"
  {
#line 1807 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1810 "parse_tree.get_dependencies.c"
    {
#line 1812 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1815 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1817 "parse_tree.get_dependencies.c"
  }
#line 1819 "parse_tree.get_dependencies.c"
}

#line 1822 "parse_tree.get_dependencies.c"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
#line 1825 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 1827 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
#line 1829 "parse_tree.get_dependencies.c"
{
#line 1831 "parse_tree.get_dependencies.c"
  {
#line 1833 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 1836 "parse_tree.get_dependencies.c"
    {
#line 1838 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
#line 1841 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 1843 "parse_tree.get_dependencies.c"
  }
#line 1845 "parse_tree.get_dependencies.c"
}

#line 1848 "parse_tree.get_dependencies.c"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
#line 1851 "parse_tree.get_dependencies.c"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
#line 1853 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 1855 "parse_tree.get_dependencies.c"
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
#line 1857 "parse_tree.get_dependencies.c"
{
#line 1859 "parse_tree.get_dependencies.c"
  {
#line 1861 "parse_tree.get_dependencies.c"
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

#line 1864 "parse_tree.get_dependencies.c"
    {
#line 1866 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
#line 1869 "parse_tree.get_dependencies.c"
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
#line 1871 "parse_tree.get_dependencies.c"
  }
#line 1873 "parse_tree.get_dependencies.c"
}

#line 825 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 825 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 825 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 825 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
#line 825 "get_dependencies.m"
{
#line 828 "get_dependencies.m"
  while (MR_TRUE)
#line 828 "get_dependencies.m"
    {
#line 828 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 828 "get_dependencies.m"
      {
#line 828 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 828 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 828 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 828 "get_dependencies.m"
        else
#line 830 "get_dependencies.m"
          {
#line 830 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 830 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 830 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
#line 830 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_15_15;
#line 831 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
#line 831 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));

#line 832 "get_dependencies.m"
            {
#line 832 "get_dependencies.m"
              parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(parse_tree__get_dependencies__Items_12, parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_15_15);
            }
#line 833 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 833 "get_dependencies.m"
            {
#line 833 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
#line 833 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_15_15;

#line 833 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
#line 833 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 833 "get_dependencies.m"
            }
#line 833 "get_dependencies.m"
            continue;
#line 830 "get_dependencies.m"
          }
#line 828 "get_dependencies.m"
      }
#line 828 "get_dependencies.m"
      break;
#line 828 "get_dependencies.m"
    }
#line 825 "get_dependencies.m"
}

#line 422 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 422 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 422 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 422 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 422 "get_dependencies.m"
{
#line 425 "get_dependencies.m"
  while (MR_TRUE)
#line 425 "get_dependencies.m"
    {
#line 425 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 425 "get_dependencies.m"
      {
#line 425 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 425 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 425 "get_dependencies.m"
        else
#line 427 "get_dependencies.m"
          {
#line 427 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 427 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 427 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
#line 427 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15_15;
#line 428 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies___Section_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
#line 428 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));

#line 429 "get_dependencies.m"
            {
#line 429 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_12, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15_15);
            }
#line 431 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 431 "get_dependencies.m"
            {
#line 431 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
#line 431 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15_15;

#line 431 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 431 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 431 "get_dependencies.m"
            }
#line 431 "get_dependencies.m"
            continue;
#line 427 "get_dependencies.m"
          }
#line 425 "get_dependencies.m"
      }
#line 425 "get_dependencies.m"
      break;
#line 425 "get_dependencies.m"
    }
#line 422 "get_dependencies.m"
}

#line 123 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
#line 123 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 123 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 123 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 123 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 123 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
#line 123 "get_dependencies.m"
{
#line 127 "get_dependencies.m"
  while (MR_TRUE)
#line 127 "get_dependencies.m"
    {
#line 127 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 127 "get_dependencies.m"
      {
#line 127 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 127 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 127 "get_dependencies.m"
          {
#line 127 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 127 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 127 "get_dependencies.m"
          }
#line 127 "get_dependencies.m"
        else
#line 129 "get_dependencies.m"
          {
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 2)));
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23_23;
#line 129 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24_24;
#line 130 "get_dependencies.m"
            MR_Box parse_tree__get_dependencies___Section_16 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 0));
#line 130 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 1)));

#line 131 "get_dependencies.m"
            {
#line 131 "get_dependencies.m"
              parse_tree__get_dependencies__get_dependencies_in_items_acc_5_p_0(parse_tree__get_dependencies__Items_18, parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23_23, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24_24);
            }
#line 132 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 132 "get_dependencies.m"
            {
#line 132 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_13;
#line 132 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23_23;
#line 132 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24_24;

#line 132 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
#line 132 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
#line 132 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 132 "get_dependencies.m"
            }
#line 132 "get_dependencies.m"
            continue;
#line 129 "get_dependencies.m"
          }
#line 127 "get_dependencies.m"
      }
#line 127 "get_dependencies.m"
      break;
#line 127 "get_dependencies.m"
    }
#line 123 "get_dependencies.m"
}

#line 259 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__259__1_2_p_0(
#line 259 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
#line 259 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_35)
#line 259 "get_dependencies.m"
{
#line 259 "get_dependencies.m"
  {
#line 259 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 == parse_tree__get_dependencies__HeadVar__2_35);

#line 259 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 259 "get_dependencies.m"
  }
#line 259 "get_dependencies.m"
}

#line 368 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
#line 368 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 368 "get_dependencies.m"
{
#line 368 "get_dependencies.m"
  {
#line 368 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 368 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 368 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 368 "get_dependencies.m"
    {
#line 368 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 368 "get_dependencies.m"
      return;
    }
#line 368 "get_dependencies.m"
  }
#line 368 "get_dependencies.m"
}

#line 368 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 368 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 368 "get_dependencies.m"
{
#line 2182 "parse_tree.get_dependencies.c"
  {
#line 2184 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2187 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2189 "parse_tree.get_dependencies.c"
  }
#line 368 "get_dependencies.m"
}

#line 364 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
#line 364 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 364 "get_dependencies.m"
{
#line 364 "get_dependencies.m"
  {
#line 364 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 364 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 364 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 364 "get_dependencies.m"
    {
#line 364 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 364 "get_dependencies.m"
      return;
    }
#line 364 "get_dependencies.m"
  }
#line 364 "get_dependencies.m"
}

#line 364 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 364 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 364 "get_dependencies.m"
{
#line 2235 "parse_tree.get_dependencies.c"
  {
#line 2237 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2240 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2242 "parse_tree.get_dependencies.c"
  }
#line 364 "get_dependencies.m"
}

#line 380 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
#line 380 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 380 "get_dependencies.m"
{
#line 380 "get_dependencies.m"
  {
#line 380 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 380 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 380 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 380 "get_dependencies.m"
    {
#line 380 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 380 "get_dependencies.m"
      return;
    }
#line 380 "get_dependencies.m"
  }
#line 380 "get_dependencies.m"
}

#line 380 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 380 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 380 "get_dependencies.m"
{
#line 2288 "parse_tree.get_dependencies.c"
  {
#line 2290 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2293 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2295 "parse_tree.get_dependencies.c"
  }
#line 380 "get_dependencies.m"
}

#line 384 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
#line 384 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 384 "get_dependencies.m"
{
#line 384 "get_dependencies.m"
  {
#line 384 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 384 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 384 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 384 "get_dependencies.m"
    {
#line 384 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 384 "get_dependencies.m"
      return;
    }
#line 384 "get_dependencies.m"
  }
#line 384 "get_dependencies.m"
}

#line 384 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 384 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 384 "get_dependencies.m"
{
#line 2341 "parse_tree.get_dependencies.c"
  {
#line 2343 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2346 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2348 "parse_tree.get_dependencies.c"
  }
#line 384 "get_dependencies.m"
}

#line 372 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
#line 372 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 372 "get_dependencies.m"
{
#line 372 "get_dependencies.m"
  {
#line 372 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 372 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 372 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 372 "get_dependencies.m"
    {
#line 372 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 372 "get_dependencies.m"
      return;
    }
#line 372 "get_dependencies.m"
  }
#line 372 "get_dependencies.m"
}

#line 372 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 372 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 372 "get_dependencies.m"
{
#line 2394 "parse_tree.get_dependencies.c"
  {
#line 2396 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2399 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2401 "parse_tree.get_dependencies.c"
  }
#line 372 "get_dependencies.m"
}

#line 388 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
#line 388 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 388 "get_dependencies.m"
{
#line 388 "get_dependencies.m"
  {
#line 388 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 388 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 388 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 388 "get_dependencies.m"
    {
#line 388 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 388 "get_dependencies.m"
      return;
    }
#line 388 "get_dependencies.m"
  }
#line 388 "get_dependencies.m"
}

#line 388 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 388 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 388 "get_dependencies.m"
{
#line 2447 "parse_tree.get_dependencies.c"
  {
#line 2449 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2452 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2454 "parse_tree.get_dependencies.c"
  }
#line 388 "get_dependencies.m"
}

#line 376 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
#line 376 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 376 "get_dependencies.m"
{
#line 376 "get_dependencies.m"
  {
#line 376 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 376 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 376 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 376 "get_dependencies.m"
    {
#line 376 "get_dependencies.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
#line 376 "get_dependencies.m"
      return;
    }
#line 376 "get_dependencies.m"
  }
#line 376 "get_dependencies.m"
}

#line 376 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
#line 376 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 376 "get_dependencies.m"
{
#line 2500 "parse_tree.get_dependencies.c"
  {
#line 2502 "parse_tree.get_dependencies.c"
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

#line 2505 "parse_tree.get_dependencies.c"
    return parse_tree__get_dependencies__succeeded;
#line 2507 "parse_tree.get_dependencies.c"
  }
#line 376 "get_dependencies.m"
}

#line 403 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
#line 403 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
#line 403 "get_dependencies.m"
{
#line 403 "get_dependencies.m"
  {
#line 403 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 403 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastX_24 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
#line 403 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastY_25 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

#line 403 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_24 == parse_tree__get_dependencies__CastY_25);
#line 403 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 2536 "parse_tree.get_dependencies.c"
      *parse_tree__get_dependencies__HeadVar__1_1 = (MR_Integer) 0;
#line 403 "get_dependencies.m"
    else
#line 403 "get_dependencies.m"
      {
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_18_18;
#line 403 "get_dependencies.m"
        MR_Integer parse_tree__get_dependencies__V_33_33 = (MR_Integer) parse_tree__get_dependencies__V_4_4;
#line 403 "get_dependencies.m"
        MR_Integer parse_tree__get_dependencies__V_34_34 = (MR_Integer) parse_tree__get_dependencies__V_11_11;

#line 403 "get_dependencies.m"
        {
#line 403 "get_dependencies.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_18_18, parse_tree__get_dependencies__V_33_33, parse_tree__get_dependencies__V_34_34);
        }
#line 2582 "parse_tree.get_dependencies.c"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_18_18 == (MR_Integer) 0);
#line 403 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 403 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_18_18;
#line 403 "get_dependencies.m"
        else
#line 403 "get_dependencies.m"
          {
#line 403 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_19_19;
#line 403 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_35_35 = (MR_Integer) parse_tree__get_dependencies__V_5_5;
#line 403 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_36_36 = (MR_Integer) parse_tree__get_dependencies__V_12_12;

#line 403 "get_dependencies.m"
            {
#line 403 "get_dependencies.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_19_19, parse_tree__get_dependencies__V_35_35, parse_tree__get_dependencies__V_36_36);
            }
#line 2606 "parse_tree.get_dependencies.c"
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_19_19 == (MR_Integer) 0);
#line 403 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 403 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_19_19;
#line 403 "get_dependencies.m"
            else
#line 403 "get_dependencies.m"
              {
#line 403 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_20_20;
#line 403 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_37_37 = (MR_Integer) parse_tree__get_dependencies__V_6_6;
#line 403 "get_dependencies.m"
                MR_Integer parse_tree__get_dependencies__V_38_38 = (MR_Integer) parse_tree__get_dependencies__V_13_13;

#line 403 "get_dependencies.m"
                {
#line 403 "get_dependencies.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_20_20, parse_tree__get_dependencies__V_37_37, parse_tree__get_dependencies__V_38_38);
                }
#line 2630 "parse_tree.get_dependencies.c"
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_20_20 == (MR_Integer) 0);
#line 403 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 403 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
                  *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_20_20;
#line 403 "get_dependencies.m"
                else
#line 403 "get_dependencies.m"
                  {
#line 403 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__V_21_21;
#line 403 "get_dependencies.m"
                    MR_Integer parse_tree__get_dependencies__V_39_39 = (MR_Integer) parse_tree__get_dependencies__V_7_7;
#line 403 "get_dependencies.m"
                    MR_Integer parse_tree__get_dependencies__V_40_40 = (MR_Integer) parse_tree__get_dependencies__V_14_14;

#line 403 "get_dependencies.m"
                    {
#line 403 "get_dependencies.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_21_21, parse_tree__get_dependencies__V_39_39, parse_tree__get_dependencies__V_40_40);
                    }
#line 2654 "parse_tree.get_dependencies.c"
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_21_21 == (MR_Integer) 0);
#line 403 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 403 "get_dependencies.m"
                    if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
                      *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_21_21;
#line 403 "get_dependencies.m"
                    else
#line 403 "get_dependencies.m"
                      {
#line 403 "get_dependencies.m"
                        MR_Word parse_tree__get_dependencies__V_22_22;
#line 403 "get_dependencies.m"
                        MR_Integer parse_tree__get_dependencies__V_41_41 = (MR_Integer) parse_tree__get_dependencies__V_8_8;
#line 403 "get_dependencies.m"
                        MR_Integer parse_tree__get_dependencies__V_42_42 = (MR_Integer) parse_tree__get_dependencies__V_15_15;

#line 403 "get_dependencies.m"
                        {
#line 403 "get_dependencies.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_22_22, parse_tree__get_dependencies__V_41_41, parse_tree__get_dependencies__V_42_42);
                        }
#line 2678 "parse_tree.get_dependencies.c"
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_22_22 == (MR_Integer) 0);
#line 403 "get_dependencies.m"
                        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 403 "get_dependencies.m"
                        if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
                          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_22_22;
#line 403 "get_dependencies.m"
                        else
#line 403 "get_dependencies.m"
                          {
#line 403 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__V_23_23;
#line 403 "get_dependencies.m"
                            MR_Integer parse_tree__get_dependencies__V_43_43 = (MR_Integer) parse_tree__get_dependencies__V_9_9;
#line 403 "get_dependencies.m"
                            MR_Integer parse_tree__get_dependencies__V_44_44 = (MR_Integer) parse_tree__get_dependencies__V_16_16;

#line 403 "get_dependencies.m"
                            {
#line 403 "get_dependencies.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_23_23, parse_tree__get_dependencies__V_43_43, parse_tree__get_dependencies__V_44_44);
                            }
#line 2702 "parse_tree.get_dependencies.c"
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_23_23 == (MR_Integer) 0);
#line 403 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
#line 403 "get_dependencies.m"
                            if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
                              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_23_23;
#line 403 "get_dependencies.m"
                            else
#line 403 "get_dependencies.m"
                              {
#line 403 "get_dependencies.m"
                                MR_Integer parse_tree__get_dependencies__V_45_45 = (MR_Integer) parse_tree__get_dependencies__V_10_10;
#line 403 "get_dependencies.m"
                                MR_Integer parse_tree__get_dependencies__V_46_46 = (MR_Integer) parse_tree__get_dependencies__V_17_17;

#line 403 "get_dependencies.m"
                                {
#line 403 "get_dependencies.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__V_45_45, parse_tree__get_dependencies__V_46_46);
#line 403 "get_dependencies.m"
                                  return;
                                }
#line 403 "get_dependencies.m"
                              }
#line 403 "get_dependencies.m"
                          }
#line 403 "get_dependencies.m"
                      }
#line 403 "get_dependencies.m"
                  }
#line 403 "get_dependencies.m"
              }
#line 403 "get_dependencies.m"
          }
#line 403 "get_dependencies.m"
      }
#line 403 "get_dependencies.m"
  }
#line 403 "get_dependencies.m"
}

#line 403 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 403 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
#line 403 "get_dependencies.m"
{
#line 403 "get_dependencies.m"
  {
#line 403 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 403 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastX_17 = (MR_Integer) parse_tree__get_dependencies__HeadVar__1_1;
#line 403 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies__CastY_18 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;

#line 403 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_17 == parse_tree__get_dependencies__CastY_18);
#line 403 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 403 "get_dependencies.m"
    else
#line 403 "get_dependencies.m"
      {
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 403 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 2802 "parse_tree.get_dependencies.c"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_3_3 == parse_tree__get_dependencies__V_10_10);
#line 403 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
          {
#line 2808 "parse_tree.get_dependencies.c"
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_4_4 == parse_tree__get_dependencies__V_11_11);
#line 403 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
              {
#line 2814 "parse_tree.get_dependencies.c"
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_5_5 == parse_tree__get_dependencies__V_12_12);
#line 403 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
                  {
#line 2820 "parse_tree.get_dependencies.c"
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_6_6 == parse_tree__get_dependencies__V_13_13);
#line 403 "get_dependencies.m"
                    if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
                      {
#line 2826 "parse_tree.get_dependencies.c"
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_7_7 == parse_tree__get_dependencies__V_14_14);
#line 403 "get_dependencies.m"
                        if (parse_tree__get_dependencies__succeeded)
#line 403 "get_dependencies.m"
                          {
#line 2832 "parse_tree.get_dependencies.c"
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_8_8 == parse_tree__get_dependencies__V_15_15);
#line 403 "get_dependencies.m"
                            if (parse_tree__get_dependencies__succeeded)
#line 2836 "parse_tree.get_dependencies.c"
                              parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_9_9 == parse_tree__get_dependencies__V_16_16);
#line 403 "get_dependencies.m"
                          }
#line 403 "get_dependencies.m"
                      }
#line 403 "get_dependencies.m"
                  }
#line 403 "get_dependencies.m"
              }
#line 403 "get_dependencies.m"
          }
#line 403 "get_dependencies.m"
      }
#line 403 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 403 "get_dependencies.m"
  }
#line 403 "get_dependencies.m"
}

#line 868 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
#line 868 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 868 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
#line 868 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3)
#line 868 "get_dependencies.m"
{
#line 872 "get_dependencies.m"
  while (MR_TRUE)
#line 872 "get_dependencies.m"
    {
#line 872 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 872 "get_dependencies.m"
      {
#line 872 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 872 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 872 "get_dependencies.m"
        else
#line 873 "get_dependencies.m"
          {
#line 873 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 873 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 873 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;
#line 892 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Lang_16;
#line 892 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__LiteralOrInclude_18;
#line 875 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
#line 875 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Pragma_11;
#line 876 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12;
#line 876 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13;
#line 876 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_14_14;

#line 875 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 875 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 875 "get_dependencies.m"
              {
#line 875 "get_dependencies.m"
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 876 "get_dependencies.m"
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
#line 876 "get_dependencies.m"
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
#line 876 "get_dependencies.m"
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
#line 876 "get_dependencies.m"
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
#line 880 "get_dependencies.m"
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 1))))
#line 881 "get_dependencies.m"
                  {
#line 881 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 1);

#line 882 "get_dependencies.m"
                    parse_tree__get_dependencies__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 0)));
#line 882 "get_dependencies.m"
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 1)));
#line 881 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 881 "get_dependencies.m"
                  }
#line 880 "get_dependencies.m"
                else
#line 880 "get_dependencies.m"
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 0))))
#line 878 "get_dependencies.m"
                  {
#line 878 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 0);
#line 879 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies___IsLocal_17;

#line 879 "get_dependencies.m"
                    parse_tree__get_dependencies__Lang_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 879 "get_dependencies.m"
                    parse_tree__get_dependencies___IsLocal_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 879 "get_dependencies.m"
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 1)));
#line 878 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 878 "get_dependencies.m"
                  }
#line 880 "get_dependencies.m"
                else
#line 880 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 875 "get_dependencies.m"
              }
#line 892 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 887 "get_dependencies.m"
              if (((MR_tag((MR_Word) parse_tree__get_dependencies__LiteralOrInclude_18)) == (MR_mktag((MR_Integer) 1))))
#line 888 "get_dependencies.m"
                {
#line 888 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__FileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__LiteralOrInclude_18, (MR_Integer) 0)));
#line 888 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__IncludeFile_22;

#line 889 "get_dependencies.m"
                  {
#line 889 "get_dependencies.m"
                    parse_tree__get_dependencies__IncludeFile_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 0) = ((MR_Box) (parse_tree__get_dependencies__Lang_16));
#line 889 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 1) = ((MR_Box) (parse_tree__get_dependencies__FileName_21));
#line 889 "get_dependencies.m"
                  }
#line 890 "get_dependencies.m"
                  {
#line 890 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2, ((MR_Box) (parse_tree__get_dependencies__IncludeFile_22)));
                  }
#line 888 "get_dependencies.m"
                }
#line 887 "get_dependencies.m"
              else
#line 886 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 892 "get_dependencies.m"
            else
#line 892 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
#line 895 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 895 "get_dependencies.m"
            {
#line 895 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 895 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;

#line 895 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2;
#line 895 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 895 "get_dependencies.m"
            }
#line 895 "get_dependencies.m"
            continue;
#line 873 "get_dependencies.m"
          }
#line 872 "get_dependencies.m"
      }
#line 872 "get_dependencies.m"
      break;
#line 872 "get_dependencies.m"
    }
#line 868 "get_dependencies.m"
}

#line 860 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
#line 860 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_12_12,
#line 860 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
#line 860 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_9,
#line 860 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_10)
#line 860 "get_dependencies.m"
{
#line 864 "get_dependencies.m"
  {
#line 864 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 864 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 2)));
#line 865 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 0));
#line 865 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 1)));

#line 866 "get_dependencies.m"
    {
#line 866 "get_dependencies.m"
      parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(parse_tree__get_dependencies__Items_8, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_9, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_10);
#line 866 "get_dependencies.m"
      return;
    }
#line 864 "get_dependencies.m"
  }
#line 860 "get_dependencies.m"
}

#line 836 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
#line 836 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 836 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
#line 836 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
#line 836 "get_dependencies.m"
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
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 839 "get_dependencies.m"
        else
#line 841 "get_dependencies.m"
          {
#line 841 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 841 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 841 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;
#line 849 "get_dependencies.m"
            MR_String parse_tree__get_dependencies__FileName_17;
#line 843 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
#line 843 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Pragma_11;
#line 843 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__FTInfo_15;
#line 844 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_12_12;
#line 844 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__V_13_13;
#line 844 "get_dependencies.m"
            MR_Integer parse_tree__get_dependencies__V_14_14;
#line 846 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___PredNameArity_16;

#line 843 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 843 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 843 "get_dependencies.m"
              {
#line 843 "get_dependencies.m"
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 844 "get_dependencies.m"
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
#line 844 "get_dependencies.m"
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
#line 844 "get_dependencies.m"
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
#line 844 "get_dependencies.m"
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
#line 845 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 845 "get_dependencies.m"
                if (parse_tree__get_dependencies__succeeded)
#line 845 "get_dependencies.m"
                  {
#line 845 "get_dependencies.m"
                    parse_tree__get_dependencies__FTInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 1)));
#line 846 "get_dependencies.m"
                    parse_tree__get_dependencies___PredNameArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 0)));
#line 846 "get_dependencies.m"
                    parse_tree__get_dependencies__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 1)));
#line 846 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 845 "get_dependencies.m"
                  }
#line 843 "get_dependencies.m"
              }
#line 849 "get_dependencies.m"
            if (parse_tree__get_dependencies__succeeded)
#line 848 "get_dependencies.m"
              {
#line 848 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 0) = ((MR_Box) (parse_tree__get_dependencies__FileName_17));
#line 848 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2));
#line 848 "get_dependencies.m"
              }
#line 849 "get_dependencies.m"
            else
#line 849 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
#line 852 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 852 "get_dependencies.m"
            {
#line 852 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 852 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;

#line 852 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
#line 852 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 852 "get_dependencies.m"
            }
#line 852 "get_dependencies.m"
            continue;
#line 841 "get_dependencies.m"
          }
#line 839 "get_dependencies.m"
      }
#line 839 "get_dependencies.m"
      break;
#line 839 "get_dependencies.m"
    }
#line 836 "get_dependencies.m"
}

#line 810 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
#line 810 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 810 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 810 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 810 "get_dependencies.m"
{
#line 813 "get_dependencies.m"
  while (MR_TRUE)
#line 813 "get_dependencies.m"
    {
#line 813 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 813 "get_dependencies.m"
      {
#line 813 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 813 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 813 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 813 "get_dependencies.m"
        else
#line 814 "get_dependencies.m"
          {
#line 814 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 814 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 814 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 815 "get_dependencies.m"
            {
#line 815 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__Term_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
#line 816 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 816 "get_dependencies.m"
            {
#line 816 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Terms_8;
#line 816 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 816 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 816 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 816 "get_dependencies.m"
            }
#line 816 "get_dependencies.m"
            continue;
#line 814 "get_dependencies.m"
          }
#line 813 "get_dependencies.m"
      }
#line 813 "get_dependencies.m"
      break;
#line 813 "get_dependencies.m"
    }
#line 810 "get_dependencies.m"
}

#line 752 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
#line 752 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Term_4,
#line 752 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
#line 752 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18)
#line 752 "get_dependencies.m"
{
#line 757 "get_dependencies.m"
  {
#line 757 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 757 "get_dependencies.m"
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 759 "get_dependencies.m"
      {
#line 759 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 0)));
#line 759 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 1)));
#line 759 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21;
#line 759 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 2)));

#line 799 "get_dependencies.m"
#line 799 "get_dependencies.m"
        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Const_8)) {
#line 799 "get_dependencies.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 799 "get_dependencies.m"
          case (MR_Integer) 0:
#line 761 "get_dependencies.m"
            {
#line 761 "get_dependencies.m"
              MR_String parse_tree__get_dependencies__Atom_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)));

#line 763 "get_dependencies.m"
              parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__Atom_10, (MR_String) "format") == 0);
#line 769 "get_dependencies.m"
              if (parse_tree__get_dependencies__succeeded)
#line 766 "get_dependencies.m"
                {
#line 766 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 766 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 766 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 766 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 766 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 766 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 766 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 768 "get_dependencies.m"
                  {
#line 768 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 768 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_32_32 | ((((parse_tree__get_dependencies__V_33_33 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_34_34 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_35_35 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_38_38 << (MR_Integer) 6)))))))))))))));
#line 768 "get_dependencies.m"
                  }
#line 766 "get_dependencies.m"
                }
#line 769 "get_dependencies.m"
              else
#line 778 "get_dependencies.m"
                {
#line 771 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__lo_0;
#line 771 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__hi_1;
#line 771 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__mid_2;
#line 771 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__result_3;

#line 771 "get_dependencies.m"
                  /* binary string simple lookup switch */
#line 771 "get_dependencies.m"
                  parse_tree__get_dependencies__lo_0 = (MR_Integer) 0;
#line 771 "get_dependencies.m"
                  parse_tree__get_dependencies__hi_1 = (MR_Integer) 3;
#line 771 "get_dependencies.m"
                  do
#line 771 "get_dependencies.m"
                    {
#line 771 "get_dependencies.m"
                      parse_tree__get_dependencies__mid_2 = (((parse_tree__get_dependencies__lo_0 + parse_tree__get_dependencies__hi_1)) / (MR_Integer) 2);
#line 771 "get_dependencies.m"
                      parse_tree__get_dependencies__result_3 = MR_strcmp(parse_tree__get_dependencies__Atom_10, ((&parse_tree__get_dependencies_vector_common_8[0 + parse_tree__get_dependencies__mid_2]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0);
#line 771 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__result_3 == (MR_Integer) 0))
#line 771 "get_dependencies.m"
                        {
#line 771 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 771 "get_dependencies.m"
                          /* jump out of search loop */
#line 771 "get_dependencies.m"
                          goto label_0;
#line 771 "get_dependencies.m"
                        }
#line 771 "get_dependencies.m"
                      else
#line 771 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__result_3 < (MR_Integer) 0))
#line 771 "get_dependencies.m"
                        parse_tree__get_dependencies__hi_1 = (parse_tree__get_dependencies__mid_2 - (MR_Integer) 1);
#line 771 "get_dependencies.m"
                      else
#line 771 "get_dependencies.m"
                        parse_tree__get_dependencies__lo_0 = (parse_tree__get_dependencies__mid_2 + (MR_Integer) 1);
#line 771 "get_dependencies.m"
                    }
#line 771 "get_dependencies.m"
                  while ((parse_tree__get_dependencies__lo_0 <= parse_tree__get_dependencies__hi_1));
#line 771 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 771 "get_dependencies.m"
                label_0:;
#line 778 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 777 "get_dependencies.m"
                    {
#line 777 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 777 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 777 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 777 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 777 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 777 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 777 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 777 "get_dependencies.m"
                      {
#line 777 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 777 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_46_46 | ((((parse_tree__get_dependencies__V_47_47 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_48_48 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_49_49 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_51_51 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_52_52 << (MR_Integer) 6)))))))))))))));
#line 777 "get_dependencies.m"
                      }
#line 777 "get_dependencies.m"
                    }
#line 778 "get_dependencies.m"
                  else
#line 796 "get_dependencies.m"
                    {
#line 780 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies__slot_4;
#line 780 "get_dependencies.m"
                      MR_String parse_tree__get_dependencies__str_5;

#line 780 "get_dependencies.m"
                      /* hashed string simple lookup switch */
#line 780 "get_dependencies.m"
                      /* compute the hash value of the input string */
#line 780 "get_dependencies.m"
                      parse_tree__get_dependencies__slot_4 = ((MR_hash_string5(parse_tree__get_dependencies__Atom_10)) & (MR_Integer) 31);
#line 780 "get_dependencies.m"
                      /* no collisions; no hash chain loop */
#line 780 "get_dependencies.m"
                      /* lookup the string for this hash slot */
#line 780 "get_dependencies.m"
                      parse_tree__get_dependencies__str_5 = ((&parse_tree__get_dependencies_vector_common_8[4 + parse_tree__get_dependencies__slot_4]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
#line 780 "get_dependencies.m"
                      /* did we find a match? */
#line 780 "get_dependencies.m"
                      if ((((parse_tree__get_dependencies__str_5 != NULL)) && ((strcmp(parse_tree__get_dependencies__str_5, parse_tree__get_dependencies__Atom_10) == 0))))
#line 780 "get_dependencies.m"
                        {
#line 780 "get_dependencies.m"
                          /* we found a match; look up the results */
#line 780 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 780 "get_dependencies.m"
                          /* jump out of search loop */
#line 780 "get_dependencies.m"
                          goto label_1;
#line 780 "get_dependencies.m"
                        }
#line 780 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 780 "get_dependencies.m"
                    label_1:;
#line 796 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 793 "get_dependencies.m"
                        {
#line 793 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 793 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 793 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 793 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 793 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 793 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 793 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 795 "get_dependencies.m"
                          {
#line 795 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 795 "get_dependencies.m"
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_53_53 | ((((parse_tree__get_dependencies__V_54_54 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_55_55 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_56_56 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_59_59 << (MR_Integer) 6)))))))))))))));
#line 795 "get_dependencies.m"
                          }
#line 793 "get_dependencies.m"
                        }
#line 796 "get_dependencies.m"
                      else
#line 796 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 796 "get_dependencies.m"
                    }
#line 778 "get_dependencies.m"
                }
#line 761 "get_dependencies.m"
            }
#line 799 "get_dependencies.m"
            break;
#line 799 "get_dependencies.m"
          case (MR_Integer) 1:
#line 800 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 799 "get_dependencies.m"
            break;
#line 799 "get_dependencies.m"
          case (MR_Integer) 2:
#line 801 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 799 "get_dependencies.m"
            break;
#line 799 "get_dependencies.m"
          case (MR_Integer) 3:
#line 799 "get_dependencies.m"
#line 799 "get_dependencies.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)))) {
#line 799 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 799 "get_dependencies.m"
              case (MR_Integer) 0:
#line 802 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 799 "get_dependencies.m"
                break;
#line 799 "get_dependencies.m"
              case (MR_Integer) 1:
#line 803 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 799 "get_dependencies.m"
                break;
#line 799 "get_dependencies.m"
              case (MR_Integer) 2:
#line 804 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 799 "get_dependencies.m"
                break;
#line 799 "get_dependencies.m"
            }
#line 799 "get_dependencies.m"
            break;
#line 799 "get_dependencies.m"
        }
#line 807 "get_dependencies.m"
        {
#line 807 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__ArgTerms_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);
#line 807 "get_dependencies.m"
          return;
        }
#line 759 "get_dependencies.m"
      }
#line 757 "get_dependencies.m"
    else
#line 757 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
#line 757 "get_dependencies.m"
  }
#line 752 "get_dependencies.m"
}

#line 742 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
#line 742 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 742 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 742 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 742 "get_dependencies.m"
{
#line 746 "get_dependencies.m"
  {
#line 746 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 746 "get_dependencies.m"
    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 746 "get_dependencies.m"
    else
#line 748 "get_dependencies.m"
      {
#line 748 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__CatchAnyExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 748 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 1)));
#line 749 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies___Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 0)));

#line 750 "get_dependencies.m"
        {
#line 750 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
#line 750 "get_dependencies.m"
          return;
        }
#line 748 "get_dependencies.m"
      }
#line 746 "get_dependencies.m"
  }
#line 742 "get_dependencies.m"
}

#line 731 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
#line 731 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 731 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 731 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 731 "get_dependencies.m"
{
#line 734 "get_dependencies.m"
  while (MR_TRUE)
#line 734 "get_dependencies.m"
    {
#line 734 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 734 "get_dependencies.m"
      {
#line 734 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 734 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 734 "get_dependencies.m"
        else
#line 736 "get_dependencies.m"
          {
#line 736 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 736 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 736 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 1)));
#line 736 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;
#line 737 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 0)));

#line 738 "get_dependencies.m"
            {
#line 738 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14);
            }
#line 739 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 739 "get_dependencies.m"
            {
#line 739 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__CatchExprs_8;
#line 739 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;

#line 739 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 739 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 739 "get_dependencies.m"
            }
#line 739 "get_dependencies.m"
            continue;
#line 736 "get_dependencies.m"
          }
#line 734 "get_dependencies.m"
      }
#line 734 "get_dependencies.m"
      break;
#line 734 "get_dependencies.m"
    }
#line 731 "get_dependencies.m"
}

#line 724 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 724 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 724 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 724 "get_dependencies.m"
{
#line 727 "get_dependencies.m"
  {
#line 727 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;

#line 727 "get_dependencies.m"
    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 727 "get_dependencies.m"
    else
#line 728 "get_dependencies.m"
      {
#line 728 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));

#line 729 "get_dependencies.m"
        {
#line 729 "get_dependencies.m"
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
#line 729 "get_dependencies.m"
          return;
        }
#line 728 "get_dependencies.m"
      }
#line 727 "get_dependencies.m"
  }
#line 724 "get_dependencies.m"
}

#line 716 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
#line 716 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 716 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 716 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 716 "get_dependencies.m"
{
#line 719 "get_dependencies.m"
  while (MR_TRUE)
#line 719 "get_dependencies.m"
    {
#line 719 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 719 "get_dependencies.m"
      {
#line 719 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 719 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 719 "get_dependencies.m"
        else
#line 720 "get_dependencies.m"
          {
#line 720 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 720 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 720 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 721 "get_dependencies.m"
            {
#line 721 "get_dependencies.m"
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
#line 722 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 722 "get_dependencies.m"
            {
#line 722 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Goals_8;
#line 722 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

#line 722 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 722 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 722 "get_dependencies.m"
            }
#line 722 "get_dependencies.m"
            continue;
#line 720 "get_dependencies.m"
          }
#line 719 "get_dependencies.m"
      }
#line 719 "get_dependencies.m"
      break;
#line 719 "get_dependencies.m"
    }
#line 716 "get_dependencies.m"
}

#line 588 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
#line 588 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Goal_4,
#line 588 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67,
#line 588 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68)
#line 588 "get_dependencies.m"
{
#line 593 "get_dependencies.m"
  while (MR_TRUE)
#line 593 "get_dependencies.m"
    {
#line 593 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 593 "get_dependencies.m"
      {
#line 593 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 593 "get_dependencies.m"
#line 593 "get_dependencies.m"
        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Goal_4)) {
#line 593 "get_dependencies.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 593 "get_dependencies.m"
          case (MR_Integer) 0:
#line 603 "get_dependencies.m"
            {
#line 603 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 603 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 603 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_112;
#line 598 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));

#line 604 "get_dependencies.m"
              {
#line 604 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_112);
              }
#line 605 "get_dependencies.m"
              /* direct tailcall eliminated */
#line 605 "get_dependencies.m"
              {
#line 605 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_10;
#line 605 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_112;

#line 605 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 605 "get_dependencies.m"
                parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 605 "get_dependencies.m"
              }
#line 605 "get_dependencies.m"
              continue;
#line 603 "get_dependencies.m"
            }
#line 593 "get_dependencies.m"
            break;
#line 593 "get_dependencies.m"
          case (MR_Integer) 1:
#line 603 "get_dependencies.m"
            {
#line 603 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalA_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 603 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__SubGoalB_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 603 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_214;
#line 599 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));

#line 604 "get_dependencies.m"
              {
#line 604 "get_dependencies.m"
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_212, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_214);
              }
#line 605 "get_dependencies.m"
              /* direct tailcall eliminated */
#line 605 "get_dependencies.m"
              {
#line 605 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_213;
#line 605 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_214;

#line 605 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 605 "get_dependencies.m"
                parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 605 "get_dependencies.m"
              }
#line 605 "get_dependencies.m"
              continue;
#line 603 "get_dependencies.m"
            }
#line 593 "get_dependencies.m"
            break;
#line 593 "get_dependencies.m"
          case (MR_Integer) 2:
#line 593 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 593 "get_dependencies.m"
            break;
#line 593 "get_dependencies.m"
          case (MR_Integer) 3:
#line 593 "get_dependencies.m"
#line 593 "get_dependencies.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)))) {
#line 593 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 593 "get_dependencies.m"
              case (MR_Integer) 0:
#line 603 "get_dependencies.m"
                {
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_204;
#line 600 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 604 "get_dependencies.m"
                  {
#line 604 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_202, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_204);
                  }
#line 605 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 605 "get_dependencies.m"
                  {
#line 605 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_203;
#line 605 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_204;

#line 605 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 605 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 605 "get_dependencies.m"
                  }
#line 605 "get_dependencies.m"
                  continue;
#line 603 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 1:
#line 594 "get_dependencies.m"
                *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 2:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 608 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 608 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_222;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 3:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 609 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_16;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 4:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 610 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_223;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 5:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 611 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 611 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_201;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 6:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 612 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 612 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_218;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 7:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 613 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 613 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 613 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 613 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 613 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_217;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 8:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 615 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_216;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 9:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 617 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 617 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OrdVars_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 617 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 617 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___DotVars_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 617 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___ColonVars_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_215;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 10:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 619 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 619 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Detism_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_220;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 11:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 620 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___SwitchVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_219;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 12:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Detism_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 621 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___SwitchVar_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_221;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 13:
#line 627 "get_dependencies.m"
                {
#line 627 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeIO_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 627 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;
#line 627 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___CompCond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___RunCond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 626 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Mutables_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

#line 631 "get_dependencies.m"
                  if ((parse_tree__get_dependencies__MaybeIO_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 631 "get_dependencies.m"
                  else
#line 629 "get_dependencies.m"
                    {
#line 630 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_138_138 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 630 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 630 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 630 "get_dependencies.m"
                      {
#line 630 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 630 "get_dependencies.m"
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_138_138 | ((((parse_tree__get_dependencies__V_139_139 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_140_140 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_141_141 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_142_142 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_143_143 << (MR_Integer) 5)) | (((MR_Integer) 1 << (MR_Integer) 6)))))))))))))));
#line 630 "get_dependencies.m"
                      }
#line 629 "get_dependencies.m"
                    }
#line 634 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 634 "get_dependencies.m"
                  {
#line 634 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_127;
#line 634 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;

#line 634 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 634 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 634 "get_dependencies.m"
                  }
#line 634 "get_dependencies.m"
                  continue;
#line 627 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 14:
#line 654 "get_dependencies.m"
                {
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MainGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__OrElseGoals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94;
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_96_96;
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_152_152 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_156_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_157_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 654 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_158_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 653 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 653 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Outer_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 653 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Inner_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 653 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___OutputVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 655 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 655 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 656 "get_dependencies.m"
                  {
#line 656 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 656 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_152_152 | ((((parse_tree__get_dependencies__V_153_153 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_156_156 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_157_157 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_158_158 << (MR_Integer) 6)))))))))))))));
#line 656 "get_dependencies.m"
                  }
#line 657 "get_dependencies.m"
                  {
#line 657 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__MainGoal_55, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_94_94, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_96_96);
                  }
#line 658 "get_dependencies.m"
                  {
#line 658 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(parse_tree__get_dependencies__OrElseGoals_56, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_96_96, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 658 "get_dependencies.m"
                    return;
                  }
#line 654 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 15:
#line 637 "get_dependencies.m"
                {
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeElse_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Catches_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__MaybeCatchAny_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 7)));
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101;
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105;
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_106_106;
#line 637 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 636 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 636 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___MaybeIO_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 638 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_145_145 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 638 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 638 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 638 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 638 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 638 "get_dependencies.m"
                  {
#line 638 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 638 "get_dependencies.m"
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_145_145 | ((((parse_tree__get_dependencies__V_146_146 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_147_147 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_149_149 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_150_150 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_151_151 << (MR_Integer) 6)))))))))))))));
#line 638 "get_dependencies.m"
                  }
#line 639 "get_dependencies.m"
                  {
#line 639 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoal_128, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_101_101, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103);
                  }
#line 640 "get_dependencies.m"
                  {
#line 640 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_44, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104);
                  }
#line 641 "get_dependencies.m"
                  {
#line 641 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(parse_tree__get_dependencies__MaybeElse_45, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105);
                  }
#line 643 "get_dependencies.m"
                  {
#line 643 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(parse_tree__get_dependencies__Catches_46, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_106_106);
                  }
#line 645 "get_dependencies.m"
                  {
#line 645 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(parse_tree__get_dependencies__MaybeCatchAny_47, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_106_106, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 645 "get_dependencies.m"
                    return;
                  }
#line 637 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 16:
#line 603 "get_dependencies.m"
                {
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_210;
#line 601 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 604 "get_dependencies.m"
                  {
#line 604 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_208, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_210);
                  }
#line 605 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 605 "get_dependencies.m"
                  {
#line 605 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_209;
#line 605 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_210;

#line 605 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 605 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 605 "get_dependencies.m"
                  }
#line 605 "get_dependencies.m"
                  continue;
#line 603 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 17:
#line 603 "get_dependencies.m"
                {
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalA_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoalB_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 603 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_207;
#line 602 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 604 "get_dependencies.m"
                  {
#line 604 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_205, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_207);
                  }
#line 605 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 605 "get_dependencies.m"
                  {
#line 605 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_206;
#line 605 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_112_207;

#line 605 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 605 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 605 "get_dependencies.m"
                  }
#line 605 "get_dependencies.m"
                  continue;
#line 603 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 18:
#line 623 "get_dependencies.m"
                {
#line 623 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__SubGoal_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 607 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

#line 624 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 624 "get_dependencies.m"
                  {
#line 624 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_211;

#line 624 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 624 "get_dependencies.m"
                  }
#line 624 "get_dependencies.m"
                  continue;
#line 623 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 19:
#line 648 "get_dependencies.m"
                {
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Else_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98;
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_99_99;
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Then_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Vars_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 648 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___StateVars_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

#line 649 "get_dependencies.m"
                  {
#line 649 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Cond_49, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98);
                  }
#line 650 "get_dependencies.m"
                  {
#line 650 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_133, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_99_99);
                  }
#line 651 "get_dependencies.m"
                  /* direct tailcall eliminated */
#line 651 "get_dependencies.m"
                  {
#line 651 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__Else_50;
#line 651 "get_dependencies.m"
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_99_99;

#line 651 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_67;
#line 651 "get_dependencies.m"
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
#line 651 "get_dependencies.m"
                  }
#line 651 "get_dependencies.m"
                  continue;
#line 648 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 20:
#line 708 "get_dependencies.m"
                {
#line 708 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__EventArgs_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 708 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 708 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies___EventName_62 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

#line 709 "get_dependencies.m"
                  {
#line 709 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__EventArgs_63, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 709 "get_dependencies.m"
                    return;
                  }
#line 708 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 21:
#line 661 "get_dependencies.m"
                {
#line 661 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__CalleeSymName_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 661 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__Args_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 661 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75;
#line 661 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 661 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Purity_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
#line 693 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ModuleName_60;
#line 663 "get_dependencies.m"
                  MR_String parse_tree__get_dependencies__V_72_72;

#line 663 "get_dependencies.m"
                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_58)) == (MR_mktag((MR_Integer) 1)));
#line 663 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 663 "get_dependencies.m"
                    {
#line 663 "get_dependencies.m"
                      parse_tree__get_dependencies__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_58, (MR_Integer) 0)));
#line 663 "get_dependencies.m"
                      parse_tree__get_dependencies__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_58, (MR_Integer) 1)));
#line 663 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_72_72, (MR_String) "format") == 0);
#line 663 "get_dependencies.m"
                    }
#line 693 "get_dependencies.m"
                  if (parse_tree__get_dependencies__succeeded)
#line 674 "get_dependencies.m"
                    {
#line 667 "get_dependencies.m"
                      MR_String parse_tree__get_dependencies__V_224_224;

#line 666 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_60)) == (MR_mktag((MR_Integer) 0)));
#line 666 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 666 "get_dependencies.m"
                        {
#line 666 "get_dependencies.m"
                          parse_tree__get_dependencies__V_224_224 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 0)));
#line 667 "get_dependencies.m"
                          if ((strcmp(parse_tree__get_dependencies__V_224_224, (MR_String) "io") == 0))
#line 667 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 667 "get_dependencies.m"
                          else
#line 667 "get_dependencies.m"
                          if ((strcmp(parse_tree__get_dependencies__V_224_224, (MR_String) "string") == 0))
#line 666 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 667 "get_dependencies.m"
                          else
#line 667 "get_dependencies.m"
                            parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 666 "get_dependencies.m"
                        }
#line 674 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 673 "get_dependencies.m"
                        {
#line 673 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_166_166 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_169_169 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 673 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 673 "get_dependencies.m"
                          {
#line 673 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "get_dependencies.m"
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_166_166 | ((((parse_tree__get_dependencies__V_167_167 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_168_168 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_169_169 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_171_171 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_172_172 << (MR_Integer) 6)))))))))))))));
#line 673 "get_dependencies.m"
                          }
#line 673 "get_dependencies.m"
                        }
#line 674 "get_dependencies.m"
                      else
#line 688 "get_dependencies.m"
                        {
#line 676 "get_dependencies.m"
                          if (((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_60)) == (MR_mktag((MR_Integer) 1))))
#line 677 "get_dependencies.m"
                            {
#line 677 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 0)));
#line 677 "get_dependencies.m"
                              MR_String parse_tree__get_dependencies__V_78_78;
#line 677 "get_dependencies.m"
                              MR_String parse_tree__get_dependencies__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 1)));

#line 678 "get_dependencies.m"
                              parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_79_79, (MR_String) "string_writer") == 0);
#line 677 "get_dependencies.m"
                              if (parse_tree__get_dependencies__succeeded)
#line 677 "get_dependencies.m"
                                {
#line 677 "get_dependencies.m"
                                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__V_77_77)) == (MR_mktag((MR_Integer) 0)));
#line 677 "get_dependencies.m"
                                  if (parse_tree__get_dependencies__succeeded)
#line 677 "get_dependencies.m"
                                    {
#line 677 "get_dependencies.m"
                                      parse_tree__get_dependencies__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_77_77, (MR_Integer) 0)));
#line 677 "get_dependencies.m"
                                      parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_78_78, (MR_String) "stream") == 0);
#line 677 "get_dependencies.m"
                                    }
#line 677 "get_dependencies.m"
                                }
#line 677 "get_dependencies.m"
                            }
#line 676 "get_dependencies.m"
                          else
#line 676 "get_dependencies.m"
                            {
#line 676 "get_dependencies.m"
                              MR_String parse_tree__get_dependencies__V_225_225 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_60, (MR_Integer) 0)));

#line 676 "get_dependencies.m"
                              if ((strcmp(parse_tree__get_dependencies__V_225_225, (MR_String) "stream") == 0))
#line 675 "get_dependencies.m"
                                parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 676 "get_dependencies.m"
                              else
#line 676 "get_dependencies.m"
                              if ((strcmp(parse_tree__get_dependencies__V_225_225, (MR_String) "string_writer") == 0))
#line 676 "get_dependencies.m"
                                parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 676 "get_dependencies.m"
                              else
#line 676 "get_dependencies.m"
                                parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 676 "get_dependencies.m"
                            }
#line 688 "get_dependencies.m"
                          if (parse_tree__get_dependencies__succeeded)
#line 685 "get_dependencies.m"
                            {
#line 685 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_173_173 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 685 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 685 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_175_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 685 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_176_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 685 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 685 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 685 "get_dependencies.m"
                              MR_Word parse_tree__get_dependencies__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 687 "get_dependencies.m"
                              {
#line 687 "get_dependencies.m"
                                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 687 "get_dependencies.m"
                                MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_173_173 | ((((parse_tree__get_dependencies__V_174_174 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_175_175 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_176_176 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_179_179 << (MR_Integer) 6)))))))))))))));
#line 687 "get_dependencies.m"
                              }
#line 685 "get_dependencies.m"
                            }
#line 688 "get_dependencies.m"
                          else
#line 688 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 688 "get_dependencies.m"
                        }
#line 674 "get_dependencies.m"
                    }
#line 693 "get_dependencies.m"
                  else
#line 703 "get_dependencies.m"
                    {
#line 694 "get_dependencies.m"
                      MR_String parse_tree__get_dependencies__V_86_86;

#line 694 "get_dependencies.m"
                      parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_58)) == (MR_mktag((MR_Integer) 0)));
#line 694 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 694 "get_dependencies.m"
                        {
#line 694 "get_dependencies.m"
                          parse_tree__get_dependencies__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CalleeSymName_58, (MR_Integer) 0)));
#line 694 "get_dependencies.m"
                          parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_86_86, (MR_String) "format") == 0);
#line 694 "get_dependencies.m"
                        }
#line 703 "get_dependencies.m"
                      if (parse_tree__get_dependencies__succeeded)
#line 701 "get_dependencies.m"
                        {
#line 701 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_187_187 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 701 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 701 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 701 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 701 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_193_193 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 701 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_191_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 701 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__V_192_192 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 702 "get_dependencies.m"
                          {
#line 702 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 702 "get_dependencies.m"
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_187_187 | ((((parse_tree__get_dependencies__V_188_188 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_189_189 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_190_190 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_193_193 << (MR_Integer) 6)))))))))))))));
#line 702 "get_dependencies.m"
                          }
#line 701 "get_dependencies.m"
                        }
#line 703 "get_dependencies.m"
                      else
#line 703 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67;
#line 703 "get_dependencies.m"
                    }
#line 706 "get_dependencies.m"
                  {
#line 706 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__Args_59, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_75_75, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 706 "get_dependencies.m"
                    return;
                  }
#line 661 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
              case (MR_Integer) 22:
#line 711 "get_dependencies.m"
                {
#line 711 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__TermA_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
#line 711 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__TermB_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
#line 711 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_69_69;
#line 711 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
#line 711 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Purity_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));

#line 712 "get_dependencies.m"
                  {
#line 712 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermA_65, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_67, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_69_69);
                  }
#line 713 "get_dependencies.m"
                  {
#line 713 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermB_66, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_69_69, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68);
#line 713 "get_dependencies.m"
                    return;
                  }
#line 711 "get_dependencies.m"
                }
#line 593 "get_dependencies.m"
                break;
#line 593 "get_dependencies.m"
            }
#line 593 "get_dependencies.m"
            break;
#line 593 "get_dependencies.m"
        }
#line 593 "get_dependencies.m"
      }
#line 593 "get_dependencies.m"
      break;
#line 593 "get_dependencies.m"
    }
#line 588 "get_dependencies.m"
}

#line 579 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
#line 579 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemClause_4,
#line 579 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 579 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15)
#line 579 "get_dependencies.m"
{
#line 582 "get_dependencies.m"
  {
#line 582 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 582 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__HeadTerms_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 2)));
#line 582 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 5)));
#line 582 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_16_16;
#line 583 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 0)));
#line 583 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 1)));
#line 583 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Origin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 3)));
#line 583 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 4)));
#line 583 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 6)));
#line 583 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 7)));

#line 585 "get_dependencies.m"
    {
#line 585 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__HeadTerms_8, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_16_16);
    }
#line 586 "get_dependencies.m"
    {
#line 586 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_16_16, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);
#line 586 "get_dependencies.m"
      return;
    }
#line 582 "get_dependencies.m"
  }
#line 579 "get_dependencies.m"
}

#line 570 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
#line 570 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
#line 570 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14,
#line 570 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15)
#line 570 "get_dependencies.m"
{
#line 574 "get_dependencies.m"
  {
#line 574 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 574 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__InitValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 2)));
#line 575 "get_dependencies.m"
    MR_String parse_tree__get_dependencies___Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 0)));
#line 575 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 1)));
#line 575 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 3)));
#line 575 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Attrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 4)));
#line 575 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 5)));
#line 575 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 6)));
#line 575 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 7)));

#line 577 "get_dependencies.m"
    {
#line 577 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__InitValue_8, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_14, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_15);
#line 577 "get_dependencies.m"
      return;
    }
#line 574 "get_dependencies.m"
  }
#line 570 "get_dependencies.m"
}

#line 566 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
#line 566 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 566 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 566 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 566 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 566 "get_dependencies.m"
{
#line 566 "get_dependencies.m"
  {
#line 566 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 566 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_15;

#line 566 "get_dependencies.m"
    {
#line 566 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_15);
    }
#line 566 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_15));
#line 566 "get_dependencies.m"
  }
#line 566 "get_dependencies.m"
}

#line 555 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
#line 555 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
#line 555 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14)
#line 555 "get_dependencies.m"
{
#line 559 "get_dependencies.m"
  {
#line 559 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 559 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ProcDef_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 2)));
#line 560 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 0)));
#line 560 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 1)));
#line 560 "get_dependencies.m"
    MR_Integer parse_tree__get_dependencies___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 3)));
#line 560 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 4)));

#line 564 "get_dependencies.m"
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__ProcDef_8)) == (MR_mktag((MR_Integer) 1))))
#line 565 "get_dependencies.m"
      {
#line 565 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__ItemClauses_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ProcDef_8, (MR_Integer) 0)));
#line 566 "get_dependencies.m"
        MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14;

#line 566 "get_dependencies.m"
        {
#line 566 "get_dependencies.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[2], parse_tree__get_dependencies__ItemClauses_12, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
        }
#line 566 "get_dependencies.m"
        *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
#line 565 "get_dependencies.m"
      }
#line 564 "get_dependencies.m"
    else
#line 563 "get_dependencies.m"
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13;
#line 559 "get_dependencies.m"
  }
#line 555 "get_dependencies.m"
}

#line 535 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
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
    MR_Word parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_15;

#line 535 "get_dependencies.m"
    {
#line 535 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_15);
    }
#line 535 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_15));
#line 535 "get_dependencies.m"
  }
#line 535 "get_dependencies.m"
}

#line 512 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
#line 512 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 512 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 512 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 512 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 512 "get_dependencies.m"
{
#line 512 "get_dependencies.m"
  {
#line 512 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 512 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14;

#line 512 "get_dependencies.m"
    {
#line 512 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14);
    }
#line 512 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14));
#line 512 "get_dependencies.m"
  }
#line 512 "get_dependencies.m"
}

#line 434 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
#line 434 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 434 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
#line 434 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
#line 434 "get_dependencies.m"
{
#line 437 "get_dependencies.m"
  while (MR_TRUE)
#line 437 "get_dependencies.m"
    {
#line 437 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 437 "get_dependencies.m"
      {
#line 437 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 437 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "get_dependencies.m"
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 437 "get_dependencies.m"
        else
#line 438 "get_dependencies.m"
          {
#line 438 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 438 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;

#line 443 "get_dependencies.m"
#line 443 "get_dependencies.m"
            switch (MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) {
#line 443 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 443 "get_dependencies.m"
              case (MR_Integer) 0:
#line 542 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                break;
#line 443 "get_dependencies.m"
              case (MR_Integer) 1:
#line 440 "get_dependencies.m"
                {
#line 440 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ItemClause_10 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 1);

#line 441 "get_dependencies.m"
                  {
#line 441 "get_dependencies.m"
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(parse_tree__get_dependencies__ItemClause_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108);
                  }
#line 440 "get_dependencies.m"
                }
#line 443 "get_dependencies.m"
                break;
#line 443 "get_dependencies.m"
              case (MR_Integer) 2:
#line 520 "get_dependencies.m"
                {
#line 520 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ItemTypeDefn_69 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 2);
#line 520 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__TypeDefn_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 2)));
#line 521 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TypeCtorName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 0)));
#line 521 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TypeParams_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 1)));
#line 521 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___TVarSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 3)));
#line 521 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies___Context_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 4)));
#line 521 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies___SeqNum_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_69, (MR_Integer) 5)));

#line 526 "get_dependencies.m"
#line 526 "get_dependencies.m"
                  switch (MR_tag((MR_Word) parse_tree__get_dependencies__TypeDefn_72)) {
#line 526 "get_dependencies.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 526 "get_dependencies.m"
                    case (MR_Integer) 0:
#line 524 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 526 "get_dependencies.m"
                      break;
#line 526 "get_dependencies.m"
                    case (MR_Integer) 1:
#line 527 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 526 "get_dependencies.m"
                      break;
#line 526 "get_dependencies.m"
                    case (MR_Integer) 2:
#line 529 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 526 "get_dependencies.m"
                      break;
#line 526 "get_dependencies.m"
                    case (MR_Integer) 3:
#line 526 "get_dependencies.m"
#line 526 "get_dependencies.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 0)))) {
#line 526 "get_dependencies.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 526 "get_dependencies.m"
                        case (MR_Integer) 0:
#line 532 "get_dependencies.m"
                          {
#line 532 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__SolverTypeDetails_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 1)));
#line 532 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies__MutableItems_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 4)));
#line 531 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___MaybeUnifyComparePredNames_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_72, (MR_Integer) 2)));
#line 533 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___RepresentationType_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 0)));
#line 533 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___InitPred_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 1)));
#line 533 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___GroundInst_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 2)));
#line 533 "get_dependencies.m"
                            MR_Word parse_tree__get_dependencies___AnyInst_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_79, (MR_Integer) 3)));
#line 535 "get_dependencies.m"
                            MR_Box parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_108_108;

#line 535 "get_dependencies.m"
                            {
#line 535 "get_dependencies.m"
                              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[1], parse_tree__get_dependencies__MutableItems_84, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_108_108);
                            }
#line 535 "get_dependencies.m"
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = ((MR_Word) parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_108_108);
#line 532 "get_dependencies.m"
                          }
#line 526 "get_dependencies.m"
                          break;
#line 526 "get_dependencies.m"
                        case (MR_Integer) 1:
#line 538 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 526 "get_dependencies.m"
                          break;
#line 526 "get_dependencies.m"
                      }
#line 526 "get_dependencies.m"
                      break;
#line 526 "get_dependencies.m"
                  }
#line 520 "get_dependencies.m"
                }
#line 443 "get_dependencies.m"
                break;
#line 443 "get_dependencies.m"
              case (MR_Integer) 3:
#line 443 "get_dependencies.m"
#line 443 "get_dependencies.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) {
#line 443 "get_dependencies.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 443 "get_dependencies.m"
                  case (MR_Integer) 0:
#line 543 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 1:
#line 544 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 2:
#line 545 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 3:
#line 546 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 4:
#line 444 "get_dependencies.m"
                    {
#line 444 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemPragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 444 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 0)));
#line 445 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 1)));
#line 445 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 2)));
#line 445 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 3)));

#line 463 "get_dependencies.m"
#line 463 "get_dependencies.m"
                      switch (MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_12)) {
#line 463 "get_dependencies.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 463 "get_dependencies.m"
                        case (MR_Integer) 0:
#line 464 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                          break;
#line 463 "get_dependencies.m"
                        case (MR_Integer) 1:
#line 465 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                          break;
#line 463 "get_dependencies.m"
                        case (MR_Integer) 2:
#line 466 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                          break;
#line 463 "get_dependencies.m"
                        case (MR_Integer) 3:
#line 463 "get_dependencies.m"
#line 463 "get_dependencies.m"
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 0)))) {
#line 463 "get_dependencies.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 463 "get_dependencies.m"
                            case (MR_Integer) 0:
#line 467 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 1:
#line 468 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 2:
#line 469 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 3:
#line 470 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 4:
#line 471 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 5:
#line 472 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 6:
#line 473 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 7:
#line 474 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 8:
#line 475 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 9:
#line 476 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 10:
#line 477 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 11:
#line 478 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 12:
#line 479 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 13:
#line 480 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 14:
#line 447 "get_dependencies.m"
                              {
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__TableInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 1)));
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__MaybeAttributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 3)));
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 447 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 448 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 0)));
#line 448 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 1)));
#line 448 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 2)));
#line 449 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 449 "get_dependencies.m"
                                MR_Word parse_tree__get_dependencies__V_128_128 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 449 "get_dependencies.m"
                                {
#line 449 "get_dependencies.m"
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 449 "get_dependencies.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104, 0) = ((MR_Box) (((MR_Integer) 1 | ((((parse_tree__get_dependencies__V_129_129 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_134_134 << (MR_Integer) 6)))))))))))))));
#line 449 "get_dependencies.m"
                                }
#line 452 "get_dependencies.m"
                                if ((parse_tree__get_dependencies__MaybeAttributes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "get_dependencies.m"
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
#line 452 "get_dependencies.m"
                                else
#line 453 "get_dependencies.m"
                                  {
#line 453 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__MaybeAttributes_20, (MR_Integer) 0)));
#line 453 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__StatsAttr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 2)));
#line 454 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 0)));
#line 454 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 1)));
#line 454 "get_dependencies.m"
                                    MR_Word parse_tree__get_dependencies__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 3)));

#line 459 "get_dependencies.m"
#line 459 "get_dependencies.m"
                                    switch (parse_tree__get_dependencies__StatsAttr_22) {
#line 459 "get_dependencies.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 459 "get_dependencies.m"
                                      case (MR_Integer) 1:
#line 460 "get_dependencies.m"
                                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
#line 459 "get_dependencies.m"
                                        break;
#line 459 "get_dependencies.m"
                                      case (MR_Integer) 0:
#line 456 "get_dependencies.m"
                                        {
#line 458 "get_dependencies.m"
                                          {
#line 458 "get_dependencies.m"
                                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 458 "get_dependencies.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108, 0) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_134_134 << (MR_Integer) 6)))))))))))))));
#line 458 "get_dependencies.m"
                                          }
#line 456 "get_dependencies.m"
                                        }
#line 459 "get_dependencies.m"
                                        break;
#line 459 "get_dependencies.m"
                                    }
#line 453 "get_dependencies.m"
                                  }
#line 447 "get_dependencies.m"
                              }
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 15:
#line 481 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 16:
#line 483 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 17:
#line 484 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 18:
#line 485 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 19:
#line 486 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 20:
#line 487 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 21:
#line 488 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 22:
#line 489 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 23:
#line 490 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 24:
#line 491 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 25:
#line 492 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 26:
#line 493 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 27:
#line 494 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 28:
#line 482 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                            case (MR_Integer) 29:
#line 495 "get_dependencies.m"
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 463 "get_dependencies.m"
                              break;
#line 463 "get_dependencies.m"
                          }
#line 463 "get_dependencies.m"
                          break;
#line 463 "get_dependencies.m"
                      }
#line 444 "get_dependencies.m"
                    }
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 5:
#line 499 "get_dependencies.m"
                    {
#line 499 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemPromise_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 499 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 1)));
#line 500 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___PromiseType_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 0)));
#line 500 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___VarSet_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 2)));
#line 500 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___UnivQuantVars_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 3)));
#line 500 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 4)));
#line 500 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_55, (MR_Integer) 5)));

#line 502 "get_dependencies.m"
                      {
#line 502 "get_dependencies.m"
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_57, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108);
                      }
#line 499 "get_dependencies.m"
                    }
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 6:
#line 547 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 7:
#line 504 "get_dependencies.m"
                    {
#line 504 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemInstance_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
#line 504 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__InstanceBody_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 4)));
#line 505 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___DerivingClass_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 0)));
#line 505 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___ClassName_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 1)));
#line 505 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Types_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 2)));
#line 505 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___OriginalTypes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 3)));
#line 505 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___ModuleContainingInstance_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 6)));
#line 505 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___Context_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 7)));
#line 505 "get_dependencies.m"
                      MR_Integer parse_tree__get_dependencies___SeqNum_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 8)));
#line 505 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies___VarSet_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_60, (MR_Integer) 5)));

#line 510 "get_dependencies.m"
                      if ((parse_tree__get_dependencies__InstanceBody_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 510 "get_dependencies.m"
                      else
#line 511 "get_dependencies.m"
                        {
#line 511 "get_dependencies.m"
                          MR_Word parse_tree__get_dependencies__InstanceMethods_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__InstanceBody_65, (MR_Integer) 0)));
#line 512 "get_dependencies.m"
                          MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_108_108;

#line 512 "get_dependencies.m"
                          {
#line 512 "get_dependencies.m"
                            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[0], parse_tree__get_dependencies__InstanceMethods_67, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_108_108);
                          }
#line 512 "get_dependencies.m"
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_108_108);
#line 511 "get_dependencies.m"
                        }
#line 504 "get_dependencies.m"
                    }
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 8:
#line 548 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 9:
#line 549 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 10:
#line 516 "get_dependencies.m"
                    {
#line 516 "get_dependencies.m"
                      MR_Word parse_tree__get_dependencies__ItemMutableInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));

#line 517 "get_dependencies.m"
                      {
#line 517 "get_dependencies.m"
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(parse_tree__get_dependencies__ItemMutableInfo_68, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108);
                      }
#line 516 "get_dependencies.m"
                    }
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                  case (MR_Integer) 11:
#line 550 "get_dependencies.m"
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
#line 443 "get_dependencies.m"
                    break;
#line 443 "get_dependencies.m"
                }
#line 443 "get_dependencies.m"
                break;
#line 443 "get_dependencies.m"
            }
#line 553 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 553 "get_dependencies.m"
            {
#line 553 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
#line 553 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;

#line 553 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
#line 553 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 553 "get_dependencies.m"
            }
#line 553 "get_dependencies.m"
            continue;
#line 438 "get_dependencies.m"
          }
#line 437 "get_dependencies.m"
      }
#line 437 "get_dependencies.m"
      break;
#line 437 "get_dependencies.m"
    }
#line 434 "get_dependencies.m"
}

#line 259 "get_dependencies.m"
static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
#line 259 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg)
#line 259 "get_dependencies.m"
{
#line 259 "get_dependencies.m"
  {
#line 259 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 259 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;

#line 259 "get_dependencies.m"
    {
#line 259 "get_dependencies.m"
      return parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__259__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 4))));
    }
#line 259 "get_dependencies.m"
    return parse_tree__get_dependencies__succeeded;
#line 259 "get_dependencies.m"
  }
#line 259 "get_dependencies.m"
}

#line 233 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
#line 233 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 233 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
#line 233 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
#line 233 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24)
#line 233 "get_dependencies.m"
{
#line 237 "get_dependencies.m"
  {
#line 237 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_86_86;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedTabling_9;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedSTM_11;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedException_12;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedStringFormat_13;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedStreamFormat_14;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ItemsNeedIO_15;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Deep_16;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Target_17;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__HighLevelCode_18;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__Parallel_19;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__UseRegions_20;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__SSDBTraceLevel_21;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__DisableSSDB_22;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_26_26;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_28_28;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_29_29;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_48_48;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_54_54;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_56_56;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_60_60;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_62_62;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_71_71;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_75_75;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
#line 237 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81;

#line 238 "get_dependencies.m"
    {
#line 238 "get_dependencies.m"
      parse_tree__get_dependencies__V_26_26 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 238 "get_dependencies.m"
    {
#line 238 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "get_dependencies.m"
      MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25, 0) = ((MR_Box) (parse_tree__get_dependencies__V_26_26));
#line 238 "get_dependencies.m"
      MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "get_dependencies.m"
    }
#line 239 "get_dependencies.m"
    {
#line 239 "get_dependencies.m"
      parse_tree__get_dependencies__V_29_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 239 "get_dependencies.m"
    {
#line 239 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "get_dependencies.m"
      MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_28_28, 0) = ((MR_Box) (parse_tree__get_dependencies__V_29_29));
#line 239 "get_dependencies.m"
      MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "get_dependencies.m"
    }
#line 240 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedTabling_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 240 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 240 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedSTM_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 240 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedException_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 240 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedStringFormat_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 240 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedStreamFormat_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 240 "get_dependencies.m"
    parse_tree__get_dependencies__ItemsNeedIO_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 257 "get_dependencies.m"
#line 257 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedTabling_9) {
#line 257 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 257 "get_dependencies.m"
      case (MR_Integer) 1:
#line 249 "get_dependencies.m"
        {
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_44_44;
#line 249 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_45_45;

#line 250 "get_dependencies.m"
          {
#line 250 "get_dependencies.m"
            parse_tree__get_dependencies__V_45_45 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
          }
#line 250 "get_dependencies.m"
          {
#line 250 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_44_44, 0) = ((MR_Box) (parse_tree__get_dependencies__V_45_45));
#line 250 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_44_44, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_28_28));
#line 250 "get_dependencies.m"
          }
#line 254 "get_dependencies.m"
#line 254 "get_dependencies.m"
          switch (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10) {
#line 254 "get_dependencies.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 254 "get_dependencies.m"
            case (MR_Integer) 1:
#line 252 "get_dependencies.m"
              {
#line 252 "get_dependencies.m"
                MR_Word parse_tree__get_dependencies__V_47_47;

#line 253 "get_dependencies.m"
                {
#line 253 "get_dependencies.m"
                  parse_tree__get_dependencies__V_47_47 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
                }
#line 253 "get_dependencies.m"
                {
#line 253 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "get_dependencies.m"
                  MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46, 0) = ((MR_Box) (parse_tree__get_dependencies__V_47_47));
#line 253 "get_dependencies.m"
                  MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_44_44));
#line 253 "get_dependencies.m"
                }
#line 252 "get_dependencies.m"
              }
#line 254 "get_dependencies.m"
              break;
#line 254 "get_dependencies.m"
            case (MR_Integer) 0:
#line 255 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_44_44;
#line 254 "get_dependencies.m"
              break;
#line 254 "get_dependencies.m"
          }
#line 249 "get_dependencies.m"
        }
#line 257 "get_dependencies.m"
        break;
#line 257 "get_dependencies.m"
      case (MR_Integer) 0:
#line 258 "get_dependencies.m"
        {
#line 258 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_31_31;

#line 259 "get_dependencies.m"
          {
#line 259 "get_dependencies.m"
            parse_tree__get_dependencies__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 259 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_31_31, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[0]));
#line 259 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_31_31, 1) = ((MR_Box) (parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1));
#line 259 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 259 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_31_31, 3) = ((MR_Box) (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10));
#line 259 "get_dependencies.m"
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 259 "get_dependencies.m"
          }
#line 259 "get_dependencies.m"
          {
#line 259 "get_dependencies.m"
            mercury__require__expect_4_p_0(parse_tree__get_dependencies__V_31_31, (MR_String) "parse_tree.get_dependencies", (MR_String) "predicate \140parse_tree.get_dependencies.compute_implicit_import_needs\'/4", (MR_String) "tabling statistics without tabling");
          }
#line 264 "get_dependencies.m"
          {
#line 264 "get_dependencies.m"
            parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 221, (MR_Integer) 1);
          }
#line 266 "get_dependencies.m"
          if (!(parse_tree__get_dependencies__succeeded))
#line 266 "get_dependencies.m"
            {
#line 267 "get_dependencies.m"
              {
#line 267 "get_dependencies.m"
                parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 222, (MR_Integer) 1);
              }
#line 266 "get_dependencies.m"
              if (!(parse_tree__get_dependencies__succeeded))
#line 270 "get_dependencies.m"
                {
#line 270 "get_dependencies.m"
                  {
#line 270 "get_dependencies.m"
                    parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 123, (MR_Integer) 1);
                  }
#line 270 "get_dependencies.m"
                }
#line 266 "get_dependencies.m"
            }
#line 274 "get_dependencies.m"
          if (parse_tree__get_dependencies__succeeded)
#line 273 "get_dependencies.m"
            {
#line 273 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__V_43_43;

#line 273 "get_dependencies.m"
              {
#line 273 "get_dependencies.m"
                parse_tree__get_dependencies__V_43_43 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
              }
#line 273 "get_dependencies.m"
              {
#line 273 "get_dependencies.m"
                parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46, 0) = ((MR_Box) (parse_tree__get_dependencies__V_43_43));
#line 273 "get_dependencies.m"
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_28_28));
#line 273 "get_dependencies.m"
              }
#line 273 "get_dependencies.m"
            }
#line 274 "get_dependencies.m"
          else
#line 274 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_28_28;
#line 258 "get_dependencies.m"
        }
#line 257 "get_dependencies.m"
        break;
#line 257 "get_dependencies.m"
    }
#line 282 "get_dependencies.m"
#line 282 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedSTM_11) {
#line 282 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 282 "get_dependencies.m"
      case (MR_Integer) 1:
#line 279 "get_dependencies.m"
        {
#line 279 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_49_49;
#line 279 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_50_50;
#line 279 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_51_51;
#line 279 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_52_52;
#line 279 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_53_53;

#line 280 "get_dependencies.m"
          {
#line 280 "get_dependencies.m"
            parse_tree__get_dependencies__V_49_49 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          }
#line 280 "get_dependencies.m"
          {
#line 280 "get_dependencies.m"
            parse_tree__get_dependencies__V_51_51 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 281 "get_dependencies.m"
          {
#line 281 "get_dependencies.m"
            parse_tree__get_dependencies__V_53_53 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
          }
#line 281 "get_dependencies.m"
          {
#line 281 "get_dependencies.m"
            parse_tree__get_dependencies__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_52_52, 0) = ((MR_Box) (parse_tree__get_dependencies__V_53_53));
#line 281 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_52_52, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46));
#line 281 "get_dependencies.m"
          }
#line 280 "get_dependencies.m"
          {
#line 280 "get_dependencies.m"
            parse_tree__get_dependencies__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_50_50, 0) = ((MR_Box) (parse_tree__get_dependencies__V_51_51));
#line 280 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_50_50, 1) = ((MR_Box) (parse_tree__get_dependencies__V_52_52));
#line 280 "get_dependencies.m"
          }
#line 280 "get_dependencies.m"
          {
#line 280 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_48_48, 0) = ((MR_Box) (parse_tree__get_dependencies__V_49_49));
#line 280 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_48_48, 1) = ((MR_Box) (parse_tree__get_dependencies__V_50_50));
#line 280 "get_dependencies.m"
          }
#line 279 "get_dependencies.m"
        }
#line 282 "get_dependencies.m"
        break;
#line 282 "get_dependencies.m"
      case (MR_Integer) 0:
#line 283 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_48_48 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_46_46;
#line 282 "get_dependencies.m"
        break;
#line 282 "get_dependencies.m"
    }
#line 288 "get_dependencies.m"
#line 288 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedException_12) {
#line 288 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 288 "get_dependencies.m"
      case (MR_Integer) 1:
#line 286 "get_dependencies.m"
        {
#line 286 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_55_55;

#line 287 "get_dependencies.m"
          {
#line 287 "get_dependencies.m"
            parse_tree__get_dependencies__V_55_55 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 287 "get_dependencies.m"
          {
#line 287 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_54_54, 0) = ((MR_Box) (parse_tree__get_dependencies__V_55_55));
#line 287 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_54_54, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_48_48));
#line 287 "get_dependencies.m"
          }
#line 286 "get_dependencies.m"
        }
#line 288 "get_dependencies.m"
        break;
#line 288 "get_dependencies.m"
      case (MR_Integer) 0:
#line 289 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_54_54 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_48_48;
#line 288 "get_dependencies.m"
        break;
#line 288 "get_dependencies.m"
    }
#line 295 "get_dependencies.m"
#line 295 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedStringFormat_13) {
#line 295 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 295 "get_dependencies.m"
      case (MR_Integer) 1:
#line 292 "get_dependencies.m"
        {
#line 292 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_57_57;
#line 292 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_58_58;
#line 292 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_59_59;

#line 293 "get_dependencies.m"
          {
#line 293 "get_dependencies.m"
            parse_tree__get_dependencies__V_57_57 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          }
#line 294 "get_dependencies.m"
          {
#line 294 "get_dependencies.m"
            parse_tree__get_dependencies__V_59_59 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
          }
#line 294 "get_dependencies.m"
          {
#line 294 "get_dependencies.m"
            parse_tree__get_dependencies__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_58_58, 0) = ((MR_Box) (parse_tree__get_dependencies__V_59_59));
#line 294 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_58_58, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_54_54));
#line 294 "get_dependencies.m"
          }
#line 293 "get_dependencies.m"
          {
#line 293 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_56_56, 0) = ((MR_Box) (parse_tree__get_dependencies__V_57_57));
#line 293 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_56_56, 1) = ((MR_Box) (parse_tree__get_dependencies__V_58_58));
#line 293 "get_dependencies.m"
          }
#line 292 "get_dependencies.m"
        }
#line 295 "get_dependencies.m"
        break;
#line 295 "get_dependencies.m"
      case (MR_Integer) 0:
#line 296 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_56_56 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_54_54;
#line 295 "get_dependencies.m"
        break;
#line 295 "get_dependencies.m"
    }
#line 301 "get_dependencies.m"
#line 301 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedStreamFormat_14) {
#line 301 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 301 "get_dependencies.m"
      case (MR_Integer) 1:
#line 299 "get_dependencies.m"
        {
#line 299 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_61_61;

#line 300 "get_dependencies.m"
          {
#line 300 "get_dependencies.m"
            parse_tree__get_dependencies__V_61_61 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
          }
#line 300 "get_dependencies.m"
          {
#line 300 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_60_60, 0) = ((MR_Box) (parse_tree__get_dependencies__V_61_61));
#line 300 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_60_60, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_56_56));
#line 300 "get_dependencies.m"
          }
#line 299 "get_dependencies.m"
        }
#line 301 "get_dependencies.m"
        break;
#line 301 "get_dependencies.m"
      case (MR_Integer) 0:
#line 302 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_60_60 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_56_56;
#line 301 "get_dependencies.m"
        break;
#line 301 "get_dependencies.m"
    }
#line 307 "get_dependencies.m"
#line 307 "get_dependencies.m"
    switch (parse_tree__get_dependencies__ItemsNeedIO_15) {
#line 307 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 307 "get_dependencies.m"
      case (MR_Integer) 1:
#line 305 "get_dependencies.m"
        {
#line 305 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_63_63;

#line 306 "get_dependencies.m"
          {
#line 306 "get_dependencies.m"
            parse_tree__get_dependencies__V_63_63 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          }
#line 306 "get_dependencies.m"
          {
#line 306 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_62_62, 0) = ((MR_Box) (parse_tree__get_dependencies__V_63_63));
#line 306 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_62_62, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_60_60));
#line 306 "get_dependencies.m"
          }
#line 305 "get_dependencies.m"
        }
#line 307 "get_dependencies.m"
        break;
#line 307 "get_dependencies.m"
      case (MR_Integer) 0:
#line 308 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_62_62 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_60_60;
#line 307 "get_dependencies.m"
        break;
#line 307 "get_dependencies.m"
    }
#line 310 "get_dependencies.m"
    {
#line 310 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 196, &parse_tree__get_dependencies__Deep_16);
    }
#line 314 "get_dependencies.m"
#line 314 "get_dependencies.m"
    switch (parse_tree__get_dependencies__Deep_16) {
#line 314 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 314 "get_dependencies.m"
      case (MR_Integer) 0:
#line 315 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_62_62;
#line 314 "get_dependencies.m"
        break;
#line 314 "get_dependencies.m"
      case (MR_Integer) 1:
#line 312 "get_dependencies.m"
        {
#line 312 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_66_66;

#line 313 "get_dependencies.m"
          {
#line 313 "get_dependencies.m"
            parse_tree__get_dependencies__V_66_66 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
          }
#line 313 "get_dependencies.m"
          {
#line 313 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65, 0) = ((MR_Box) (parse_tree__get_dependencies__V_66_66));
#line 313 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_62_62));
#line 313 "get_dependencies.m"
          }
#line 312 "get_dependencies.m"
        }
#line 314 "get_dependencies.m"
        break;
#line 314 "get_dependencies.m"
    }
#line 319 "get_dependencies.m"
    {
#line 319 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 213, (MR_Integer) 1);
    }
#line 321 "get_dependencies.m"
    if (!(parse_tree__get_dependencies__succeeded))
#line 322 "get_dependencies.m"
      {
#line 322 "get_dependencies.m"
        {
#line 322 "get_dependencies.m"
          parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 214, (MR_Integer) 1);
        }
#line 322 "get_dependencies.m"
      }
#line 327 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 326 "get_dependencies.m"
      {
#line 326 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_72_72;

#line 326 "get_dependencies.m"
        {
#line 326 "get_dependencies.m"
          parse_tree__get_dependencies__V_72_72 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 326 "get_dependencies.m"
        {
#line 326 "get_dependencies.m"
          parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "get_dependencies.m"
          MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_71_71, 0) = ((MR_Box) (parse_tree__get_dependencies__V_72_72));
#line 326 "get_dependencies.m"
          MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_71_71, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65));
#line 326 "get_dependencies.m"
        }
#line 326 "get_dependencies.m"
      }
#line 327 "get_dependencies.m"
    else
#line 327 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_71_71 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
#line 330 "get_dependencies.m"
    {
#line 330 "get_dependencies.m"
      libs__globals__get_target_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__Target_17);
    }
#line 331 "get_dependencies.m"
    {
#line 331 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 255, &parse_tree__get_dependencies__HighLevelCode_18);
    }
#line 332 "get_dependencies.m"
    {
#line 332 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 217, &parse_tree__get_dependencies__Parallel_19);
    }
#line 334 "get_dependencies.m"
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Target_17 == (MR_Integer) 0);
#line 334 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 334 "get_dependencies.m"
      {
#line 335 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HighLevelCode_18 == (MR_Integer) 0);
#line 334 "get_dependencies.m"
        if (parse_tree__get_dependencies__succeeded)
#line 336 "get_dependencies.m"
          parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Parallel_19 == (MR_Integer) 1);
#line 334 "get_dependencies.m"
      }
#line 339 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 338 "get_dependencies.m"
      {
#line 338 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_76_76;

#line 338 "get_dependencies.m"
        {
#line 338 "get_dependencies.m"
          parse_tree__get_dependencies__V_76_76 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
        }
#line 338 "get_dependencies.m"
        {
#line 338 "get_dependencies.m"
          parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "get_dependencies.m"
          MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_75_75, 0) = ((MR_Box) (parse_tree__get_dependencies__V_76_76));
#line 338 "get_dependencies.m"
          MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_75_75, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_71_71));
#line 338 "get_dependencies.m"
        }
#line 338 "get_dependencies.m"
      }
#line 339 "get_dependencies.m"
    else
#line 339 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_75_75 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_71_71;
#line 342 "get_dependencies.m"
    {
#line 342 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 230, &parse_tree__get_dependencies__UseRegions_20);
    }
#line 346 "get_dependencies.m"
#line 346 "get_dependencies.m"
    switch (parse_tree__get_dependencies__UseRegions_20) {
#line 346 "get_dependencies.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 346 "get_dependencies.m"
      case (MR_Integer) 0:
#line 347 "get_dependencies.m"
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_75_75;
#line 346 "get_dependencies.m"
        break;
#line 346 "get_dependencies.m"
      case (MR_Integer) 1:
#line 344 "get_dependencies.m"
        {
#line 344 "get_dependencies.m"
          MR_Word parse_tree__get_dependencies__V_79_79;

#line 345 "get_dependencies.m"
          {
#line 345 "get_dependencies.m"
            parse_tree__get_dependencies__V_79_79 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
#line 345 "get_dependencies.m"
          {
#line 345 "get_dependencies.m"
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78, 0) = ((MR_Box) (parse_tree__get_dependencies__V_79_79));
#line 345 "get_dependencies.m"
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_75_75));
#line 345 "get_dependencies.m"
          }
#line 344 "get_dependencies.m"
        }
#line 346 "get_dependencies.m"
        break;
#line 346 "get_dependencies.m"
    }
#line 349 "get_dependencies.m"
    {
#line 349 "get_dependencies.m"
      libs__globals__get_ssdb_trace_level_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__SSDBTraceLevel_21);
    }
#line 350 "get_dependencies.m"
    {
#line 350 "get_dependencies.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 136, &parse_tree__get_dependencies__DisableSSDB_22);
    }
#line 353 "get_dependencies.m"
#line 353 "get_dependencies.m"
    switch (parse_tree__get_dependencies__SSDBTraceLevel_21) {
#line 353 "get_dependencies.m"
      default:
#line 353 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_FALSE;
#line 353 "get_dependencies.m"
        break;
#line 353 "get_dependencies.m"
      case (MR_Integer) 2:
#line 353 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 353 "get_dependencies.m"
        break;
#line 353 "get_dependencies.m"
      case (MR_Integer) 1:
#line 352 "get_dependencies.m"
        parse_tree__get_dependencies__succeeded = MR_TRUE;
#line 353 "get_dependencies.m"
        break;
#line 353 "get_dependencies.m"
    }
#line 354 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 355 "get_dependencies.m"
      parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__DisableSSDB_22 == (MR_Integer) 0);
#line 358 "get_dependencies.m"
    if (parse_tree__get_dependencies__succeeded)
#line 357 "get_dependencies.m"
      {
#line 357 "get_dependencies.m"
        MR_Word parse_tree__get_dependencies__V_82_82;

#line 357 "get_dependencies.m"
        {
#line 357 "get_dependencies.m"
          parse_tree__get_dependencies__V_82_82 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        }
#line 357 "get_dependencies.m"
        {
#line 357 "get_dependencies.m"
          parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "get_dependencies.m"
          MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81, 0) = ((MR_Box) (parse_tree__get_dependencies__V_82_82));
#line 357 "get_dependencies.m"
          MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78));
#line 357 "get_dependencies.m"
        }
#line 357 "get_dependencies.m"
      }
#line 358 "get_dependencies.m"
    else
#line 358 "get_dependencies.m"
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
#line 6708 "parse_tree.get_dependencies.c"
    parse_tree__get_dependencies__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 361 "get_dependencies.m"
    {
#line 361 "get_dependencies.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__get_dependencies__TypeCtorInfo_86_86, parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25, parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23);
    }
#line 362 "get_dependencies.m"
    {
#line 362 "get_dependencies.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__get_dependencies__TypeCtorInfo_86_86, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);
#line 362 "get_dependencies.m"
      return;
    }
#line 237 "get_dependencies.m"
  }
#line 233 "get_dependencies.m"
}

#line 179 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_items_acc_5_p_0(
#line 179 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 179 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
#line 179 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
#line 179 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
#line 179 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
#line 179 "get_dependencies.m"
{
#line 183 "get_dependencies.m"
  while (MR_TRUE)
#line 183 "get_dependencies.m"
    {
#line 183 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 183 "get_dependencies.m"
      {
#line 183 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 183 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "get_dependencies.m"
          {
#line 183 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 183 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 183 "get_dependencies.m"
          }
#line 183 "get_dependencies.m"
        else
#line 184 "get_dependencies.m"
          {
#line 184 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 184 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 184 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41;
#line 184 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42;

#line 197 "get_dependencies.m"
#line 197 "get_dependencies.m"
            switch (MR_tag((MR_Word) parse_tree__get_dependencies__Item_12)) {
#line 197 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 197 "get_dependencies.m"
              case (MR_Integer) 0:
#line 186 "get_dependencies.m"
                {
#line 186 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ItemModuleDefn_16 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_12), (MR_Integer) 0);
#line 186 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__ModuleDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemModuleDefn_16, (MR_Integer) 0)));
#line 187 "get_dependencies.m"
                  MR_Word parse_tree__get_dependencies__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemModuleDefn_16, (MR_Integer) 1)));
#line 187 "get_dependencies.m"
                  MR_Integer parse_tree__get_dependencies__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemModuleDefn_16, (MR_Integer) 2)));

#line 191 "get_dependencies.m"
#line 191 "get_dependencies.m"
                  switch (MR_tag((MR_Word) parse_tree__get_dependencies__ModuleDefn_17)) {
#line 191 "get_dependencies.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 191 "get_dependencies.m"
                    case (MR_Integer) 0:
#line 195 "get_dependencies.m"
                      {
#line 195 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 195 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 195 "get_dependencies.m"
                      }
#line 191 "get_dependencies.m"
                      break;
#line 191 "get_dependencies.m"
                    case (MR_Integer) 1:
#line 189 "get_dependencies.m"
                      {
#line 189 "get_dependencies.m"
                        MR_Word parse_tree__get_dependencies__ImportedModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleDefn_17, (MR_Integer) 0)));

#line 190 "get_dependencies.m"
                        {
#line 190 "get_dependencies.m"
                          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__ImportedModuleName_20)), parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42);
                        }
#line 189 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 189 "get_dependencies.m"
                      }
#line 191 "get_dependencies.m"
                      break;
#line 191 "get_dependencies.m"
                    case (MR_Integer) 2:
#line 192 "get_dependencies.m"
                      {
#line 192 "get_dependencies.m"
                        MR_Word parse_tree__get_dependencies__UsedModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__ModuleDefn_17, (MR_Integer) 0)));

#line 193 "get_dependencies.m"
                        {
#line 193 "get_dependencies.m"
                          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__UsedModuleName_21)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41);
                        }
#line 192 "get_dependencies.m"
                        parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 192 "get_dependencies.m"
                      }
#line 191 "get_dependencies.m"
                      break;
#line 191 "get_dependencies.m"
                  }
#line 186 "get_dependencies.m"
                }
#line 197 "get_dependencies.m"
                break;
#line 197 "get_dependencies.m"
              case (MR_Integer) 1:
#line 198 "get_dependencies.m"
                {
#line 198 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 198 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 198 "get_dependencies.m"
                }
#line 197 "get_dependencies.m"
                break;
#line 197 "get_dependencies.m"
              case (MR_Integer) 2:
#line 199 "get_dependencies.m"
                {
#line 199 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 199 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 199 "get_dependencies.m"
                }
#line 197 "get_dependencies.m"
                break;
#line 197 "get_dependencies.m"
              case (MR_Integer) 3:
#line 197 "get_dependencies.m"
#line 197 "get_dependencies.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_12, (MR_Integer) 0)))) {
#line 197 "get_dependencies.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 197 "get_dependencies.m"
                  case (MR_Integer) 0:
#line 200 "get_dependencies.m"
                    {
#line 200 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 200 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 200 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 1:
#line 201 "get_dependencies.m"
                    {
#line 201 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 201 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 201 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 2:
#line 202 "get_dependencies.m"
                    {
#line 202 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 202 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 202 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 3:
#line 203 "get_dependencies.m"
                    {
#line 203 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 203 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 203 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 4:
#line 204 "get_dependencies.m"
                    {
#line 204 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 204 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 204 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 5:
#line 205 "get_dependencies.m"
                    {
#line 205 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 205 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 205 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 6:
#line 206 "get_dependencies.m"
                    {
#line 206 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 206 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 206 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 7:
#line 207 "get_dependencies.m"
                    {
#line 207 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 207 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 207 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 8:
#line 208 "get_dependencies.m"
                    {
#line 208 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 208 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 208 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 9:
#line 209 "get_dependencies.m"
                    {
#line 209 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 209 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 209 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 10:
#line 210 "get_dependencies.m"
                    {
#line 210 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 210 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 210 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                  case (MR_Integer) 11:
#line 211 "get_dependencies.m"
                    {
#line 211 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
#line 211 "get_dependencies.m"
                      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
#line 211 "get_dependencies.m"
                    }
#line 197 "get_dependencies.m"
                    break;
#line 197 "get_dependencies.m"
                }
#line 197 "get_dependencies.m"
                break;
#line 197 "get_dependencies.m"
            }
#line 214 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 214 "get_dependencies.m"
            {
#line 214 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_13;
#line 214 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_42_42;
#line 214 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_41_41;

#line 214 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
#line 214 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
#line 214 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 214 "get_dependencies.m"
            }
#line 214 "get_dependencies.m"
            continue;
#line 184 "get_dependencies.m"
          }
#line 183 "get_dependencies.m"
      }
#line 183 "get_dependencies.m"
      break;
#line 183 "get_dependencies.m"
    }
#line 179 "get_dependencies.m"
}

#line 148 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
#line 148 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
#line 148 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9)
#line 148 "get_dependencies.m"
{
#line 155 "get_dependencies.m"
  while (MR_TRUE)
#line 155 "get_dependencies.m"
    {
#line 155 "get_dependencies.m"
      /* tailcall optimized into a loop */
#line 155 "get_dependencies.m"
      {
#line 155 "get_dependencies.m"
        MR_bool parse_tree__get_dependencies__succeeded;

#line 155 "get_dependencies.m"
        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "get_dependencies.m"
          {
#line 156 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
#line 156 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
#line 156 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
#line 156 "get_dependencies.m"
            *parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
#line 155 "get_dependencies.m"
          }
#line 155 "get_dependencies.m"
        else
#line 159 "get_dependencies.m"
          {
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__RawItemBlock_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__RawItemBlocks_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Section_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 0)));
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__Items_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 2)));
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_39_39;
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_40_40;
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_41_41;
#line 159 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_42_42;
#line 160 "get_dependencies.m"
            MR_Word parse_tree__get_dependencies___Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 1)));

#line 164 "get_dependencies.m"
#line 164 "get_dependencies.m"
            switch (parse_tree__get_dependencies__Section_28) {
#line 164 "get_dependencies.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 164 "get_dependencies.m"
              case (MR_Integer) 1:
#line 165 "get_dependencies.m"
                {
#line 166 "get_dependencies.m"
                  {
#line 166 "get_dependencies.m"
                    parse_tree__get_dependencies__get_dependencies_in_items_acc_5_p_0(parse_tree__get_dependencies__Items_30, parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6, &parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_39_39, parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8, &parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_40_40);
                  }
#line 165 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
#line 165 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
#line 165 "get_dependencies.m"
                }
#line 164 "get_dependencies.m"
                break;
#line 164 "get_dependencies.m"
              case (MR_Integer) 0:
#line 162 "get_dependencies.m"
                {
#line 163 "get_dependencies.m"
                  {
#line 163 "get_dependencies.m"
                    parse_tree__get_dependencies__get_dependencies_in_items_acc_5_p_0(parse_tree__get_dependencies__Items_30, parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_41_41, parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_42_42);
                  }
#line 162 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_39_39 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
#line 162 "get_dependencies.m"
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_40_40 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
#line 162 "get_dependencies.m"
                }
#line 164 "get_dependencies.m"
                break;
#line 164 "get_dependencies.m"
            }
#line 168 "get_dependencies.m"
            /* direct tailcall eliminated */
#line 168 "get_dependencies.m"
            {
#line 168 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__RawItemBlocks_23;
#line 168 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_41_41;
#line 168 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_42_42;
#line 168 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_39_39;
#line 168 "get_dependencies.m"
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_40_40;

#line 168 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8;
#line 168 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6;
#line 168 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4;
#line 168 "get_dependencies.m"
              parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2;
#line 168 "get_dependencies.m"
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
#line 168 "get_dependencies.m"
            }
#line 168 "get_dependencies.m"
            continue;
#line 159 "get_dependencies.m"
          }
#line 155 "get_dependencies.m"
      }
#line 155 "get_dependencies.m"
      break;
#line 155 "get_dependencies.m"
    }
#line 148 "get_dependencies.m"
}

#line 857 "get_dependencies.m"
static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
#line 857 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__closure_arg,
#line 857 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
#line 857 "get_dependencies.m"
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
#line 857 "get_dependencies.m"
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
#line 857 "get_dependencies.m"
{
#line 857 "get_dependencies.m"
  {
#line 857 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
#line 857 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_10;

#line 857 "get_dependencies.m"
    {
#line 857 "get_dependencies.m"
      parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_10);
    }
#line 857 "get_dependencies.m"
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_10));
#line 857 "get_dependencies.m"
  }
#line 857 "get_dependencies.m"
}

#line 94 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(
#line 94 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
#line 94 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
#line 94 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IncludeFiles_4)
#line 94 "get_dependencies.m"
{
#line 856 "get_dependencies.m"
  {
#line 856 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 856 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeInfo_13_13;
#line 856 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_5_5;
#line 856 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_6_6;
#line 857 "get_dependencies.m"
    MR_Box parse_tree__get_dependencies__conv1_IncludeFiles_4;

#line 857 "get_dependencies.m"
    {
#line 857 "get_dependencies.m"
      parse_tree__get_dependencies__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0]));
#line 857 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 1) = ((MR_Box) (parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1));
#line 857 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "get_dependencies.m"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 3) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
#line 857 "get_dependencies.m"
    }
#line 858 "get_dependencies.m"
    {
#line 858 "get_dependencies.m"
      parse_tree__get_dependencies__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
#line 7293 "parse_tree.get_dependencies.c"
    {
#line 7295 "parse_tree.get_dependencies.c"
      parse_tree__get_dependencies__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7297 "parse_tree.get_dependencies.c"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
#line 7299 "parse_tree.get_dependencies.c"
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
#line 7301 "parse_tree.get_dependencies.c"
    }
#line 857 "get_dependencies.m"
    {
#line 857 "get_dependencies.m"
      mercury__list__foldl_4_p_0(parse_tree__get_dependencies__TypeInfo_13_13, (MR_Word) &parse_tree__get_dependencies_scalar_common_1[0], (MR_Word) parse_tree__get_dependencies__V_5_5, (MR_Word) parse_tree__get_dependencies__ItemBlocks_3, ((MR_Box) (parse_tree__get_dependencies__V_6_6)), &parse_tree__get_dependencies__conv1_IncludeFiles_4);
    }
#line 857 "get_dependencies.m"
    *parse_tree__get_dependencies__IncludeFiles_4 = ((MR_Word) parse_tree__get_dependencies__conv1_IncludeFiles_4);
#line 856 "get_dependencies.m"
  }
#line 94 "get_dependencies.m"
}

#line 88 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(
#line 88 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
#line 88 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
#line 88 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__FactTableFileNames_4)
#line 88 "get_dependencies.m"
{
#line 820 "get_dependencies.m"
  {
#line 820 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 820 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__RevFactTableFileNames_5;

#line 821 "get_dependencies.m"
    {
#line 821 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__get_dependencies__RevFactTableFileNames_5);
    }
#line 823 "get_dependencies.m"
    {
#line 823 "get_dependencies.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__get_dependencies__RevFactTableFileNames_5, parse_tree__get_dependencies__FactTableFileNames_4);
#line 823 "get_dependencies.m"
      return;
    }
#line 820 "get_dependencies.m"
  }
#line 88 "get_dependencies.m"
}

#line 82 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(
#line 82 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 82 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Items_6,
#line 82 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
#line 82 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
#line 82 "get_dependencies.m"
{
#line 218 "get_dependencies.m"
  {
#line 218 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 218 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

#line 220 "get_dependencies.m"
    {
#line 220 "get_dependencies.m"
      parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
#line 222 "get_dependencies.m"
    {
#line 222 "get_dependencies.m"
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
#line 222 "get_dependencies.m"
      return;
    }
#line 218 "get_dependencies.m"
  }
#line 82 "get_dependencies.m"
}

#line 79 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(
#line 79 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_11,
#line 79 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Globals_5,
#line 79 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_6,
#line 79 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
#line 79 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
#line 79 "get_dependencies.m"
{
#line 226 "get_dependencies.m"
  {
#line 226 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 226 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

#line 228 "get_dependencies.m"
    {
#line 228 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
#line 230 "get_dependencies.m"
    {
#line 230 "get_dependencies.m"
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
#line 230 "get_dependencies.m"
      return;
    }
#line 226 "get_dependencies.m"
  }
#line 79 "get_dependencies.m"
}

#line 65 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(
#line 65 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__RawItemBlocks_6,
#line 65 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IntImportDeps_7,
#line 65 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__IntUseDeps_8,
#line 65 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImpImportDeps_9,
#line 65 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImpUseDeps_10)
#line 65 "get_dependencies.m"
{
#line 139 "get_dependencies.m"
  {
#line 139 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__IntImportDepsSet_11;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__IntUseDepsSet_12;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImpImportDepsSet_13;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImpUseDepsSet_14;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_15_15;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_16_16;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_17_17;
#line 139 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_18_18;

#line 141 "get_dependencies.m"
    {
#line 141 "get_dependencies.m"
      parse_tree__get_dependencies__V_15_15 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19);
    }
#line 141 "get_dependencies.m"
    {
#line 141 "get_dependencies.m"
      parse_tree__get_dependencies__V_16_16 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19);
    }
#line 142 "get_dependencies.m"
    {
#line 142 "get_dependencies.m"
      parse_tree__get_dependencies__V_17_17 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19);
    }
#line 142 "get_dependencies.m"
    {
#line 142 "get_dependencies.m"
      parse_tree__get_dependencies__V_18_18 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19);
    }
#line 140 "get_dependencies.m"
    {
#line 140 "get_dependencies.m"
      parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(parse_tree__get_dependencies__RawItemBlocks_6, parse_tree__get_dependencies__V_15_15, &parse_tree__get_dependencies__IntImportDepsSet_11, parse_tree__get_dependencies__V_16_16, &parse_tree__get_dependencies__IntUseDepsSet_12, parse_tree__get_dependencies__V_17_17, &parse_tree__get_dependencies__ImpImportDepsSet_13, parse_tree__get_dependencies__V_18_18, &parse_tree__get_dependencies__ImpUseDepsSet_14);
    }
#line 143 "get_dependencies.m"
    {
#line 143 "get_dependencies.m"
      *parse_tree__get_dependencies__IntImportDeps_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19, parse_tree__get_dependencies__IntImportDepsSet_11);
    }
#line 144 "get_dependencies.m"
    {
#line 144 "get_dependencies.m"
      *parse_tree__get_dependencies__ImpImportDeps_9 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19, parse_tree__get_dependencies__ImpImportDepsSet_13);
    }
#line 145 "get_dependencies.m"
    {
#line 145 "get_dependencies.m"
      *parse_tree__get_dependencies__IntUseDeps_8 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19, parse_tree__get_dependencies__IntUseDepsSet_12);
    }
#line 146 "get_dependencies.m"
    {
#line 146 "get_dependencies.m"
      *parse_tree__get_dependencies__ImpUseDeps_10 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_19_19, parse_tree__get_dependencies__ImpUseDepsSet_14);
    }
#line 139 "get_dependencies.m"
  }
#line 65 "get_dependencies.m"
}

#line 45 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(
#line 45 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_11,
#line 45 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__ItemBlocks_4,
#line 45 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
#line 45 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
#line 45 "get_dependencies.m"
{
#line 117 "get_dependencies.m"
  {
#line 117 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 117 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_12_12 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 117 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImportDepsSet_7;
#line 117 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__UseDepsSet_8;
#line 117 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_9_9;
#line 117 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_10_10;

#line 119 "get_dependencies.m"
    {
#line 119 "get_dependencies.m"
      parse_tree__get_dependencies__V_9_9 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_12_12);
    }
#line 119 "get_dependencies.m"
    {
#line 119 "get_dependencies.m"
      parse_tree__get_dependencies__V_10_10 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_12_12);
    }
#line 118 "get_dependencies.m"
    {
#line 118 "get_dependencies.m"
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(parse_tree__get_dependencies__ItemBlocks_4, parse_tree__get_dependencies__V_9_9, &parse_tree__get_dependencies__ImportDepsSet_7, parse_tree__get_dependencies__V_10_10, &parse_tree__get_dependencies__UseDepsSet_8);
    }
#line 120 "get_dependencies.m"
    {
#line 120 "get_dependencies.m"
      *parse_tree__get_dependencies__ImportDeps_5 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_12_12, parse_tree__get_dependencies__ImportDepsSet_7);
    }
#line 121 "get_dependencies.m"
    {
#line 121 "get_dependencies.m"
      *parse_tree__get_dependencies__UseDeps_6 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_12_12, parse_tree__get_dependencies__UseDepsSet_8);
    }
#line 117 "get_dependencies.m"
  }
#line 45 "get_dependencies.m"
}

#line 43 "get_dependencies.m"
void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_items_3_p_0(
#line 43 "get_dependencies.m"
  MR_Word parse_tree__get_dependencies__Items_4,
#line 43 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
#line 43 "get_dependencies.m"
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
#line 43 "get_dependencies.m"
{
#line 173 "get_dependencies.m"
  {
#line 173 "get_dependencies.m"
    MR_bool parse_tree__get_dependencies__succeeded;
#line 173 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_11_11 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 173 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__ImportDepsSet_7;
#line 173 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__UseDepSet_8;
#line 173 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_9_9;
#line 173 "get_dependencies.m"
    MR_Word parse_tree__get_dependencies__V_10_10;

#line 175 "get_dependencies.m"
    {
#line 175 "get_dependencies.m"
      parse_tree__get_dependencies__V_9_9 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_11_11);
    }
#line 175 "get_dependencies.m"
    {
#line 175 "get_dependencies.m"
      parse_tree__get_dependencies__V_10_10 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_11_11);
    }
#line 174 "get_dependencies.m"
    {
#line 174 "get_dependencies.m"
      parse_tree__get_dependencies__get_dependencies_in_items_acc_5_p_0(parse_tree__get_dependencies__Items_4, parse_tree__get_dependencies__V_9_9, &parse_tree__get_dependencies__ImportDepsSet_7, parse_tree__get_dependencies__V_10_10, &parse_tree__get_dependencies__UseDepSet_8);
    }
#line 176 "get_dependencies.m"
    {
#line 176 "get_dependencies.m"
      *parse_tree__get_dependencies__ImportDeps_5 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_11_11, parse_tree__get_dependencies__ImportDepsSet_7);
    }
#line 177 "get_dependencies.m"
    {
#line 177 "get_dependencies.m"
      *parse_tree__get_dependencies__UseDeps_6 = mercury__set__to_sorted_list_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_11_11, parse_tree__get_dependencies__UseDepSet_8);
    }
#line 173 "get_dependencies.m"
  }
#line 43 "get_dependencies.m"
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
